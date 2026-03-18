/*
 * XREFs of MiGetPageForHeader @ 0x1400E1178
 * Callers:
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiInitializePageForHeader @ 0x1400E12C8 (MiInitializePageForHeader.c)
 *     MiGetSystemPage @ 0x1400E1348 (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiGetPageForHeader(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 SystemPage; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v11; // edi
  unsigned int EffectivePagePriorityThread; // eax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !MiObtainFaultCharges(MiSystemPartition, 1uLL, 1, a4) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MI_INITIALIZE_COLOR_BASE((__int64)&CurrentThread->ApcState.Process[1].IdealNode[8], a1, (__int64)v13);
  SystemPage = MiGetSystemPage(v13);
  v8 = SystemPage;
  if ( !SystemPage )
  {
    MiReturnFaultCharges(MiSystemPartition, 1LL, 1LL);
    return -1LL;
  }
  v9 = (SystemPage + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_WORD *)(v8 + 32) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  MiInitializePageForHeader(v8, EffectivePagePriorityThread);
  return v9;
}

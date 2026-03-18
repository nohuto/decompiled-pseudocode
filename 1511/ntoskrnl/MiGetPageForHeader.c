/*
 * XREFs of MiGetPageForHeader @ 0x140011920
 * Callers:
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemPage @ 0x140011A30 (MiGetSystemPage.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiGetPageForHeader(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SystemPage; // rdi
  char EffectivePagePriorityThread; // bl
  unsigned __int8 v7; // al
  char v8; // cl
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)MiObtainFaultCharges(a1, 1LL, 1LL) )
  {
    CurrentThread = KeGetCurrentThread();
    MI_INITIALIZE_COLOR_BASE(&CurrentThread->ApcState.Process[1].IdealNode[12], a2, v10);
    SystemPage = MiGetSystemPage(a1, v10);
    if ( SystemPage )
    {
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
      v7 = MiLockPageInline(SystemPage);
      v8 = *(_BYTE *)(SystemPage + 35);
      *(_QWORD *)(SystemPage + 16) = 0LL;
      *(_QWORD *)(SystemPage + 8) = 0LL;
      *(_BYTE *)(SystemPage + 35) ^= (EffectivePagePriorityThread ^ v8) & 7;
      *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
      *(_WORD *)(SystemPage + 32) = 1;
      _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v7);
      return (SystemPage + 0x58000000000LL) / 48;
    }
    MiReturnFaultCharges(a1, 1LL, 1LL);
  }
  return -1LL;
}

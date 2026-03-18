/*
 * XREFs of KeSetPriorityBoost @ 0x1400D5D90
 * Callers:
 *     FsRtlpDoBoost @ 0x140074438 (FsRtlpDoBoost.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 *     CmpBoostActiveHiveWriter @ 0x1404AF82C (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KeSetPriorityBoost(__int64 a1, int a2)
{
  char v4; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int64 v7; // r14
  unsigned int v8; // edi
  int v9; // edx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v11 = 0LL;
    v4 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) >= a2 )
      goto LABEL_17;
    v7 = *(_QWORD *)(a1 + 72);
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v9 = *(char *)(a1 + 195);
    if ( v9 < a2 )
    {
      v4 = 1;
      *(_BYTE *)(a1 + 564) += 16 * (a2 - v9);
      KiSetPriorityThread(a1, &v11, a2);
      v10 = *(_QWORD *)(a1 + 32);
      if ( v7 > v10 || v10 - v7 < (unsigned int)KiLockQuantumTarget )
        *(_QWORD *)(a1 + 32) = v7 + (unsigned int)KiLockQuantumTarget;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v4 )
      KiProcessDeferredReadyList((__int64)CurrentPrcb, &v11, CurrentIrql);
    else
LABEL_17:
      __writecr8(CurrentIrql);
  }
}

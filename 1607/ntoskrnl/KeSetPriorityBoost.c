/*
 * XREFs of KeSetPriorityBoost @ 0x1400919AC
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     FsRtlpDoBoost @ 0x1400918B4 (FsRtlpDoBoost.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C71EC (FsRtlpWaitForIoAtEof.c)
 *     KeGenericProcessorCallback @ 0x1400CA714 (KeGenericProcessorCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x14047D444 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiSetPriorityBoost @ 0x140091A7C (KiSetPriorityBoost.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  char v6; // bp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // r15
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)&KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v11 = 0LL;
    v6 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) >= a2 )
      goto LABEL_12;
    v9 = *(_QWORD *)(a1 + 72);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(char *)(a1 + 195) < a2 )
    {
      LOBYTE(a3) = a2;
      v6 = 1;
      KiSetPriorityBoost(&v11, a1, a3, v9);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v6 )
    {
      LOBYTE(a3) = CurrentIrql;
      return KiProcessDeferredReadyList(CurrentPrcb, &v11, a3);
    }
    else
    {
LABEL_12:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}

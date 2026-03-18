/*
 * XREFs of KeSetPriorityBoost @ 0x1401020B0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     FsRtlpDoBoost @ 0x1400C93A0 (FsRtlpDoBoost.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x140101EB4 (FsRtlpWaitForIoAtEof.c)
 *     CmpBoostActiveHiveWriter @ 0x1404C5F60 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x140102184 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // esi
  char v6; // bp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // r15
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)&KiInitialProcess;
  v4 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v11 = 0LL;
    v6 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) >= (int)a2 )
      goto LABEL_11;
    v9 = *(_QWORD *)(a1 + 72);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v10, a2, a3);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(char *)(a1 + 195) < v4 )
    {
      LOBYTE(a3) = v4;
      v6 = 1;
      KiSetPriorityBoost(&v11, a1, a3, v9);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v6 )
    {
      return KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v11, CurrentIrql);
    }
    else
    {
LABEL_11:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}

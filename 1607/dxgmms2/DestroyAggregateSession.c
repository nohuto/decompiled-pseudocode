/*
 * XREFs of DestroyAggregateSession @ 0x1C0028378
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C0013168 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0028AB4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C00280DC (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  if ( P )
  {
    if ( P[52] )
      CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    ExFreePoolWithTag(P, 0);
  }
}

/*
 * XREFs of DestroyAggregateSession @ 0x1C006F5B4
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C00527A4 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1C006F4E4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C006F5E4 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  if ( P )
  {
    if ( P[52] )
      CancelTimerCallbacksAndDeleteTimer(P);
    ExFreePoolWithTag(P, 0);
  }
}

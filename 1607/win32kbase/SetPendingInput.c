/*
 * XREFs of SetPendingInput @ 0x1C0088BB0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPendingInput(int a1)
{
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( !gbPendingSleepInput )
  {
    gPendingSleepInputReason = a1;
    gbPendingSleepInput = 1;
  }
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}

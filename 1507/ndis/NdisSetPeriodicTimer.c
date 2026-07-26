/*
 * XREFs of NdisSetPeriodicTimer @ 0x1C005B370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisSetPeriodicTimer(PNDIS_TIMER NdisTimer, UINT MillisecondsPeriod)
{
  __int64 (__fastcall *DeferredRoutine)(); // rax

  DeferredRoutine = (__int64 (__fastcall *)())NdisTimer->Dpc.DeferredRoutine;
  if ( DeferredRoutine == ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((__int64)NdisTimer, MillisecondsPeriod);
  else
    KeSetTimerEx(
      &NdisTimer->Timer,
      (LARGE_INTEGER)(-10000LL * (int)MillisecondsPeriod),
      MillisecondsPeriod,
      &NdisTimer->Dpc);
}

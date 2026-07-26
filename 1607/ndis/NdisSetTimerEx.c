/*
 * XREFs of NdisSetTimerEx @ 0x1C005EF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisSetTimerEx(PNDIS_TIMER NdisTimer, UINT MillisecondsToDelay, PVOID FunctionContext)
{
  __int64 (__fastcall *DeferredRoutine)(); // rax

  DeferredRoutine = (__int64 (__fastcall *)())NdisTimer->Dpc.DeferredRoutine;
  NdisTimer->Dpc.DeferredContext = FunctionContext;
  if ( DeferredRoutine == ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer(NdisTimer, MillisecondsToDelay);
  else
    KeSetTimer(&NdisTimer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &NdisTimer->Dpc);
}

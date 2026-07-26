/*
 * XREFs of NdisSetTimer @ 0x1C001B600
 * Callers:
 *     ndisSetMediaDisconnectTimer @ 0x1C0020040 (ndisSetMediaDisconnectTimer.c)
 *     ndisMStartInitMode @ 0x1C00AC400 (ndisMStartInitMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetTimer(PNDIS_TIMER Timer, UINT MillisecondsToDelay)
{
  __int64 (__fastcall *DeferredRoutine)(); // rax

  DeferredRoutine = (__int64 (__fastcall *)())Timer->Dpc.DeferredRoutine;
  if ( DeferredRoutine == ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer(Timer, MillisecondsToDelay);
  else
    KeSetTimer(&Timer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &Timer->Dpc);
}

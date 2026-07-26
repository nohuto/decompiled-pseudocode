/*
 * XREFs of NdisSetTimer @ 0x1C0024B50
 * Callers:
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     ndisMStartInitMode @ 0x1C00AC5D0 (ndisMStartInitMode.c)
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

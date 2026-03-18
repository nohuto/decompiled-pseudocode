/*
 * XREFs of EngWaitForSingleObject @ 0x1C026BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngWaitForSingleObject(PEVENT pEvent, PLARGE_INTEGER pTimeOut)
{
  BOOL v2; // ebx

  v2 = 0;
  if ( !pEvent->pKEvent || (pEvent->fFlags & 1) != 0 )
    return 0;
  LOBYTE(v2) = KeWaitForSingleObject(pEvent->pKEvent, Executive, 0, 0, pTimeOut) >= 0;
  return v2;
}

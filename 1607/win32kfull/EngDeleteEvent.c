/*
 * XREFs of EngDeleteEvent @ 0x1C0268AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngDeleteEvent(PEVENT pEvent)
{
  __int64 fFlags; // rdx

  fFlags = pEvent->fFlags;
  if ( (fFlags & 1) != 0 )
    return 0;
  Win32FreePool(pEvent, fFlags);
  return 1;
}

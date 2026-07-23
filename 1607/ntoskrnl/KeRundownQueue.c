/*
 * XREFs of KeRundownQueue @ 0x1400B25EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}

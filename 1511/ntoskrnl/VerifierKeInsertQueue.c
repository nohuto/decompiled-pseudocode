/*
 * XREFs of VerifierKeInsertQueue @ 0x1406C09AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall VerifierKeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  return pXdvKeInsertQueue(Queue, Entry);
}

/*
 * XREFs of VerifierKeInsertHeadQueue @ 0x1406C09A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall VerifierKeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  return pXdvKeInsertHeadQueue(Queue, Entry);
}

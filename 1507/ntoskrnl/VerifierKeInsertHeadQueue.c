/*
 * XREFs of VerifierKeInsertHeadQueue @ 0x14074219C
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

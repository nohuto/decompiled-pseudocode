/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x1406C09BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
KPRIORITY __stdcall VerifierKeQueryPriorityThread(PKTHREAD Thread)
{
  return pXdvKeQueryPriorityThread(Thread);
}

/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x1407421B4
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

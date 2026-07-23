/*
 * XREFs of RtlUpdateClonedSRWLock @ 0x180059A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedSRWLock(PRTL_SRWLOCK SRWLock, LOGICAL Shared)
{
  SRWLock->Value = (Shared != 0 ? 0x10 : 0) | 1LL;
}

/*
 * XREFs of RtlUpdateClonedSRWLock @ 0x18005B080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedSRWLock(PRTL_SRWLOCK SRWLock, LOGICAL Shared)
{
  SRWLock->Value = (Shared != 0 ? 0x10 : 0) | 1LL;
}

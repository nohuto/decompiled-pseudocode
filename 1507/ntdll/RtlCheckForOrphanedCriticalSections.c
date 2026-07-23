/*
 * XREFs of RtlCheckForOrphanedCriticalSections @ 0x18006CE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckHeldCriticalSections @ 0x18006CE30 (RtlCheckHeldCriticalSections.c)
 */

void __cdecl RtlCheckForOrphanedCriticalSections(HANDLE ThreadHandle)
{
  RtlCheckHeldCriticalSections(ThreadHandle);
}

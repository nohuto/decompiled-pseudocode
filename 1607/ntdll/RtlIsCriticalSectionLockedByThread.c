/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x18002F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlIsCriticalSectionLockedByThread(PRTL_CRITICAL_SECTION CriticalSection)
{
  return CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}

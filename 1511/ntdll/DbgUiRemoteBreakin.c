/*
 * XREFs of DbgUiRemoteBreakin @ 0x1800C8FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     DbgBreakPoint @ 0x1800A8860 (DbgBreakPoint.c)
 */

void __noreturn DbgUiRemoteBreakin()
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
  {
    if ( UseWOW64 )
      Wow64PrepareForDebuggerAttach(Wow64PrepareForDebuggerAttach);
    DbgBreakPoint();
  }
  RtlExitUserThread(0);
}

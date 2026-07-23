/*
 * XREFs of DbgUiRemoteBreakin @ 0x1800D0480
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     DbgBreakPoint @ 0x1800A9CA0 (DbgBreakPoint.c)
 */

void __cdecl __noreturn DbgUiRemoteBreakin(PVOID Context)
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
  {
    if ( UseWOW64 )
      ((void (__fastcall *)(PVOID))Wow64PrepareForDebuggerAttach)(Context);
    DbgBreakPoint();
  }
  RtlExitUserThread(0);
}

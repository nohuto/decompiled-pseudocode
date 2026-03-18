/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x14057F78C
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtSetDefaultHardErrorPort(HANDLE PortHandle)
{
  _DWORD *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( CurrentServerSiloGlobals[220] == 1 )
    return -1073741823;
  result = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  *((_QWORD *)CurrentServerSiloGlobals + 109) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    CurrentServerSiloGlobals[220] = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)CurrentServerSiloGlobals + 108) = Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}

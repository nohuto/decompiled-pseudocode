/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x14054A2E4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14011F74C (PsGetCurrentServerSiloGlobals.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
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
  if ( CurrentServerSiloGlobals[8] == 1 )
    return -1073741823;
  result = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  *((_QWORD *)CurrentServerSiloGlobals + 6) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    CurrentServerSiloGlobals[8] = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)CurrentServerSiloGlobals + 5) = Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}

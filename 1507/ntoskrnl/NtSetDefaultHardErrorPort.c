/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x1405C18B4
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140154878 (PsGetCurrentServerSiloGlobals.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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

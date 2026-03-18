/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x1404A64D0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x14052F430 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x14076F68C (IopReassignSystemRoot.c)
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  _QWORD *v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = SymbolicLinkHandle;
    if ( (unsigned __int64)SymbolicLinkHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             ObpSymbolicLinkObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v9);
  *SymbolicLinkHandle = v9;
  return result;
}

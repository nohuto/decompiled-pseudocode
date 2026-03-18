/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x14052B6AC
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140592FEC (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
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
             (__int64)ObpSymbolicLinkObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v9);
  *SymbolicLinkHandle = v9;
  return result;
}

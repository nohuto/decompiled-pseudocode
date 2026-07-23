/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x140462F14
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1405705F8 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x1407B980C (IopReassignSystemRoot.c)
 * Callees:
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  __int64 v6; // rdx
  NTSTATUS result; // eax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  LOBYTE(ObjectAttributes) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)ObjectAttributes )
  {
    v6 = (__int64)SymbolicLinkHandle;
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(
             v3,
             (_DWORD)ObpSymbolicLinkObjectType,
             (_DWORD)ObjectAttributes,
             0,
             DesiredAccess,
             0LL,
             (__int64)&v8);
  *SymbolicLinkHandle = v8;
  return result;
}

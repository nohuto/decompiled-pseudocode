/*
 * XREFs of NtOpenSession @ 0x14056419C
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x14055C83C (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  NTSTATUS result; // eax
  _QWORD *v8; // rdx
  void *v9; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = SessionHandle;
    if ( (unsigned __int64)SessionHandle >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmSessionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v9);
  *SessionHandle = v9;
  return result;
}

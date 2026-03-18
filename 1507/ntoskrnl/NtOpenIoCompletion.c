/*
 * XREFs of NtOpenIoCompletion @ 0x140674A1C
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenIoCompletion(
        PHANDLE CompetionPort,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  _QWORD *v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = CompetionPort;
    if ( (unsigned __int64)CompetionPort >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)IoCompletionObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         &v10);
  if ( v8 >= 0 )
    *CompetionPort = v10;
  return v8;
}

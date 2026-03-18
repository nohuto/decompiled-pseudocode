/*
 * XREFs of NtOpenIoCompletion @ 0x1405FA608
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
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
         IoCompletionObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         &v10);
  if ( v8 >= 0 )
    *CompetionPort = v10;
  return v8;
}

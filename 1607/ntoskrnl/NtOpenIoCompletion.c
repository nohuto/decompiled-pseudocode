/*
 * XREFs of NtOpenIoCompletion @ 0x1406240DC
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenIoCompletion(
        PHANDLE CompetionPort,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)CompetionPort;
    if ( (unsigned __int64)CompetionPort >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
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

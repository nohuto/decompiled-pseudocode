/*
 * XREFs of NtOpenSemaphore @ 0x1404B5C40
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAcces,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  _QWORD *v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = SemaphoreHandle;
    if ( (unsigned __int64)SemaphoreHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (struct _OBJECT_TYPE *)ExSemaphoreObjectType,
         PreviousMode,
         0LL,
         DesiredAcces,
         0LL,
         &v10);
  if ( v8 >= 0 )
    *SemaphoreHandle = v10;
  return v8;
}

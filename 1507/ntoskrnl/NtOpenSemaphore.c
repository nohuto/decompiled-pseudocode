/*
 * XREFs of NtOpenSemaphore @ 0x14054DAE4
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
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
         (__int64)ExSemaphoreObjectType,
         PreviousMode,
         0LL,
         DesiredAcces,
         0LL,
         &v10);
  if ( v8 >= 0 )
    *SemaphoreHandle = v10;
  return v8;
}

/*
 * XREFs of NtOpenSemaphore @ 0x1404BF1AC
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAcces,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)SemaphoreHandle;
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
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

/*
 * XREFs of NtResumeProcess @ 0x14051A788
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsResumeProcess @ 0x1404A75D0 (PsResumeProcess.c)
 */

NTSTATUS __stdcall NtResumeProcess(HANDLE ProcessHandle)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = ObReferenceObjectByHandleWithTag(
         ProcessHandle,
         0x800u,
         (POBJECT_TYPE)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x75537350u,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v1 = PsResumeProcess((struct _EX_RUNDOWN_REF *)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}

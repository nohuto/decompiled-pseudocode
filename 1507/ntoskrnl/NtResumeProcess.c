/*
 * XREFs of NtResumeProcess @ 0x14040A48C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PsResumeProcess @ 0x140551728 (PsResumeProcess.c)
 */

NTSTATUS __stdcall NtResumeProcess(HANDLE ProcessHandle)
{
  int v1; // ebx
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
    v1 = PsResumeProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}

/*
 * XREFs of NtResumeProcess @ 0x140681F5C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     PsResumeProcess @ 0x1404CCCE0 (PsResumeProcess.c)
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
    v1 = PsResumeProcess((__int64)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}

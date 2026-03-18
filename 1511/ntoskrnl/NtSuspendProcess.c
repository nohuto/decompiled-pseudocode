/*
 * XREFs of NtSuspendProcess @ 0x140518C58
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsSuspendProcess @ 0x140518CC0 (PsSuspendProcess.c)
 */

NTSTATUS __stdcall NtSuspendProcess(HANDLE ProcessHandle)
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
    v1 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}

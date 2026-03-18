/*
 * XREFs of NtAssignProcessToJobObject @ 0x140486B98
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsAssignProcessToJobObject @ 0x140486C70 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140660AD0 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __stdcall NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // di
  int v5; // ebx
  PVOID v6; // rbx
  PVOID v7; // rdi
  unsigned int v8; // eax
  NTSTATUS v9; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v12, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ObReferenceObjectByHandleWithTag(
           ProcessHandle,
           0x101u,
           (POBJECT_TYPE)PsProcessType,
           PreviousMode,
           0x624A7350u,
           &Object,
           0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = v12;
      v8 = PsAssignProcessToJobObject(v12, (PEPROCESS)Object);
      v9 = v8;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobAssignProcess(v7, v6, JobHandle, v8);
      ObfDereferenceObjectWithTag(v6, 0x624A7350u);
      ObfDereferenceObject(v7);
      return v9;
    }
    ObfDereferenceObject(v12);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v12, Object, JobHandle, (unsigned int)v5);
  return v5;
}

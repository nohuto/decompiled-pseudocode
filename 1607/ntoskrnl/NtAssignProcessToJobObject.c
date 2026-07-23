/*
 * XREFs of NtAssignProcessToJobObject @ 0x1404D58A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PsAssignProcessToJobObject @ 0x1404D597C (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x1406A1980 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __stdcall NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // di
  int v4; // ebx
  PVOID v5; // rbx
  PVOID v6; // rdi
  unsigned int v7; // eax
  NTSTATUS v8; // esi
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PVOID v11; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v11, 0LL);
  if ( v4 >= 0 )
  {
    v4 = ObReferenceObjectByHandleWithTag(
           ProcessHandle,
           0x101u,
           (POBJECT_TYPE)PsProcessType,
           PreviousMode,
           0x624A7350u,
           &Object,
           0LL);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v6 = v11;
      v7 = PsAssignProcessToJobObject(v11, Object);
      v8 = v7;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobAssignProcess(v6, v5, v7);
      ObfDereferenceObjectWithTag(v5, 0x624A7350u);
      ObfDereferenceObject(v6);
      return v8;
    }
    ObfDereferenceObject(v11);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v11, Object, (unsigned int)v4);
  return v4;
}

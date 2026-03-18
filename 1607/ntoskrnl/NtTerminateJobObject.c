/*
 * XREFs of NtTerminateJobObject @ 0x1404E2EBC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404E2F28 (PspTerminateAllProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1406A179C (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = ObReferenceObjectByHandle(
         JobHandle,
         8u,
         (POBJECT_TYPE)PsJobType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob(Object, 0LL, (unsigned int)v2, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy((PRKEVENT)Object);
    ObfDereferenceObject(Object);
  }
  return v3;
}

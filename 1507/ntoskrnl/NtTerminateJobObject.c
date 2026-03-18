/*
 * XREFs of NtTerminateJobObject @ 0x14054DD0C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x1406E3A0C (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  int v2; // edi
  int v3; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = (int)JobHandle;
  v3 = ObReferenceObjectByHandle(
         JobHandle,
         8u,
         (POBJECT_TYPE)PsJobType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v3 < 0 )
  {
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob((_DWORD)Object, v2, 0, v3, 1825);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy((PRKEVENT)Object);
    ObfDereferenceObject(Object);
  }
  return v3;
}

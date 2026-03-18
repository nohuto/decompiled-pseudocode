/*
 * XREFs of NtTerminateJobObject @ 0x140487954
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140660A24 (EtwTraceJob.c)
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

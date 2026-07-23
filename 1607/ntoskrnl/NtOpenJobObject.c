/*
 * XREFs of NtOpenJobObject @ 0x140680090
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x1406A18D4 (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v4; // rdi
  char PreviousMode; // r8
  NTSTATUS v6; // ebx
  void *v8; // [rsp+78h] [rbp+20h] BYREF

  v4 = JobHandle;
  v8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)JobHandle >= 0x7FFFFFFF0000LL )
      JobHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *JobHandle = *JobHandle;
  }
  v6 = ObOpenObjectByName((__int64)ObjectAttributes, (__int64)PsJobType, PreviousMode, 0LL, DesiredAccess, 0LL, &v8);
  if ( v6 >= 0 )
    *v4 = v8;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v6, 1826LL);
  return v6;
}

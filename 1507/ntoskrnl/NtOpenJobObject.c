/*
 * XREFs of NtOpenJobObject @ 0x1406C4068
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwTraceJob @ 0x1406E3A0C (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v3; // r14
  char PreviousMode; // si
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  PVOID v7; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  PVOID v10; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-18h] BYREF

  v3 = JobHandle;
  Handle = 0LL;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)JobHandle >= MmUserProbeAddress )
      JobHandle = (PHANDLE)MmUserProbeAddress;
    *JobHandle = *JobHandle;
  }
  v5 = ObOpenObjectByName((__int64)ObjectAttributes, (__int64)PsJobType, PreviousMode, 0LL, DesiredAccess, 0LL, &Handle);
  if ( v5 >= 0 )
    *v3 = Handle;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
  {
    v6 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
    v7 = Object;
    if ( v6 < 0 )
      v7 = 0LL;
    v10 = v7;
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob((_DWORD)v10, (_DWORD)Handle, 0, v5, 1826);
  }
  return v5;
}

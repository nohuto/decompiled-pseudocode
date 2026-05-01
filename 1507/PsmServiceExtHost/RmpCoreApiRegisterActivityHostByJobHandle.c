/*
 * XREFs of RmpCoreApiRegisterActivityHostByJobHandle @ 0x180041E08
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostByJobHandle @ 0x18003B430 (RmCoreRpcSrvRegisterActivityHostByJobHandle.c)
 * Callees:
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18003B994 (RmpActivityHostCreateHostJobObject.c)
 */

__int64 __fastcall RmpCoreApiRegisterActivityHostByJobHandle(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  void *v6; // rax
  int HostJobObject; // ebx
  HANDLE CurrentProcess; // rax
  HANDLE v11; // rax
  volatile signed __int32 *v12; // rcx
  void *ProcessHandle; // [rsp+48h] [rbp-19h] BYREF
  HANDLE v15; // [rsp+50h] [rbp-11h] BYREF
  PVOID P; // [rsp+58h] [rbp-9h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+Fh] BYREF
  HANDLE TargetHandle; // [rsp+B8h] [rbp+57h] BYREF

  v6 = (void *)*(unsigned int *)(a1 + 56);
  ProcessHandle = 0LL;
  TargetHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ClientId.UniqueProcess = v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  HostJobObject = NtOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
  if ( HostJobObject >= 0 )
  {
    CurrentProcess = GetCurrentProcess();
    if ( DuplicateHandle(ProcessHandle, a3, CurrentProcess, &TargetHandle, 0x1F001Fu, 0, 0) )
    {
      v11 = TargetHandle;
      TargetHandle = 0LL;
      v15 = v11;
      RtlEnterCriticalSection(&RmpGlobalLock);
      HostJobObject = RmpActivityHostCreateHostJobObject((__int64 *)&v15, a1, a5, (struct _RM_ACTIVITY_HOST **)&P);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( HostJobObject >= 0 )
      {
        v12 = (volatile signed __int32 *)P;
        *a6 = *((_QWORD *)P + 3);
        RmpObjectRelease(v12);
      }
    }
    else
    {
      HostJobObject = -1073741823;
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return (unsigned int)HostJobObject;
}

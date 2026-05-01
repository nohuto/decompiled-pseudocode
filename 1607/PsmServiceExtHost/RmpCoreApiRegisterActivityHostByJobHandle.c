/*
 * XREFs of RmpCoreApiRegisterActivityHostByJobHandle @ 0x18002E200
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostByJobHandle @ 0x18002E600 (RmCoreRpcSrvRegisterActivityHostByJobHandle.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18002ED74 (RmpActivityHostCreateHostJobObject.c)
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
  int v8; // edi
  NTSTATUS HostJobObject; // ebx
  HANDLE CurrentProcess; // rax
  HANDLE v11; // rax
  int v12; // ecx
  volatile signed __int32 *v13; // rcx
  void *ProcessHandle; // [rsp+48h] [rbp-19h] BYREF
  HANDLE v16; // [rsp+50h] [rbp-11h] BYREF
  PVOID P; // [rsp+58h] [rbp-9h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+Fh] BYREF
  HANDLE TargetHandle; // [rsp+B8h] [rbp+57h] BYREF

  v6 = (void *)*(unsigned int *)(a1 + 56);
  ProcessHandle = 0LL;
  TargetHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  v8 = a1;
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
      v16 = v11;
      RtlEnterCriticalSection(&RmpGlobalLock);
      HostJobObject = RmpActivityHostCreateHostJobObject(v12, (unsigned int)&v16, v8, a5, (__int64)&P);
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( HostJobObject >= 0 )
      {
        v13 = (volatile signed __int32 *)P;
        *a6 = *((_QWORD *)P + 3);
        RmpObjectRelease(v13);
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

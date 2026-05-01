/*
 * XREFs of RmpCoreApiRegisterActivityHostByProcessHandle @ 0x180041F48
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostByProcessHandle @ 0x18003B440 (RmCoreRpcSrvRegisterActivityHostByProcessHandle.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     RmpActivityHostCreateHostProcess @ 0x18003BA18 (RmpActivityHostCreateHostProcess.c)
 */

__int64 __fastcall RmpCoreApiRegisterActivityHostByProcessHandle(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int HostProcess; // ebx
  volatile signed __int32 *v8; // rcx
  PVOID P; // [rsp+20h] [rbp-258h] BYREF
  DWORD ProcessId; // [rsp+28h] [rbp-250h] BYREF
  WCHAR v12[280]; // [rsp+30h] [rbp-248h] BYREF

  ProcessId = GetProcessId(a3);
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v12, 0, 0x228uLL);
  *(_DWORD *)v12 = ProcessId;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(1, v12, (volatile signed __int32 **)&P) < 0 )
  {
    HostProcess = RmpActivityHostCreateHostProcess((int *)&ProcessId, a1, a5, (struct _RM_ACTIVITY_HOST **)&P);
    if ( HostProcess >= 0 )
    {
      v8 = (volatile signed __int32 *)P;
      *a6 = *((_QWORD *)P + 3);
      RmpObjectRelease(v8);
    }
  }
  else
  {
    RmpObjectRelease((volatile signed __int32 *)P);
    HostProcess = -1073740008;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)HostProcess;
}

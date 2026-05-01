/*
 * XREFs of RmpCoreApiRegisterActivityHostByProcessHandle @ 0x18002E348
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostByProcessHandle @ 0x18002E610 (RmCoreRpcSrvRegisterActivityHostByProcessHandle.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpActivityHostCreateHostProcess @ 0x18002EDFC (RmpActivityHostCreateHostProcess.c)
 */

__int64 __fastcall RmpCoreApiRegisterActivityHostByProcessHandle(
        int a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int HostProcess; // ebx
  volatile signed __int32 *v8; // rcx
  DWORD ProcessId; // [rsp+30h] [rbp-258h] BYREF
  PVOID P; // [rsp+38h] [rbp-250h] BYREF
  unsigned __int8 v12[560]; // [rsp+40h] [rbp-248h] BYREF

  ProcessId = GetProcessId(a3);
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v12, 0, 0x228uLL);
  *(_DWORD *)v12 = ProcessId;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier((__int64)RmSvcGlobals, 1, v12, (volatile signed __int32 **)&P) < 0 )
  {
    HostProcess = RmpActivityHostCreateHostProcess((_DWORD)RmSvcGlobals, (unsigned int)&ProcessId, a1, a5, (__int64)&P);
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

/*
 * XREFs of RmpActivityHostFindPsmResourceSets @ 0x18003BBE4
 * Callers:
 *     ?GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z @ 0x1800359C0 (-GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z.c)
 *     ?GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180035B50 (-GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x1800364B0 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800378B4 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180037F90 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003E3A0 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@ResourceSetType@2@@Z @ 0x18003EC30 (-GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@Resourc.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpActivityHostFindPsmResourceSets(wchar_t **a1, void *a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // r14
  volatile signed __int32 *v10; // rbx
  PVOID P; // [rsp+30h] [rbp-268h] BYREF
  wchar_t Destination[280]; // [rsp+40h] [rbp-258h] BYREF

  v9 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  RmpPsmAppInstanceIdInitializeFromCStr(Destination, *a1, a2, a3, a4, a5);
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(0, Destination, (volatile signed __int32 **)&P) >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v10 = (volatile signed __int32 *)P;
    if ( *((int *)P + 5) >= 0 )
      v9 = *((_QWORD *)P + 75);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpObjectRelease(v10);
  }
  return v9;
}

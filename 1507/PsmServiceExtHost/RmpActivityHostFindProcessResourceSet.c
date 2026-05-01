/*
 * XREFs of RmpActivityHostFindProcessResourceSet @ 0x180002CA8
 * Callers:
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x180034A30 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z.c)
 *     ?AuditProcessForOom@ResourceManager@ExecutionModel@@UEAAJKPEAH@Z @ 0x180034B60 (-AuditProcessForOom@ResourceManager@ExecutionModel@@UEAAJKPEAH@Z.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180035B50 (-GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18003601C (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z @ 0x1800360A0 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@UEAAJKKPEA_K@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x1800364B0 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?IsKillable@ResourceManager@ExecutionModel@@UEAAJKPEA_N@Z @ 0x180036690 (-IsKillable@ResourceManager@ExecutionModel@@UEAAJKPEA_N@Z.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180037F90 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?GetResourceSetTypeFromPid@ResourceManager@ExecutionModel@@UEAAJKPEAW4Enum@ResourceSetType@2@@Z @ 0x18003ED20 (-GetResourceSetTypeFromPid@ResourceManager@ExecutionModel@@UEAAJKPEAW4Enum@ResourceSetType@2@@Z.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpActivityHostFindProcessResourceSet(int a1)
{
  __int64 v2; // rdi
  PVOID v3; // rbx
  PVOID P[2]; // [rsp+20h] [rbp-258h] BYREF
  _DWORD v6[140]; // [rsp+30h] [rbp-248h] BYREF

  v2 = 0LL;
  memset_0(v6, 0, 0x228uLL);
  v6[0] = a1;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(1LL, v6, P) >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v3 = P[0];
    if ( *((int *)P[0] + 5) >= 0 )
      v2 = *((_QWORD *)P[0] + 75);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpObjectRelease(v3);
  }
  return v2;
}

/*
 * XREFs of ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?Handle_RM_SetKillableProcessEvent@ResourceManagerServerProxy@@QEAAJKPEAX@Z @ 0x1800399E8 (-Handle_RM_SetKillableProcessEvent@ResourceManagerServerProxy@@QEAAJKPEAX@Z.c)
 *     ??$replace@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@0@@Z @ 0x18003B0D4 (--$replace@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV-$auto_xxx@PEAXP6AHPEAX@Z$.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18003B0F8 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ?AuditProcessForOom@ResourceManager@ExecutionModel@@UEAAJKPEAH@Z @ 0x18003BCB0 (-AuditProcessForOom@ResourceManager@ExecutionModel@@UEAAJKPEAH@Z.c)
 *     ExecutionModel::ProcessDead @ 0x18003D82C (ExecutionModel--ProcessDead.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x18003E2B8 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 *     ?QueryProcessMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003F080 (-QueryProcessMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180043840 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180044AB8 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseHandle(v1);
  return result;
}

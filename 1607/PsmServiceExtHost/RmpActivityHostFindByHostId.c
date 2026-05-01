/*
 * XREFs of RmpActivityHostFindByHostId @ 0x180018014
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     RmpCoreApiSetHostLimits @ 0x180019198 (RmpCoreApiSetHostLimits.c)
 *     ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974 (-RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x18002E450 (RmpCoreApiUnregisterActivityHost.c)
 * Callees:
 *     RmpObjectTableFindObjectByHandle @ 0x180017FB4 (RmpObjectTableFindObjectByHandle.c)
 */

__int64 __fastcall RmpActivityHostFindByHostId(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  result = RmpObjectTableFindObjectByHandle(a1 + 16, (unsigned __int8 *)&v6, &v5);
  if ( (int)result >= 0 )
  {
    *a3 = v5;
    return 0LL;
  }
  return result;
}

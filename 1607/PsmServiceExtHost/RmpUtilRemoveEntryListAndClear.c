/*
 * XREFs of RmpUtilRemoveEntryListAndClear @ 0x1800033D8
 * Callers:
 *     ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001708 (-RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800033A4 (-RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002FA28 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FF10 (-RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030074 (-RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18003020C (-RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030D80 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 *     ?RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800311B0 (-RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     RmpGameModeOnHostImportanceChanged @ 0x1800320B0 (RmpGameModeOnHostImportanceChanged.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034470 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpUtilRemoveEntryListAndClear(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  __int64 result; // rax

  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v2 != a1 )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}

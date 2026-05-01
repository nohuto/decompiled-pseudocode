/*
 * XREFs of ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8
 * Callers:
 *     ?RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800033A4 (-RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D810 (-RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocationCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D8B0 (-RmpCpuSetManagerAcquireSetsForAllocationCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_A.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 *     ?RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030074 (-RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     RmpCpuSetManagerAcquireCpuSetsForGameMode @ 0x180031210 (RmpCpuSetManagerAcquireCpuSetsForGameMode.c)
 *     RmpCpuSetManagerCleanup @ 0x180031370 (RmpCpuSetManagerCleanup.c)
 *     ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031DC0 (-RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FF10 (-RmpCpuSetManagerDestroyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030D80 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseAllSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180030F18 (-RmpCpuSetManagerReleaseAllSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOC.c)
 *     ?RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800311B0 (-RmpCpuSetManagerZombifyAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllocationInternal(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        char a3)
{
  int v5; // eax
  const struct _TlgProvider_t *v7; // rcx
  struct _RM_CPU_SET_ALLOCATION *v8; // rdx
  struct _RM_CPU_SET_MANAGER *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+64h] [rbp-14h]

  v13 = *(_QWORD *)a2;
  v5 = *((_DWORD *)a2 + 69);
  if ( (v5 & 4) != 0 || (v5 & 8) != 0 )
  {
    RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 7);
    *((_DWORD *)a2 + 69) &= ~4u;
    v8 = a2;
    v9 = a1;
  }
  else
  {
    RmpCpuSetManagerReleaseAllSetsFromAllocation(a1, a2);
    if ( (a3 & 1) != 0 )
    {
      RmpCpuSetManagerZombifyAllocation(a1, a2);
      goto LABEL_9;
    }
    RmpUtilRemoveEntryListAndClear((_QWORD *)a2 + 7);
    v8 = a2;
    v9 = a1;
    if ( (*((_DWORD *)a2 + 69) & 2) != 0 )
    {
      RmpCpuSetManagerInvalidateAllocation(a1, a2);
      goto LABEL_9;
    }
  }
  RmpCpuSetManagerDestroyAllocation(v9, v8);
LABEL_9:
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v7, 1uLL) )
    {
      v17 = 0;
      v15 = &v13;
      v16 = 8;
      TlgWrite(v10, &unk_1800411A0, v11, v12, 3u, &pData);
    }
  }
}

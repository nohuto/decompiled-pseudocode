/*
 * XREFs of ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800031C0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 *     ?RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180030074 (-RmpCpuSetManagerDestroyClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     RmpCpuSetManagerCleanup @ 0x180031370 (RmpCpuSetManagerCleanup.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180032050 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800033A4 (-RmpCpuSetManagerMarkAllocationClean@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180003408 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002FA28 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180030DD4 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerApplyAllPolicyChanges(struct _RM_CPU_SET_MANAGER *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  char *v3; // rdi
  _QWORD *j; // rdi
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 i; // r9
  __int64 *v11; // r9
  int v12; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-14h]

  if ( (*((_DWORD *)a1 + 159) & 2) != 0 || (*((_DWORD *)a1 + 231) & 2) != 0 )
  {
    v12 = RmpCpuSetManagerApplySystemAllowedMask(a1);
    if ( v12 < 0 && (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v2, 0x400000000001uLL) )
    {
      v16 = 0;
      v14 = &v12;
      v15 = 4;
      TlgWrite(v5, &unk_1800413DE, v6, v7, 3u, &pData);
    }
    if ( (*((_DWORD *)a1 + 159) & 2) != 0 )
      RmpCpuSetManagerMarkAllocationClean(a1, (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 360));
    if ( (*((_DWORD *)a1 + 231) & 2) != 0 )
      RmpCpuSetManagerMarkAllocationClean(a1, (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 648));
  }
  v3 = (char *)a1 + 296;
  while ( *(char **)v3 != v3 )
  {
    v8 = *(_QWORD *)v3;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v3 + 208LL) - 1) <= 1 )
    {
      v9 = v8 + 16;
      for ( i = *(_QWORD *)(v8 + 16); i != v9; i = *v11 )
        RmpCpuSetManagerMarkProcessDirty(a1, *(struct _RM_CPU_SET_PROCESS **)(i - 48));
    }
    RmpCpuSetManagerMarkAllocationClean(a1, (struct _RM_CPU_SET_ALLOCATION *)(v8 - 72));
  }
  for ( j = (_QWORD *)((char *)a1 + 344);
        (_QWORD *)*j != j;
        RmpCpuSetManagerApplyProcessPolicy(a1, (struct _RM_CPU_SET_PROCESS *)(*j - 40LL)) )
  {
    ;
  }
}

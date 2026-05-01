/*
 * XREFs of ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560
 * Callers:
 *     RmpCpuSetManagerResetValidMask @ 0x18001DA50 (RmpCpuSetManagerResetValidMask.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 *     ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031DC0 (-RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800032EC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D5F4 (-RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x18001D694 (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20 (-RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_N.c)
 */

void __fastcall RmpCpuSetManagerRebalance(struct _RM_CPU_SET_MANAGER *a1, char a2)
{
  unsigned int v3; // r8d
  __int64 **v4; // rdi
  struct _RM_CPU_SET_MANAGER *v5; // rax
  __int64 *i; // rcx
  char v7; // di
  char *v8; // rsi
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  if ( (a2 & 1) != 0 )
    RmpCpuSetManagerRebalanceTopologyChange(a1);
  v3 = *((_DWORD *)a1 + 230);
  v4 = (__int64 **)((char *)a1 + 248);
  v5 = (struct _RM_CPU_SET_MANAGER *)*((_QWORD *)a1 + 31);
  if ( v5 != (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 248) && v3 )
  {
    v8 = (char *)v5 - 56;
    if ( v3 >= 0x200 )
      v3 = 512;
    RmpCpuSetManagerAcquireSetsForAllocation(a1, (struct _RM_CPU_SET_MANAGER *)((char *)v5 - 56), v3);
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 1uLL) )
    {
      v16 = 0;
      v14 = v8;
      v15 = 8;
      TlgWrite(v10, &unk_18004141D, v11, v12, 3u, &pData);
    }
  }
  if ( (*((_BYTE *)a1 + 968) & 1) == 0 )
  {
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      if ( (*((_DWORD *)i + 55) & 2) != 0 )
      {
        v7 = 1;
        goto LABEL_8;
      }
    }
  }
  v7 = 0;
LABEL_8:
  RmpCpuSetManagerApplyAllPolicyChanges(a1);
  if ( v7 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 2992LL) & 1) == 0 )
      RmpGameModePublishResourceAllotment(
        *(_DWORD *)(*(_QWORD *)a1 + 2988LL),
        (struct _RM_GAME_MODE_RESOURCE_ALLOTMENT *)(*(_QWORD *)a1 + 2968LL),
        (struct _WNF_STATE_NAME *)(*(_QWORD *)(*(_QWORD *)a1 + 2944LL) + 1088LL));
  }
}

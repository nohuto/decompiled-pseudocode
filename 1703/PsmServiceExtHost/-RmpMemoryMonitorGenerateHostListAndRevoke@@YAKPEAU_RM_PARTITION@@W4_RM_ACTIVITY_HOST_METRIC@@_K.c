/*
 * XREFs of ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180036CCC
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180035CD8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800371B4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180037358 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x1800332A8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800336D8 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

__int64 __fastcall RmpMemoryMonitorGenerateHostListAndRevoke(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6)
{
  __int64 v7; // rbx
  int v9; // ecx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  const struct _TlgProvider_t *v13; // rcx
  __int16 v15; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  __int16 *v17; // [rsp+60h] [rbp-58h]
  int v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+6Ch] [rbp-4Ch]
  __int64 v20; // [rsp+70h] [rbp-48h]
  int v21; // [rsp+78h] [rbp-40h]
  int v22; // [rsp+7Ch] [rbp-3Ch]

  v7 = a1 + 144;
  if ( a4 == 1 )
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 516LL);
  else
    v9 = 0;
  RmpPolicyGenerateReclaimListForCommit(a1, v7, 0LL, a3, v9, a4);
  if ( *(_DWORD *)(v7 + 40) )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 1uLL) )
    {
      v13 = (const struct _TlgProvider_t *)*(unsigned __int16 *)(v7 + 40);
      v19 = 0;
      v17 = &v15;
      v20 = *(_QWORD *)(v7 + 8);
      v22 = 0;
      v21 = 8 * (_DWORD)v13;
      v15 = (__int16)v13;
      v18 = 2;
      TlgWrite(v13, &unk_1800437B4, v11, v12, 4u, &pData);
    }
    RmpPolicyReclaimHostList(v7, a4, a5, 0LL, a6);
  }
  return *(unsigned int *)(v7 + 40);
}

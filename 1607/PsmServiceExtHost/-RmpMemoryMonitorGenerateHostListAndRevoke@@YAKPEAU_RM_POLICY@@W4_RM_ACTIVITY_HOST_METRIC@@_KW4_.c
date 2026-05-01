/*
 * XREFs of ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180033318
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033800 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_S.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
 *     RmpPolicyReclaimHostList @ 0x180034270 (RmpPolicyReclaimHostList.c)
 */

__int64 __fastcall RmpMemoryMonitorGenerateHostListAndRevoke(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rbx
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const struct _TlgProvider_t *v12; // rcx
  __int16 v14; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int16 *v16; // [rsp+60h] [rbp-48h]
  int v17; // [rsp+68h] [rbp-40h]
  int v18; // [rsp+6Ch] [rbp-3Ch]
  __int64 v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+7Ch] [rbp-2Ch]

  v7 = a1 + 1360;
  if ( a4 == 1 )
    v8 = *(_DWORD *)(a1 + 1420);
  else
    v8 = 0;
  RmpPolicyGenerateReclaimListForCommit(a1, a1 + 1360, 0, a3, v8, a4);
  if ( *(_DWORD *)(v7 + 40) )
  {
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 1uLL) )
    {
      v12 = (const struct _TlgProvider_t *)*(unsigned __int16 *)(v7 + 40);
      v18 = 0;
      v16 = &v14;
      v19 = *(_QWORD *)(v7 + 8);
      v21 = 0;
      v20 = 8 * (_DWORD)v12;
      v14 = (__int16)v12;
      v17 = 2;
      TlgWrite(v12, &unk_180041F7C, v10, v11, 4u, &pData);
    }
    RmpPolicyReclaimHostList(v7, a4, a5, 0, a6);
  }
  return *(unsigned int *)(v7 + 40);
}

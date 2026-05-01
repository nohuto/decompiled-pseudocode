/*
 * XREFs of ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042CE4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180042E8C (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x180040B7C (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18004124C (RmpActivityHostRevokeAllResourceSets.c)
 *     RmpPolicyGenerateRevokeListForCommit @ 0x1800416F4 (RmpPolicyGenerateRevokeListForCommit.c)
 */

char __fastcall RmpMemoryMonitorGenerateHostListAndRevoke(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  char result; // al
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // rdi
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  _DWORD v14[4]; // [rsp+30h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-21h] BYREF
  _DWORD *v16; // [rsp+60h] [rbp-1h]
  int v17; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+6Ch] [rbp+Bh]
  __int64 *v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+7Ch] [rbp+1Bh]

  v7 = *(__int64 **)(a1 + 1352);
  v14[0] = *(_DWORD *)(a1 + 1360);
  result = RmpPolicyGenerateRevokeListForCommit(a3, a4, a5, 0LL, (__int64)v7, v14);
  v10 = v14[0];
  if ( (unsigned int)dword_180071060 > 4 )
  {
    result = TlgKeywordOn(v9, 1uLL);
    if ( result )
    {
      v18 = 0;
      v16 = v14;
      v21 = 0;
      v20 = 8 * (unsigned __int16)v10;
      LOWORD(v14[0]) = v10;
      v17 = 2;
      v19 = v7;
      result = TlgWrite(v11, &unk_18006347A, v12, v13, 4u, &pData);
    }
  }
  if ( (_DWORD)v10 )
  {
    do
    {
      RmpActivityHostAddToRemediationGroup(*v7, a7);
      result = RmpActivityHostRevokeAllResourceSets((const struct _TlgProvider_t *)*v7++, a6);
      --v10;
    }
    while ( v10 );
  }
  return result;
}

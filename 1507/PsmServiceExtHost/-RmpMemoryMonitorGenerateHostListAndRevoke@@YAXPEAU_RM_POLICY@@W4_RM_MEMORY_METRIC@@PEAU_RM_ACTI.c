/*
 * XREFs of ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003D194
 * Callers:
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D5F4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D794 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x18003B7A4 (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18003BED8 (RmpActivityHostRevokeAllResourceSets.c)
 *     RmpPolicyGenerateRevokeListForCommit @ 0x18003C2BC (RmpPolicyGenerateRevokeListForCommit.c)
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

  v7 = *(__int64 **)(a1 + 1432);
  v14[0] = *(_DWORD *)(a1 + 1440);
  result = RmpPolicyGenerateRevokeListForCommit(a3, a4, a5, 0LL, (__int64)v7, v14);
  v10 = v14[0];
  if ( (unsigned int)dword_1800690A0 > 4 )
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
      result = TlgWrite(v11, &unk_18005B905, v12, v13, 4u, &pData);
    }
  }
  if ( (_DWORD)v10 )
  {
    do
    {
      RmpActivityHostAddToRemediationGroup(*v7, a7);
      result = RmpActivityHostRevokeAllResourceSets((struct _RM_ACTIVITY_HOST *)*v7++, a6);
      --v10;
    }
    while ( v10 );
  }
  return result;
}

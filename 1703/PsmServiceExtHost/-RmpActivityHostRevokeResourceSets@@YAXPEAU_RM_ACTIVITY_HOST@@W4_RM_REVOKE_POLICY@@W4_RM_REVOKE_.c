/*
 * XREFs of ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002E9A8
 * Callers:
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180031C08 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800336D8 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180036440 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E810 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x180033904 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180033F14 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

__int64 __fastcall RmpActivityHostRevokeResourceSets(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  UCHAR v8; // dl
  TraceLoggingHProvider v9; // rcx
  BOOLEAN v10; // al
  int v11; // r8d
  unsigned int v12; // ebx
  int EffectivePriority; // eax
  unsigned __int64 v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-69h] BYREF
  __int64 v29; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v31; // [rsp+70h] [rbp-39h]
  unsigned int v32; // [rsp+78h] [rbp-31h]
  int v33; // [rsp+7Ch] [rbp-2Dh]
  char *v34; // [rsp+80h] [rbp-29h]
  unsigned int v35; // [rsp+88h] [rbp-21h]
  int v36; // [rsp+8Ch] [rbp-1Dh]
  unsigned int *v37; // [rsp+90h] [rbp-19h]
  int v38; // [rsp+98h] [rbp-11h]
  int v39; // [rsp+9Ch] [rbp-Dh]
  unsigned __int64 *v40; // [rsp+A0h] [rbp-9h]
  unsigned int v41; // [rsp+A8h] [rbp-1h]
  int v42; // [rsp+ACh] [rbp+3h]
  unsigned int *v43; // [rsp+B0h] [rbp+7h]
  int v44; // [rsp+B8h] [rbp+Fh]
  int v45; // [rsp+BCh] [rbp+13h]

  v28 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a1, 0LL, 0LL, &v28);
  v10 = TraceLoggingProviderEnabled(v9, v8, 0LL);
  v12 = v11 + 1;
  if ( v10 )
  {
    EffectivePriority = RmpActivityHostQueryEffectivePriority(
                          (struct _RM_ACTIVITY_HOST *)a1,
                          v28,
                          (enum ExecutionModel::Priority::Enum *)&v26);
    v14 = v26;
    if ( EffectivePriority < 0 )
      v14 = v12 + 100;
    if ( dword_18004D030 > v12 + 3 && TlgKeywordOn((TraceLoggingHProvider)v14, v12) )
    {
      v18 = *(_QWORD *)(a1 + 24);
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v29 = v18;
      v31 = &v29;
      v34 = &v25;
      v37 = &v26;
      v40 = &v28;
      v43 = &v27;
      v32 = v12 + 7;
      v25 = a2;
      v35 = v12;
      v26 = a3;
      v38 = (int)v16;
      v41 = v12 + 7;
      v27 = (unsigned int)v15;
      v44 = (int)v16;
      TlgWrite(v15, &unk_180041B83, v16, v17, 7u, &pData);
    }
  }
  result = RmpActivityHostGetFirstResourceSet(a1, v12);
  v20 = result;
  while ( v20 )
  {
    if ( (unsigned int)RmpPolicyTryGetRevokeAction(v20, a2, &v27)
      && (a2 != 2 || !v27 || (*(_BYTE *)(a1 + 666) & 0x10) == 0) )
    {
      ExecutionModel::ResourceSet::Revoke(v20, v27, a3, v28, a4);
    }
    v21 = *(_QWORD *)(v20 + 1368);
    v22 = 3LL * *(int *)(v20 + 1400);
    v23 = *(_QWORD *)(v20 + 1392);
    v20 = 0LL;
    v24 = v23 + 8 * (v22 + 77);
    result = v21 - 1368;
    if ( v21 != v24 )
      v20 = v21 - 1368;
  }
  return result;
}

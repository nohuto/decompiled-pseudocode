/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50
 * Callers:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000DE40 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 * Callees:
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000C2F0 (-get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA-AW4Enum@Priority@2@XZ.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18000F76C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18000FA08 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18000FBD4 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800128A0 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180012900 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012930 (-RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESO.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@W4Enum@Priority@5@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18001B2E8 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x1800337C8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  _QWORD *v2; // rdi
  __int64 *v3; // rbx
  __int64 v5; // rbx
  int MaximumPriortyToRelease; // eax
  __int64 v7; // r10
  __int64 v8; // r13
  int v9; // r15d
  __int64 v10; // rbx
  struct _RM_ACTIVITY_HOST *v11; // rsi
  const struct _TlgProvider_t *v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  const GUID *v15; // r8
  const GUID *v16; // r9
  char v17; // r12
  char v18; // r15
  unsigned int v19; // edx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  ExecutionModel::ResourceSet *v23; // rcx
  unsigned int (__fastcall *v24)(ExecutionModel::BaseResourceSet *__hidden); // rax
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v27[2]; // [rsp+42h] [rbp-BEh] BYREF
  int i; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Block[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[128]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v34[24]; // [rsp+120h] [rbp+20h] BYREF
  char v35; // [rsp+138h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  __int64 v37; // [rsp+190h] [rbp+90h]
  __int64 v38; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v39; // [rsp+1A0h] [rbp+A0h]
  __int64 v40; // [rsp+1A8h] [rbp+A8h]
  char *v41; // [rsp+1B0h] [rbp+B0h]
  __int64 v42; // [rsp+1B8h] [rbp+B8h]
  __int64 v43; // [rsp+1C0h] [rbp+C0h]
  __int64 v44; // [rsp+1C8h] [rbp+C8h]
  __int64 v45; // [rsp+1D0h] [rbp+D0h]
  __int64 v46; // [rsp+1D8h] [rbp+D8h]
  char *v47; // [rsp+1E0h] [rbp+E0h]
  __int64 v48; // [rsp+1E8h] [rbp+E8h]
  __int64 *v49; // [rsp+1F0h] [rbp+F0h]
  __int64 v50; // [rsp+1F8h] [rbp+F8h]

  v2 = (_QWORD *)((char *)a1 + 200);
  v3 = Block;
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v2 != v2 )
  {
    v5 = *((_QWORD *)a1 + 3);
    RmpPolicyGetUsageLimitsAndMetricsForAcquire(
      a1,
      (struct _RM_POLICY *)(v5 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v33,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v34);
    MaximumPriortyToRelease = ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(*(_QWORD *)(v5 + 1528));
    v8 = *(_QWORD *)(v7 + 104);
    v9 = MaximumPriortyToRelease;
    for ( i = MaximumPriortyToRelease; (_QWORD *)*v2 != v2; v9 = i )
    {
      v10 = *(_QWORD *)(*v2 - 88LL);
      v11 = *(struct _RM_ACTIVITY_HOST **)(v10 + 1392);
      v29 = 0LL;
      if ( v11 && !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v10 + 1408)) )
        RmpActivityHostQueryCommitDebt(v11, &v29);
      v13 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v10 + 1384));
      if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(v12, 1uLL) )
      {
        v38 = 8LL;
        v39 = &v29;
        v37 = v10 + 224;
        v41 = &v35;
        v43 = v10 + 248;
        v45 = v8 + 248;
        v47 = &v26;
        v31 = *(_QWORD *)(v10 + 1840);
        v49 = &v31;
        v40 = 8LL;
        v42 = 8LL;
        v44 = 8LL;
        v46 = 8LL;
        v26 = v13;
        v48 = v14;
        v50 = 8LL;
        TlgWrite((TraceLoggingHProvider)(v10 + 224), &unk_180042B76, v15, v16, 9u, &pData);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v10 + 1384) + 112LL), (int)Block, v10, v9, v32);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(v10, v29, 1LL, v33, v34, v32, v27, &v25) < 0 )
        break;
      v17 = v27[0];
      v18 = v25;
      v19 = !v27[0] && !v25;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v10, v19, v13 == 0);
      if ( v17 || v18 || v13 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v32);
        break;
      }
      if ( v11 )
      {
        v20 = *(_DWORD *)(v10 + 1404);
        if ( (v20 & 0x10) == 0 )
        {
          *(_DWORD *)(v10 + 1404) = v20 | 0x10;
          RmpActivityHostResourceSetsChanged(v11, 1u);
        }
        if ( RmpActivityHostCheckQueueWork(v11) )
          break;
      }
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v10, 1u);
    }
    v3 = (__int64 *)Block[0];
  }
  while ( v3 != Block )
  {
    v21 = (__int64 *)v3[1];
    v22 = *v3;
    *v21 = *v3;
    *(_QWORD *)(v22 + 8) = v21;
    v23 = (ExecutionModel::ResourceSet *)v3[2];
    if ( v23 )
    {
      v24 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)v23 + 16LL);
      if ( v24 == ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v23);
      }
      else if ( v24 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v23);
      }
      else
      {
        ((void (__fastcall *)(ExecutionModel::ResourceSet *, void *))v24)(v23, a2);
      }
    }
    operator delete(v3);
    v3 = (__int64 *)Block[0];
  }
  return 0LL;
}

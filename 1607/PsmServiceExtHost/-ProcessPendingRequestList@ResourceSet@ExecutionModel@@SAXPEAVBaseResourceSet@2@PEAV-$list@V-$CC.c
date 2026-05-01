/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     RmpPolicyGetUsageLimitsAndMetricsForAcquire @ 0x18000482C (RmpPolicyGetUsageLimitsAndMetricsForAcquire.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180007494 (RmpActivityHostQueryCommitDebt.c)
 *     ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000E400 (-get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA-AW4Enum@Priority@2@XZ.c)
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x1800111C8 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180012580 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@W4Enum@Priority@2@W45PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAVBaseResourceSet@2@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N8@Z @ 0x180012C6C (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_B.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x1800153B0 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     RmpPolicyInitializeRevokeContext @ 0x18001A588 (RmpPolicyInitializeRevokeContext.c)
 *     RmpResourceSetIsCommitSaveEligible @ 0x18001A608 (RmpResourceSetIsCommitSaveEligible.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpPolicyRevokeResourceSetsForAcquire @ 0x180034370 (RmpPolicyRevokeResourceSetsForAcquire.c)
 */

void __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(
        ExecutionModel::BaseResourceSet *this,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r13
  int MaximumPriortyToRelease; // eax
  _QWORD *v7; // rbx
  __int64 *v8; // rdi
  const struct _TlgProvider_t *v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // rsi
  __int64 v11; // rax
  __int64 (*v12)(void); // rax
  __int64 Id; // rax
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  __int64 v17; // rax
  __int64 (__fastcall *v18)(RmpRpsResourceSetCallback **); // rax
  DWORD TickCount; // eax
  int v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  int *v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  _BYTE v25[56]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v26[144]; // [rsp+B8h] [rbp-50h] BYREF
  char v27[8]; // [rsp+148h] [rbp+40h] BYREF
  char v28; // [rsp+150h] [rbp+48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v30; // [rsp+1B8h] [rbp+B0h]
  __int64 v31; // [rsp+1C0h] [rbp+B8h]
  __int64 v32; // [rsp+1C8h] [rbp+C0h]
  __int64 v33; // [rsp+1D0h] [rbp+C8h]
  char *v34; // [rsp+1D8h] [rbp+D0h]
  __int64 v35; // [rsp+1E0h] [rbp+D8h]
  __int64 *v36; // [rsp+1E8h] [rbp+E0h]
  __int64 v37; // [rsp+1F0h] [rbp+E8h]
  char *v38; // [rsp+1F8h] [rbp+F0h]
  __int64 v39; // [rsp+200h] [rbp+F8h]
  __int64 *v40; // [rsp+208h] [rbp+100h]
  int v41; // [rsp+210h] [rbp+108h]
  int v42; // [rsp+214h] [rbp+10Ch]

  v24 = 0LL;
  *(_QWORD *)v22 = v22;
  v23 = v22;
  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 224LL);
  v5 = v4 + 424;
  RmpPolicyGetUsageLimitsAndMetricsForAcquire(v4, v4 + 424, v26, (__int64)v27);
  MaximumPriortyToRelease = ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(*((_QWORD *)this + 3));
  v7 = (_QWORD *)*a2;
  v20[1] = MaximumPriortyToRelease;
  while ( v7 != a2 )
  {
    v8 = (__int64 *)v7[2];
    RmpPolicyRequestBufferInitialize(
      (const struct ExecutionModel::_ResourceInfo *)(v8 + 24),
      3u,
      (struct _RM_POLICY_REQUEST_BUFFER *)(v5 + 112));
    v10 = (struct _RM_ACTIVITY_HOST *)v8[175];
    if ( v10 && !(unsigned __int8)RmpResourceSetIsCommitSaveEligible(v8 + 177) )
      RmpActivityHostQueryCommitDebt((__int64)v10, (_QWORD *)(v5 + 1352));
    if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(v9, 1uLL) )
    {
      v31 = 8LL;
      v30 = v8 + 28;
      v33 = 8LL;
      v32 = v5 + 1352;
      v35 = 8LL;
      v34 = &v28;
      v36 = v8 + 31;
      v38 = (char *)this + 248;
      v11 = v8[171];
      v37 = 8LL;
      v39 = 8LL;
      v12 = *(__int64 (**)(void))(v11 + 64);
      if ( (char *)v12 == (char *)ExecutionModel::ResourceSet::GetId )
        Id = ExecutionModel::ResourceSet::GetId((ExecutionModel::ResourceSet *)(v8 + 171));
      else
        Id = v12();
      v42 = 0;
      v21 = Id;
      v40 = &v21;
      v41 = 8;
      TlgWrite(v14, &unk_180042A07, v15, v16, 8u, &pData);
    }
    RmpPolicyInitializeRevokeContext(v5, (int)v22, (int)v8, v8[175], v20[1], v25);
    if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(
                v5,
                (unsigned int *)(v5 + 112),
                *((_DWORD *)v8 + 340),
                1,
                (__int64)v26,
                (__int64)v27,
                this,
                (__int64)v25,
                v20,
                (_BYTE *)v20 + 1) < 0 )
      break;
    if ( LOWORD(v20[0]) )
    {
      RmpPolicyRevokeResourceSetsForAcquire(v25);
      break;
    }
    if ( v10 )
    {
      if ( (*((_BYTE *)v8 + 1412) & 0x10) == 0 )
      {
        TickCount = GetTickCount();
        *((_DWORD *)v8 + 353) |= 0x10u;
        *((_DWORD *)v8 + 481) = TickCount;
        RmpActivityHostResourceSetsChanged(v10, 1);
      }
      if ( (unsigned int)RmpActivityHostCheckQueueWork((__int64)v10) )
        break;
    }
    ExecutionModel::BaseResourceSet::ReassignResources(
      this,
      (struct _RM_POLICY_REQUEST_BUFFER *)(v5 + 112),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v27,
      (struct ExecutionModel::BaseResourceSet *)v8);
    v17 = *v8;
    *((_DWORD *)v8 + 338) = 2;
    v18 = *(__int64 (__fastcall **)(RmpRpsResourceSetCallback **))(v17 + 56);
    if ( v18 == ExecutionModel::ResourceSet::OnAcquired )
      ExecutionModel::ResourceSet::OnAcquired((RmpRpsResourceSetCallback **)v8);
    else
      v18((RmpRpsResourceSetCallback **)v8);
    v7 = (_QWORD *)*v7;
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64 **)v22);
}

/*
 * XREFs of RmpActivityHostCheckQueueWork @ 0x18000ADC0
 * Callers:
 *     RmpEnforcementWorkerSynchronize @ 0x180008AEC (RmpEnforcementWorkerSynchronize.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E860 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180046134 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpGpuMonitorDisableForHost @ 0x1800467C4 (RmpGpuMonitorDisableForHost.c)
 * Callees:
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DIGEST@@@Z @ 0x180006694 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@T_RM_HOST_STATE_DI.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x180006DA4 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000919C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800201A0 (RmpEnforcementArmWorkerForActivityHost.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     RmpEnforcementEmptySignalAbort @ 0x1800402D8 (RmpEnforcementEmptySignalAbort.c)
 */

__int64 __fastcall RmpActivityHostCheckQueueWork(__int64 a1)
{
  int v3; // r10d
  unsigned __int8 v4; // si
  int v5; // eax
  char v6; // di
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 Next; // rax
  __int64 v10; // rdi
  __int64 i; // r11
  char *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 j; // rcx
  int v18; // r10d
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  BOOL v23; // eax
  bool v24; // di
  char *v25; // rbp
  int v26; // r11d
  unsigned __int8 v27; // al
  _DWORD v28[3]; // [rsp+34h] [rbp-64h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int64 v32; // [rsp+58h] [rbp-40h]

  if ( *(int *)(a1 + 20) < 0 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(_BYTE *)(a1 + 780);
  if ( v3 || (v5 = *(_DWORD *)(a1 + 584), v5 == 2) )
  {
    v7 = 0;
    if ( v3 )
    {
      v7 = 2 * (v4 & 0x40);
    }
    else if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD *, _DWORD))(*((_QWORD *)RmSvcGlobals
                                                                                                  + 10)
                                                                                                + 192LL))(
                a1 + 512,
                *(unsigned int *)(a1 + 580),
                a1 + 48,
                *(unsigned int *)(a1 + 584),
                *(_QWORD *)(a1 + 24),
                v28,
                0) >= 0
           && v28[0] == 7 )
    {
      v7 = 128;
    }
    v29 = a1;
    v32 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v8 = *(_QWORD *)(a1 + 608);
    if ( v8 == a1 + 608 )
      v30 = 0LL;
    else
      v30 = v8 - 1384;
    Next = RmpActivityHostEnumerateResourceSetGetNext(&v29);
    v10 = 0x8800001000LL;
    for ( i = 0x11000002000LL; Next; Next = RmpActivityHostEnumerateResourceSetGetNext(&v29) )
    {
      if ( *(_DWORD *)(Next + 1352) == 2 || (*(_BYTE *)(Next + 1920) & 0x10) != 0 )
      {
        v12 = (char *)(Next + 1408);
        if ( (*(_BYTE *)(Next + 1432) & 2) == 0
          && ((v13 = *(int *)v12, (unsigned int)v13 > 0x28) || !_bittest64(&i, v13))
          || v12[26] < 0 )
        {
          v7 |= 0x40u;
        }
        if ( (v12[26] & 4) != 0 || (v14 = *(int *)v12, (unsigned int)v14 <= 0x27) && _bittest64(&v10, v14) )
        {
          v7 |= 5u;
        }
        else if ( !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)v12) )
        {
          v7 |= 3u;
        }
      }
    }
    v29 = a1;
    v15 = *(_DWORD *)(a1 + 40) == 1;
    v32 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v16 = *(_QWORD *)(a1 + 600);
    LODWORD(v32) = 1;
    if ( v15 )
      v30 = v16;
    else
      v31 = *(_QWORD *)(v16 + 24);
    for ( j = RmpActivityHostEnumerateResourceSetGetNext(&v29); j; j = RmpActivityHostEnumerateResourceSetGetNext(&v29) )
    {
      if ( (*(_BYTE *)(j + 1432) & 2) == 0
        && ((v20 = *(int *)(j + 1408), (unsigned int)v20 > 0x28) || !_bittest64(&v19, v20))
        || *(char *)(j + 1434) < 0 )
      {
        v7 |= 0x40u;
      }
      if ( (*(_BYTE *)(j + 1432) & 2) != 0
        || (v21 = *(int *)(j + 1408), (unsigned int)v21 <= 0x28) && _bittest64(&v19, v21) )
      {
        v7 |= 0x20u;
      }
      else if ( (*(_BYTE *)(j + 1434) & 4) != 0
             || (v22 = *(int *)(j + 1408), (unsigned int)v22 <= 0x27) && _bittest64(&v10, v22) )
      {
        v7 |= 0x18u;
      }
      else
      {
        v7 |= 8u;
      }
    }
    v23 = (v7 & 9) == 0 && (v7 & 0x80u) != 0;
    v6 = 0;
    if ( v18 == 1 )
    {
      v24 = (v7 & 0x20) != 0 && (v7 & 8) == 0 || (*(_BYTE *)(a1 + 776) & 8) != 0;
      v6 = v24 << 6;
    }
    if ( v23 || v18 == 1 && (v7 & 2) == 0 && ((v7 & 0x10) != 0 || (v7 & 0x20) != 0) )
    {
      v25 = (char *)RmSvcGlobals + 208;
      v6 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, a1, 0) | (v6 ^ (8 * v25[1368])) & 8 ^ v6;
      if ( !v26 )
        v6 |= RmpPolicyGetDesiredEmptyOptimizationsForHost((__int64)v25, a1);
      if ( (unsigned int)RmpPolicyIsHostCommitSaveEligible((__int64)v25, a1, v7) )
        v6 ^= (v6 ^ (16 * (*((_DWORD *)v25 + 343) >> 3))) & 0x10;
    }
  }
  else
  {
    v6 = 0;
    if ( v5 == 4 && (*(_BYTE *)(a1 + 776) & 8) != 0 )
      v6 = 64;
  }
  if ( (*(_BYTE *)(a1 + 776) & 1) == 0 && v4 != v6 )
    RmpEnforcementArmWorkerForActivityHost(a1);
  v27 = *(_BYTE *)(a1 + 781);
  if ( (*(_DWORD *)(a1 + 40) != 1 || ((v4 ^ (unsigned __int8)v6) & 0x40) == 0 && (v27 & 0x40) == 0)
    && ((v6 & 8) != 0 || ((v4 | v27) & 8) == 0)
    && ((v6 & 0x10) != 0 || ((v4 | v27) & 0x10) == 0) )
  {
    return 0LL;
  }
  if ( (v27 & 0x27) != 0 )
    RmpEnforcementEmptySignalAbort(a1);
  return 1LL;
}

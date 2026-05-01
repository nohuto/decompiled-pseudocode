/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000C2F0 (-get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA-AW4Enum@Priority@2@XZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18000F76C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18000FBD4 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180010C50 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??$emplace@AEAPEAVBaseResourceSet@ExecutionModel@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@AEAPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180010D34 (--$emplace@AEAPEAVBaseResourceSet@ExecutionModel@@@-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x1800128A0 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180012900 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012930 (-RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESO.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ @ 0x18001B0E0 (-RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x1800337C8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(__int64 a1, int a2, bool *a3)
{
  struct _RM_ACTIVITY_HOST *v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned int v8; // r12d
  int v9; // r13d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int MaximumPriortyToRelease; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  char v17; // r15
  bool v18; // di
  _QWORD *i; // r8
  struct _RM_ACTIVITY_HOST *v20; // rbx
  const struct _TlgProvider_t *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  ExecutionModel::BaseResourceSet *v25; // rcx
  __int64 v26; // xmm1_8
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  unsigned int UserDataCount; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+50h] [rbp-B0h] BYREF
  char v33; // [rsp+51h] [rbp-AFh] BYREF
  char v34; // [rsp+52h] [rbp-AEh] BYREF
  char v35; // [rsp+53h] [rbp-ADh] BYREF
  char v36; // [rsp+54h] [rbp-ACh] BYREF
  char v37; // [rsp+55h] [rbp-ABh] BYREF
  char v38; // [rsp+56h] [rbp-AAh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-A4h]
  char v41; // [rsp+60h] [rbp-A0h] BYREF
  char v42; // [rsp+61h] [rbp-9Fh] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  bool *v46; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h]
  _QWORD v49[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-48h] BYREF
  struct _RM_ACTIVITY_HOST *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v56; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v58; // [rsp+100h] [rbp+0h] BYREF
  __int64 v59; // [rsp+108h] [rbp+8h] BYREF
  _QWORD *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  char v63; // [rsp+128h] [rbp+28h]
  char v64; // [rsp+12Ch] [rbp+2Ch]
  int v65; // [rsp+130h] [rbp+30h]
  char v66[8]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v67[128]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v68[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v69; // [rsp+1D8h] [rbp+D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp+110h] BYREF
  void *v71; // [rsp+220h] [rbp+120h]
  int v72; // [rsp+228h] [rbp+128h]
  int v73; // [rsp+22Ch] [rbp+12Ch]
  __int64 *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  __int64 *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  unsigned __int64 *v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  char *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  __int64 *v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  __int64 v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v87; // [rsp+2B0h] [rbp+1B0h]
  int v88; // [rsp+2B8h] [rbp+1B8h]
  int v89; // [rsp+2BCh] [rbp+1BCh]
  int *v90; // [rsp+2C0h] [rbp+1C0h]
  __int64 v91; // [rsp+2C8h] [rbp+1C8h]
  char *v92; // [rsp+2D0h] [rbp+1D0h]
  __int64 v93; // [rsp+2D8h] [rbp+1D8h]
  char *v94; // [rsp+2E0h] [rbp+1E0h]
  __int64 v95; // [rsp+2E8h] [rbp+1E8h]
  char *v96; // [rsp+2F0h] [rbp+1F0h]
  __int64 v97; // [rsp+2F8h] [rbp+1F8h]
  int *v98; // [rsp+300h] [rbp+200h]
  __int64 v99; // [rsp+308h] [rbp+208h]
  int *v100; // [rsp+310h] [rbp+210h]
  __int64 v101; // [rsp+318h] [rbp+218h]
  char *v102; // [rsp+320h] [rbp+220h]
  __int64 v103; // [rsp+328h] [rbp+228h]
  char *v104; // [rsp+330h] [rbp+230h]
  __int64 v105; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+350h] [rbp+250h] BYREF
  __int64 *v107; // [rsp+370h] [rbp+270h]
  __int64 v108; // [rsp+378h] [rbp+278h]
  __int64 *v109; // [rsp+380h] [rbp+280h]
  __int64 v110; // [rsp+388h] [rbp+288h]

  v3 = *(struct _RM_ACTIVITY_HOST **)(a1 + 1392);
  v4 = *(_QWORD *)(a1 + 184);
  v49[0] = v49;
  v46 = a3;
  v49[1] = v49;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = 0;
  v52 = v3;
  v49[2] = 0LL;
  RmpPolicyGetUsageLimitsAndMetricsForAcquire(
    *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1384) + 112LL),
    (struct _RM_POLICY *)(*(_QWORD *)(v6 + 208) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v67,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v68);
  v45 = 0LL;
  if ( v3 && !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(a1 + 1408)) )
    RmpActivityHostQueryCommitDebt(v3, &v45);
  v9 = 1;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
  {
    v57 = *(_QWORD *)(a1 + 1840);
    v74 = &v57;
    v58 = *(_QWORD *)(a1 + 1528);
    v76 = &v58;
    v78 = &v45;
    v80 = &v69;
    v50 = *(_QWORD *)(a1 + 1552);
    v82 = &v50;
    v84 = v4 + 248;
    v75 = 8LL;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 8LL;
    v83 = 8LL;
    v85 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180042EFF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v71 = &unk_180042F0A;
    UserData.Reserved = 2;
    v72 = 118;
    v73 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  v10 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(a1 + 1384));
  v11 = *(_QWORD *)(a1 + 1384);
  v40 = v10;
  v12 = *(_QWORD *)(v11 + 112);
  MaximumPriortyToRelease = ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(*(_QWORD *)(a1 + 24));
  memset_0(&v59, 0, 0x30uLL);
  v59 = a1;
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v49);
  v60 = v49;
  v62 = v12 + 144;
  v61 = v12;
  v65 = MaximumPriortyToRelease;
  v14 = ExecutionModel::ResourceSet::EvaluateResourceRequest(a1, v45, a2, (__int64)v67, v68, (__int64)&v59, &v32, &v33);
  v39 = v14;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 )
  {
    v15 = v40;
    if ( (qword_18004D048 & 9) == qword_18004D048 )
    {
      v91 = 4LL;
      v90 = &v39;
      v34 = v32;
      v92 = &v34;
      v35 = v33;
      v94 = &v35;
      v96 = &v36;
      v93 = 1LL;
      v95 = 1LL;
      v36 = v40;
      v97 = 1LL;
      v16 = v60[2];
      v98 = &v43;
      v43 = v16;
      v99 = 4LL;
      LODWORD(v16) = *(_DWORD *)(v62 + 40);
      v100 = &v44;
      v37 = v63;
      v102 = &v37;
      v38 = v64;
      v104 = &v38;
      v44 = v16;
      v101 = 4LL;
      v103 = 1LL;
      v105 = 1LL;
      *(_DWORD *)&v56.Level = 4;
      v86.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&v56.Id = ((unsigned int)&unk_180042DF8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v56.Keyword = 9LL;
      v86.Size = *(unsigned __int16 *)off_18004D038;
      v87 = &unk_180042E03;
      v86.Reserved = 2;
      v88 = 185;
      v89 = 1;
      EventWriteTransfer(RegHandle, &v56, 0LL, 0LL, 0xAu, &v86);
      v14 = v39;
    }
  }
  else
  {
    v15 = v40;
  }
  if ( v14 < 0 )
    goto LABEL_50;
  v17 = v33;
  v18 = v32 || v33 || v15;
  v51 = a1;
  for ( i = *(_QWORD **)(v4 + 160);
        i != (_QWORD *)(v4 + 160) && *(_DWORD *)(i[2] + 1360LL) < *(_DWORD *)(a1 + 1360);
        i = (_QWORD *)*i )
  {
    ;
  }
  if ( !*(_QWORD *)utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ExecutionModel::BaseResourceSet * &>(
                     v4 + 160,
                     v66,
                     i,
                     &v51) )
  {
    v39 = -2147024882;
LABEL_50:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0LL);
    v8 = v39;
    goto LABEL_34;
  }
  v20 = v52;
  v39 = 0;
  if ( v52 )
  {
    if ( v18 )
      goto LABEL_39;
    *(_DWORD *)(a1 + 1352) = 2;
    RmpActivityHostResourceSetsChanged(v20, 1u);
    if ( v46 && RmpActivityHostCheckQueueWork(v20) )
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v21, 1uLL) )
      {
        v53 = *((_QWORD *)v20 + 3);
        v107 = &v53;
        v54 = *(_QWORD *)(a1 + 1840);
        v109 = &v54;
        v108 = 8LL;
        v110 = 8LL;
        TlgWrite(v28, &unk_1800431B2, v29, v30, 4u, &pData);
      }
      *(_DWORD *)(a1 + 1404) |= 0x10u;
      v18 = 1;
    }
    *(_DWORD *)(a1 + 1352) = 1;
  }
  if ( v18 )
  {
LABEL_39:
    *(_DWORD *)(a1 + 1848) = RmpUtilQueryUnbiasedInterruptTimeMs();
    if ( v32 || v17 )
      v9 = 0;
    ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)a1, v9, v40 == 0);
    if ( v32 || v17 )
      RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v59);
    goto LABEL_31;
  }
  v22 = (_QWORD *)(*(_QWORD *)(a1 + 1384) + 128LL);
  LODWORD(v47) = -1;
  *((_QWORD *)&v47 + 1) = 0LL;
  LODWORD(v48) = 101;
  WORD2(v48) = 0;
  v23 = *v22;
  v24 = (_QWORD *)v22[1];
  if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
    __fastfail(3u);
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  *v22 = 0LL;
  v22[1] = 0LL;
  v25 = *(ExecutionModel::BaseResourceSet **)(a1 + 184);
  v26 = *(_QWORD *)(a1 + 1560);
  UserDataCount = *(_DWORD *)(a1 + 8);
  v47 = *(_OWORD *)(a1 + 1544);
  v48 = v26;
  ExecutionModel::BaseResourceSet::RecursiveVisit(
    v25,
    1,
    1u,
    (unsigned int *)&v47,
    UserDataCount,
    1,
    &v42,
    &v41,
    0LL,
    a1);
  *(_DWORD *)(a1 + 1352) = 2;
LABEL_31:
  if ( v46 )
    *v46 = v18;
  v39 = 0;
LABEL_34:
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v49);
  return v8;
}

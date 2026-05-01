/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@W4Enum@PendType@2@PEAU_RM_ACTIVATOR@@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x1800158E0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     RmpActivityHostQueryCommitDebt @ 0x180007494 (RmpActivityHostQueryCommitDebt.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     MemUtilQueryMaxCommit @ 0x180008AC0 (MemUtilQueryMaxCommit.c)
 *     RmpPolicyComputeUsageLimits @ 0x180008C00 (RmpPolicyComputeUsageLimits.c)
 *     ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000E400 (-get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA-AW4Enum@Priority@2@XZ.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180010720 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x1800111C8 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180012C0C (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@W4Enum@Priority@2@W45PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAVBaseResourceSet@2@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N8@Z @ 0x180012C6C (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_B.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180014CC0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x1800153B0 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpPolicyRevokeResourceSetsForAcquire @ 0x180034370 (RmpPolicyRevokeResourceSetsForAcquire.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(
        __int64 a1,
        struct ExecutionModel::_ResourceInfo *a2,
        int a3,
        bool *a4,
        ExecutionModel::ResourceSet *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  ULONG v10; // r14d
  unsigned __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // r10
  __int64 v16; // rdx
  unsigned __int16 v17; // r8
  __int64 v18; // rcx
  struct ExecutionModel::_ResourceInfo *v19; // rsi
  struct _RM_POLICY_REQUEST_BUFFER *v20; // r15
  ExecutionModel::ResourceSet *v21; // rcx
  unsigned __int64 (__fastcall *v22)(ExecutionModel::ResourceSet *); // rax
  __int64 Id; // rax
  int MaximumPriortyToRelease; // esi
  _QWORD *v25; // rdx
  ExecutionModel::BaseResourceSet *v26; // rsi
  int v27; // edx
  __int64 v28; // rcx
  char v29; // r13
  bool v30; // r14
  __int64 (__fastcall *v31)(ExecutionModel::ResourceSet *); // rax
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(ExecutionModel::ResourceSet *); // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  const struct _TlgProvider_t *v39; // rcx
  __int64 (*v41)(void); // rax
  __int64 v42; // rax
  const struct _TlgProvider_t *v43; // rcx
  const GUID *v44; // r8
  const GUID *v45; // r9
  struct ExecutionModel::_ResourceInfo *v46; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // rax
  char v49; // [rsp+50h] [rbp-B0h] BYREF
  char v50; // [rsp+51h] [rbp-AFh] BYREF
  char v51; // [rsp+52h] [rbp-AEh] BYREF
  char v52; // [rsp+53h] [rbp-ADh] BYREF
  char v53; // [rsp+54h] [rbp-ACh] BYREF
  char v54; // [rsp+55h] [rbp-ABh] BYREF
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  int v56; // [rsp+5Ch] [rbp-A4h]
  int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch] BYREF
  int v59; // [rsp+68h] [rbp-98h] BYREF
  ExecutionModel::BaseResourceSet *v60; // [rsp+70h] [rbp-90h]
  _QWORD v61[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+90h] [rbp-70h] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  struct ExecutionModel::_ResourceInfo *v65; // [rsp+A0h] [rbp-60h]
  bool *v66; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v68; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR v70; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v71[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  char v74; // [rsp+100h] [rbp+0h]
  char v75; // [rsp+104h] [rbp+4h]
  int v76; // [rsp+108h] [rbp+8h]
  _BYTE v77[144]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v78; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v79; // [rsp+1B0h] [rbp+B0h]
  __int128 v80; // [rsp+1C0h] [rbp+C0h]
  __int128 v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+E0h]
  _OWORD v83[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v84; // [rsp+230h] [rbp+130h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2E0h] [rbp+1E0h] BYREF
  void *v87; // [rsp+2F0h] [rbp+1F0h]
  int v88; // [rsp+2F8h] [rbp+1F8h]
  int v89; // [rsp+2FCh] [rbp+1FCh]
  __int64 *v90; // [rsp+300h] [rbp+200h]
  __int64 v91; // [rsp+308h] [rbp+208h]
  char *v92; // [rsp+310h] [rbp+210h]
  __int64 v93; // [rsp+318h] [rbp+218h]
  __int64 v94; // [rsp+320h] [rbp+220h]
  __int64 v95; // [rsp+328h] [rbp+228h]
  char *v96; // [rsp+330h] [rbp+230h]
  __int64 v97; // [rsp+338h] [rbp+238h]
  char *v98; // [rsp+340h] [rbp+240h]
  __int64 v99; // [rsp+348h] [rbp+248h]
  char *v100; // [rsp+350h] [rbp+250h]
  __int64 v101; // [rsp+358h] [rbp+258h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+360h] [rbp+260h] BYREF
  void *v103; // [rsp+370h] [rbp+270h]
  int v104; // [rsp+378h] [rbp+278h]
  int v105; // [rsp+37Ch] [rbp+27Ch]
  int *v106; // [rsp+380h] [rbp+280h]
  __int64 v107; // [rsp+388h] [rbp+288h]
  char *v108; // [rsp+390h] [rbp+290h]
  __int64 v109; // [rsp+398h] [rbp+298h]
  char *v110; // [rsp+3A0h] [rbp+2A0h]
  __int64 v111; // [rsp+3A8h] [rbp+2A8h]
  int *v112; // [rsp+3B0h] [rbp+2B0h]
  __int64 v113; // [rsp+3B8h] [rbp+2B8h]
  int *v114; // [rsp+3C0h] [rbp+2C0h]
  __int64 v115; // [rsp+3C8h] [rbp+2C8h]
  char *v116; // [rsp+3D0h] [rbp+2D0h]
  __int64 v117; // [rsp+3D8h] [rbp+2D8h]
  char *v118; // [rsp+3E0h] [rbp+2E0h]
  __int64 v119; // [rsp+3E8h] [rbp+2E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3F0h] [rbp+2F0h] BYREF
  unsigned __int64 *v121; // [rsp+410h] [rbp+310h]
  __int64 v122; // [rsp+418h] [rbp+318h]
  __int64 *v123; // [rsp+420h] [rbp+320h]
  __int64 v124; // [rsp+428h] [rbp+328h]

  v61[0] = v61;
  v56 = a3;
  v61[1] = v61;
  v6 = 0;
  v60 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)a5 + 23);
  v57 = *((_DWORD *)a5 + 340);
  v7 = *((_QWORD *)a5 + 3);
  v65 = a2;
  v62 = 0LL;
  v66 = a4;
  v8 = *(_QWORD *)(v7 + 224);
  v9 = v8 + 424;
  memset_0(v77, 0, 0x88uLL);
  v10 = MemUtilQueryMaxCommit(&v68);
  if ( v10 )
    v11 = v67;
  else
    v11 = v68;
  RmpSystemMemoryMetricsQuery(v83);
  if ( v10 || *(_QWORD *)&v83[0] > v11 )
    v11 = *(_QWORD *)&v83[0];
  RmpPolicyComputeUsageLimits(v8 + 424, v8 + 488, (__int64)v83, v11, (__int64)v77);
  v78 = v83[0];
  v80 = v83[2];
  v79 = v83[1];
  v82 = v84;
  v81 = v83[3];
  RmpPolicyPopulateActivityHostMetrics(v8, 0, v8 + 1784, 0x43u, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v12 = *(_DWORD *)(v8 + 1820);
  if ( v12 )
  {
    v13 = v79;
    v14 = (__int64 *)(*(_QWORD *)(v8 + 1784) + 40LL);
    v15 = v12;
    do
    {
      v16 = v14[1];
      v17 = *(_WORD *)(v16 + 666);
      if ( (v17 & 0x20) != 0
        && ((*(_BYTE *)(*(_QWORD *)(v16 + 40) + 1840LL) & 0x10) != 0 || (*(_WORD *)(v16 + 664) & v17 & 4) != 0)
        && (v17 & 0x40) != 0 )
      {
        v18 = *(v14 - 5);
      }
      else
      {
        v18 = *v14;
      }
      v13 += v18;
      v14 += 8;
      *(_QWORD *)&v79 = v13;
      --v15;
    }
    while ( v15 );
  }
  v19 = v65;
  v20 = (struct _RM_POLICY_REQUEST_BUFFER *)(v8 + 536);
  LODWORD(v82) = v82 | 1;
  RmpPolicyRequestBufferInitialize(v65, 3u, (struct _RM_POLICY_REQUEST_BUFFER *)(v9 + 112));
  if ( a1
    && (!ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::ResourceSet *)((char *)a5 + 1416))
     || *((char *)a5 + 1458) < 0) )
  {
    RmpActivityHostQueryCommitDebt(a1, (_QWORD *)(v9 + 1352));
  }
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
  {
    v21 = (ExecutionModel::ResourceSet *)((char *)a5 + 1368);
    v22 = *(unsigned __int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*((_QWORD *)a5 + 171) + 64LL);
    if ( v22 == ExecutionModel::ResourceSet::GetId )
      Id = ExecutionModel::ResourceSet::GetId(v21);
    else
      Id = ((__int64 (__fastcall *)(ExecutionModel::ResourceSet *, unsigned __int64 (__fastcall *)(ExecutionModel::ResourceSet *)))v22)(
             v21,
             ExecutionModel::ResourceSet::GetId);
    v63 = Id;
    v90 = &v63;
    v92 = (char *)v19 + 32;
    v94 = v9 + 1352;
    v96 = (char *)&v78 + 8;
    v98 = (char *)v19 + 56;
    v91 = 8LL;
    v100 = (char *)v60 + 248;
    v93 = 8LL;
    v95 = 8LL;
    v97 = 8LL;
    v99 = 8LL;
    v101 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180042D73 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v87 = &unk_180042D7E;
    UserData.Reserved = 2;
    v88 = 118;
    v89 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  MaximumPriortyToRelease = ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(*((_QWORD *)a5 + 3));
  memset_0(v71, 0, 0x30uLL);
  v71[0] = a5;
  v71[1] = a1;
  while ( 1 )
  {
    v25 = (_QWORD *)v61[0];
    if ( (_QWORD *)v61[0] == v61 )
      break;
    v47 = *(_QWORD **)(v61[0] + 8LL);
    v48 = *(_QWORD *)v61[0];
    *v47 = *(_QWORD *)v61[0];
    *(_QWORD *)(v48 + 8) = v47;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
      (__int64)v47,
      v25);
  }
  v72 = v61;
  v76 = MaximumPriortyToRelease;
  v26 = v60;
  v62 = 0LL;
  v73 = v9 + 1360;
  v27 = ExecutionModel::ResourceSet::EvaluateResourceRequest(
          v9,
          (unsigned int *)(v9 + 112),
          v57,
          v56,
          (__int64)v77,
          (__int64)&v78,
          v60,
          (__int64)v71,
          &v49,
          &v50);
  v55 = v27;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
  {
    v107 = 4LL;
    v106 = &v55;
    v51 = v49;
    v108 = &v51;
    v52 = v50;
    v110 = &v52;
    v109 = 1LL;
    v111 = 1LL;
    v28 = v72[2];
    v112 = &v58;
    v58 = v28;
    v113 = 4LL;
    LODWORD(v28) = *(_DWORD *)(v73 + 40);
    v114 = &v59;
    v53 = v74;
    v116 = &v53;
    v54 = v75;
    v118 = &v54;
    v59 = v28;
    v115 = 4LL;
    v117 = 1LL;
    v119 = 1LL;
    *(_DWORD *)&v70.Level = 4;
    v102.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&v70.Id = ((unsigned int)&unk_1800427EA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v70.Keyword = 9LL;
    v102.Size = *(unsigned __int16 *)off_18004C038;
    v103 = &unk_1800427F5;
    v102.Reserved = 2;
    v104 = 166;
    v105 = 1;
    EventWriteTransfer(RegHandle, &v70, 0LL, 0LL, 9u, &v102);
    v27 = v55;
  }
  if ( v27 < 0 )
    goto LABEL_73;
  v29 = v49;
  v30 = v49 || v50;
  v55 = ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)v26 + 160, a5);
  if ( v55 < 0 )
  {
    v55 = -2147024882;
LABEL_73:
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)a5 + 32LL))(a5, 0LL);
    v6 = v55;
    goto LABEL_53;
  }
  if ( a1 )
  {
    if ( !*((_QWORD *)a5 + 175) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) < 1 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = -1073741675;
        pExceptionRecord.ExceptionFlags = 1;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      v29 = v49;
      *((_QWORD *)a5 + 175) = a1;
    }
    v31 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a5 + 8LL);
    if ( v31 == ExecutionModel::ResourceSet::AddRef )
      ExecutionModel::ResourceSet::AddRef(a5);
    else
      v31(a5);
    v32 = a1 + 616;
    v33 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a5 + 8LL);
    if ( v33 == ExecutionModel::ResourceSet::AddRef )
      ExecutionModel::ResourceSet::AddRef(a5);
    else
      v33(a5);
    v34 = *(_QWORD *)v32;
    v35 = (_QWORD *)((char *)a5 + 1376);
    if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
      __fastfail(3u);
    *v35 = v34;
    *((_QWORD *)a5 + 173) = v32;
    *(_QWORD *)(v34 + 8) = v35;
    *(_QWORD *)v32 = v35;
    ++*(_DWORD *)(a1 + 632);
    *((_DWORD *)a5 + 352) = 0;
    if ( v30 )
      goto LABEL_64;
    *((_DWORD *)a5 + 338) = 2;
    RmpActivityHostUpdateDigests(a1, 1LL);
    RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)a1, 1u);
    QueryUnbiasedInterruptTime((PULONGLONG)(a1 + 1104));
    if ( (unsigned int)RmpActivityHostIsRevocable(a1, *(_QWORD *)(a1 + 40), v36, v37) )
      SetEvent(*(HANDLE *)(v38 + 368));
    if ( v66 && (unsigned int)RmpActivityHostCheckQueueWork(a1) )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v39, 1uLL) )
      {
        v67 = *(_QWORD *)(a1 + 24);
        v122 = 8LL;
        v121 = &v67;
        v41 = *(__int64 (**)(void))(*((_QWORD *)a5 + 171) + 64LL);
        if ( (char *)v41 == (char *)ExecutionModel::ResourceSet::GetId )
          v42 = ExecutionModel::ResourceSet::GetId((ExecutionModel::ResourceSet *)((char *)a5 + 1368));
        else
          v42 = v41();
        v64 = v42;
        v123 = &v64;
        v124 = 8LL;
        TlgWrite(v43, &unk_1800426C0, v44, v45, 4u, &pData);
      }
      *((_DWORD *)a5 + 353) |= 0x10u;
      v30 = 1;
    }
    v26 = v60;
    *((_DWORD *)a5 + 338) = 1;
  }
  if ( v30 )
  {
LABEL_64:
    v46 = v65;
    *((_OWORD *)a5 + 12) = *(_OWORD *)v65;
    *((_QWORD *)a5 + 26) = *((_QWORD *)v46 + 2);
    *(_OWORD *)((char *)a5 + 216) = *(_OWORD *)((char *)v46 + 24);
    *((_QWORD *)a5 + 29) = *((_QWORD *)v46 + 5);
    *((_OWORD *)a5 + 15) = *((_OWORD *)v46 + 3);
    *((_QWORD *)a5 + 32) = *((_QWORD *)v46 + 8);
    if ( v29 || v50 )
      RmpPolicyRevokeResourceSetsForAcquire(v71);
    goto LABEL_50;
  }
  ExecutionModel::BaseResourceSet::ReassignResources(v26, v20, (struct _RM_SYSTEM_MEMORY_METRICS *)&v78, a5);
LABEL_50:
  if ( v66 )
    *v66 = v30;
  v55 = 0;
LABEL_53:
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v61);
  return v6;
}

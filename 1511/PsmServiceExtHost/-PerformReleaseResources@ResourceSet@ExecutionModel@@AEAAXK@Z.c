/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0
 * Callers:
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x18000A0A0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E6E0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x1800091D0 (-RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionMo.c)
 *     RmpActivityHostOnImportanceChange @ 0x180009400 (RmpActivityHostOnImportanceChange.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E4CC (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E560 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z @ 0x18000F650 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitLevel@@@Z @ 0x18000F6B0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitL.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800103D0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800183F0 (-SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTIN.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     RmpEmptyWorkerCleanup @ 0x18001BC5C (RmpEmptyWorkerCleanup.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180020B18 (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DD2C (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x180040168 (RmpEnforcementApplyLimitsProcessHost.c)
 *     RmpActivityHostComputeCommitEstimate @ 0x180040CBC (RmpActivityHostComputeCommitEstimate.c)
 *     RmpActivityHostOnGpuMonitoredResourceSetCountChange @ 0x180041108 (RmpActivityHostOnGpuMonitoredResourceSetCountChange.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004567C (-LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v4; // rdi
  struct ExecutionModel::IResourceSet *v5; // rdx
  bool v6; // zf
  unsigned int (__fastcall *v7)(ExecutionModel::ResourceSet *__hidden); // r15
  int v8; // eax
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  ExecutionModel::ResourceSet ***v13; // rsi
  ExecutionModel::ResourceSet **v14; // rbx
  unsigned int (__fastcall *v15)(ExecutionModel::ResourceSet *__hidden); // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 **v18; // rdi
  __int64 **v19; // rbx
  struct IUnknown **v20; // r12
  __int64 v21; // rax
  __int64 *v22; // r12
  __int64 v23; // rbx
  ExecutionModel::ResourceSet **v24; // rbx
  ExecutionModel::ResourceSet **v25; // rdi
  ExecutionModel::ResourceSet **v26; // rcx
  ExecutionModel::ResourceSet *v27; // rax
  ExecutionModel::ResourceSet *v28; // rsi
  __int64 v29; // rdi
  int v30; // ebx
  __int64 v31; // rax
  struct ExecutionModel::ResourceSet *i; // rax
  ExecutionModel::ResourceManager *v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rbx
  __int64 v36; // rcx
  int v37; // ecx
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // r9
  unsigned int (__fastcall *v43)(ExecutionModel::ResourceSet *__hidden); // r11
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rsi
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rax
  int v50; // ecx
  __int64 (__fastcall *v51)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *); // rdi
  int v52; // eax
  unsigned int v53; // ecx
  unsigned __int64 v54; // rsi
  unsigned int v55; // r12d
  ExecutionModel::ResourceManager *v56; // rbx
  __int64 (__fastcall *v57)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64); // rdi
  void (__fastcall *v58)(_QWORD, unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden), _QWORD); // rdi
  unsigned int (__fastcall *v59)(ExecutionModel::ResourceSet *__hidden); // rbx
  __int64 v60; // rdi
  int v61; // eax
  ExecutionModel::ResourceSet **v62; // rdi
  ExecutionModel::ResourceSet **v63; // rcx
  ExecutionModel::ResourceSet *v64; // rax
  ExecutionModel::ResourceSet *v65; // r12
  unsigned int (__fastcall *v66)(ExecutionModel::ResourceSet *__hidden); // r13
  struct _TP_WORK *v67; // rcx
  __int64 *v68; // r8
  ExecutionModel::ResourceSet **v69; // rdx
  ExecutionModel::ResourceSet **v70; // rcx
  ExecutionModel::ResourceSet *v71; // rbx
  unsigned int (__fastcall *v72)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v73; // rdi
  _QWORD *v74; // rax
  void *v75; // rcx
  void *v76; // rcx
  int v77; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+48h] [rbp-B8h]
  unsigned int (__fastcall *v79)(ExecutionModel::ResourceSet *__hidden); // [rsp+50h] [rbp-B0h] BYREF
  int v80; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v81; // [rsp+5Ch] [rbp-A4h]
  int v82; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v83; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v84; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR v90; // [rsp+98h] [rbp-68h] BYREF
  ExecutionModel::ResourceSet *v91; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-50h] BYREF
  ExecutionModel::ResourceSet *v93; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v94; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v99; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v100[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v101[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v102[3]; // [rsp+140h] [rbp+40h] BYREF
  int v103; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+160h] [rbp+60h] BYREF
  void *v105; // [rsp+170h] [rbp+70h]
  int v106; // [rsp+178h] [rbp+78h]
  int v107; // [rsp+17Ch] [rbp+7Ch]
  ExecutionModel::ResourceSet **v108; // [rsp+180h] [rbp+80h]
  __int64 v109; // [rsp+188h] [rbp+88h]
  int *v110; // [rsp+190h] [rbp+90h]
  __int64 v111; // [rsp+198h] [rbp+98h]
  int *v112; // [rsp+1A0h] [rbp+A0h]
  __int64 v113; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v115; // [rsp+1C0h] [rbp+C0h]
  int v116; // [rsp+1C8h] [rbp+C8h]
  int v117; // [rsp+1CCh] [rbp+CCh]
  __int64 *v118; // [rsp+1D0h] [rbp+D0h]
  __int64 v119; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v120; // [rsp+1E0h] [rbp+E0h]
  __int64 v121; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *v122; // [rsp+1F0h] [rbp+F0h]
  __int64 v123; // [rsp+1F8h] [rbp+F8h]
  char *v124; // [rsp+200h] [rbp+100h]
  __int64 v125; // [rsp+208h] [rbp+108h]
  _OWORD *v126; // [rsp+210h] [rbp+110h]
  __int64 v127; // [rsp+218h] [rbp+118h]
  unsigned __int64 *v128; // [rsp+220h] [rbp+120h]
  __int64 v129; // [rsp+228h] [rbp+128h]

  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
    *((ExecutionModel::ResourceManager **)this + 3),
    this,
    0LL);
  v4 = *((_QWORD *)this + 228);
  if ( v4 )
  {
    v73 = (ExecutionModel::ResourceSet *)(v4 - 1368);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v73 + 8LL))(v73);
    ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(v73, 0);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v73 + 16LL))(v73);
  }
  v5 = (struct ExecutionModel::IResourceSet *)*((_QWORD *)this + 226);
  if ( v5 )
    ExecutionModel::ResourceManager::ResetResourceSetPriority(*((ExecutionModel::ResourceManager **)this + 3), v5);
  if ( (*((_BYTE *)this + 1356) & 1) != 0 && *((_DWORD *)this + 338) )
    ExecutionModel::ResourceSet::LogRevocationEnd(this);
  v6 = *((_BYTE *)this + 12) == 0;
  v7 = (unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden))*((_QWORD *)this + 175);
  v79 = v7;
  if ( !v6 && (a2 & 1) == 0 )
  {
    *((_QWORD *)v7 + 106) += *((_QWORD *)this + 183);
    *((_QWORD *)v7 + 104) += *((_QWORD *)this + 219);
    *((_QWORD *)v7 + 105) += *((_QWORD *)this + 182);
  }
  v8 = *((_DWORD *)this + 338);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v9 = 0;
      v10 = 1LL;
      v11 = 0LL;
      do
      {
        v12 = *(_QWORD *)((char *)this + v11 + 200);
        if ( v12 )
        {
          if ( (v10 & *((_QWORD *)this + 168)) == 0 )
          {
            if ( v9 == 2 )
              ExecutionModel::ResourceManager::ReplenishIoCounterPool(
                *((ExecutionModel::ResourceManager **)this + 3),
                *(_QWORD *)((char *)this + v11 + 200));
            else
              *(_QWORD *)(*((_QWORD *)this + 23) + v11 + 200) += v12;
          }
          *(_QWORD *)((char *)this + v11 + 200) = 0LL;
        }
        ++v9;
        v10 = __ROL8__(v10, 1);
        v11 += 24LL;
      }
      while ( v9 < 48 );
    }
    *((_DWORD *)this + 338) = 0;
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
    v13 = (ExecutionModel::ResourceSet ***)(*((_QWORD *)this + 23) + 160LL);
    v14 = *v13;
    while ( v14 != (ExecutionModel::ResourceSet **)v13 )
    {
      if ( v14[2] == this )
      {
        v62 = v14;
        v14 = (ExecutionModel::ResourceSet **)*v14;
        v63 = (ExecutionModel::ResourceSet **)v62[1];
        v64 = *v62;
        *v63 = *v62;
        *((_QWORD *)v64 + 1) = v63;
        v65 = v62[2];
        if ( v65 )
        {
          v66 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v65 + 16LL);
          if ( v66 == ExecutionModel::ResourceSet::Release )
            ExecutionModel::ResourceSet::Release(v62[2]);
          else
            v66(v62[2]);
        }
        operator delete(v62);
        v13[2] = (ExecutionModel::ResourceSet **)((char *)v13[2] - 1);
      }
      else
      {
        v14 = (ExecutionModel::ResourceSet **)*v14;
      }
    }
    v15 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 16LL);
    if ( v15 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v15(this);
    v7 = v79;
    v16 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v17 = *(_DWORD *)(v16 + 280);
      if ( (v17 & 1) != 0 )
        goto LABEL_22;
      *(_DWORD *)(v16 + 280) = v17 | 1;
      v67 = *(struct _TP_WORK **)(v16 + 264);
    }
    else
    {
      v67 = *(struct _TP_WORK **)(v16 + 272);
    }
    SubmitThreadpoolWork(v67);
  }
LABEL_22:
  if ( !*((_DWORD *)this + 344) && v7 )
  {
    v69 = (ExecutionModel::ResourceSet **)*((_QWORD *)this + 173);
    v70 = (ExecutionModel::ResourceSet **)*((_QWORD *)this + 174);
    if ( v69[1] != (ExecutionModel::ResourceSet *)((char *)this + 1384)
      || *v70 != (ExecutionModel::ResourceSet *)((char *)this + 1384) )
    {
      __fastfail(3u);
    }
    *v70 = (ExecutionModel::ResourceSet *)v69;
    v69[1] = (ExecutionModel::ResourceSet *)v70;
    *((_DWORD *)this + 344) = 2;
    if ( ExecutionModel::ResourceSet::IsLegacy(this) )
    {
      RmpObjectRelease(v7);
      *((_QWORD *)this + 175) = 0LL;
    }
  }
  v18 = (__int64 **)((char *)this + 1888);
  while ( *v18 != (__int64 *)v18 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v93,
      (*v18)[2]);
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
      (__int64)this + 1888,
      &v98,
      *v18);
    v71 = v93;
    ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(v93, this);
    if ( v71 )
    {
      v72 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v71 + 16LL);
      if ( v72 == ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v71);
      else
        v72(v71);
    }
  }
  v19 = (__int64 **)((char *)this + 1864);
  v20 = (struct IUnknown **)((char *)this + 1808);
  while ( *v19 != (__int64 *)v19 )
  {
    ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing((ExecutionModel::ResourceSet *)(*v19)[2], this);
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
      (__int64)this + 1864,
      &v96,
      *v19);
  }
  v21 = *((_QWORD *)this + 175);
  if ( v21 && *(_DWORD *)(v21 + 40) != 1 )
  {
    v22 = (__int64 *)*((_QWORD *)v7 + 75);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
    v23 = *v22;
    while ( (__int64 *)v23 != v22 )
    {
      if ( *(ExecutionModel::ResourceSet **)(v23 + 16) == this )
      {
        v68 = (__int64 *)v23;
        v23 = *(_QWORD *)v23;
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (__int64)v22,
          &v97,
          v68);
      }
      else
      {
        v23 = *(_QWORD *)v23;
      }
    }
    v24 = (ExecutionModel::ResourceSet **)v22[3];
    v25 = (ExecutionModel::ResourceSet **)(v22 + 3);
    while ( v24 != v25 && v24[2] != this )
      v24 = (ExecutionModel::ResourceSet **)*v24;
    if ( v24 != v25 )
    {
      v26 = (ExecutionModel::ResourceSet **)v24[1];
      v27 = *v24;
      *v26 = *v24;
      *((_QWORD *)v27 + 1) = v26;
      v28 = v24[2];
      if ( v28 )
      {
        v79 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v28 + 16LL);
        if ( v79 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v28);
        else
          v79(v28);
      }
      operator delete(v24);
      --v22[5];
      v29 = *((_QWORD *)this + 175);
      if ( (*((_DWORD *)this + 441) & 0x80000) != 0 )
        RmpActivityHostOnGpuMonitoredResourceSetCountChange(
          *((_QWORD *)this + 175),
          (char *)RmSvcGlobals + 112,
          0xFFFFFFFFLL);
      v30 = *(_DWORD *)(v29 + 936);
      v77 = 1;
      memset_0(v102, 0, 0x20uLL);
      v31 = *(_QWORD *)(v29 + 600);
      v102[0] = v29;
      v103 = 1;
      if ( *(_DWORD *)(v29 + 40) == 1 )
        v102[1] = v31;
      else
        v102[2] = *(_QWORD *)(v31 + 24);
      for ( i = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v102);
            i;
            i = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v102) )
      {
        RmpActivityHostComputeImportanceCallback((struct _RM_ACTIVITY_HOST *)v29, i, &v77);
      }
      *(_DWORD *)(v29 + 936) = v77;
      RmpActivityHostOnImportanceChange((struct _RM_ACTIVITY_HOST *)v29, v30);
    }
    QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)this + 175) + 928LL));
    ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
      v33,
      (struct _RM_ACTIVITY_HOST *)v7,
      this,
      *((struct ExecutionModel::ModernActivationResourceInfo **)v7 + 75),
      (struct _RM_ENFORCEMENT_SETTINGS *)&v99);
    RmpActivityHostQueryCommit(v7, 0LL, &v88);
    v35 = v88;
    v36 = v88;
    if ( v22[7] > v88 )
      v36 = v22[7];
    v22[7] = v36;
    v37 = *((_DWORD *)v7 + 10);
    if ( v37 )
    {
      if ( v37 != 1 )
      {
        LODWORD(v47) = v81;
        v46 = 1LL;
        v45 = *(_QWORD *)&v101[0];
        v78 = v81;
        goto LABEL_59;
      }
      v74 = (_QWORD *)*((_QWORD *)v7 + 75);
      v39 = v74[219];
      v38 = v74[182];
      v41 = v74[183];
      v40 = v74[231];
      v87 = v39;
      v84 = v38;
      v86 = v41;
      v85 = v40;
    }
    else
    {
      ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
        *((ExecutionModel::ModernActivationResourceInfo **)v7 + 75),
        &v85,
        0LL,
        &v86,
        &v87,
        &v84);
      v38 = v84;
      v39 = v87;
      v40 = v85;
      v41 = v86;
    }
    if ( v39 < v40 )
      v42 = v39;
    else
      v42 = v40;
    v43 = (unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden))(v39 + *((_QWORD *)v7 + 104) - v42);
    if ( v38 < v40 )
      v34 = v38;
    else
      v34 = v40;
    v44 = v38 + *((_QWORD *)v7 + 105) - v34;
    v45 = v41 + *((_QWORD *)v7 + 106) - v40;
    v46 = 1LL;
    if ( v35 < (unsigned __int64)v43 )
    {
      v34 = 0LL;
      v47 = 1LL;
      v48 = 0LL;
    }
    else if ( v35 < v44 )
    {
      v48 = (unsigned __int64)v43;
      v47 = 2LL;
      v43 = (unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden))(v38 + *((_QWORD *)v7 + 105) - v34);
    }
    else
    {
      v34 = 0LL;
      v47 = 3LL;
      v43 = 0LL;
      v48 = v44;
    }
    v78 = v47;
    if ( v35 && v45 )
    {
      RmpActivityHostComputeCommitEstimate(v35, v45, &v94, &v79);
      v46 = 1LL;
      if ( v48 <= v94 )
        v48 = v94;
      if ( v43 )
      {
        if ( (unsigned __int64)v43 >= (unsigned __int64)v79 )
          v43 = v79;
      }
      else
      {
        v43 = v79;
      }
    }
    *(_QWORD *)&v99 = v48;
    *((_QWORD *)&v99 + 1) = v43;
    *(_QWORD *)&v101[0] = v45;
    v81 = v47;
LABEL_59:
    v89 = v100[0];
    if ( v100[1] )
    {
      v100[0] = v100[1];
    }
    else
    {
      v49 = *((_QWORD *)&v101[0] + 1);
      if ( *((_QWORD *)&v101[0] + 1) )
      {
        if ( v45 < *((_QWORD *)&v101[0] + 1) )
          v49 = v45;
        v100[0] = v49;
      }
      else
      {
        v100[0] = v45;
      }
    }
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v92 = *((_QWORD *)v7 + 3);
      v118 = &v92;
      v120 = &v89;
      v122 = &v100[1];
      v124 = (char *)v101 + 8;
      v126 = v101;
      v128 = v100;
      v119 = 8LL;
      v121 = 8LL;
      v123 = 8LL;
      v125 = 8LL;
      v127 = 8LL;
      v129 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180062923 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v115 = &unk_18006292E;
      v117 = 1;
      UserData.Reserved = 2;
      v116 = 168;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
      LODWORD(v47) = v81;
      v78 = v81;
    }
    v50 = *((_DWORD *)v7 + 10);
    if ( v50 )
    {
      if ( v50 == 1 && (int)RmpEnforcementApplyLimitsProcessHost(v7, &v99, v34, v46) >= 0 )
        goto LABEL_70;
    }
    else
    {
      v51 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *))(**((_QWORD **)RmSvcGlobals + 10) + 32LL);
      if ( v51 == ModernResourceEnforcer::SetProcessConfig )
        v52 = ModernResourceEnforcer::SetProcessConfig(
                *((ModernResourceEnforcer **)RmSvcGlobals + 10),
                (struct _RM_ACTIVITY_HOST *)v7,
                (struct _RM_ENFORCEMENT_SETTINGS *)&v99);
      else
        v52 = ((__int64 (__fastcall *)(_QWORD, unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden), __int128 *, __int64))v51)(
                *((_QWORD *)RmSvcGlobals + 10),
                v7,
                &v99,
                v46);
      if ( v52 >= 0 )
      {
LABEL_70:
        v6 = *((_DWORD *)v7 + 10) == 0;
        *((_OWORD *)v7 + 39) = v99;
        *((_OWORD *)v7 + 40) = *(_OWORD *)v100;
        *((_OWORD *)v7 + 41) = v101[0];
        *((_OWORD *)v7 + 42) = v101[1];
        *((_OWORD *)v7 + 43) = v101[2];
        if ( v6 )
        {
          v53 = *((_DWORD *)v7 + 145);
          v54 = *((_QWORD *)v7 + 3);
          v55 = *((_DWORD *)v7 + 146);
          v56 = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 262);
          v83 = v53;
          v57 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64))(*(_QWORD *)v56 + 368LL);
          if ( v57 == ExecutionModel::ResourceManager::CommitMemoryLimitChange )
            ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              v56,
              (const unsigned __int16 *)v7 + 24,
              (union _RM_SID *)((char *)v7 + 512),
              v53,
              v55,
              v54,
              v100[0]);
          else
            v57(v56, (const unsigned __int16 *)v7 + 24, (union _RM_SID *)((char *)v7 + 512), v83, v55, v54, v100[0]);
          LODWORD(v47) = v78;
        }
      }
    }
    v58 = *(void (__fastcall **)(_QWORD, unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden), _QWORD))(**((_QWORD **)this + 3) + 376LL);
    if ( (char *)v58 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
      ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(*((_QWORD *)this + 3), v7, (unsigned int)v47);
    else
      v58(*((_QWORD *)this + 3), v7, (unsigned int)v47);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 0xFFFFFFFF) == 1 )
    {
      if ( *((_DWORD *)v7 + 8) == 1 )
      {
        if ( *((_QWORD *)v7 + 94) )
          TpReleaseWork();
        RmpEmptyWorkerCleanup((char *)v7 + 800);
        if ( *((_DWORD *)v7 + 10) == 1 )
        {
          v75 = (void *)*((_QWORD *)v7 + 88);
          if ( v75 )
            CloseHandle(v75);
          v76 = (void *)*((_QWORD *)v7 + 89);
          if ( v76 )
            CloseHandle(v76);
        }
      }
      RmpFreeHeap(v7);
    }
    *((_QWORD *)this + 175) = 0LL;
    v59 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 16LL);
    if ( v59 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v59(this);
    v20 = (struct IUnknown **)((char *)this + 1808);
  }
  v60 = *((_QWORD *)this + 221);
  if ( v60 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v60 + 16LL))(*((_QWORD *)this + 221));
    *((_QWORD *)this + 221) = 0LL;
  }
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  if ( *v20 )
    ATL::AtlComPtrAssign(v20, 0LL);
  if ( *((_QWORD *)this + 227) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 227, 0LL);
  *((_QWORD *)this + 231) = 0LL;
  *((_BYTE *)this + 12) = 0;
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 && (qword_180071078 & 9) == qword_180071078 )
  {
    v91 = this;
    v108 = &v91;
    v82 = *((_DWORD *)this + 352);
    v110 = &v82;
    v61 = (*((unsigned __int8 *)this + 1920) >> 1) & 1;
    v109 = 8LL;
    v80 = v61;
    v112 = &v80;
    v111 = 4LL;
    v113 = 4LL;
    *(_DWORD *)&v90.Level = 4;
    v104.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&v90.Id = ((unsigned int)&unk_1800645A2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v90.Keyword = 9LL;
    v104.Size = *(unsigned __int16 *)off_180071068;
    v105 = &unk_1800645AD;
    v104.Reserved = 2;
    v106 = 69;
    v107 = 1;
    EventWriteTransfer(RegHandle, &v90, 0LL, 0LL, 5u, &v104);
  }
}

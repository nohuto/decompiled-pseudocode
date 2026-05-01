/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0
 * Callers:
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180009AC0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800390F0 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x180004640 (-RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionMo.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180004914 (RmpEnforcementSettingsUpdateLimit.c)
 *     RmpActivityHostApplyExecutionSpeed @ 0x18000499C (RmpActivityHostApplyExecutionSpeed.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000CCC0 (-SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTIN.c)
 *     RmpActivityHostOnImportanceChange @ 0x18000D0E0 (RmpActivityHostOnImportanceChange.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ @ 0x18000E4D0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x1800103D4 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x180011440 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x18003AD78 (RmpEnforcementApplyLimitsProcessHost.c)
 *     ?LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800406AC (-LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180040F24 (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     RmpGpuMonitorDisableForHost @ 0x180041B94 (RmpGpuMonitorDisableForHost.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this)
{
  ExecutionModel::ResourceManager *v3; // rcx
  __int64 v4; // rsi
  struct ExecutionModel::IResourceSet *v5; // rdx
  __int64 v6; // r14
  struct IUnknown **v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rdx
  int v11; // r13d
  ExecutionModel::ResourceSet ***v12; // rsi
  ExecutionModel::ResourceSet ***v13; // rbx
  struct IUnknown **v14; // r15
  __int64 v15; // rax
  ExecutionModel::ModernActivationResourceInfo *v16; // r15
  ExecutionModel::ResourceSet *v17; // rbx
  ExecutionModel::ResourceSet **v18; // rbx
  ExecutionModel::ResourceSet **v19; // rsi
  ExecutionModel::ResourceSet **v20; // rcx
  ExecutionModel::ResourceSet *v21; // rax
  ExecutionModel::ResourceSet *v22; // r12
  unsigned int (__fastcall *v23)(ExecutionModel::ResourceSet *__hidden); // r13
  __int64 v24; // rsi
  char *v25; // rcx
  __int64 Next; // rax
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rax
  struct ExecutionModel::ResourceSet *i; // rax
  const GUID *v31; // r8
  const GUID *v32; // r9
  ExecutionModel::ResourceSet *v33; // rbx
  int v34; // ecx
  __int64 (__fastcall *v35)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *); // rsi
  int v36; // eax
  unsigned int (__fastcall *v37)(ExecutionModel::ResourceSet *__hidden); // rbx
  __int64 v38; // rsi
  ExecutionModel::ResourceSet **v40; // rdx
  ExecutionModel::ResourceSet **v41; // rcx
  ExecutionModel::ResourceSet **v42; // r8
  ExecutionModel::ResourceSet *v43; // rbx
  unsigned int (__fastcall *v44)(ExecutionModel::ResourceSet *__hidden); // r12
  unsigned int v46; // eax
  ExecutionModel::ResourceSet **v47; // r8
  int v48; // eax
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh] BYREF
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+3Ch] [rbp-C4h] BYREF
  ExecutionModel::ResourceSet *v53; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  ExecutionModel::ResourceSet *v56; // [rsp+58h] [rbp-A8h] BYREF
  ExecutionModel::ResourceSet *v57; // [rsp+60h] [rbp-A0h] BYREF
  ExecutionModel::ResourceSet *v58; // [rsp+68h] [rbp-98h] BYREF
  ExecutionModel::ResourceSet *v59; // [rsp+70h] [rbp-90h] BYREF
  ExecutionModel::ResourceSet *v60; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v61[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v62; // [rsp+90h] [rbp-70h]
  __int128 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66[3]; // [rsp+D0h] [rbp-30h] BYREF
  int v67; // [rsp+E8h] [rbp-18h]
  __int64 v68[4]; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  ExecutionModel::ResourceSet **v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  int *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  int *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]

  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)this + 3);
  v49 = 0;
  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(v3, this, 0LL);
  v4 = *((_QWORD *)this + 227);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 - 1368) + 32LL))(v4 - 1368);
    if ( *((_QWORD *)this + 227) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 227, 0LL);
  }
  v5 = (struct ExecutionModel::IResourceSet *)*((_QWORD *)this + 225);
  if ( v5 )
    ExecutionModel::ResourceManager::ResetResourceSetPriority(*((ExecutionModel::ResourceManager **)this + 3), v5);
  if ( (*((_BYTE *)this + 1356) & 1) != 0 && *((_DWORD *)this + 338) )
    ExecutionModel::ResourceSet::LogRevocationEnd(this);
  v6 = *((_QWORD *)this + 175);
  v49 = ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v10 = (unsigned int)v49;
  if ( v49 >= 0 )
  {
    v11 = 3;
    if ( !*((_DWORD *)this + 344) && v6 )
    {
      v40 = (ExecutionModel::ResourceSet **)*((_QWORD *)this + 173);
      v41 = (ExecutionModel::ResourceSet **)*((_QWORD *)this + 174);
      if ( v40[1] != (ExecutionModel::ResourceSet *)((char *)this + 1384)
        || *v41 != (ExecutionModel::ResourceSet *)((char *)this + 1384) )
      {
        __fastfail(3u);
      }
      *v41 = (ExecutionModel::ResourceSet *)v40;
      v40[1] = (ExecutionModel::ResourceSet *)v41;
      *((_DWORD *)this + 344) = 3;
      if ( ExecutionModel::ResourceSet::IsLegacy(this) )
      {
        RmpObjectRelease((volatile signed __int32 *)v6);
        *((_QWORD *)this + 175) = 0LL;
      }
    }
    v12 = (ExecutionModel::ResourceSet ***)((char *)this + 1880);
    while ( *v12 != (ExecutionModel::ResourceSet **)v12 )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v56,
        (__int64)(*v12)[2]);
      utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
        (__int64)this + 1880,
        &v58,
        *v12);
      v43 = v56;
      ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(v56, this);
      if ( v43 )
      {
        v44 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v43 + 16LL);
        if ( v44 == ExecutionModel::ResourceSet::Release )
          ExecutionModel::ResourceSet::Release(v43);
        else
          v44(v43);
      }
    }
    v13 = (ExecutionModel::ResourceSet ***)((char *)this + 1856);
    v14 = (struct IUnknown **)((char *)this + 1800);
    while ( *v13 != (ExecutionModel::ResourceSet **)v13 )
    {
      ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing((*v13)[2], this);
      utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
        (__int64)this + 1856,
        &v60,
        *v13);
    }
    v15 = *((_QWORD *)this + 175);
    if ( !v15 || *(_DWORD *)(v15 + 40) == 1 )
      goto LABEL_46;
    v16 = *(ExecutionModel::ModernActivationResourceInfo **)(v6 + 600);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *, __int64))(*(_QWORD *)this + 8LL))(this, v10);
    v17 = *(ExecutionModel::ResourceSet **)v16;
    while ( v17 != v16 )
    {
      if ( *((ExecutionModel::ResourceSet **)v17 + 2) == this )
      {
        v42 = (ExecutionModel::ResourceSet **)v17;
        v17 = *(ExecutionModel::ResourceSet **)v17;
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (__int64)v16,
          &v57,
          v42);
      }
      else
      {
        v17 = *(ExecutionModel::ResourceSet **)v17;
      }
    }
    v18 = (ExecutionModel::ResourceSet **)*((_QWORD *)v16 + 3);
    v19 = (ExecutionModel::ResourceSet **)((char *)v16 + 24);
    while ( v18 != v19 )
    {
      if ( v18[2] == this )
      {
        if ( v18 != v19 )
        {
          v20 = (ExecutionModel::ResourceSet **)v18[1];
          v21 = *v18;
          *v20 = *v18;
          *((_QWORD *)v21 + 1) = v20;
          v22 = v18[2];
          if ( v22 )
          {
            v23 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v22 + 16LL);
            if ( v23 == ExecutionModel::ResourceSet::Release )
              ExecutionModel::ResourceSet::Release(v18[2]);
            else
              v23(v18[2]);
            v11 = 3;
          }
          operator delete(v18);
          --*((_QWORD *)v16 + 5);
          v24 = *((_QWORD *)this + 175);
          v25 = (char *)RmSvcGlobals;
          if ( (*((_DWORD *)this + 439) & 0x80000) != 0 && (*(_DWORD *)(v24 + 908))-- == 1 )
            RmpGpuMonitorDisableForHost((struct _RM_GPU_MONITOR *)(v25 + 112));
          if ( !*(_DWORD *)(v24 + 40) && *(_DWORD *)(v24 + 584) == 2 )
          {
            RmpActivityHostEnumerateResourceSetBegin(v24, 1, v68);
            Next = RmpActivityHostEnumerateResourceSetGetNext(v68);
            if ( !Next )
              goto LABEL_27;
            do
            {
              if ( v11 == 3 )
                v11 = *(_DWORD *)(Next + 1436) & 3;
              v46 = *(_DWORD *)(Next + 1436) & 3;
              if ( v11 <= v46 )
                v11 = v46;
              Next = RmpActivityHostEnumerateResourceSetGetNext(v68);
            }
            while ( Next );
            if ( v11 == 3 )
LABEL_27:
              v11 = 1;
            v27 = *(_DWORD *)(v24 + 904);
            if ( ((v27 & 0x40) != 0 || (v27 & 0xEu) >= 8 && (v27 & 0x30u) >= 0x20) && v11 <= 1 )
              v11 = 1;
            RmpActivityHostApplyExecutionSpeed(v24, v11);
          }
          v28 = *(_DWORD *)(v24 + 904);
          v50 = 1;
          memset_0(v66, 0, 0x20uLL);
          v29 = *(_QWORD *)(v24 + 600);
          v66[0] = v24;
          v67 = 1;
          if ( *(_DWORD *)(v24 + 40) == 1 )
            v66[1] = v29;
          else
            v66[2] = *(_QWORD *)(v29 + 24);
          for ( i = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v66);
                i;
                i = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v66) )
          {
            RmpActivityHostComputeImportanceCallback((struct _RM_ACTIVITY_HOST *)v24, i, &v50);
          }
          *(_DWORD *)(v24 + 904) = v50;
          RmpActivityHostOnImportanceChange((struct _RM_ACTIVITY_HOST *)v24, v28, v31, v32);
        }
        break;
      }
      v18 = (ExecutionModel::ResourceSet **)*v18;
    }
    v33 = (ExecutionModel::ResourceSet *)*((_QWORD *)v16 + 6);
    while ( v33 != (ExecutionModel::ModernActivationResourceInfo *)((char *)v16 + 48) )
    {
      if ( *((ExecutionModel::ResourceSet **)v33 + 2) == this )
      {
        v47 = (ExecutionModel::ResourceSet **)v33;
        v33 = *(ExecutionModel::ResourceSet **)v33;
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (__int64)v16 + 48,
          &v59,
          v47);
      }
      else
      {
        v33 = *(ExecutionModel::ResourceSet **)v33;
      }
    }
    QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)this + 175) + 896LL));
    *(_OWORD *)v61 = *(_OWORD *)(v6 + 624);
    v62 = *(_OWORD *)(v6 + 640);
    v63 = *(_OWORD *)(v6 + 656);
    v64 = *(_OWORD *)(v6 + 672);
    v65 = *(_QWORD *)(v6 + 688);
    ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v16, &v54, 0LL, &v55, v61, &v61[1]);
    *(_QWORD *)&v63 = v55 - v54;
    RmpEnforcementSettingsUpdateLimit(v6, (__int64)v61);
    v34 = *(_DWORD *)(v6 + 40);
    if ( v34 )
    {
      if ( v34 != 1 || (int)RmpEnforcementApplyLimitsProcessHost(v6, v61) < 0 )
        goto LABEL_42;
    }
    else
    {
      v35 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *))(**((_QWORD **)RmSvcGlobals + 10) + 32LL);
      if ( v35 == ModernResourceEnforcer::SetProcessConfig )
        v36 = ModernResourceEnforcer::SetProcessConfig(
                *((ModernResourceEnforcer **)RmSvcGlobals + 10),
                (struct _RM_ACTIVITY_HOST *)v6,
                (struct _RM_ENFORCEMENT_SETTINGS *)v61);
      else
        v36 = v35(
                *((ModernResourceEnforcer **)RmSvcGlobals + 10),
                (struct _RM_ACTIVITY_HOST *)v6,
                (struct _RM_ENFORCEMENT_SETTINGS *)v61);
      if ( v36 < 0 )
        goto LABEL_42;
    }
    *(_OWORD *)(v6 + 624) = *(_OWORD *)v61;
    *(_OWORD *)(v6 + 640) = v62;
    *(_OWORD *)(v6 + 656) = v63;
    *(_OWORD *)(v6 + 672) = v64;
    *(_QWORD *)(v6 + 688) = v65;
LABEL_42:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF) == 1 )
    {
      if ( *(_DWORD *)(v6 + 32) == 1 )
        RmpActivityHostFinalCleanup(v6);
      RmpFreeHeap((PVOID)v6);
    }
    *((_QWORD *)this + 175) = 0LL;
    v37 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 16LL);
    if ( v37 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v37(this);
    v14 = (struct IUnknown **)((char *)this + 1800);
LABEL_46:
    v38 = *((_QWORD *)this + 220);
    if ( v38 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 16LL))(*((_QWORD *)this + 220));
      *((_QWORD *)this + 220) = 0LL;
    }
    *((_QWORD *)this + 222) = 0LL;
    *((_QWORD *)this + 223) = 0LL;
    *((_QWORD *)this + 224) = 0LL;
    if ( *v14 )
      ATL::AtlComPtrAssign(v14, 0LL);
    v7 = (struct IUnknown **)((char *)this + 1808);
    if ( *((_QWORD *)this + 226) )
      ATL::AtlComPtrAssign(v7, 0LL);
    LODWORD(v10) = v49;
    *((_QWORD *)this + 230) = 0LL;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 9) != 0 && (qword_1800690B8 & 9) == qword_1800690B8 )
  {
    v71 = 4LL;
    v70 = &v49;
    v72 = &v53;
    v52 = *((_DWORD *)this + 352);
    v74 = &v52;
    v48 = (*((unsigned __int8 *)this + 1912) >> 1) & 1;
    v53 = this;
    v51 = v48;
    v76 = &v51;
    v73 = 8LL;
    v75 = 4LL;
    v77 = 4LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_18005C58A, v8, v9, 6u, &pData);
    LODWORD(v10) = v49;
  }
  return (unsigned int)v10;
}

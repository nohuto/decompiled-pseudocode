/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140
 * Callers:
 *     ?ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CE0 (-ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@.c)
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpActivityImportanceMergeVectors @ 0x180004670 (RmpActivityImportanceMergeVectors.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180004914 (RmpEnforcementSettingsUpdateLimit.c)
 *     RmpActivityHostApplyExecutionSpeed @ 0x18000499C (RmpActivityHostApplyExecutionSpeed.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSet@2@@Z @ 0x180009958 (-IsResourceSetValidPredecessor@ModernActivationResourceInfo@ExecutionModel@@QEBA_NPEAVResourceSe.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostOnImportanceChange @ 0x18000D0E0 (RmpActivityHostOnImportanceChange.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?UpdateAndGetCommitMemoryNotificationState@ResourceManager@ExecutionModel@@QEBAJPEAVResourceSet@2@_K1111PEA_K22PEAW4RmCommitLevel@@@Z @ 0x180011D20 (-UpdateAndGetCommitMemoryNotificationState@ResourceManager@ExecutionModel@@QEBAJPEAVResourceSet@.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180011EF0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x180012D74 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ?ReclaimReleasedCommitLimit@ModernActivationResourceInfo@ExecutionModel@@QEAAX_K00@Z @ 0x180037AE0 (-ReclaimReleasedCommitLimit@ModernActivationResourceInfo@ExecutionModel@@QEAAX_K00@Z.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x18003AD78 (RmpEnforcementApplyLimitsProcessHost.c)
 *     RmpActivityHostSetProcessResourceSet @ 0x18003BFE8 (RmpActivityHostSetProcessResourceSet.c)
 *     RmpGpuMonitorDisableForHost @ 0x180041B94 (RmpGpuMonitorDisableForHost.c)
 *     RmpGpuMonitorEnableForHost @ 0x180041C80 (RmpGpuMonitorEnableForHost.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  int v5; // r12d
  __int64 v6; // r15
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  struct ExecutionModel::ResourceSet *v10; // r14
  struct _RM_ACTIVITY_HOST *v11; // rdi
  ExecutionModel::ResourceManager *v12; // rcx
  unsigned __int64 v13; // r13
  const struct _TlgProvider_t *v14; // rcx
  int v15; // ebx
  const WCHAR *v16; // rdx
  const struct _TlgProvider_t *v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  ExecutionModel::ResourceManager *v20; // r12
  volatile signed __int32 *v21; // r13
  int v22; // r15d
  volatile signed __int32 *v23; // rax
  struct ExecutionModel::ResourceSet **v24; // rdx
  struct ExecutionModel::ResourceSet **v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rax
  ExecutionModel::ResourceSet *v29; // rbx
  ExecutionModel::ResourceSet **v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // r14d
  unsigned int v34; // r15d
  __int64 *v35; // rbx
  __int64 *v36; // rdi
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r12
  _QWORD *v40; // r14
  ExecutionModel::ResourceSet *v41; // rax
  ExecutionModel::ResourceSet *v42; // rdi
  ExecutionModel::ResourceSet **v43; // rax
  char *v44; // rcx
  int v45; // eax
  bool v46; // r14
  __int64 Next; // rax
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // ebx
  const GUID *v51; // r8
  const GUID *v52; // r9
  int v53; // eax
  struct _TP_WORK *v54; // rcx
  ExecutionModel::ModernActivationResourceInfo *v55; // rdi
  int v56; // ecx
  int v57; // eax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *i; // rax
  __int64 v61; // rax
  const WCHAR *v62; // rdx
  const struct _TlgProvider_t *v63; // rcx
  LPCGUID v64; // r8
  LPCGUID v65; // r9
  int CommitMemoryNotificationState; // [rsp+60h] [rbp-A0h] BYREF
  ExecutionModel::ResourceManager *v68; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v69; // [rsp+70h] [rbp-90h] BYREF
  ExecutionModel::ModernActivationResourceInfo *v70; // [rsp+78h] [rbp-88h] BYREF
  struct _RM_ACTIVITY_HOST *v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v72; // [rsp+88h] [rbp-78h] BYREF
  int v73; // [rsp+90h] [rbp-70h]
  void *Block; // [rsp+98h] [rbp-68h] BYREF
  int v75; // [rsp+A0h] [rbp-60h] BYREF
  int v76; // [rsp+A4h] [rbp-5Ch] BYREF
  int v77; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+B8h] [rbp-48h] BYREF
  struct ExecutionModel::ResourceSet *v80; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v81; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v82; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v83; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v84; // [rsp+E0h] [rbp-20h] BYREF
  struct _RM_ACTIVITY_HOST **v85; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v86; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v87; // [rsp+F8h] [rbp-8h] BYREF
  ExecutionModel::ResourceSet *v88[4]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v89; // [rsp+120h] [rbp+20h] BYREF
  __int128 v90; // [rsp+130h] [rbp+30h]
  __int128 v91; // [rsp+140h] [rbp+40h]
  __int128 v92; // [rsp+150h] [rbp+50h]
  __int64 v93; // [rsp+160h] [rbp+60h]
  __int64 v94[4]; // [rsp+170h] [rbp+70h] BYREF
  WCHAR v95[280]; // [rsp+190h] [rbp+90h] BYREF
  EVENT_DATA_DESCRIPTOR v96; // [rsp+3C0h] [rbp+2C0h] BYREF
  int *v97; // [rsp+3E0h] [rbp+2E0h]
  __int64 v98; // [rsp+3E8h] [rbp+2E8h]
  struct ExecutionModel::ResourceSet **v99; // [rsp+3F0h] [rbp+2F0h]
  __int64 v100; // [rsp+3F8h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+400h] [rbp+300h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+410h] [rbp+310h] BYREF
  __int64 **v103; // [rsp+420h] [rbp+320h]
  __int64 v104; // [rsp+428h] [rbp+328h]
  struct _RM_ACTIVITY_HOST **v105; // [rsp+430h] [rbp+330h]
  __int64 v106; // [rsp+438h] [rbp+338h]
  char *v107; // [rsp+440h] [rbp+340h]
  __int64 v108; // [rsp+448h] [rbp+348h]
  ExecutionModel::ModernActivationResourceInfo **v109; // [rsp+450h] [rbp+350h]
  __int64 v110; // [rsp+458h] [rbp+358h]
  char *v111; // [rsp+460h] [rbp+360h]
  __int64 v112; // [rsp+468h] [rbp+368h]
  ExecutionModel::ResourceManager **v113; // [rsp+470h] [rbp+370h]
  __int64 v114; // [rsp+478h] [rbp+378h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+480h] [rbp+380h] BYREF
  int *p_CommitMemoryNotificationState; // [rsp+4A0h] [rbp+3A0h]
  __int64 v117; // [rsp+4A8h] [rbp+3A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v120; // [rsp+4D0h] [rbp+3D0h]
  __int64 v121; // [rsp+4D8h] [rbp+3D8h]
  int *v122; // [rsp+4E0h] [rbp+3E0h]
  __int64 v123; // [rsp+4E8h] [rbp+3E8h]
  char *v124; // [rsp+4F0h] [rbp+3F0h]
  __int64 v125; // [rsp+4F8h] [rbp+3F8h]

  v85 = a3;
  v68 = this;
  CommitMemoryNotificationState = 0;
  Block = 0LL;
  v5 = 0;
  v73 = 0;
  v6 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    CommitMemoryNotificationState = -2147024809;
    goto LABEL_110;
  }
  if ( *((_BYTE *)a2 + 12) )
  {
    v7 = -2147220220;
    CommitMemoryNotificationState = -2147220220;
    goto LABEL_110;
  }
  v71 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a2 + 175);
  v70 = (ExecutionModel::ModernActivationResourceInfo *)*((_QWORD *)v71 + 75);
  v8 = *((_QWORD *)a2 + 171);
  Block = 0LL;
  CommitMemoryNotificationState = (*(__int64 (__fastcall **)(char *, void **))(v8 + 56))((char *)a2 + 1368, &Block);
  v7 = CommitMemoryNotificationState;
  if ( CommitMemoryNotificationState < 0 )
    goto LABEL_110;
  v9 = *((_QWORD *)a2 + 225);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = (struct ExecutionModel::ResourceSet *)(v9 - 1368);
    if ( !ExecutionModel::ModernActivationResourceInfo::IsResourceSetValidPredecessor(
            v70,
            (struct ExecutionModel::ResourceSet *)(v9 - 1368)) )
    {
      v7 = -2147220218;
      CommitMemoryNotificationState = -2147220218;
      goto LABEL_110;
    }
    v6 = *((_QWORD *)v10 + 228);
    if ( !v6 )
      v6 = *((_QWORD *)v10 + 182);
    if ( *((_QWORD *)a2 + 182) != v6 )
      v5 = 1;
    ExecutionModel::ResourceManager::TransitionResources(this, v10, a2);
  }
  else
  {
    ExecutionModel::ModernActivationResourceInfo::ReclaimReleasedCommitLimit(
      v70,
      *((_QWORD *)a2 + 182),
      *((_QWORD *)a2 + 218),
      *((_QWORD *)a2 + 181));
  }
  ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v70, &v81, &v86, &v78, &v87, &v79);
  v11 = v71;
  ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
    v12,
    v71,
    a2,
    v70,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v89);
  v13 = v78;
  CommitMemoryNotificationState = ExecutionModel::ResourceManager::UpdateAndGetCommitMemoryNotificationState(
                                    v68,
                                    a2,
                                    v86,
                                    v87,
                                    v79,
                                    v78,
                                    v81,
                                    &v84,
                                    &v82,
                                    &v83,
                                    (enum RmCommitLevel *)&v75);
  v7 = CommitMemoryNotificationState;
  if ( CommitMemoryNotificationState >= 0 )
  {
    *(_QWORD *)&v89 = v84;
    *((_QWORD *)&v89 + 1) = v82;
    *(_QWORD *)&v90 = v83;
    *(_QWORD *)&v91 = v83;
    RmpEnforcementSettingsUpdateLimit((__int64)v71, (__int64)&v89);
    v14 = (const struct _TlgProvider_t *)*((unsigned int *)v71 + 10);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 != 1 )
      {
        v15 = -1073741811;
        goto LABEL_19;
      }
      v15 = RmpEnforcementApplyLimitsProcessHost(v71, &v89);
      if ( v15 < 0 )
      {
LABEL_19:
        v7 = v15 | 0x10000000;
        CommitMemoryNotificationState = v7;
        if ( v7 >= 0 )
          goto LABEL_33;
        goto LABEL_20;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *, __int128 *))(**((_QWORD **)RmSvcGlobals + 10)
                                                                                      + 32LL))(
              *((_QWORD *)RmSvcGlobals + 10),
              v71,
              &v89);
      if ( v15 < 0 )
        goto LABEL_19;
      v11 = v71;
    }
    *((_OWORD *)v11 + 39) = v89;
    *((_OWORD *)v11 + 40) = v90;
    *((_OWORD *)v11 + 41) = v91;
    *((_OWORD *)v11 + 42) = v92;
    *((_QWORD *)v11 + 86) = v93;
    v15 = 0;
    goto LABEL_19;
  }
LABEL_20:
  if ( v7 == -805306316 || v7 == -805306102 )
  {
    v73 = 1;
    CommitMemoryNotificationState = 0;
  }
  else
  {
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v14, 9uLL) )
    {
      v16 = (const WCHAR *)*((_QWORD *)a2 + 4);
      p_CommitMemoryNotificationState = &CommitMemoryNotificationState;
      v117 = 4LL;
      TlgCreateWsz(&pDesc, v16);
      TlgCreateSid(&v119, (const SID *)((char *)a2 + 64));
      v17 = (const struct _TlgProvider_t *)*((unsigned int *)a2 + 33);
      v120 = &v76;
      v77 = *((_DWORD *)a2 + 34);
      v122 = &v77;
      v124 = (char *)a2 + 144;
      v76 = (int)v17;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 8LL;
      TlgWrite(v17, &unk_18005A822, v18, v19, 8u, &pData);
      v7 = CommitMemoryNotificationState;
    }
    if ( v7 < 0 )
      goto LABEL_110;
  }
LABEL_33:
  if ( v10 )
  {
    v72 = (__int64 *)(v6 + v13);
    v69 = (volatile signed __int32 *)(v13 + *((_QWORD *)a2 + 182));
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v10 + 32LL))(v10);
    if ( v5 )
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, char *, _QWORD, _DWORD, _QWORD, __int64 *, volatile signed __int32 *))(*(_QWORD *)v68 + 376LL))(
        v68,
        *((_QWORD *)a2 + 4),
        (char *)a2 + 64,
        *((unsigned int *)a2 + 33),
        *((_DWORD *)a2 + 34),
        *((_QWORD *)a2 + 18),
        v72,
        v69);
    goto LABEL_36;
  }
  v31 = *((_QWORD *)a2 + 182);
  if ( !v31 || !v13 )
  {
LABEL_36:
    v20 = v68;
    goto LABEL_37;
  }
  v32 = *((_QWORD *)a2 + 18);
  v33 = *((_DWORD *)a2 + 34);
  v34 = *((_DWORD *)a2 + 33);
  v69 = (volatile signed __int32 *)*((_QWORD *)a2 + 4);
  v20 = v68;
  (*(void (__fastcall **)(ExecutionModel::ResourceManager *, volatile signed __int32 *, char *, _QWORD, int, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v68 + 376LL))(
    v68,
    v69,
    (char *)a2 + 64,
    v34,
    v33,
    v32,
    v78,
    v31 + v13);
LABEL_37:
  *((_QWORD *)a2 + 228) = 0LL;
  if ( *((_QWORD *)a2 + 225) )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 225, 0LL);
  *((_DWORD *)a2 + 2) = 0;
  *((_BYTE *)a2 + 12) = 1;
  v21 = 0LL;
  *((_QWORD *)a2 + 222) = 0LL;
  v22 = 3;
  *((_QWORD *)a2 + 223) = 0LL;
  *((_QWORD *)a2 + 224) = 0LL;
  v23 = (volatile signed __int32 *)*((_QWORD *)a2 + 175);
  v69 = 0LL;
  if ( v23 )
  {
    v21 = v23;
    v69 = v23;
    v24 = (struct ExecutionModel::ResourceSet **)*((_QWORD *)a2 + 173);
    v25 = (struct ExecutionModel::ResourceSet **)*((_QWORD *)a2 + 174);
    if ( v24[1] != (struct ExecutionModel::ResourceSet *)((char *)a2 + 1384)
      || *v25 != (struct ExecutionModel::ResourceSet *)((char *)a2 + 1384) )
    {
      __fastfail(3u);
    }
    *v25 = (struct ExecutionModel::ResourceSet *)v24;
    v24[1] = (struct ExecutionModel::ResourceSet *)v25;
    *((_DWORD *)a2 + 344) = 3;
  }
  v26 = *((_QWORD *)a2 + 175);
  if ( !v26 || *(_DWORD *)(v26 + 40) == 1 )
  {
    if ( !v21 )
    {
      memset_0(v95, 0, 0x228uLL);
      *(_DWORD *)v95 = *((_DWORD *)a2 + 2);
      RmpActivityHostFindByTypeAndIdentifier(1, v95, &v69);
      v21 = v69;
    }
    RmpActivityHostSetProcessResourceSet(v21, a2);
    *((_QWORD *)a2 + 175) = v21;
    QueryUnbiasedInterruptTime((PULONGLONG)v21 + 112);
  }
  else
  {
    v27 = *(__int64 **)(v26 + 600);
    v21 = (volatile signed __int32 *)*((_QWORD *)a2 + 175);
    v69 = v21;
    v28 = *(_QWORD *)a2;
    v72 = v27;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(v28 + 8))(a2);
    v29 = (ExecutionModel::ResourceSet *)v27[6];
    while ( v29 != (ExecutionModel::ResourceSet *)(v27 + 6) )
    {
      if ( *((struct ExecutionModel::ResourceSet **)v29 + 2) == a2 )
      {
        v30 = (ExecutionModel::ResourceSet **)v29;
        v29 = *(ExecutionModel::ResourceSet **)v29;
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (__int64)(v27 + 6),
          v88,
          v30);
      }
      else
      {
        v29 = *(ExecutionModel::ResourceSet **)v29;
      }
    }
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
    v35 = (__int64 *)*v27;
    while ( v35 != v27 )
    {
      if ( (struct ExecutionModel::ResourceSet *)v35[2] == a2 )
      {
        v36 = v35;
        v35 = (__int64 *)*v35;
        v37 = (__int64 *)v36[1];
        v38 = *v36;
        *v37 = *v36;
        *(_QWORD *)(v38 + 8) = v37;
        v39 = v36[2];
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v36[2]);
        operator delete(v36);
        v27 = v72;
        --v72[2];
      }
      else
      {
        v35 = (__int64 *)*v35;
      }
    }
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
    v40 = v27 + 3;
    v41 = (ExecutionModel::ResourceSet *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v88[1] = v41;
    v42 = v41;
    if ( v41 )
    {
      *((_QWORD *)v41 + 2) = a2;
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
      v43 = (ExecutionModel::ResourceSet **)v40[1];
      *((_QWORD *)v42 + 1) = v43;
      *(_QWORD *)v42 = v40;
      *v43 = v42;
      v40[1] = v42;
      ++v40[2];
    }
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL))(a2);
    QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)a2 + 175) + 896LL));
    v20 = v68;
  }
  v44 = (char *)RmSvcGlobals;
  if ( (*((_DWORD *)a2 + 439) & 0x80000) != 0 )
  {
    v45 = ++*((_DWORD *)v21 + 227);
    if ( v45 == 1 )
    {
      RmpGpuMonitorEnableForHost((struct _RM_GPU_MONITOR *)(v44 + 112));
    }
    else if ( !v45 )
    {
      RmpGpuMonitorDisableForHost((struct _RM_GPU_MONITOR *)(v44 + 112));
    }
  }
  v46 = 1;
  if ( !*((_DWORD *)v21 + 10) && *((_DWORD *)v21 + 146) == 2 )
  {
    RmpActivityHostEnumerateResourceSetBegin((__int64)v21, 1, v94);
    Next = RmpActivityHostEnumerateResourceSetGetNext(v94);
    if ( !Next )
      goto LABEL_81;
    do
    {
      if ( v22 == 3 )
        v22 = *(_DWORD *)(Next + 1436) & 3;
      v48 = *(_DWORD *)(Next + 1436) & 3;
      if ( v22 <= v48 )
        v22 = v48;
      Next = RmpActivityHostEnumerateResourceSetGetNext(v94);
    }
    while ( Next );
    if ( v22 == 3 )
LABEL_81:
      v22 = 1;
    v49 = *((_DWORD *)v21 + 226);
    if ( ((v49 & 0x40) != 0 || (v49 & 0xEu) >= 8 && (v49 & 0x30u) >= 0x20) && v22 <= 1 )
      v22 = 1;
    RmpActivityHostApplyExecutionSpeed((__int64)v21, v22);
  }
  v50 = *((_DWORD *)v21 + 226);
  *((_DWORD *)v21 + 226) = RmpActivityImportanceMergeVectors(v50, *((_DWORD *)a2 + 357));
  RmpActivityHostOnImportanceChange((struct _RM_ACTIVITY_HOST *)v21, v50, v51, v52);
  v53 = *((_DWORD *)v20 + 66);
  if ( (v53 & 1) == 0 )
  {
    v54 = (struct _TP_WORK *)*((_QWORD *)v20 + 31);
    *((_DWORD *)v20 + 66) = v53 | 1;
    SubmitThreadpoolWork(v54);
  }
  v55 = v70;
  v56 = v75;
  v57 = *((_DWORD *)v70 + 18);
  if ( v75 == v57 )
    goto LABEL_97;
  *((_DWORD *)v70 + 18) = v75;
  if ( !v57 )
    goto LABEL_97;
  if ( v56 <= v57 )
  {
    if ( v56 >= v57 )
      goto LABEL_97;
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, char *, _QWORD, _DWORD, _QWORD, int))(*(_QWORD *)v20 + 368LL))(
      v20,
      *((_QWORD *)a2 + 4),
      (char *)a2 + 64,
      *((unsigned int *)a2 + 33),
      *((_DWORD *)a2 + 34),
      *((_QWORD *)a2 + 18),
      1);
  }
  else
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, char *, _QWORD, _DWORD, _QWORD, _DWORD))(*(_QWORD *)v20 + 368LL))(
      v20,
      *((_QWORD *)a2 + 4),
      (char *)a2 + 64,
      *((unsigned int *)a2 + 33),
      *((_DWORD *)a2 + 34),
      *((_QWORD *)a2 + 18),
      0);
  }
  v55 = v70;
LABEL_97:
  if ( (*((_BYTE *)Block + 24) & 2) == 0 )
  {
    v58 = *(int *)Block;
    if ( (unsigned int)v58 > 0x28 || (v59 = 0x11000002000LL, !_bittest64(&v59, v58)) )
      v46 = 0;
  }
  CommitMemoryNotificationState = ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(v20, v71, v46);
  v7 = CommitMemoryNotificationState;
  if ( CommitMemoryNotificationState >= 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)v55 + 3); i != (_QWORD *)((char *)v55 + 24); i = (_QWORD *)*i )
    {
      if ( !*(_DWORD *)(i[2] + 1464LL) )
        goto LABEL_107;
    }
    SetEvent(*((HANDLE *)RmSvcGlobals + 214));
LABEL_107:
    v61 = *((_QWORD *)a2 + 175);
    _InterlockedIncrement((volatile signed __int32 *)(v61 + 16));
    v7 = CommitMemoryNotificationState;
    *v85 = (struct _RM_ACTIVITY_HOST *)v61;
  }
  if ( v73 )
  {
    ExecutionModel::ResourceManager::OnApplicationTerminated(
      v20,
      *((LPCWSTR *)a2 + 4),
      (SID *)((char *)a2 + 64),
      *((_DWORD *)a2 + 33),
      *((_DWORD *)a2 + 34),
      *((_QWORD *)a2 + 18));
    v7 = CommitMemoryNotificationState;
  }
LABEL_110:
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 9) != 0 && (qword_1800690B8 & 9) == qword_1800690B8 )
  {
    v62 = (const WCHAR *)*((_QWORD *)a2 + 4);
    v97 = &CommitMemoryNotificationState;
    v98 = 4LL;
    v99 = &v80;
    v80 = a2;
    v100 = 8LL;
    TlgCreateWsz(&v101, v62);
    TlgCreateSid(&v102, (const SID *)((char *)a2 + 64));
    v63 = (const struct _TlgProvider_t *)*((unsigned int *)a2 + 33);
    v103 = &v72;
    LODWORD(v71) = *((_DWORD *)a2 + 34);
    v105 = &v71;
    v107 = (char *)a2 + 144;
    LODWORD(v70) = *((_DWORD *)a2 + 352);
    v109 = &v70;
    v111 = (char *)a2 + 1456;
    LODWORD(v68) = *((_DWORD *)a2 + 356);
    v113 = &v68;
    LODWORD(v72) = (_DWORD)v63;
    v104 = 4LL;
    v106 = 4LL;
    v108 = 8LL;
    v110 = 4LL;
    v112 = 8LL;
    v114 = 4LL;
    TlgWrite(v63, &unk_18005A64D, v64, v65, 0xCu, &v96);
    v7 = CommitMemoryNotificationState;
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)v7;
}

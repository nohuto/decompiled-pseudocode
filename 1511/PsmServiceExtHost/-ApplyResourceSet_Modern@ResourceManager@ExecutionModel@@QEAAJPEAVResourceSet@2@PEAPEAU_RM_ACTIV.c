/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800112FC (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180009200 (RmpActivityImportanceMergeVectors.c)
 *     RmpActivityHostOnImportanceChange @ 0x180009400 (RmpActivityHostOnImportanceChange.c)
 *     ?IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180009CFC (-IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV-$CComPtr@VResourceSet@ExecutionMo.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E6E0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z @ 0x18000F650 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K2@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitLevel@@@Z @ 0x18000F6B0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4RmCommitL.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@2@PEAVModernActivationResourceInfo@2@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800103D0 (-UpdateEnforcerRunabilitySettings@ResourceManager@ExecutionModel@@QEBAXPEAU_RM_ACTIVITY_HOST@@PE.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x1800113A8 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180017520 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800183F0 (-SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTIN.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?UndoSetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18003E894 (-UndoSetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x180040168 (RmpEnforcementApplyLimitsProcessHost.c)
 *     RmpActivityHostComputeCommitEstimate @ 0x180040CBC (RmpActivityHostComputeCommitEstimate.c)
 *     RmpActivityHostOnGpuMonitoredResourceSetCountChange @ 0x180041108 (RmpActivityHostOnGpuMonitoredResourceSetCountChange.c)
 *     RmpActivityHostSetProcessResourceSet @ 0x18004136C (RmpActivityHostSetProcessResourceSet.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  struct _RM_ACTIVITY_HOST *v3; // r14
  __int64 *v4; // rdi
  ExecutionModel::ResourceSet *v5; // r15
  ExecutionModel::ResourceManager *v7; // r12
  struct ExecutionModel::ModernActivationResourceInfo *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  struct ExecutionModel::ResourceSet **v12; // rdx
  struct ExecutionModel::ResourceSet **v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 *v16; // rbx
  __int64 *v17; // rdi
  __int64 *v18; // rcx
  __int64 v19; // rax
  ExecutionModel::ResourceSet *v20; // rcx
  __int64 (__fastcall *v21)(ExecutionModel::ResourceSet *); // rbx
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rcx
  __int64 (__fastcall *v26)(ExecutionModel::ResourceSet *); // rbx
  unsigned int v27; // ebx
  ExecutionModel::ResourceManager *v28; // rcx
  int v29; // eax
  struct _TP_WORK *v30; // rcx
  __int64 v31; // rdi
  ModernResourceEnforcer *v32; // rbx
  unsigned int v33; // ecx
  unsigned __int64 v34; // r12
  unsigned int v35; // r13d
  __int64 v36; // rax
  __int64 (__fastcall *v37)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *); // rdi
  int v38; // eax
  const struct _TlgProvider_t *v39; // rcx
  int v40; // ebx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rcx
  int v46; // ecx
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rcx
  struct _RM_ACTIVITY_HOST *v50; // rdi
  unsigned __int64 v51; // r11
  unsigned __int64 v52; // rdx
  unsigned int v53; // edi
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // rax
  __int64 (__fastcall *v56)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *); // rdi
  int v57; // eax
  int v58; // ebx
  bool v59; // zf
  int v60; // ecx
  unsigned __int64 v61; // r12
  unsigned int v62; // r13d
  ExecutionModel::ResourceManager *v63; // rdi
  __int64 (__fastcall *v64)(ExecutionModel::ResourceSet *, char); // rbx
  unsigned int v65; // eax
  __int64 (__fastcall *v66)(struct _WNF_STATE_NAME *, __int64, int); // rbx
  unsigned __int64 v67; // rax
  bool v68; // al
  _QWORD *i; // rax
  __int64 v70; // rax
  int v71; // edi
  __int64 (__fastcall *v72)(ExecutionModel::ResourceSet *); // rbx
  void *v73; // rcx
  __int64 v74; // rax
  void *v75; // rdx
  int v76; // ecx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rcx
  const WCHAR *v85; // rdx
  const struct _TlgProvider_t *v86; // rcx
  LPCGUID v87; // r8
  LPCGUID v88; // r9
  int v89; // ebx
  _QWORD *v90; // rax
  struct IUnknown *v91; // rdx
  unsigned int v92; // [rsp+40h] [rbp-C0h] BYREF
  int v93; // [rsp+44h] [rbp-BCh]
  unsigned int v94; // [rsp+48h] [rbp-B8h]
  ExecutionModel::ResourceManager *v95; // [rsp+50h] [rbp-B0h]
  ExecutionModel::ResourceSet *v96; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v98; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_ACTIVITY_HOST *v99; // [rsp+70h] [rbp-90h] BYREF
  struct ExecutionModel::ModernActivationResourceInfo *v100; // [rsp+78h] [rbp-88h]
  int v101; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v102; // [rsp+84h] [rbp-7Ch]
  int v103; // [rsp+88h] [rbp-78h] BYREF
  int v104; // [rsp+8Ch] [rbp-74h] BYREF
  int v105; // [rsp+90h] [rbp-70h] BYREF
  int v106; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v107; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v108; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v109; // [rsp+A8h] [rbp-58h] BYREF
  struct _RM_ACTIVITY_HOST **v110; // [rsp+B0h] [rbp-50h]
  struct ExecutionModel::ResourceSet *v111; // [rsp+B8h] [rbp-48h] BYREF
  ExecutionModel::ResourceSet *v112; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v114; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v115; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v116; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v117; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v118; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v119; // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall *v120)(ExecutionModel::ResourceManager *, wchar_t *, union _RM_SID *, int, unsigned int, unsigned __int64, unsigned __int64); // [rsp+110h] [rbp+10h]
  __int128 v121; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v122[2]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v123[3]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v124[140]; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3A0h] [rbp+2A0h] BYREF
  void *v126; // [rsp+3B0h] [rbp+2B0h]
  int v127; // [rsp+3B8h] [rbp+2B8h]
  int v128; // [rsp+3BCh] [rbp+2BCh]
  __int64 *v129; // [rsp+3C0h] [rbp+2C0h]
  __int64 v130; // [rsp+3C8h] [rbp+2C8h]
  unsigned __int64 *v131; // [rsp+3D0h] [rbp+2D0h]
  __int64 v132; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v133; // [rsp+3E0h] [rbp+2E0h]
  __int64 v134; // [rsp+3E8h] [rbp+2E8h]
  char *v135; // [rsp+3F0h] [rbp+2F0h]
  __int64 v136; // [rsp+3F8h] [rbp+2F8h]
  _OWORD *v137; // [rsp+400h] [rbp+300h]
  __int64 v138; // [rsp+408h] [rbp+308h]
  unsigned __int64 *v139; // [rsp+410h] [rbp+310h]
  __int64 v140; // [rsp+418h] [rbp+318h]
  struct _EVENT_DATA_DESCRIPTOR v141; // [rsp+420h] [rbp+320h] BYREF
  void *v142; // [rsp+430h] [rbp+330h]
  int v143; // [rsp+438h] [rbp+338h]
  int v144; // [rsp+43Ch] [rbp+33Ch]
  unsigned int *v145; // [rsp+440h] [rbp+340h]
  __int64 v146; // [rsp+448h] [rbp+348h]
  struct ExecutionModel::ResourceSet **v147; // [rsp+450h] [rbp+350h]
  __int64 v148; // [rsp+458h] [rbp+358h]
  void *v149; // [rsp+460h] [rbp+360h]
  int v150; // [rsp+468h] [rbp+368h]
  int v151; // [rsp+46Ch] [rbp+36Ch]
  char *v152; // [rsp+470h] [rbp+370h]
  int v153; // [rsp+478h] [rbp+378h]
  int v154; // [rsp+47Ch] [rbp+37Ch]
  int *v155; // [rsp+480h] [rbp+380h]
  __int64 v156; // [rsp+488h] [rbp+388h]
  int *v157; // [rsp+490h] [rbp+390h]
  __int64 v158; // [rsp+498h] [rbp+398h]
  char *v159; // [rsp+4A0h] [rbp+3A0h]
  __int64 v160; // [rsp+4A8h] [rbp+3A8h]
  int *v161; // [rsp+4B0h] [rbp+3B0h]
  __int64 v162; // [rsp+4B8h] [rbp+3B8h]
  char *v163; // [rsp+4C0h] [rbp+3C0h]
  __int64 v164; // [rsp+4C8h] [rbp+3C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4D0h] [rbp+3D0h] BYREF
  unsigned int *v166; // [rsp+4F0h] [rbp+3F0h]
  __int64 v167; // [rsp+4F8h] [rbp+3F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+500h] [rbp+400h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v169; // [rsp+510h] [rbp+410h] BYREF
  int *v170; // [rsp+520h] [rbp+420h]
  __int64 v171; // [rsp+528h] [rbp+428h]
  int *v172; // [rsp+530h] [rbp+430h]
  __int64 v173; // [rsp+538h] [rbp+438h]
  char *v174; // [rsp+540h] [rbp+440h]
  __int64 v175; // [rsp+548h] [rbp+448h]

  v3 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a2 + 175);
  v4 = (__int64 *)((char *)a2 + 1808);
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)a2 + 226);
  v110 = a3;
  v7 = this;
  v95 = this;
  v8 = (struct ExecutionModel::ModernActivationResourceInfo *)*((_QWORD *)v3 + 75);
  v100 = v8;
  v93 = 0;
  v99 = v3;
  if ( v5 && (v5 = (ExecutionModel::ResourceSet *)((char *)v5 - 1368)) != 0LL )
  {
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 8LL))(v5);
    if ( *((_DWORD *)v5 + 338) != 2
      || !*((_BYTE *)v5 + 12)
      || (v9 = *(_QWORD *)v5,
          v112 = v5,
          (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v9 + 8))(v5),
          !(unsigned int)ExecutionModel::ModernActivationResourceInfo::IsApplied((__int64)v8, &v112)) )
    {
      v71 = v93;
      v92 = -2147220218;
      goto LABEL_82;
    }
    ExecutionModel::ResourceManager::TransitionResources(v7, v5, a2);
  }
  else
  {
    v78 = *((_QWORD *)v3 + 106);
    v79 = *((_QWORD *)a2 + 183);
    if ( v78 < v79 )
      v79 = *((_QWORD *)v3 + 106);
    *((_QWORD *)v3 + 106) = v78 - v79;
    v80 = *((_QWORD *)v3 + 104);
    v81 = *((_QWORD *)a2 + 219);
    if ( v80 < v81 )
      v81 = *((_QWORD *)v3 + 104);
    *((_QWORD *)v3 + 104) = v80 - v81;
    v82 = *((_QWORD *)v3 + 105);
    v83 = *((_QWORD *)a2 + 182);
    if ( v82 < v83 )
      v83 = *((_QWORD *)v3 + 105);
    *((_QWORD *)v3 + 105) = v82 - v83;
  }
  v10 = *((_QWORD *)a2 + 175);
  v11 = 0LL;
  v97 = 0LL;
  if ( v10 )
  {
    v11 = v10;
    v97 = v10;
    v12 = (struct ExecutionModel::ResourceSet **)*((_QWORD *)a2 + 173);
    v13 = (struct ExecutionModel::ResourceSet **)*((_QWORD *)a2 + 174);
    if ( v12[1] != (struct ExecutionModel::ResourceSet *)((char *)a2 + 1384)
      || *v13 != (struct ExecutionModel::ResourceSet *)((char *)a2 + 1384) )
    {
      __fastfail(3u);
    }
    *v13 = (struct ExecutionModel::ResourceSet *)v12;
    v12[1] = (struct ExecutionModel::ResourceSet *)v13;
    *((_DWORD *)a2 + 344) = 2;
  }
  v14 = *((_QWORD *)a2 + 175);
  if ( !v14 || *(_DWORD *)(v14 + 40) == 1 )
  {
    if ( !v11 )
    {
      v89 = *((_DWORD *)a2 + 2);
      memset_0(v124, 0, 0x228uLL);
      v124[0] = v89;
      RmpActivityHostFindByTypeAndIdentifier(1LL, v124, &v97);
      v11 = v97;
    }
    RmpActivityHostSetProcessResourceSet(v11, a2);
    *((_QWORD *)a2 + 175) = v11;
    QueryUnbiasedInterruptTime((PULONGLONG)(v11 + 928));
  }
  else
  {
    v15 = *(__int64 **)(v14 + 600);
    v11 = *((_QWORD *)a2 + 175);
    v97 = v11;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
    v16 = (__int64 *)*v15;
    while ( v16 != v15 )
    {
      if ( (struct ExecutionModel::ResourceSet *)v16[2] == a2 )
      {
        v17 = v16;
        v16 = (__int64 *)*v16;
        v18 = (__int64 *)v17[1];
        v19 = *v17;
        *v18 = *v17;
        *(_QWORD *)(v19 + 8) = v18;
        v20 = (ExecutionModel::ResourceSet *)v17[2];
        v96 = v20;
        if ( v20 )
        {
          v98 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
          if ( (__int64 (__fastcall *)(ExecutionModel::ResourceSet *))v98 == ExecutionModel::ResourceSet::Release )
            ExecutionModel::ResourceSet::Release(v20);
          else
            ((void (__fastcall *)(ExecutionModel::ResourceSet *))v98)(v96);
        }
        operator delete(v17);
        --v15[2];
      }
      else
      {
        v16 = (__int64 *)*v16;
      }
    }
    v21 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL);
    if ( v21 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(a2);
    else
      v21(a2);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
    v22 = v15 + 3;
    v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v99;
    v24 = v23;
    if ( v23 )
    {
      v23[2] = a2;
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
      v25 = (_QWORD *)v22[1];
      v24[1] = v25;
      *v24 = v22;
      *v25 = v24;
      v22[1] = v24;
      ++v22[2];
    }
    v26 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL);
    if ( v26 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(a2);
    else
      v26(a2);
    QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)a2 + 175) + 928LL));
    v7 = v95;
    v4 = (__int64 *)((char *)a2 + 1808);
  }
  if ( (*((_DWORD *)a2 + 441) & 0x80000) != 0 )
    RmpActivityHostOnGpuMonitoredResourceSetCountChange(v11, (char *)RmSvcGlobals + 112, 1LL);
  v27 = *(_DWORD *)(v11 + 936);
  *(_DWORD *)(v11 + 936) = RmpActivityImportanceMergeVectors(v27, *((_DWORD *)a2 + 357));
  RmpActivityHostOnImportanceChange((struct _RM_ACTIVITY_HOST *)v11, v27);
  v29 = *((_DWORD *)v7 + 70);
  if ( (v29 & 1) == 0 )
  {
    v30 = (struct _TP_WORK *)*((_QWORD *)v7 + 33);
    *((_DWORD *)v7 + 70) = v29 | 1;
    SubmitThreadpoolWork(v30);
  }
  ExecutionModel::ResourceManager::UpdateEnforcerRunabilitySettings(
    v28,
    v3,
    a2,
    v100,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v121);
  v31 = *v4;
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    *((_QWORD *)a2 + 226) = 0LL;
  }
  v32 = (ModernResourceEnforcer *)*((_QWORD *)v7 + 15);
  v33 = *((_DWORD *)v3 + 145);
  v34 = *((_QWORD *)v3 + 3);
  v35 = *((_DWORD *)v3 + 146);
  v36 = *(_QWORD *)v32;
  v94 = v33;
  v37 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *))(v36 + 48);
  if ( v37 == ModernResourceEnforcer::QueryCurrentMemoryUsage )
    v38 = ModernResourceEnforcer::QueryCurrentMemoryUsage(
            v32,
            (const unsigned __int16 *)v3 + 24,
            (struct _RM_ACTIVITY_HOST *)((char *)v3 + 512),
            v33,
            v35,
            v34,
            &v109,
            &v119);
  else
    v38 = v37(
            v32,
            (const unsigned __int16 *)v3 + 24,
            (struct _RM_ACTIVITY_HOST *)((char *)v3 + 512),
            v94,
            v35,
            v34,
            &v109,
            &v119);
  v40 = v38;
  if ( v38 >= 0 )
  {
    RmpActivityHostQueryCommit(v3, 0LL, &v117);
    v43 = *((_QWORD *)v3 + 75);
    v44 = v117;
    v45 = v117;
    if ( *(_QWORD *)(v43 + 56) > v117 )
      v45 = *(_QWORD *)(v43 + 56);
    *(_QWORD *)(v43 + 56) = v45;
    v46 = *((_DWORD *)v3 + 10);
    if ( v46 )
    {
      if ( v46 != 1 )
      {
        v52 = *(_QWORD *)&v123[0];
        goto LABEL_50;
      }
      v90 = (_QWORD *)*((_QWORD *)v3 + 75);
      v48 = v90[219];
      v47 = v90[182];
      v50 = (struct _RM_ACTIVITY_HOST *)v90[183];
      v49 = v90[231];
      v108 = v48;
      v107 = v47;
      v99 = v50;
      v98 = v49;
    }
    else
    {
      ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
        *((ExecutionModel::ModernActivationResourceInfo **)v3 + 75),
        &v98,
        0LL,
        (unsigned __int64 *)&v99,
        &v108,
        &v107);
      v47 = v107;
      v48 = v108;
      v49 = v98;
      v50 = v99;
    }
    if ( v48 < v49 )
      v42 = v48;
    else
      v42 = v49;
    v51 = v48 + *((_QWORD *)v3 + 104) - v42;
    if ( v47 < v49 )
      v41 = v47;
    else
      v41 = v49;
    v52 = (unsigned __int64)v50 + *((_QWORD *)v3 + 106) - v49;
    if ( v44 < v51 )
    {
      v53 = 1;
      v54 = 0LL;
    }
    else if ( v44 < v47 + *((_QWORD *)v3 + 105) - v41 )
    {
      v54 = v51;
      v53 = 2;
      v51 = v47 + *((_QWORD *)v3 + 105) - v41;
    }
    else
    {
      v53 = 3;
      v54 = v47 + *((_QWORD *)v3 + 105) - v41;
      v51 = 0LL;
    }
    if ( v44 && v52 )
    {
      RmpActivityHostComputeCommitEstimate(v44, v52, &v114, &v96);
      if ( v54 <= v114 )
        v54 = v114;
      if ( v51 )
      {
        if ( v51 >= (unsigned __int64)v96 )
          v51 = (unsigned __int64)v96;
      }
      else
      {
        v51 = (unsigned __int64)v96;
      }
    }
    *(_QWORD *)&v121 = v54;
    *((_QWORD *)&v121 + 1) = v51;
    *(_QWORD *)&v123[0] = v52;
    v94 = v53;
LABEL_50:
    v116 = v122[0];
    if ( v122[1] )
    {
      v122[0] = v122[1];
    }
    else
    {
      v55 = *((_QWORD *)&v123[0] + 1);
      if ( *((_QWORD *)&v123[0] + 1) )
      {
        if ( v52 < *((_QWORD *)&v123[0] + 1) )
          v55 = v52;
        v122[0] = v55;
      }
      else
      {
        v122[0] = v52;
      }
    }
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v118 = *((_QWORD *)v3 + 3);
      v129 = &v118;
      v131 = &v116;
      v133 = &v122[1];
      v135 = (char *)v123 + 8;
      v137 = v123;
      v139 = v122;
      v130 = 8LL;
      v132 = 8LL;
      v134 = 8LL;
      v136 = 8LL;
      v138 = 8LL;
      v140 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180062923 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v126 = &unk_18006292E;
      UserData.Reserved = 2;
      v127 = 168;
      v128 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
    v39 = (const struct _TlgProvider_t *)*((unsigned int *)v3 + 10);
    if ( (_DWORD)v39 )
    {
      if ( (_DWORD)v39 == 1 )
      {
        v58 = RmpEnforcementApplyLimitsProcessHost(v3, &v121, v41, v42);
        if ( v58 >= 0 )
          goto LABEL_61;
      }
      else
      {
        v58 = -1073741811;
      }
    }
    else
    {
      v56 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *))(**((_QWORD **)RmSvcGlobals + 10) + 32LL);
      if ( v56 == ModernResourceEnforcer::SetProcessConfig )
        v57 = ModernResourceEnforcer::SetProcessConfig(
                *((ModernResourceEnforcer **)RmSvcGlobals + 10),
                v3,
                (struct _RM_ENFORCEMENT_SETTINGS *)&v121);
      else
        v57 = v56(*((ModernResourceEnforcer **)RmSvcGlobals + 10), v3, (struct _RM_ENFORCEMENT_SETTINGS *)&v121);
      v58 = v57;
      if ( v57 >= 0 )
      {
LABEL_61:
        v59 = *((_DWORD *)v3 + 10) == 0;
        v58 = 0;
        *((_OWORD *)v3 + 39) = v121;
        *((_OWORD *)v3 + 40) = *(_OWORD *)v122;
        *((_OWORD *)v3 + 41) = v123[0];
        *((_OWORD *)v3 + 42) = v123[1];
        *((_OWORD *)v3 + 43) = v123[2];
        if ( v59 )
        {
          v60 = *((_DWORD *)v3 + 145);
          v61 = *((_QWORD *)v3 + 3);
          v62 = *((_DWORD *)v3 + 146);
          v63 = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 262);
          v102 = v60;
          v120 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, wchar_t *, union _RM_SID *, int, unsigned int, unsigned __int64, unsigned __int64))(*(_QWORD *)v63 + 368LL);
          if ( v120 == ExecutionModel::ResourceManager::CommitMemoryLimitChange )
            ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              v63,
              (wchar_t *)v3 + 24,
              (struct _RM_ACTIVITY_HOST *)((char *)v3 + 512),
              v60,
              v62,
              v61,
              v122[0]);
          else
            v120(v63, (wchar_t *)v3 + 24, (struct _RM_ACTIVITY_HOST *)((char *)v3 + 512), v102, v62, v61, v122[0]);
        }
      }
    }
    v40 = v58 | 0x10000000;
    if ( v40 >= 0 )
      v40 = 0;
  }
  v92 = v40;
  if ( v40 < 0 )
  {
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v39, 9uLL) )
    {
      v85 = (const WCHAR *)*((_QWORD *)a2 + 4);
      v166 = &v92;
      v167 = 4LL;
      TlgCreateWsz(&pDesc, v85);
      TlgCreateSid(&v169, (const SID *)((char *)a2 + 64));
      v86 = (const struct _TlgProvider_t *)*((unsigned int *)a2 + 33);
      v170 = &v105;
      v103 = *((_DWORD *)a2 + 34);
      v172 = &v103;
      v174 = (char *)a2 + 144;
      v105 = (int)v86;
      v171 = 4LL;
      v173 = 4LL;
      v175 = 8LL;
      TlgWrite(v86, &unk_180062377, v87, v88, 8u, &pData);
      v40 = v92;
    }
    if ( v40 == -805306316 || v40 == -805306102 )
    {
      v71 = 1;
      if ( v5 )
        (*(void (__fastcall **)(ExecutionModel::ResourceSet *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      v7 = v95;
      v92 = 0;
    }
    else
    {
      ExecutionModel::ModernActivationResourceInfo::UndoSetAsApplied(v100, a2);
      if ( v5 )
        v91 = (struct IUnknown *)((char *)v5 + 1368);
      else
        v91 = 0LL;
      if ( *((struct IUnknown **)a2 + 226) != v91 )
        ATL::AtlComPtrAssign((struct IUnknown **)a2 + 226, v91);
      v7 = v95;
      v71 = v93;
    }
  }
  else
  {
    if ( v5 )
    {
      v64 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, char))(*(_QWORD *)v5 + 32LL);
      if ( v64 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
        v65 = ExecutionModel::ResourceSet::ReleaseResourcesInternal(v5, 1);
      else
        v65 = v64(v5, 1);
      v92 = v65;
    }
    v7 = v95;
    *((_QWORD *)a2 + 229) = 0LL;
    *((_DWORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 12) = 1;
    *((_QWORD *)a2 + 223) = 0LL;
    *((_QWORD *)a2 + 224) = 0LL;
    *((_QWORD *)a2 + 225) = 0LL;
    v66 = *(__int64 (__fastcall **)(struct _WNF_STATE_NAME *, __int64, int))(*(_QWORD *)v7 + 376LL);
    if ( v66 == ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
      ExecutionModel::ResourceManager::UpdateCommitMemoryLevel((struct _WNF_STATE_NAME *)v7, (__int64)v3, v94);
    else
      v66((struct _WNF_STATE_NAME *)v7, (__int64)v3, v94);
    v68 = 1;
    if ( (*((_BYTE *)a2 + 1432) & 2) == 0 )
    {
      v67 = *((int *)a2 + 352);
      if ( (unsigned int)v67 > 0x28 || (v84 = 0x11000002000LL, !_bittest64(&v84, v67)) )
        v68 = 0;
    }
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(v7, v3, v68);
    for ( i = (_QWORD *)*((_QWORD *)v100 + 3); i != (_QWORD *)((char *)v100 + 24); i = (_QWORD *)*i )
    {
      if ( !*(_DWORD *)(i[2] + 1472LL) )
        goto LABEL_81;
    }
    SetEvent(*((HANDLE *)RmSvcGlobals + 205));
LABEL_81:
    v70 = *((_QWORD *)a2 + 175);
    _InterlockedIncrement((volatile signed __int32 *)(v70 + 16));
    v92 = 0;
    v71 = 0;
    *v110 = (struct _RM_ACTIVITY_HOST *)v70;
  }
LABEL_82:
  if ( v5 )
  {
    v72 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL);
    if ( v72 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v5);
    else
      v72(v5);
  }
  if ( v71 )
    ExecutionModel::ResourceManager::OnApplicationTerminated(
      v7,
      *((LPCWSTR *)a2 + 4),
      (struct ExecutionModel::ResourceSet *)((char *)a2 + 64),
      *((_DWORD *)a2 + 33),
      *((_DWORD *)a2 + 34),
      *((_QWORD *)a2 + 18));
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 && (qword_180071078 & 9) == qword_180071078 )
  {
    v73 = (void *)*((_QWORD *)a2 + 4);
    v145 = &v92;
    v147 = &v111;
    LODWORD(v74) = 0;
    v146 = 4LL;
    v75 = &unk_1800574EC;
    v111 = a2;
    v148 = 8LL;
    if ( v73 )
    {
      v75 = v73;
      v74 = -1LL;
      do
        ++v74;
      while ( *((_WORD *)v73 + v74) );
    }
    v76 = 2 * v74 + 2;
    v149 = v75;
    LOBYTE(v74) = *((_BYTE *)a2 + 65);
    v150 = v76;
    v151 = 0;
    if ( (unsigned __int8)v74 > 0xFu )
      LODWORD(v74) = 15;
    else
      LODWORD(v74) = (unsigned __int8)v74;
    v152 = (char *)a2 + 64;
    v153 = 4 * v74 + 8;
    v101 = *((_DWORD *)a2 + 33);
    v155 = &v101;
    v104 = *((_DWORD *)a2 + 34);
    v157 = &v104;
    v159 = (char *)a2 + 144;
    v106 = *((_DWORD *)a2 + 352);
    v161 = &v106;
    v163 = (char *)a2 + 1464;
    v154 = 0;
    v156 = 4LL;
    v158 = 4LL;
    v160 = 8LL;
    v162 = 4LL;
    v164 = 8LL;
    *(_DWORD *)&v115.Level = 4;
    v141.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&v115.Id = ((unsigned int)&unk_180061EE2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v115.Keyword = 9LL;
    v141.Size = *(unsigned __int16 *)off_180071068;
    v142 = &unk_180061EED;
    v141.Reserved = 2;
    v143 = 135;
    v144 = 1;
    EventWriteTransfer(RegHandle, &v115, 0LL, 0LL, 0xBu, &v141);
  }
  return v92;
}

/*
 * XREFs of ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420
 * Callers:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011F90 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 * Callees:
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180003E1C (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x180006A18 (RmpPsmAppFamilyIdInitialize.c)
 *     RmpActivityHostCreateHostPsm @ 0x180007C50 (RmpActivityHostCreateHostPsm.c)
 *     RmpPsmAppFamilyTableFind @ 0x1800088C0 (RmpPsmAppFamilyTableFind.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180008AEC (RmpEnforcementWorkerSynchronize.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180009178 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180009FA4 (-TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVReso.c)
 *     ?AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18000A020 (-AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D90C (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D9EC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DAE0 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18000EAC0 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x18000F1E4 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180015790 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpEmptyWorkerCleanup @ 0x18001BC5C (RmpEmptyWorkerCleanup.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSetHelperPhase2(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        wchar_t *a5,
        union _RM_SID *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  volatile signed __int32 *v13; // rsi
  struct ExecutionModel::IResourceSet *v14; // r14
  ExecutionModel::BaseResourceSet *v16; // rdi
  char *v17; // rax
  char v18; // r15
  char *v19; // r13
  char *v20; // rax
  int v21; // ecx
  char *v22; // rcx
  __int64 v23; // rax
  __int128 v24; // xmm0
  char *v25; // rbx
  unsigned int v26; // ecx
  int PackageFullNameFromKey; // r14d
  LONG v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // r14d
  unsigned __int64 v32; // rbx
  unsigned __int16 *v33; // r9
  _BYTE *v34; // rax
  _BYTE *v35; // rcx
  unsigned __int64 v36; // rax
  void *v37; // rax
  void **v38; // rax
  void *v39; // r14
  size_t v40; // rbx
  unsigned __int16 *v41; // rbx
  ULONG v42; // eax
  wchar_t *v43; // rcx
  __int64 v44; // rdx
  wchar_t *v45; // rax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int64 v55; // r13
  WCHAR *v56; // rbx
  __int128 v57; // xmm1
  __int64 v58; // rax
  __int64 v59; // rsi
  WCHAR *v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  int v63; // r14d
  unsigned int v64; // r9d
  __int64 v65; // r11
  __int64 v66; // r10
  unsigned int v67; // r9d
  __int64 v68; // rbx
  __int64 v69; // r15
  ExecutionModel::ResourceManager *v70; // rbx
  __int64 (__fastcall *v71)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **); // rbx
  int ResourceSetInfo; // eax
  int Instance; // r14d
  unsigned __int64 *v74; // r11
  char *v75; // r9
  unsigned int v76; // r14d
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r10
  bool v79; // zf
  unsigned int v80; // r14d
  __int64 v81; // rcx
  struct ExecutionModel::IResourceSet **v82; // rbx
  __int64 v83; // rsi
  __int64 v84; // r14
  __int64 v85; // xmm1_8
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  ExecutionModel::ResourceSet **i; // rbx
  bool *v89; // rax
  volatile signed __int32 *v90; // r15
  void *v91; // rcx
  __int64 (__fastcall *v92)(ExecutionModel::BaseResourceSet *); // rbx
  int HostPsm; // eax
  __int64 v95; // rax
  _QWORD *v96; // r14
  ExecutionModel::ModernActivationResourceInfo **v97; // rbx
  int v98; // r8d
  int SharedResourceSetListAndAcquire; // eax
  ExecutionModel::ResourceSet *v100; // rbx
  _QWORD *v101; // rbx
  void *v102; // rcx
  void *v103; // rcx
  _QWORD *v104; // rdx
  __int64 v105; // rax
  volatile signed __int32 *v106; // [rsp+80h] [rbp-80h]
  __int64 v107; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v109; // [rsp+98h] [rbp-68h]
  UINT32 packageFamilyNameLength; // [rsp+9Ch] [rbp-64h] BYREF
  struct ExecutionModel::IResourceSet **v111; // [rsp+A0h] [rbp-60h]
  ExecutionModel::ResourceSet *v112; // [rsp+A8h] [rbp-58h]
  struct ExecutionModel::_ResourceSetInfo *v113; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v115; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v116; // [rsp+C8h] [rbp-38h]
  _BYTE *v117; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v118[2]; // [rsp+DEh] [rbp-22h] BYREF
  ExecutionModel::BaseResourceSet *v119; // [rsp+E0h] [rbp-20h]
  void *Block; // [rsp+E8h] [rbp-18h]
  ExecutionModel::ResourceManager *v121; // [rsp+F0h] [rbp-10h]
  wchar_t *Source; // [rsp+F8h] [rbp-8h]
  void *v123[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v124; // [rsp+110h] [rbp+10h]
  char *v125; // [rsp+118h] [rbp+18h]
  PSID Sid; // [rsp+120h] [rbp+20h]
  bool *v127; // [rsp+128h] [rbp+28h]
  int v128; // [rsp+130h] [rbp+30h] BYREF
  void *v129[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v130[2]; // [rsp+148h] [rbp+48h] BYREF
  void *v131; // [rsp+158h] [rbp+58h]
  struct ExecutionModel::IResourceSetCallback *v132; // [rsp+160h] [rbp+60h]
  wchar_t Destination[232]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v134[68]; // [rsp+340h] [rbp+240h] BYREF
  unsigned int v135; // [rsp+384h] [rbp+284h]
  unsigned int v136; // [rsp+388h] [rbp+288h]
  unsigned __int64 v137; // [rsp+390h] [rbp+290h]
  wchar_t String1[232]; // [rsp+3A0h] [rbp+2A0h] BYREF
  WCHAR Buf1[48]; // [rsp+570h] [rbp+470h] BYREF
  char v140[544]; // [rsp+5D0h] [rbp+4D0h] BYREF
  __int128 v141; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v142; // [rsp+800h] [rbp+700h]
  WCHAR packageFamilyName; // [rsp+810h] [rbp+710h] BYREF
  char v144[142]; // [rsp+812h] [rbp+712h] BYREF
  WCHAR packageFullName; // [rsp+8A0h] [rbp+7A0h] BYREF
  char v146[254]; // [rsp+8A2h] [rbp+7A2h] BYREF

  v13 = 0LL;
  v14 = a12;
  Source = a5;
  v16 = 0LL;
  packageFamilyNameLength = 0;
  Sid = a6;
  v127 = a11;
  v111 = a13;
  v115 = (unsigned __int16 *)&v117;
  v121 = this;
  v116 = (unsigned __int16 *)&v117;
  v131 = a4;
  v132 = a3;
  v112 = a12;
  v119 = 0LL;
  LOWORD(v117) = 0;
  v113 = 0LL;
  v17 = (char *)malloc(0x168uLL);
  Block = v17;
  v18 = 2;
  v19 = v17;
  if ( v17 )
  {
    v20 = v17 + 72;
    v21 = 2;
    do
    {
      --v21;
      *(_DWORD *)v20 = -1;
      *((_QWORD *)v20 + 1) = 0LL;
      *((_DWORD *)v20 + 4) = 101;
      *((_WORD *)v20 + 10) = 0;
      v20 += 24;
    }
    while ( v21 >= 0 );
    v22 = v19;
    v23 = 2LL;
    do
    {
      v22 += 128;
      v24 = *(_OWORD *)a2;
      a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
      *((_OWORD *)v22 - 8) = v24;
      *((_OWORD *)v22 - 7) = *((_OWORD *)a2 - 7);
      *((_OWORD *)v22 - 6) = *((_OWORD *)a2 - 6);
      *((_OWORD *)v22 - 5) = *((_OWORD *)a2 - 5);
      *((_OWORD *)v22 - 4) = *((_OWORD *)a2 - 4);
      *((_OWORD *)v22 - 3) = *((_OWORD *)a2 - 3);
      *((_OWORD *)v22 - 2) = *((_OWORD *)a2 - 2);
      *((_OWORD *)v22 - 1) = *((_OWORD *)a2 - 1);
      --v23;
    }
    while ( v23 );
    *(_OWORD *)v22 = *(_OWORD *)a2;
    *((_OWORD *)v22 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v22 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v22 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v22 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v22 + 5) = *((_OWORD *)a2 + 5);
    *((_QWORD *)v22 + 12) = *((_QWORD *)a2 + 12);
  }
  else
  {
    v19 = 0LL;
    Block = 0LL;
  }
  v124 = 0LL;
  v123[0] = v123;
  v123[1] = v123;
  v141 = 0uLL;
  v142 = 0LL;
  v106 = 0LL;
  P = 0LL;
  if ( a12 )
    v25 = (char *)a12 - 1368;
  else
    v25 = 0LL;
  v125 = v25;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v26 = a8;
  v114 = 11LL;
  if ( !a8 )
  {
    if ( v25 )
    {
      v13 = (volatile signed __int32 *)*((_QWORD *)v25 + 175);
      v106 = v13;
      P = (PVOID)v13;
      if ( v13 )
      {
        _InterlockedIncrement(v13 + 4);
        v13 = (volatile signed __int32 *)P;
        v16 = v119;
        v106 = (volatile signed __int32 *)P;
      }
    }
    v69 = 0LL;
LABEL_54:
    if ( (v19[358] & 1) != 0 && (v26 || a10) && *((_QWORD *)v19 + 13) )
    {
      v98 = (int)v25;
      v70 = v121;
      SharedResourceSetListAndAcquire = ExecutionModel::ResourceManager::GenerateSharedResourceSetListAndAcquire(
                                          (_DWORD)v121,
                                          (_DWORD)v19,
                                          v98,
                                          (unsigned int)v123,
                                          a10,
                                          (__int64)Source,
                                          (__int64)Sid,
                                          a7,
                                          (__int64)&v115,
                                          (__int64)&v107);
      Instance = SharedResourceSetListAndAcquire;
      if ( SharedResourceSetListAndAcquire < 0 )
        goto LABEL_164;
      v69 = v107;
      v14 = v112;
    }
    else
    {
      v70 = v121;
      v107 = 0LL;
    }
    if ( !v14 )
      goto LABEL_72;
    if ( v113 )
      operator delete(v113);
    v113 = 0LL;
    v71 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **))(*(_QWORD *)v14 + 56LL);
    if ( v71 == ExecutionModel::ResourceSet::GetResourceSetInfo )
      ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(v14, &v113);
    else
      ResourceSetInfo = v71(v14, &v113);
    Instance = ResourceSetInfo;
    if ( ResourceSetInfo >= 0 )
    {
      v74 = (unsigned __int64 *)&v141;
      v75 = v19 + 80;
      v76 = 1;
      do
      {
        if ( v76 > 3 )
          v77 = -1LL;
        else
          v77 = *(_QWORD *)((char *)v113 + v75 - v19);
        if ( v76 > 3 )
          v78 = -1LL;
        else
          v78 = *(_QWORD *)v75;
        if ( v77 < v78 )
        {
          ExecutionModel::_ResourceSetInfo::SetAmount((__int64)v19, v76 - 1, v78 - v77);
        }
        else if ( v76 <= 3 )
        {
          *(_QWORD *)v75 = 0LL;
        }
        ++v76;
        *v74 = v78;
        v75 += 24;
        ++v74;
      }
      while ( (unsigned __int64)(int)(v76 - 1) < 3 );
      v14 = v112;
      v70 = v121;
      ExecutionModel::ResourceManager::SetTransitionalResourceSetPriority(
        (__int64)v121,
        (__int64)v112,
        *((_DWORD *)v19 + 3));
      v13 = v106;
LABEL_72:
      if ( v127 )
      {
        v79 = v14 == 0LL;
        v80 = a8;
        if ( v79 )
        {
          if ( a8 == 4 )
          {
LABEL_75:
            LODWORD(v114) = 12;
            goto LABEL_78;
          }
          if ( a8 )
          {
            if ( a8 != 2 )
            {
              if ( a8 == 8 )
                goto LABEL_75;
              goto LABEL_77;
            }
          }
          else
          {
            LODWORD(v114) = 10;
          }
        }
        else
        {
          LODWORD(v114) = 13;
        }
LABEL_78:
        v81 = *((_QWORD *)v70 + *((int *)v19 + 2) + 22);
        if ( v81 )
        {
          v16 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)v70 + *((int *)v19 + 2) + 22);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 8LL))(v81);
          v119 = v16;
        }
        v82 = v111;
        Instance = ExecutionModel::ResourceSet::CreateInstance(
                     v121,
                     v16,
                     v19,
                     v132,
                     v131,
                     v13,
                     Source,
                     Sid,
                     a7,
                     v80,
                     a9,
                     v114,
                     2 - (unsigned int)(v127 != 0LL),
                     v127,
                     v111);
        if ( Instance >= 0 )
        {
          if ( *v82 )
            v83 = (__int64)*v82 - 1368;
          else
            v83 = 0LL;
          if ( v112 )
          {
            if ( *(ExecutionModel::ResourceSet **)(v83 + 1808) != v112 )
            {
              (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v112 + 8LL))(v112);
              v84 = *(_QWORD *)(v83 + 1808);
              if ( v84 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v84 + 16LL))(*(_QWORD *)(v83 + 1808));
              *(_QWORD *)(v83 + 1808) = v112;
            }
            v85 = v142;
            *(_OWORD *)(v83 + 1784) = v141;
            *(_QWORD *)(v83 + 1800) = v85;
          }
          if ( *(_DWORD *)(v83 + 136) )
          {
            if ( (*(_BYTE *)(v83 + 1434) & 0x40) != 0
              || (v86 = *(int *)(v83 + 1408), (unsigned int)v86 <= 0x29)
              && (v87 = 0x24704100001LL, _bittest64(&v87, v86)) )
            {
              if ( (*(_BYTE *)(v83 + 1766) & 1) == 0 && v115 != v116 )
              {
                RmpPsmAppFamilyIdInitialize(v115, v83 + 64, *(_DWORD *)(v83 + 132), (__int64)v140);
                v95 = RmpPsmAppFamilyTableFind(v140);
                if ( v95 )
                {
                  v96 = (_QWORD *)(v95 + 560);
                  if ( v95 != -560 )
                  {
                    do
                    {
                      v97 = *(ExecutionModel::ModernActivationResourceInfo ***)(*(v96 - 1) + 600LL);
                      ExecutionModel::ModernActivationResourceInfo::AddNewFGResourceSetForSharing(
                        v97,
                        (struct ExecutionModel::ResourceSet *)v83);
                      ExecutionModel::ModernActivationResourceInfo::TriggerAddNewBGResourceSetForSharing(
                        v97,
                        (struct ExecutionModel::ResourceSet *)v83);
                      v96 = (_QWORD *)*v96;
                    }
                    while ( v96 );
                  }
                }
              }
            }
          }
          for ( i = (ExecutionModel::ResourceSet **)v123[0];
                i != (ExecutionModel::ResourceSet **)v123;
                i = (ExecutionModel::ResourceSet **)*i )
          {
            ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
              (ExecutionModel::ResourceSet **)i[2],
              (struct ExecutionModel::ResourceSet *)v83,
              0);
            ExecutionModel::ResourceSet::AddFGResourceSetForSharing((ExecutionModel::ResourceSet *)v83, i[2], 0);
          }
          v89 = v127;
          *(_QWORD *)(v83 + 1856) = v69;
          if ( v89 )
          {
            if ( *v89 )
              ExecutionModel::ResourceSet::LogPendingBegin((ExecutionModel::ResourceSet *)v83);
            v90 = v106;
          }
          else
          {
            v90 = v106;
            if ( v106 )
              RmpEnforcementWorkerSynchronize((__int64)v106);
          }
          Instance = 0;
          goto LABEL_100;
        }
        goto LABEL_165;
      }
      v80 = a8;
LABEL_77:
      LODWORD(v114) = -1;
      goto LABEL_78;
    }
LABEL_164:
    v82 = v111;
LABEL_165:
    v90 = v106;
    goto LABEL_166;
  }
  packageFamilyName = 0;
  memset_0(v144, 0, 0x80uLL);
  packageFamilyNameLength = 65;
  packageFullName = 0;
  memset_0(v146, 0, sizeof(v146));
  v128 = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(Source, &packageFullName, &v128);
  if ( PackageFullNameFromKey < 0 )
  {
    v31 = PackageFullNameFromKey | 0x10000000;
  }
  else
  {
    v28 = PackageFamilyNameFromFullName(&packageFullName, &packageFamilyNameLength, &packageFamilyName);
    v31 = v28;
    if ( !v28 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *(_WORD *)&v144[2 * v32 - 2] );
      v33 = v115;
      v34 = v117;
      if ( v115 == (unsigned __int16 *)&v117 )
        v35 = v118;
      else
        v35 = v117;
      if ( v32 <= (v35 - (_BYTE *)v115) >> 1 )
      {
        if ( v115 != &packageFamilyName )
        {
          memmove(v115, &packageFamilyName, 2 * v32);
          v33 = v115;
        }
        v116 = &v33[v32];
        *v116 = 0;
        goto LABEL_36;
      }
      if ( v115 == (unsigned __int16 *)&v117 )
        v34 = v118;
      v36 = 2 * ((v34 - (_BYTE *)v115) >> 1) + 1;
      if ( v36 < v32 )
        v36 = v32;
      if ( v36 > 0x3FFFFFFFFFFFFFFELL )
        v36 = 0x3FFFFFFFFFFFFFFELL;
      if ( v32 > v36 )
      {
        v130[0] = 0LL;
        v38 = (void **)v130;
        v130[1] = 0LL;
      }
      else
      {
        v18 = 1;
        v129[1] = (void *)(v36 + 1);
        if ( v36 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        {
          v129[0] = 0LL;
        }
        else
        {
          v37 = operator new(2 * (v36 + 1), (const struct std::nothrow_t *)&std::nothrow);
          v33 = v115;
          v129[0] = v37;
        }
        v38 = v129;
      }
      v13 = (volatile signed __int32 *)*v38;
      v39 = v38[1];
      *v38 = 0LL;
      if ( (v18 & 2) != 0 )
      {
        v18 &= ~2u;
        utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
          v130,
          v29,
          v30,
          v33);
        v33 = v115;
      }
      if ( (v18 & 1) != 0 && v129[0] )
      {
        operator delete(v129[0]);
        v33 = v115;
      }
      if ( v13 )
      {
        v40 = 2 * v32;
        memcpy_0((void *)v13, &packageFamilyName, v40);
        v41 = (unsigned __int16 *)((char *)v13 + v40);
        *v41 = 0;
        if ( v115 != (unsigned __int16 *)&v117 )
          operator delete(v115);
        v115 = (unsigned __int16 *)v13;
        v116 = v41;
        v117 = (char *)v13 + 2 * ((__int64)v39 - 1);
        v13 = 0LL;
        goto LABEL_36;
      }
      goto LABEL_146;
    }
    if ( v28 > 0 )
      v31 = (unsigned __int16)v28 | 0x80070000;
  }
  if ( v31 >= 0 )
    goto LABEL_36;
  v33 = v115;
LABEL_146:
  v116 = v33;
  *v33 = (unsigned __int16)v13;
LABEL_36:
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v134, 0, sizeof(v134));
  v42 = RtlLengthSid(Sid);
  memcpy_0(v134, Sid, v42);
  v43 = String1;
  v44 = 4LL;
  v136 = a8;
  v137 = a9;
  v45 = Destination;
  v135 = a7;
  do
  {
    v43 += 64;
    v46 = *(_OWORD *)v45;
    v47 = *((_OWORD *)v45 + 1);
    v45 += 64;
    *((_OWORD *)v43 - 8) = v46;
    v48 = *((_OWORD *)v45 - 6);
    *((_OWORD *)v43 - 7) = v47;
    v49 = *((_OWORD *)v45 - 5);
    *((_OWORD *)v43 - 6) = v48;
    v50 = *((_OWORD *)v45 - 4);
    *((_OWORD *)v43 - 5) = v49;
    v51 = *((_OWORD *)v45 - 3);
    *((_OWORD *)v43 - 4) = v50;
    v52 = *((_OWORD *)v45 - 2);
    *((_OWORD *)v43 - 3) = v51;
    v53 = *((_OWORD *)v45 - 1);
    *((_OWORD *)v43 - 2) = v52;
    *((_OWORD *)v43 - 1) = v53;
    --v44;
  }
  while ( v44 );
  v54 = *(_OWORD *)v45;
  v55 = (__int64)v13;
  v56 = String1;
  v57 = *((_OWORD *)v45 + 1);
  v58 = *((_QWORD *)v45 + 4);
  v59 = 314159LL;
  *(_OWORD *)v43 = v54;
  *((_OWORD *)v43 + 1) = v57;
  *((_QWORD *)v43 + 4) = v58;
  do
  {
    v109 = RtlUpcaseUnicodeChar(*v56++);
    v59 = HIBYTE(v109) + 37 * ((unsigned __int8)v109 + 37 * v59);
  }
  while ( v56 < Buf1 );
  v60 = Buf1;
  v61 = 11LL;
  do
  {
    v62 = *(unsigned __int8 *)v60;
    v60 += 4;
    v59 = *((unsigned __int8 *)v60 - 1)
        + 37
        * (*((unsigned __int8 *)v60 - 2)
         + 37
         * (*((unsigned __int8 *)v60 - 3)
          + 37
          * (*((unsigned __int8 *)v60 - 4)
           + 37
           * (*((unsigned __int8 *)v60 - 5)
            + 37 * (*((unsigned __int8 *)v60 - 6) + 37 * (*((unsigned __int8 *)v60 - 7) + 37 * (v62 + 37 * v59)))))));
    --v61;
  }
  while ( v61 );
  v63 = -1073741275;
  RtlAcquireSRWLockShared((char *)RmSvcGlobals + 40);
LABEL_43:
  v64 = *((_DWORD *)RmSvcGlobals + 439);
  v65 = -1LL << (*((_BYTE *)RmSvcGlobals + 1756) & 0x1F);
  v66 = v65 & v59;
  v107 = v65 & v59;
  if ( v55 )
    goto LABEL_46;
  v67 = v64 >> 5;
  if ( v67 )
  {
    v55 = *((_QWORD *)RmSvcGlobals + 220)
        + 8LL
        * ((37
          * (BYTE6(v107)
           + 37
           * (BYTE5(v107)
            + 37
            * (BYTE4(v107)
             + 37 * (BYTE3(v107) + 37 * (BYTE2(v107) + 37 * (BYTE1(v107) + 37 * ((unsigned __int8)v66 + 11623883)))))))
          + HIBYTE(v107)) & (v67 - 1));
LABEL_46:
    while ( 1 )
    {
      v55 = *(_QWORD *)v55;
      if ( (v55 & 1) != 0 )
        break;
      if ( v66 == (v65 & *(_QWORD *)(v55 + 8)) )
      {
        v68 = v55 - 856;
        if ( !*(_DWORD *)(v55 - 856 + 40)
          && !_wcsicmp(String1, (const wchar_t *)(v68 + 48))
          && !memcmp_0(Buf1, (const void *)(v68 + 512), 0x58uLL) )
        {
          v69 = 0LL;
          v63 = 0;
          _InterlockedIncrement((volatile signed __int32 *)(v68 + 16));
          v16 = v119;
          v13 = (volatile signed __int32 *)(v55 - 856);
          v106 = (volatile signed __int32 *)(v55 - 856);
          P = (PVOID)(v55 - 856);
          goto LABEL_52;
        }
        goto LABEL_43;
      }
    }
  }
  v13 = 0LL;
  v69 = 0LL;
LABEL_52:
  RtlReleaseSRWLockShared((char *)RmSvcGlobals + 40);
  if ( v63 >= 0 )
  {
    v19 = (char *)Block;
    v14 = v112;
    v26 = a8;
    LODWORD(v25) = (_DWORD)v125;
    goto LABEL_54;
  }
  HostPsm = RmpActivityHostCreateHostPsm(Destination, (struct _RM_ACTIVITY_HOST **)&P);
  v19 = (char *)Block;
  if ( HostPsm >= 0 )
  {
    v13 = (volatile signed __int32 *)P;
    v14 = v112;
    v26 = a8;
    LODWORD(v25) = (_DWORD)v125;
    v106 = (volatile signed __int32 *)P;
    goto LABEL_54;
  }
  Instance = HostPsm | 0x10000000;
  v90 = (volatile signed __int32 *)P;
  v82 = v111;
LABEL_166:
  if ( *v82 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 32LL))(0LL, 0LL);
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)*v111 + 16LL))(*v111);
    *v111 = 0LL;
  }
  v100 = (ExecutionModel::ResourceSet *)v123[0];
  if ( v123[0] != v123 )
  {
    while ( v100 != (ExecutionModel::ResourceSet *)v123 )
    {
      ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(
        *((ExecutionModel::ResourceSet **)v100 + 2),
        *((_QWORD *)v19 + 7));
      v100 = *(ExecutionModel::ResourceSet **)v100;
    }
  }
LABEL_100:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v90 )
  {
    if ( _InterlockedExchangeAdd(v90 + 4, 0xFFFFFFFF) == 1 )
    {
      v101 = P;
      if ( *((_DWORD *)P + 8) == 1 )
      {
        if ( *((_QWORD *)P + 94) )
          TpReleaseWork();
        RmpEmptyWorkerCleanup(v101 + 100);
        if ( *((_DWORD *)v101 + 10) == 1 )
        {
          v102 = (void *)v101[88];
          if ( v102 )
            CloseHandle(v102);
          v103 = (void *)v101[89];
          if ( v103 )
            CloseHandle(v103);
        }
      }
      RmpFreeHeap(v101);
    }
    v16 = v119;
  }
  while ( 1 )
  {
    v91 = v123[0];
    if ( v123[0] == v123 )
      break;
    v104 = (_QWORD *)*((_QWORD *)v123[0] + 1);
    v105 = *(_QWORD *)v123[0];
    *v104 = *(_QWORD *)v123[0];
    *(_QWORD *)(v105 + 8) = v104;
    operator delete(v91);
  }
  v124 = 0LL;
  if ( v19 )
    operator delete(v19);
  if ( v113 )
    operator delete(v113);
  if ( v115 != (unsigned __int16 *)&v117 )
    operator delete(v115);
  if ( v16 )
  {
    v92 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v16 + 16LL);
    if ( v92 == ExecutionModel::BaseResourceSet::Release )
      ExecutionModel::BaseResourceSet::Release(v16);
    else
      v92(v16);
  }
  return (unsigned int)Instance;
}

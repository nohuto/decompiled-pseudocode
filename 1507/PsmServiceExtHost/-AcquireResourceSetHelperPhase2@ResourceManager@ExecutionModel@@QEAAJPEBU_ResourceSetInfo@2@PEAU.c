/*
 * XREFs of ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10
 * Callers:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180013970 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 * Callees:
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180001A2C (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180005104 (RmpEnforcementWorkerSynchronize.c)
 *     RmpActivityHostCreateHostPsm @ 0x180008598 (RmpActivityHostCreateHostPsm.c)
 *     RmpPsmAppFamilyTableFind @ 0x180008EC0 (RmpPsmAppFamilyTableFind.c)
 *     ?TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x1800099C4 (-TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVReso.c)
 *     ?AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180009A40 (-AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet.c)
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000ADDC (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000AE04 (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FDD8 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FEB8 (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010910 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180016C40 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x1800191D8 (RmpPsmAppFamilyIdInitialize.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x180024EC6 (memcmp_0.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x18002EE5C (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180040DB8 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
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
  ExecutionModel::ResourceSet *v14; // r14
  ExecutionModel::BaseResourceSet *v16; // rdi
  char *v17; // rax
  char v18; // r15
  char *v19; // r13
  char *v20; // rax
  int v21; // ecx
  _OWORD *v22; // rax
  __int64 v23; // rcx
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
  bool v71; // zf
  unsigned int v72; // r14d
  __int64 v73; // rcx
  struct ExecutionModel::IResourceSet **v74; // rbx
  int Instance; // r14d
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  ExecutionModel::ResourceSet **i; // rbx
  bool *v80; // rax
  volatile signed __int32 *v81; // r15
  void *v82; // rcx
  __int64 (__fastcall *v83)(ExecutionModel::BaseResourceSet *); // rbx
  __int64 (__fastcall *v85)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **); // rbx
  int ResourceSetInfo; // eax
  unsigned __int64 *v87; // r11
  char *v88; // r9
  unsigned int v89; // r14d
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // r10
  __int64 v92; // xmm1_8
  int HostPsm; // eax
  __int64 v94; // rax
  _QWORD *v95; // r14
  ExecutionModel::ModernActivationResourceInfo **v96; // rbx
  int v97; // r9d
  int v98; // r8d
  int SharedResourceSetListAndAcquire; // eax
  ExecutionModel::ResourceSet *v100; // rbx
  PVOID v101; // rbx
  _QWORD *v102; // rdx
  __int64 v103; // rax
  volatile signed __int32 *v104; // [rsp+80h] [rbp-80h]
  __int64 v105; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v107; // [rsp+98h] [rbp-68h]
  UINT32 packageFamilyNameLength; // [rsp+9Ch] [rbp-64h] BYREF
  struct ExecutionModel::IResourceSet **v109; // [rsp+A0h] [rbp-60h]
  struct ExecutionModel::_ResourceSetInfo *v110; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v111; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v112; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v113; // [rsp+C0h] [rbp-40h]
  _BYTE *v114; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v115[2]; // [rsp+D6h] [rbp-2Ah] BYREF
  ExecutionModel::BaseResourceSet *v116; // [rsp+D8h] [rbp-28h]
  struct IUnknown *v117; // [rsp+E0h] [rbp-20h]
  void *Block; // [rsp+E8h] [rbp-18h]
  ExecutionModel::ResourceManager *v119; // [rsp+F0h] [rbp-10h]
  wchar_t *Source; // [rsp+F8h] [rbp-8h]
  void *v121[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v122; // [rsp+110h] [rbp+10h]
  char *v123; // [rsp+118h] [rbp+18h]
  PSID Sid; // [rsp+120h] [rbp+20h]
  bool *v125; // [rsp+128h] [rbp+28h]
  int v126; // [rsp+130h] [rbp+30h] BYREF
  void *v127[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v128[2]; // [rsp+148h] [rbp+48h] BYREF
  void *v129; // [rsp+158h] [rbp+58h]
  struct ExecutionModel::IResourceSetCallback *v130; // [rsp+160h] [rbp+60h]
  wchar_t Destination[232]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v132[68]; // [rsp+340h] [rbp+240h] BYREF
  unsigned int v133; // [rsp+384h] [rbp+284h]
  unsigned int v134; // [rsp+388h] [rbp+288h]
  unsigned __int64 v135; // [rsp+390h] [rbp+290h]
  wchar_t String1[232]; // [rsp+3A0h] [rbp+2A0h] BYREF
  WCHAR Buf1[48]; // [rsp+570h] [rbp+470h] BYREF
  char v138[544]; // [rsp+5D0h] [rbp+4D0h] BYREF
  __int128 v139; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v140; // [rsp+800h] [rbp+700h]
  WCHAR packageFamilyName; // [rsp+810h] [rbp+710h] BYREF
  char v142[142]; // [rsp+812h] [rbp+712h] BYREF
  WCHAR packageFullName; // [rsp+8A0h] [rbp+7A0h] BYREF
  char v144[254]; // [rsp+8A2h] [rbp+7A2h] BYREF

  v13 = 0LL;
  v14 = a12;
  Source = a5;
  v16 = 0LL;
  packageFamilyNameLength = 0;
  Sid = a6;
  v125 = a11;
  v109 = a13;
  v112 = (unsigned __int16 *)&v114;
  v119 = this;
  v113 = (unsigned __int16 *)&v114;
  v129 = a4;
  v130 = a3;
  v117 = (struct IUnknown *)a12;
  v116 = 0LL;
  LOWORD(v114) = 0;
  v110 = 0LL;
  v17 = (char *)malloc(0x160uLL);
  Block = v17;
  v18 = 2;
  v19 = v17;
  if ( v17 )
  {
    v20 = v17 + 64;
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
      v22 += 8;
      v24 = *(_OWORD *)a2;
      a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
      *(v22 - 8) = v24;
      *(v22 - 7) = *((_OWORD *)a2 - 7);
      *(v22 - 6) = *((_OWORD *)a2 - 6);
      *(v22 - 5) = *((_OWORD *)a2 - 5);
      *(v22 - 4) = *((_OWORD *)a2 - 4);
      *(v22 - 3) = *((_OWORD *)a2 - 3);
      *(v22 - 2) = *((_OWORD *)a2 - 2);
      *(v22 - 1) = *((_OWORD *)a2 - 1);
      --v23;
    }
    while ( v23 );
    *v22 = *(_OWORD *)a2;
    v22[1] = *((_OWORD *)a2 + 1);
    v22[2] = *((_OWORD *)a2 + 2);
    v22[3] = *((_OWORD *)a2 + 3);
    v22[4] = *((_OWORD *)a2 + 4);
    v22[5] = *((_OWORD *)a2 + 5);
  }
  else
  {
    v19 = 0LL;
    Block = 0LL;
  }
  v122 = 0LL;
  v121[0] = v121;
  v121[1] = v121;
  v139 = 0uLL;
  v140 = 0LL;
  v104 = 0LL;
  P = 0LL;
  if ( a12 )
    v25 = (char *)a12 - 1368;
  else
    v25 = 0LL;
  v123 = v25;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v26 = a8;
  v111 = 11LL;
  if ( !a8 )
  {
    if ( v25 )
    {
      v13 = (volatile signed __int32 *)*((_QWORD *)v25 + 175);
      v104 = v13;
      P = (PVOID)v13;
      if ( v13 )
      {
        _InterlockedIncrement(v13 + 4);
        v13 = (volatile signed __int32 *)P;
        v16 = v116;
        v104 = (volatile signed __int32 *)P;
      }
    }
    v69 = 0LL;
LABEL_55:
    if ( (v19[350] & 1) != 0 && (v26 || a10) && ExecutionModel::_ResourceSetInfo::GetAmount((__int64)v19, 1) )
    {
      v98 = (int)v25;
      v70 = v119;
      SharedResourceSetListAndAcquire = ExecutionModel::ResourceManager::GenerateSharedResourceSetListAndAcquire(
                                          (_DWORD)v119,
                                          (_DWORD)v19,
                                          v98,
                                          (unsigned int)v121,
                                          v97,
                                          (__int64)Source,
                                          (__int64)Sid,
                                          a7,
                                          (__int64)&v112,
                                          (__int64)&v105);
      Instance = SharedResourceSetListAndAcquire;
      if ( SharedResourceSetListAndAcquire < 0 )
        goto LABEL_163;
      v69 = v105;
      v14 = (ExecutionModel::ResourceSet *)v117;
    }
    else
    {
      v70 = v119;
      v105 = 0LL;
    }
    if ( !v14 )
      goto LABEL_58;
    if ( v110 )
      operator delete(v110);
    v110 = 0LL;
    v85 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **))(*(_QWORD *)v14 + 56LL);
    if ( v85 == ExecutionModel::ResourceSet::GetResourceSetInfo )
      ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(v14, &v110);
    else
      ResourceSetInfo = v85(v14, &v110);
    Instance = ResourceSetInfo;
    if ( ResourceSetInfo >= 0 )
    {
      v87 = (unsigned __int64 *)&v139;
      v88 = v19 + 72;
      v89 = 1;
      do
      {
        if ( v89 > 3 )
          v90 = -1LL;
        else
          v90 = *(_QWORD *)((char *)v110 + v88 - v19);
        if ( v89 > 3 )
          v91 = -1LL;
        else
          v91 = *(_QWORD *)v88;
        if ( v90 < v91 )
        {
          ExecutionModel::_ResourceSetInfo::SetAmount((__int64)v19, v89 - 1, v91 - v90);
        }
        else if ( v89 <= 3 )
        {
          *(_QWORD *)v88 = 0LL;
        }
        ++v89;
        *v87 = v91;
        v88 += 24;
        ++v87;
      }
      while ( (unsigned __int64)(int)(v89 - 1) < 3 );
      v14 = (ExecutionModel::ResourceSet *)v117;
      v70 = v119;
      ExecutionModel::ResourceManager::SetTransitionalResourceSetPriority(
        (__int64)v119,
        (__int64)v117,
        *((_DWORD *)v19 + 3));
      v13 = v104;
LABEL_58:
      if ( v125 )
      {
        v71 = v14 == 0LL;
        v72 = a8;
        if ( v71 )
        {
          if ( a8 == 4 )
          {
LABEL_61:
            LODWORD(v111) = 12;
            goto LABEL_62;
          }
          if ( a8 )
          {
            if ( a8 != 2 )
            {
              if ( a8 == 8 )
                goto LABEL_61;
              goto LABEL_116;
            }
          }
          else
          {
            LODWORD(v111) = 10;
          }
        }
        else
        {
          LODWORD(v111) = 13;
        }
LABEL_62:
        v73 = *((_QWORD *)v70 + *((int *)v19 + 2) + 22);
        if ( v73 )
        {
          v16 = (ExecutionModel::BaseResourceSet *)*((_QWORD *)v70 + *((int *)v19 + 2) + 22);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
          v116 = v16;
        }
        v74 = v109;
        Instance = ExecutionModel::ResourceSet::CreateInstance(
                     v119,
                     v16,
                     v19,
                     v130,
                     v129,
                     v13,
                     Source,
                     Sid,
                     a7,
                     v72,
                     a9,
                     v111,
                     2 - (unsigned int)(v125 != 0LL),
                     v125,
                     v109);
        if ( Instance >= 0 )
        {
          if ( *v74 )
            v76 = (__int64)*v74 - 1368;
          else
            v76 = 0LL;
          if ( v117 )
          {
            if ( *(struct IUnknown **)(v76 + 1800) != v117 )
              ATL::AtlComPtrAssign((struct IUnknown **)(v76 + 1800), v117);
            v92 = v140;
            *(_OWORD *)(v76 + 1776) = v139;
            *(_QWORD *)(v76 + 1792) = v92;
          }
          if ( *(_DWORD *)(v76 + 136) )
          {
            if ( (*(_BYTE *)(v76 + 1434) & 0x40) != 0
              || (v77 = *(int *)(v76 + 1408), (unsigned int)v77 <= 0x29)
              && (v78 = 0x24704100001LL, _bittest64(&v78, v77)) )
            {
              if ( (*(_BYTE *)(v76 + 1758) & 1) == 0 && v112 != v113 )
              {
                RmpPsmAppFamilyIdInitialize(v112);
                v94 = RmpPsmAppFamilyTableFind(v138);
                if ( v94 )
                {
                  v95 = (_QWORD *)(v94 + 560);
                  if ( v94 != -560 )
                  {
                    do
                    {
                      v96 = *(ExecutionModel::ModernActivationResourceInfo ***)(*(v95 - 1) + 600LL);
                      ExecutionModel::ModernActivationResourceInfo::AddNewFGResourceSetForSharing(
                        v96,
                        (struct ExecutionModel::ResourceSet *)v76);
                      ExecutionModel::ModernActivationResourceInfo::TriggerAddNewBGResourceSetForSharing(
                        v96,
                        (struct ExecutionModel::ResourceSet *)v76);
                      v95 = (_QWORD *)*v95;
                    }
                    while ( v95 );
                  }
                }
              }
            }
          }
          for ( i = (ExecutionModel::ResourceSet **)v121[0];
                i != (ExecutionModel::ResourceSet **)v121;
                i = (ExecutionModel::ResourceSet **)*i )
          {
            ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
              (ExecutionModel::ResourceSet **)i[2],
              (struct ExecutionModel::ResourceSet *)v76,
              0);
            ExecutionModel::ResourceSet::AddFGResourceSetForSharing((ExecutionModel::ResourceSet *)v76, i[2], 0);
          }
          v80 = v125;
          *(_QWORD *)(v76 + 1848) = v69;
          if ( v80 )
          {
            if ( *v80 )
              ExecutionModel::ResourceSet::LogPendingBegin((ExecutionModel::ResourceSet *)v76);
            v81 = v104;
          }
          else
          {
            v81 = v104;
            if ( v104 )
              RmpEnforcementWorkerSynchronize((__int64)v104);
          }
          Instance = 0;
          goto LABEL_79;
        }
        goto LABEL_164;
      }
      v72 = a8;
LABEL_116:
      LODWORD(v111) = -1;
      goto LABEL_62;
    }
LABEL_163:
    v74 = v109;
LABEL_164:
    v81 = v104;
    goto LABEL_165;
  }
  packageFamilyName = 0;
  memset_0(v142, 0, 0x80uLL);
  packageFamilyNameLength = 65;
  packageFullName = 0;
  memset_0(v144, 0, sizeof(v144));
  v126 = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(Source, &packageFullName, &v126);
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
      while ( *(_WORD *)&v142[2 * v32 - 2] );
      v33 = v112;
      v34 = v114;
      if ( v112 == (unsigned __int16 *)&v114 )
        v35 = v115;
      else
        v35 = v114;
      if ( v32 <= (v35 - (_BYTE *)v112) >> 1 )
      {
        if ( v112 != &packageFamilyName )
        {
          memmove(v112, &packageFamilyName, 2 * v32);
          v33 = v112;
        }
        v113 = &v33[v32];
        *v113 = 0;
        goto LABEL_36;
      }
      if ( v112 == (unsigned __int16 *)&v114 )
        v34 = v115;
      v36 = 2 * ((v34 - (_BYTE *)v112) >> 1) + 1;
      if ( v36 < v32 )
        v36 = v32;
      if ( v36 > 0x3FFFFFFFFFFFFFFELL )
        v36 = 0x3FFFFFFFFFFFFFFELL;
      if ( v32 > v36 )
      {
        v128[0] = 0LL;
        v38 = (void **)v128;
        v128[1] = 0LL;
      }
      else
      {
        v18 = 1;
        v127[1] = (void *)(v36 + 1);
        if ( v36 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        {
          v127[0] = 0LL;
        }
        else
        {
          v37 = operator new(2 * (v36 + 1), (const struct std::nothrow_t *)&std::nothrow);
          v33 = v112;
          v127[0] = v37;
        }
        v38 = v127;
      }
      v13 = (volatile signed __int32 *)*v38;
      v39 = v38[1];
      *v38 = 0LL;
      if ( (v18 & 2) != 0 )
      {
        v18 &= ~2u;
        utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
          v128,
          v29,
          v30,
          v33);
        v33 = v112;
      }
      if ( (v18 & 1) != 0 && v127[0] )
      {
        operator delete(v127[0]);
        v33 = v112;
      }
      if ( v13 )
      {
        v40 = 2 * v32;
        memcpy_0((void *)v13, &packageFamilyName, v40);
        v41 = (unsigned __int16 *)((char *)v13 + v40);
        *v41 = 0;
        if ( v112 != (unsigned __int16 *)&v114 )
          operator delete(v112);
        v112 = (unsigned __int16 *)v13;
        v113 = v41;
        v114 = (char *)v13 + 2 * ((__int64)v39 - 1);
        v13 = 0LL;
        goto LABEL_36;
      }
      goto LABEL_145;
    }
    if ( v28 > 0 )
      v31 = (unsigned __int16)v28 | 0x80070000;
  }
  if ( v31 >= 0 )
    goto LABEL_36;
  v33 = v112;
LABEL_145:
  v113 = v33;
  *v33 = (unsigned __int16)v13;
LABEL_36:
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v132, 0, sizeof(v132));
  v42 = RtlLengthSid(Sid);
  memcpy_0(v132, Sid, v42);
  v43 = String1;
  v44 = 4LL;
  v134 = a8;
  v135 = a9;
  v45 = Destination;
  v133 = a7;
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
    v107 = RtlUpcaseUnicodeChar(*v56++);
    v59 = HIBYTE(v107) + 37 * ((unsigned __int8)v107 + 37 * v59);
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
  v64 = *((_DWORD *)RmSvcGlobals + 457);
  v65 = -1LL << (*((_BYTE *)RmSvcGlobals + 1828) & 0x1F);
  v66 = v65 & v59;
  v105 = v65 & v59;
  if ( v55 )
    goto LABEL_46;
  v67 = v64 >> 5;
  if ( v67 )
  {
    v55 = *((_QWORD *)RmSvcGlobals + 229)
        + 8LL
        * ((37
          * (BYTE6(v105)
           + 37
           * (BYTE5(v105)
            + 37
            * (BYTE4(v105)
             + 37 * (BYTE3(v105) + 37 * (BYTE2(v105) + 37 * (BYTE1(v105) + 37 * ((unsigned __int8)v66 + 11623883)))))))
          + HIBYTE(v105)) & (v67 - 1));
LABEL_46:
    while ( 1 )
    {
      v55 = *(_QWORD *)v55;
      if ( (v55 & 1) != 0 )
        break;
      if ( v66 == (v65 & *(_QWORD *)(v55 + 8)) )
      {
        v68 = v55 - 824;
        if ( !*(_DWORD *)(v55 - 824 + 40)
          && !_wcsicmp(String1, (const wchar_t *)(v68 + 48))
          && !memcmp_0(Buf1, (const void *)(v68 + 512), 0x58uLL) )
        {
          v69 = 0LL;
          v63 = 0;
          _InterlockedIncrement((volatile signed __int32 *)(v68 + 16));
          v16 = v116;
          v13 = (volatile signed __int32 *)(v55 - 824);
          v104 = (volatile signed __int32 *)(v55 - 824);
          P = (PVOID)(v55 - 824);
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
LABEL_54:
    v14 = (ExecutionModel::ResourceSet *)v117;
    v26 = a8;
    LODWORD(v25) = (_DWORD)v123;
    goto LABEL_55;
  }
  HostPsm = RmpActivityHostCreateHostPsm(Destination, (struct _RM_ACTIVITY_HOST **)&P);
  v19 = (char *)Block;
  if ( HostPsm >= 0 )
  {
    v13 = (volatile signed __int32 *)P;
    v104 = (volatile signed __int32 *)P;
    goto LABEL_54;
  }
  Instance = HostPsm | 0x10000000;
  v81 = (volatile signed __int32 *)P;
  v74 = v109;
LABEL_165:
  if ( *v74 )
  {
    (*(void (__fastcall **)(_QWORD))(MEMORY[0] + 32LL))(0LL);
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)*v109 + 16LL))(*v109);
    *v109 = 0LL;
  }
  v100 = (ExecutionModel::ResourceSet *)v121[0];
  if ( v121[0] != v121 )
  {
    while ( v100 != (ExecutionModel::ResourceSet *)v121 )
    {
      ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(
        *((ExecutionModel::ResourceSet **)v100 + 2),
        *((_QWORD *)v19 + 6));
      v100 = *(ExecutionModel::ResourceSet **)v100;
    }
  }
LABEL_79:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v81 )
  {
    if ( _InterlockedExchangeAdd(v81 + 4, 0xFFFFFFFF) == 1 )
    {
      v101 = P;
      if ( *((_DWORD *)P + 8) == 1 )
        RmpActivityHostFinalCleanup((__int64)P);
      RmpFreeHeap(v101);
    }
    v16 = v116;
  }
  while ( 1 )
  {
    v82 = v121[0];
    if ( v121[0] == v121 )
      break;
    v102 = (_QWORD *)*((_QWORD *)v121[0] + 1);
    v103 = *(_QWORD *)v121[0];
    *v102 = *(_QWORD *)v121[0];
    *(_QWORD *)(v103 + 8) = v102;
    operator delete(v82);
  }
  v122 = 0LL;
  if ( v19 )
    operator delete(v19);
  if ( v110 )
    operator delete(v110);
  if ( v112 != (unsigned __int16 *)&v114 )
    operator delete(v112);
  if ( v16 )
  {
    v83 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v16 + 16LL);
    if ( v83 == ExecutionModel::BaseResourceSet::Release )
      ExecutionModel::BaseResourceSet::Release(v16);
    else
      v83(v16);
  }
  return (unsigned int)Instance;
}

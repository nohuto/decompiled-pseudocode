/*
 * XREFs of ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0
 * Callers:
 *     ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180010354 (-AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResou.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?clear@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAAXXZ @ 0x180003090 (-clear@-$list@PEAVResourceSet@ExecutionModel@@V-$allocator@PEAVResourceSet@ExecutionModel@@@utl@.c)
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18000E268 (-GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV-$basic_string@GU-$char_trait.c)
 *     ?FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@_KPEAVResourceSet@2@PEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@4@@Z @ 0x18000FAEC (-FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV-$list@PEAVResourceSet@Exec.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x1800106FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180010780 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180011660 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011BDC (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180011D28 (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180012800 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@W4Enum@PendType@2@PEAU_RM_ACTIVATOR@@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x1800158E0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAU.c)
 *     RmpEnforcementWorkerSynchronize @ 0x180017480 (RmpEnforcementWorkerSynchronize.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpActivityHostCheckDelete @ 0x180017F40 (RmpActivityHostCheckDelete.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z @ 0x180035CA8 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z.c)
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
        struct _RM_ACTIVATOR *a11,
        bool *a12,
        struct ExecutionModel::ResourceSet *a13,
        struct ExecutionModel::IResourceSet **a14)
{
  wchar_t *v15; // rdi
  bool *v16; // rbx
  struct ExecutionModel::ResourceSet *v18; // r15
  char *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rbx
  ExecutionModel::_ResourceInfo *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  struct _RM_ACTIVITY_HOST *v26; // rsi
  __int64 v27; // rcx
  unsigned int v28; // r12d
  int PackageFamilyName; // edi
  ULONG v30; // eax
  _BYTE *v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // rdx
  wchar_t *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // rax
  int v46; // eax
  PVOID v47; // rcx
  int v48; // edx
  int v49; // r13d
  ExecutionModel::ResourceSet *v50; // rcx
  __int64 (__fastcall *v51)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **); // rax
  int ResourceSetInfo; // eax
  unsigned __int64 *v53; // rdi
  unsigned __int64 *v54; // r10
  __int64 v55; // rdx
  unsigned int v56; // r11d
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rbx
  __int64 v59; // r13
  __int64 v60; // rbx
  __int64 v61; // xmm1_8
  int HostPsm; // edi
  int v64; // r8d
  struct ExecutionModel::IResourceSet **v65; // rbx
  __int64 **v66; // rbx
  __int64 v67; // rcx
  int SharedResourceSetListAndAcquire; // eax
  int v69; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  void *Block; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *Source; // [rsp+90h] [rbp-70h]
  unsigned __int64 v73; // [rsp+98h] [rbp-68h]
  PSID Sid; // [rsp+A0h] [rbp-60h]
  bool *v75; // [rsp+A8h] [rbp-58h]
  struct ExecutionModel::IResourceSet **v76; // [rsp+B0h] [rbp-50h]
  __int64 **v77[3]; // [rsp+B8h] [rbp-48h] BYREF
  void *v78[2]; // [rsp+D0h] [rbp-30h] BYREF
  _WORD v79[8]; // [rsp+E0h] [rbp-20h] BYREF
  struct ExecutionModel::ResourceSet *v80; // [rsp+F0h] [rbp-10h]
  void *v81; // [rsp+F8h] [rbp-8h]
  struct ExecutionModel::IResourceSetCallback *v82; // [rsp+100h] [rbp+0h]
  ExecutionModel::ResourceManager *v83; // [rsp+108h] [rbp+8h]
  wchar_t Destination[232]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v85[68]; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v86; // [rsp+324h] [rbp+224h]
  unsigned int v87; // [rsp+328h] [rbp+228h]
  unsigned __int64 v88; // [rsp+330h] [rbp+230h]
  _BYTE v89[560]; // [rsp+340h] [rbp+240h] BYREF
  __int128 v90; // [rsp+570h] [rbp+470h] BYREF
  __int64 v91; // [rsp+580h] [rbp+480h]

  v15 = a5;
  v16 = a12;
  v18 = a13;
  Sid = a6;
  v76 = a14;
  v78[0] = v79;
  v83 = this;
  v78[1] = v79;
  v81 = a4;
  v82 = a3;
  Source = a5;
  v75 = a12;
  v80 = a13;
  v79[0] = 0;
  Block = 0LL;
  v19 = (char *)operator new(0x178uLL);
  v20 = v19;
  if ( v19 )
  {
    v21 = 3LL;
    v22 = (ExecutionModel::_ResourceInfo *)(v19 + 88);
    do
    {
      ExecutionModel::_ResourceInfo::_ResourceInfo(v22);
      v22 = (ExecutionModel::_ResourceInfo *)((char *)v22 + 24);
      --v21;
    }
    while ( v21 );
    v23 = v20;
    v24 = 2LL;
    do
    {
      v23 += 16;
      v25 = *(_OWORD *)a2;
      a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
      *((_OWORD *)v23 - 8) = v25;
      *((_OWORD *)v23 - 7) = *((_OWORD *)a2 - 7);
      *((_OWORD *)v23 - 6) = *((_OWORD *)a2 - 6);
      *((_OWORD *)v23 - 5) = *((_OWORD *)a2 - 5);
      *((_OWORD *)v23 - 4) = *((_OWORD *)a2 - 4);
      *((_OWORD *)v23 - 3) = *((_OWORD *)a2 - 3);
      *((_OWORD *)v23 - 2) = *((_OWORD *)a2 - 2);
      *((_OWORD *)v23 - 1) = *((_OWORD *)a2 - 1);
      --v24;
    }
    while ( v24 );
    v16 = v75;
    v15 = Source;
    *(_OWORD *)v23 = *(_OWORD *)a2;
    *((_OWORD *)v23 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v23 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v23 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v23 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v23 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v23 + 6) = *((_OWORD *)a2 + 6);
    v23[14] = *((_QWORD *)a2 + 14);
  }
  else
  {
    v20 = 0LL;
  }
  v77[2] = 0LL;
  v77[0] = (__int64 **)v77;
  v90 = 0uLL;
  v77[1] = (__int64 **)v77;
  v26 = 0LL;
  P = 0LL;
  v91 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v28 = a8;
  if ( !a8 )
  {
    if ( a13 && (v26 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a13 + 175)) != 0LL )
    {
      v67 = *((_QWORD *)a13 + 175);
      v73 = *((_QWORD *)v26 + 3);
      RmpObjectAddRef(v67);
    }
    else
    {
      v73 = a9;
    }
    goto LABEL_63;
  }
  PackageFamilyName = ExecutionModel::ResourceManager::GetPackageFamilyName(v27, (__int64)v15, v78);
  if ( PackageFamilyName < 0 )
  {
LABEL_80:
    v65 = v76;
    if ( *v76 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 32LL))(0LL, 0LL);
      (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)*v65 + 16LL))(*v65);
      *v65 = 0LL;
    }
    v66 = v77[0];
    if ( (__int64 ***)v77[0] != v77 )
    {
      while ( v66 != (__int64 **)v77 )
      {
        ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing((ExecutionModel::ResourceSet *)v66[2], v20[9]);
        v66 = (__int64 **)*v66;
      }
    }
    goto LABEL_49;
  }
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v85, 0, sizeof(v85));
  v30 = RtlLengthSid(Sid);
  memcpy_0(v85, Sid, v30);
  v31 = v89;
  v32 = a7;
  v33 = 4LL;
  v73 = a9;
  v88 = a9;
  v34 = Destination;
  v86 = a7;
  v87 = a8;
  do
  {
    v31 += 128;
    v35 = *(_OWORD *)v34;
    v36 = *((_OWORD *)v34 + 1);
    v34 += 64;
    *((_OWORD *)v31 - 8) = v35;
    v37 = *((_OWORD *)v34 - 6);
    *((_OWORD *)v31 - 7) = v36;
    v38 = *((_OWORD *)v34 - 5);
    *((_OWORD *)v31 - 6) = v37;
    v39 = *((_OWORD *)v34 - 4);
    *((_OWORD *)v31 - 5) = v38;
    v40 = *((_OWORD *)v34 - 3);
    *((_OWORD *)v31 - 4) = v39;
    v41 = *((_OWORD *)v34 - 2);
    *((_OWORD *)v31 - 3) = v40;
    v42 = *((_OWORD *)v34 - 1);
    *((_OWORD *)v31 - 2) = v41;
    *((_OWORD *)v31 - 1) = v42;
    --v33;
  }
  while ( v33 );
  v43 = *(_OWORD *)v34;
  v44 = *((_OWORD *)v34 + 1);
  v45 = *((_QWORD *)v34 + 4);
  *(_OWORD *)v31 = v43;
  *((_OWORD *)v31 + 1) = v44;
  *((_QWORD *)v31 + 4) = v45;
  v46 = RmpActivityHostFindByTypeAndIdentifier(*((_QWORD *)this + 28), 0LL, v89, &P);
  v26 = (struct _RM_ACTIVITY_HOST *)P;
  if ( a13 )
  {
    v47 = (PVOID)*((_QWORD *)a13 + 175);
    if ( v47 )
    {
      if ( v47 != P )
      {
        PackageFamilyName = -805306118;
        goto LABEL_80;
      }
    }
  }
  if ( v46 < 0 )
  {
    HostPsm = RmpActivityHostCreateHostPsm(
                *((_QWORD *)this + 28),
                (__int64)Destination,
                (struct _RM_ACTIVITY_HOST **)&P);
    v26 = (struct _RM_ACTIVITY_HOST *)P;
    if ( HostPsm >= 0 )
    {
LABEL_63:
      v32 = a7;
      goto LABEL_15;
    }
    PackageFamilyName = HostPsm | 0x10000000;
    if ( PackageFamilyName >= 0 )
      goto LABEL_49;
    goto LABEL_80;
  }
LABEL_15:
  v48 = 1;
  if ( (*((_BYTE *)v20 + 374) & 1) != 0 && (a8 || a10) && ExecutionModel::_ResourceSetInfo::GetAmount(v20, 1LL) )
  {
    SharedResourceSetListAndAcquire = ExecutionModel::ResourceManager::GenerateSharedResourceSetListAndAcquire(
                                        (_DWORD)this,
                                        (_DWORD)v20,
                                        (_DWORD)a13,
                                        (unsigned int)v77,
                                        v64,
                                        (__int64)Source,
                                        (__int64)Sid,
                                        v32,
                                        (__int64)v78,
                                        (__int64)&P);
    PackageFamilyName = SharedResourceSetListAndAcquire;
    if ( SharedResourceSetListAndAcquire < 0 )
      goto LABEL_80;
    v48 = 1;
  }
  else
  {
    P = 0LL;
  }
  v49 = -1;
  if ( a13 )
  {
    if ( Block )
      operator delete(Block);
    Block = 0LL;
    v50 = (struct ExecutionModel::ResourceSet *)((char *)a13 + 1368);
    v51 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **))(*((_QWORD *)a13 + 171) + 48LL);
    if ( v51 == ExecutionModel::ResourceSet::GetResourceSetInfo )
      ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                          v50,
                          (struct ExecutionModel::_ResourceSetInfo **)&Block);
    else
      ResourceSetInfo = v51(v50, (struct ExecutionModel::_ResourceSetInfo **)&Block);
    PackageFamilyName = ResourceSetInfo;
    if ( ResourceSetInfo < 0 )
      goto LABEL_80;
    v53 = (unsigned __int64 *)&v90;
    v54 = v20 + 12;
    v55 = 0LL;
    do
    {
      v56 = v55 + 1;
      if ( (unsigned int)(v55 + 1) > 3 )
        v57 = -1LL;
      else
        v57 = *(_QWORD *)((char *)Block + (char *)v54 - (char *)v20);
      if ( v56 > 3 )
        v58 = -1LL;
      else
        v58 = *v54;
      if ( v57 < v58 )
      {
        ExecutionModel::_ResourceSetInfo::SetAmount(v20, v55, v58 - v57);
      }
      else if ( v56 <= 3 )
      {
        *((_DWORD *)v54 - 2) = v55;
        *v54 = 0LL;
      }
      *v53 = v58;
      v54 += 3;
      ++v53;
      v55 = (int)v56;
    }
    while ( (unsigned __int64)(int)v56 < 3 );
    v18 = v80;
    ExecutionModel::ResourceSet::SetTransitionalPriorities(v80, *((unsigned int *)v20 + 2), *((unsigned int *)v20 + 8));
    v28 = a8;
    v48 = 1;
    v16 = v75;
  }
  if ( v16 )
  {
    if ( v18 )
    {
      v49 = 13;
      goto LABEL_36;
    }
    if ( v28 == 4 )
      goto LABEL_61;
    if ( v28 )
    {
      if ( v28 == 2 )
      {
        v49 = 11;
      }
      else if ( v28 == 8 )
      {
LABEL_61:
        v49 = 12;
      }
    }
    else
    {
      v49 = 10;
    }
  }
  else
  {
    v48 = 2;
  }
LABEL_36:
  v69 = v49;
  v59 = (__int64)v83;
  PackageFamilyName = ExecutionModel::ResourceSet::CreateInstance(
                        *((_QWORD *)v83 + 15),
                        v20,
                        v82,
                        v81,
                        v26,
                        Source,
                        Sid,
                        a7,
                        v28,
                        v73,
                        v69,
                        v48,
                        a11,
                        v16,
                        v76);
  if ( PackageFamilyName < 0 )
    goto LABEL_80;
  if ( *v76 )
  {
    v60 = (__int64)*v76 - 1368;
    PackageFamilyName = 0;
  }
  else
  {
    PackageFamilyName = 0;
    v60 = 0LL;
  }
  if ( (*((_BYTE *)v20 + 42) & 0x40) != 0 && (*((_BYTE *)v20 + 17) & 1) == 0 )
    *(_DWORD *)(v60 + 1412) |= 0x80u;
  if ( v18 )
  {
    if ( *((char *)v18 + 1412) < 0 )
      *(_DWORD *)(v60 + 1412) |= 0x80u;
    if ( *(struct ExecutionModel::ResourceSet **)(v60 + 1832) != (struct ExecutionModel::ResourceSet *)((char *)v18 + 1368) )
      ATL::AtlComPtrAssign((struct IUnknown **)(v60 + 1832), (struct IUnknown *)v18 + 171);
    v61 = v91;
    *(_OWORD *)(v60 + 1808) = v90;
    *(_QWORD *)(v60 + 1824) = v61;
  }
  ExecutionModel::ResourceManager::FinalizeSharedResourceList(v59, v77, (__int64)P, v60, (__int64 *)v78);
  if ( v75 )
  {
    if ( *v75 )
      ExecutionModel::ResourceSet::LogPendingBegin((ExecutionModel::ResourceSet *)v60);
  }
  else
  {
    if ( !v26 )
      goto LABEL_51;
    RmpEnforcementWorkerSynchronize(v26);
  }
LABEL_49:
  if ( v26 )
    RmpActivityHostCheckDelete(v26);
LABEL_51:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v26 )
    RmpObjectRelease((volatile signed __int32 *)v26);
  utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::clear((__int64)v77);
  if ( v20 )
    operator delete(v20);
  if ( Block )
    operator delete(Block);
  if ( v78[0] != v79 )
    operator delete(v78[0]);
  return (unsigned int)PackageFamilyName;
}

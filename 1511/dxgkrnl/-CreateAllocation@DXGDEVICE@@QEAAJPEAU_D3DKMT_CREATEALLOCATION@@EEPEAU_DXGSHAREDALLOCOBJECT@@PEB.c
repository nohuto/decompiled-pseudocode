/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E3D0 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E6DC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     DxgkCreateAllocation @ 0x1C00B5600 (DxgkCreateAllocation.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004798 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006BC4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001CA04 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C006E094 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C006E1B4 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C006EC20 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C0072190 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@H@Z @ 0x1C0072670 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00730E0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGRESOURCE@@PEAE@Z @ 0x1C0073410 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074234 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C0123DC4 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C013B0B4 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        __int64 a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11)
{
  char v11; // r14
  unsigned __int8 v12; // si
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 Flags; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v22; // rax
  UINT v23; // r14d
  void **v24; // r13
  unsigned __int64 NumAllocations; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v26; // r12
  int v27; // esi
  SIZE_T v28; // rax
  unsigned __int64 v29; // rdx
  SIZE_T v30; // rax
  unsigned __int64 v31; // rdx
  SIZE_T v32; // rax
  void **v33; // r15
  unsigned __int64 v34; // rcx
  SIZE_T v35; // rax
  unsigned __int8 v36; // al
  SIZE_T v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  UINT v43; // ecx
  __int64 v44; // r15
  struct DXGRESOURCE *v45; // r13
  size_t v46; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  char *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  UINT i; // esi
  __int64 v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  _QWORD *v58; // rax
  unsigned __int64 v59; // rcx
  struct DXGALLOCATION *v60; // rsi
  _QWORD *v61; // rax
  UINT v62; // eax
  __int64 v63; // rsi
  struct _D3DDDI_ALLOCATIONINFO2 *v64; // r12
  SIZE_T PrivateDriverDataSize; // rax
  __int64 v66; // rax
  char *PoolWithTag; // rax
  SIZE_T v68; // rdx
  __int64 v69; // rsi
  _QWORD *v70; // rax
  char *v71; // r9
  size_t v72; // r8
  char *pPrivateDriverData; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  PVOID v77; // r9
  _QWORD *v78; // rax
  size_t v79; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  _QWORD *v81; // rax
  int v82; // r12d
  unsigned __int64 v83; // rsi
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 j; // rcx
  SIZE_T v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  PVOID v93; // r15
  _QWORD *v94; // rax
  void *v95; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v96; // eax
  struct _D3DKM_CREATESTANDARDALLOCATION *v97; // r12
  __int64 v98; // rax
  __int64 v99; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v100; // r12
  struct _DXGK_ALLOCATIONINFO *v101; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v102; // eax
  __int64 v103; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v104; // eax
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r12
  int v115; // eax
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  struct DXGGLOBAL *Global; // rax
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  D3DKMT_HANDLE v127; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v128; // eax
  D3DKMT_HANDLE v129; // ecx
  __int64 v130; // r12
  ULONG64 v131; // rdx
  _QWORD *v132; // r8
  unsigned int *v133; // r9
  int v134; // edx
  int v135; // ecx
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // r8
  struct DXGALLOCATION *k; // r9
  UINT v144; // r12d
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  __int64 PrivateRuntimeDataSize; // rcx
  unsigned __int8 v151; // si
  size_t v152; // r8
  char *pPrivateRuntimeData; // rdx
  void *v154; // r9
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  const void *v160; // rdx
  UINT v161; // r13d
  struct DXGALLOCATION *v162; // r12
  char *v163; // rsi
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  void *v167; // rcx
  const void *v168; // rdx
  _QWORD *v169; // rax
  UINT v170; // r12d
  __int64 v171; // rax
  int v172; // eax
  __int64 v173; // rax
  struct DXGALLOCATION *v174; // r9
  _QWORD *v175; // rax
  void **v176; // rdi
  void *v177; // rcx
  int v178; // [rsp+20h] [rbp-6B8h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v179; // [rsp+48h] [rbp-690h]
  unsigned __int8 v180; // [rsp+70h] [rbp-668h]
  unsigned __int8 v181[7]; // [rsp+71h] [rbp-667h] BYREF
  struct DXGALLOCATION *v182; // [rsp+78h] [rbp-660h]
  char v183; // [rsp+80h] [rbp-658h]
  struct _D3DDDI_ALLOCATIONINFO2 *v184; // [rsp+88h] [rbp-650h]
  int v185; // [rsp+90h] [rbp-648h]
  UINT v186; // [rsp+94h] [rbp-644h]
  UINT v187; // [rsp+98h] [rbp-640h]
  struct DXGALLOCATION *v188; // [rsp+A0h] [rbp-638h] BYREF
  struct _D3DKM_CREATESTANDARDALLOCATION *v189; // [rsp+A8h] [rbp-630h]
  struct _DXGK_ALLOCATIONINFO *v190; // [rsp+B0h] [rbp-628h]
  void **v191; // [rsp+B8h] [rbp-620h]
  struct DXGRESOURCE *v192; // [rsp+C0h] [rbp-618h] BYREF
  void **v193; // [rsp+C8h] [rbp-610h]
  int v194; // [rsp+D0h] [rbp-608h]
  struct _DXGK_OPENALLOCATIONINFO *v195; // [rsp+D8h] [rbp-600h]
  struct DXGRESOURCE *v196; // [rsp+E0h] [rbp-5F8h]
  DXGDEVICE *v197; // [rsp+E8h] [rbp-5F0h]
  PVOID P; // [rsp+F0h] [rbp-5E8h]
  struct _D3DKMT_CREATEALLOCATION *v199; // [rsp+100h] [rbp-5D8h]
  unsigned int *v200; // [rsp+110h] [rbp-5C8h]
  __int64 v201; // [rsp+118h] [rbp-5C0h]
  struct _DXGKARG_DESCRIBEALLOCATION v202; // [rsp+120h] [rbp-5B8h] BYREF
  _BYTE v203[16]; // [rsp+150h] [rbp-588h] BYREF
  struct DXGALLOCATION *v204; // [rsp+160h] [rbp-578h] BYREF
  unsigned __int64 *v205; // [rsp+168h] [rbp-570h]
  struct DXGALLOCATION *m; // [rsp+170h] [rbp-568h]
  _BYTE v207[24]; // [rsp+178h] [rbp-560h] BYREF
  _QWORD v208[14]; // [rsp+190h] [rbp-548h] BYREF
  _BYTE v209[40]; // [rsp+200h] [rbp-4D8h] BYREF
  _BYTE v210[40]; // [rsp+228h] [rbp-4B0h] BYREF
  char v211; // [rsp+250h] [rbp-488h] BYREF
  char v212; // [rsp+2F0h] [rbp-3E8h] BYREF
  _D3DDDI_ALLOCATIONINFO2 v213; // [rsp+4B0h] [rbp-228h] BYREF
  unsigned __int8 v214; // [rsp+6F8h] [rbp+20h]

  v214 = a4;
  v11 = a4;
  v12 = a3;
  v180 = a3;
  v197 = this;
  v199 = a2;
  v189 = a6;
  v201 = (__int64)a7;
  v200 = a10;
  v205 = a11;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 128)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 3773LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a7 )
  {
    v15 = *((_QWORD *)a7 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 144) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v15 + 128));
  }
  if ( v12 && v11 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v17 + 24) = 3778LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( (*(_DWORD *)(v19 + 1388) & 0x10) == 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v19, Flags, a3, a4);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, Flags, a3, a4);
      v22[3] = this;
      v22[4] = -1073741811LL;
      v22[5] = 1LL;
      WdLogEvent5_WdWarning(v22);
      return 3221225485LL;
    }
  }
  v23 = 0;
  v24 = 0LL;
  v193 = 0LL;
  P = 0LL;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v26 = &v213;
    v184 = &v213;
    v190 = (struct _DXGK_ALLOCATIONINFO *)&v212;
    v195 = (struct _DXGK_OPENALLOCATIONINFO *)&v211;
    v33 = (void **)v210;
    v191 = (void **)v210;
    v24 = (void **)v209;
    v193 = (void **)v209;
    goto LABEL_66;
  }
  v26 = 0LL;
  v184 = 0LL;
  if ( 96 * NumAllocations > 0xFFFFFFFF )
  {
    v185 = -1;
    v27 = -1073741675;
  }
  else
  {
    v185 = 96 * NumAllocations;
    v27 = 0;
  }
  if ( v27 >= 0 )
  {
    v28 = 96 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 0x60uLL) )
      v28 = -1LL;
    v26 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v28, 0x4B677844u, PagedPool);
    v184 = v26;
  }
  v190 = 0LL;
  if ( v27 >= 0 )
  {
    v29 = a2->NumAllocations;
    if ( 88 * v29 > 0xFFFFFFFF )
    {
      v185 = -1;
      v27 = -1073741675;
    }
    else
    {
      v185 = 88 * v29;
      v27 = 0;
    }
    if ( v27 >= 0 )
    {
      v30 = 88 * v29;
      if ( !is_mul_ok(v29, 0x58uLL) )
        v30 = -1LL;
      v190 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v30, 0x4B677844u, PagedPool);
    }
  }
  v195 = 0LL;
  if ( v27 >= 0 )
  {
    v31 = a2->NumAllocations;
    if ( 32 * v31 > 0xFFFFFFFF )
    {
      v185 = -1;
      v27 = -1073741675;
    }
    else
    {
      v185 = 32 * v31;
      v27 = 0;
    }
    if ( v27 >= 0 )
    {
      v32 = 32 * v31;
      if ( !is_mul_ok(v31, 0x20uLL) )
        v32 = -1LL;
      v195 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v32, 0x4B677844u, PagedPool);
    }
  }
  v33 = 0LL;
  v191 = 0LL;
  if ( v27 >= 0 )
  {
    v34 = a2->NumAllocations;
    if ( 8 * v34 > 0xFFFFFFFF )
    {
      v185 = -1;
      v27 = -1073741675;
    }
    else
    {
      v185 = 8 * v34;
      v27 = 0;
    }
    if ( v27 >= 0 )
    {
      v35 = 8 * v34;
      if ( !is_mul_ok(v34, 8uLL) )
        v35 = -1LL;
      v33 = (void **)operator new[](v35, 0x4B677844u, PagedPool);
      v191 = v33;
      v36 = v180;
      if ( !v180 )
        goto LABEL_53;
      v37 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v37 = -1LL;
      v24 = (void **)operator new[](v37, 0x4B677844u, PagedPool);
      v193 = v24;
    }
  }
  v36 = v180;
LABEL_53:
  if ( v27 < 0 || !v26 || !v190 || !v195 || !v33 || !v24 && v36 )
  {
    operator delete(v26);
    operator delete(v190);
    operator delete(v195);
    operator delete(v33);
    operator delete(v24);
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    v42[3] = this;
    v42[4] = a2->NumAllocations;
    if ( v27 >= 0 )
    {
      v27 = -1073741801;
      v42[5] = -1073741801LL;
    }
    else
    {
      v42[5] = v27;
    }
    WdLogEvent5_WdWarning(v42);
    return (unsigned int)v27;
  }
  v12 = v180;
LABEL_66:
  v43 = 0;
  v186 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v33[v43] = 0LL;
      if ( v12 )
        v24[v43] = 0LL;
      ++v43;
    }
    while ( v43 < a2->NumAllocations );
    v186 = v43;
  }
  v182 = 0LL;
  v188 = 0LL;
  LODWORD(v44) = 0;
  v181[0] = 0;
  v45 = 0LL;
  v192 = 0LL;
  v183 = 0;
  if ( v12 )
  {
    v46 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v46) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v46 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v26, pAllocationInfo, v46);
  }
  else
  {
    memmove(v26, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v194 = -1;
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
    {
      v49 = 96LL * i;
      v48 = (char *)*(unsigned int *)((char *)&v26->Flags.Value + v49);
      if ( ((unsigned __int8)v48 & 1) != 0 )
      {
        v50 = *(unsigned int *)((char *)&v26->VidPnSourceId + v49);
        v194 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v26->VidPnSourceId + v49);
        if ( !*((_QWORD *)this + 354) )
        {
          v48 = (char *)((unsigned int)v48 & 0xFFFFFFFE);
          *(UINT *)((char *)&v26->Flags.Value + v49) = (unsigned int)v48;
        }
      }
      if ( (*(UINT *)((_BYTE *)&v26->Flags.Value + v49) & 2) != 0 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
        v58[3] = this;
        v58[4] = -1073741811LL;
LABEL_101:
        WdLogEvent5_WdWarning(v58);
        goto LABEL_102;
      }
    }
    v196 = (struct DXGRESOURCE *)&v26[i];
    if ( (*((_DWORD *)v196 + 8) & 1) != 0 )
    {
      v53 = *((_QWORD *)this + 354);
      if ( !v53 )
        goto LABEL_104;
      v54 = *(_QWORD *)(v53 + 1984);
      if ( !v54 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v54 + 16)) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v54);
        *(_QWORD *)(v55 + 24) = 4002LL;
        WdLogEvent5_WdAssertion(v55);
      }
      v49 = *(unsigned int *)(*(_QWORD *)(v53 + 1984) + 104LL);
      if ( (_DWORD)v49 != *((_DWORD *)this + 710) )
      {
        v56 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v56 + 24) = 4008LL;
        WdLogEvent5_WdAssertion(v56);
      }
      v50 = *((unsigned int *)v196 + 7);
      if ( (_DWORD)v50 != -2 && (unsigned int)v50 >= *((_DWORD *)this + 710) )
      {
LABEL_104:
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
        v58[3] = this;
        v58[4] = v184[i].VidPnSourceId;
        v58[5] = -1073741811LL;
        goto LABEL_101;
      }
      if ( !*((_DWORD *)this + 70)
        && !v214
        && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v53 + 1984), this, v50) )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
        LODWORD(v44) = -1071775744;
        v61[3] = -1071775744LL;
        v61[4] = this;
        v61[5] = v184[i].VidPnSourceId;
        v61[6] = i;
        WdLogEvent5_WdWarning(v61);
        goto LABEL_103;
      }
      v26 = v184;
    }
    v57 = *((_DWORD *)v196 + 8);
    if ( (v57 & 2) != 0 && (v57 & 1) == 0 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      v58[3] = -1073741811LL;
      v58[4] = this;
      goto LABEL_101;
    }
  }
  v62 = 0;
  while ( 1 )
  {
    v186 = v62;
    v187 = v62;
    if ( v62 >= a2->NumAllocations )
      break;
    v63 = v62;
    v64 = &v26[v62];
    PrivateDriverDataSize = v64->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      v66 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      *(_QWORD *)(v66 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v66);
LABEL_112:
      v60 = 0LL;
      goto LABEL_298;
    }
    if ( v64->pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( v180 )
      {
        v68 = (unsigned int)(2 * PrivateDriverDataSize);
        if ( !(_DWORD)v68 )
          v68 = 1LL;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v68, 0x4B677844u);
      }
      else
      {
        PoolWithTag = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
      }
      v69 = v63;
      v49 = (__int64)&v191[v69];
      v191[v69] = PoolWithTag;
      v48 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v44) = -1073741801;
        v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, 0LL, v50, v51);
        v70[3] = this;
        v70[4] = a2->NumAllocations;
        v70[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v70);
        v60 = 0LL;
        goto LABEL_298;
      }
      if ( v180 )
      {
        v71 = &PoolWithTag[v64->PrivateDriverDataSize];
        v193[v69] = v71;
        v72 = v64->PrivateDriverDataSize;
        pPrivateDriverData = (char *)v64->pPrivateDriverData;
        if ( &pPrivateDriverData[v72] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v72] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v71, pPrivateDriverData, v72);
      }
    }
    else
    {
      v191[v63] = 0LL;
      if ( v180 )
        v193[v63] = 0LL;
    }
    v62 = v187 + 1;
    v26 = v184;
  }
  if ( v180 && a2->pStandardAllocation )
  {
    v77 = operator new[](a2->PrivateDriverDataSize, 0x4B677844u, PagedPool);
    P = v77;
    if ( !v77 )
    {
      LODWORD(v44) = -1073741801;
      v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v76, 0LL);
      v78[3] = this;
      v78[4] = a2->PrivateDriverDataSize;
      v78[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v78);
      v60 = 0LL;
      goto LABEL_298;
    }
    v79 = a2->PrivateDriverDataSize;
    pStandardAllocation = a2->pStandardAllocation;
    if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v79) < pStandardAllocation
      || (unsigned __int64)pStandardAllocation + v79 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v77, pStandardAllocation, v79);
  }
  LODWORD(v44) = DXGDEVICE::OpenResourceObject(this, a2, v26, v214, a9, a5, &v192, v181);
  v45 = v192;
  if ( (int)v44 < 0 )
    goto LABEL_112;
  if ( v192 && (*((_DWORD *)v192 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdError(v59);
    v81[3] = this;
    v81[4] = v45;
    v81[5] = -1073741811LL;
    WdLogEvent5_WdError(v81);
LABEL_102:
    LODWORD(v44) = -1073741811;
LABEL_103:
    v60 = 0LL;
    goto LABEL_299;
  }
  v82 = v181[0];
  v83 = a2->NumAllocations;
  v84 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v84 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v84 + 128)) )
  {
    v86 = WdLogNewEntry5_WdAssertion(v85);
    *(_QWORD *)(v86 + 24) = 3697LL;
    WdLogEvent5_WdAssertion(v86);
  }
  v45 = v192;
  v196 = v192;
  if ( v192 )
  {
    if ( !v82 )
    {
      for ( j = *((_QWORD *)v192 + 3); j; v83 = (unsigned int)(v83 + 1) )
        j = *(_QWORD *)(j + 64);
    }
    if ( (unsigned int)v83 > 0x10 )
    {
      v88 = 8 * v83;
      if ( !is_mul_ok(v83, 8uLL) )
        v88 = -1LL;
      v93 = operator new[](v88, 0x4B677844u, PagedPool);
      if ( !v93 )
      {
        v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
        v94[3] = this;
        v94[4] = v83;
        v94[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v94);
        LODWORD(v44) = -1073741801;
        v60 = v188;
        v182 = v188;
LABEL_299:
        if ( v60 )
        {
          v170 = 0;
          if ( a2->NumAllocations )
          {
            do
            {
              v171 = *((_QWORD *)v60 + 6);
              if ( *(_QWORD *)(v171 + 8) && !v214 )
              {
                if ( (v172 = *(_DWORD *)(v171 + 4), (v172 & 1) != 0) && !*((_DWORD *)this + 70) || (v172 & 2) != 0 )
                {
                  if ( (v172 & 0x10) != 0 )
                  {
                    v173 = WdLogNewEntry5_WdAssertion(v59);
                    *(_QWORD *)(v173 + 24) = 4789LL;
                    WdLogEvent5_WdAssertion(v173);
                  }
                  VIDMM_EXPORT::VidMmInvalidateAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                    *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v60 + 6) + 8LL));
                  *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 0x10u;
                }
              }
              ++v170;
              v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
            }
            while ( v170 < a2->NumAllocations );
            v23 = 0;
          }
          v60 = v182;
        }
        if ( v181[0] )
        {
          DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v45);
          DXGDEVICE::DestroyResource(this, v45, 0LL, 0);
        }
        else if ( v60 )
        {
          if ( v183 )
            DXGDEVICE::RemoveAllocationsWithoutDestroy(this, v45, v60, a2->NumAllocations);
          if ( v45 )
          {
            DXGDEVICE::DestroyAllocations(this, v45, 0, v60, 0LL, 0);
          }
          else
          {
            do
            {
              v174 = v60;
              v175 = (_QWORD *)((char *)v60 + 64);
              v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
              *((_QWORD *)v174 + 7) = 0LL;
              *v175 = 0LL;
              DXGDEVICE::DestroyAllocations(this, 0LL, 0, v174, 0LL, 0);
            }
            while ( v60 );
          }
        }
        goto LABEL_320;
      }
      if ( !v82 )
      {
        v95 = (void *)*((_QWORD *)v45 + 8);
        if ( v95 )
          operator delete(v95);
      }
      *((_QWORD *)v45 + 8) = v93;
    }
  }
  LODWORD(v44) = DXGDEVICE::CreateAllocationObjects(this, a2->NumAllocations, &v188, v45, &v204);
  v60 = v188;
  v182 = v188;
  if ( (int)v44 >= 0 )
  {
    if ( v204 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(this, v45, v188, v204);
      v183 = 1;
    }
    v96 = a2->Flags;
    if ( (*(_WORD *)&v96 & 0x800) != 0 )
    {
      v97 = v189;
      if ( v194 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v45 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v45 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v45 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v45 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
    }
    else if ( (*(_WORD *)&v96 & 0x1000) != 0 )
    {
      v97 = v189;
      if ( (*(_DWORD *)v189 & 0x80u) != 0 )
      {
        v98 = WdLogNewEntry5_WdAssertion(v59);
        *(_QWORD *)(v98 + 24) = 4250LL;
        WdLogEvent5_WdAssertion(v98);
      }
      if ( (*(_DWORD *)v97 & 0x100) != 0 )
        *((_DWORD *)v45 + 1) |= 8u;
    }
    else
    {
      if ( v45 )
      {
        v99 = *((_QWORD *)v45 + 7);
        if ( v99 )
        {
          if ( (*(_BYTE *)(v99 + 12) & 0x60) == 0x60 )
            *((_DWORD *)v45 + 1) |= 8u;
        }
      }
      v97 = v189;
    }
    memset(v190, 0, 88LL * a2->NumAllocations);
    v59 = v214;
    if ( v214 )
    {
      v100 = v184;
    }
    else
    {
      v179 = v97;
      v100 = v184;
      LODWORD(v44) = DXGDEVICE::CreateDriverAllocations(this, a2, v184, v190, v60, v45, v191, v193, P, v179, v180);
      v59 = 0LL;
    }
    if ( (int)v44 < 0 )
      goto LABEL_299;
    LODWORD(v44) = DXGDEVICE::OpenAllocations(this, a2, v100, v60, v195, v191, v193, P, v180, v59, a8, v200, v205);
    if ( (int)v44 >= 0 )
    {
      v101 = v190;
      if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
        v190->Flags.Value |= 0x4000008u;
      v102 = a2->Flags;
      if ( (*(_WORD *)&v102 & 0x100) != 0 )
      {
        v101->Flags.Value = v101->Flags.Value & 0xFEFFFFFB | 0x1000000;
      }
      else if ( (*(_WORD *)&v102 & 0x200) != 0 )
      {
        v101->Flags.Value |= 0x800004u;
      }
      LODWORD(v44) = DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
                       this,
                       (__int64)a2,
                       (__int64)v100,
                       (__int64)v101,
                       (__int64)v60,
                       (unsigned int *)v189,
                       v214,
                       v201);
      if ( (int)v44 >= 0 )
      {
        v104 = a2->Flags;
        if ( (*(_WORD *)&v104 & 0x800) != 0 )
        {
          memset(&v202, 0, sizeof(v202));
          v202.hAllocation = *(HANDLE *)(*((_QWORD *)v60 + 6) + 16LL);
          v105 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v202, v103);
          v44 = v105;
          if ( v105 < 0 )
          {
            v110 = (_QWORD *)WdLogNewEntry5_WdWarning(v107, v106, v108, v109);
            v110[3] = v44;
            v110[4] = this;
            v110[5] = *((unsigned int *)v60 + 4);
            v110[6] = v60;
            WdLogEvent5_WdWarning(v110);
            goto LABEL_298;
          }
          if ( v202.Format == D3DDDIFMT_UNKNOWN && v202.Height != 1 )
          {
            v111 = (_QWORD *)WdLogNewEntry5_WdWarning(v107, v106, v108, v109);
            v111[3] = -1073741811LL;
            v111[4] = this;
            v111[5] = v202.Height;
            WdLogEvent5_WdWarning(v111);
            LODWORD(v44) = -1073741811;
            goto LABEL_299;
          }
          v112 = *(_QWORD *)(*((_QWORD *)v60 + 5) + 56LL);
          if ( (*(_DWORD *)(v112 + 12) & 0x20) == 0 )
          {
            v113 = WdLogNewEntry5_WdAssertion(v112);
            *(_QWORD *)(v113 + 24) = 4372LL;
            WdLogEvent5_WdAssertion(v113);
          }
          v114 = *(_QWORD *)(*((_QWORD *)v60 + 5) + 56LL);
          *(_DWORD *)(v114 + 168) = v202.Width;
          *(_DWORD *)(v114 + 172) = v202.Height;
          *(_DWORD *)(v114 + 176) = v202.Format;
          *(_QWORD *)(v114 + 184) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                                      *((struct _VIDMM_MULTI_ALLOC **)v60 + 3));
          *(_QWORD *)(v114 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL)
                                                                                          + 8LL)
                                                                              + 736LL))(
                                      *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
                                      *((_QWORD *)v60 + 3));
          v115 = v194;
          *(_DWORD *)(v114 + 200) = v194;
          if ( v115 != -1 )
          {
            *(_DWORD *)(v114 + 12) |= 0x40u;
            *(_DWORD *)(v114 + 12) ^= (*(_DWORD *)(v114 + 12) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
          }
        }
        else if ( (*(_WORD *)&v104 & 0x1000) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 8LL)
                                                         + 744LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
            *((_QWORD *)v60 + 3),
            *((_QWORD *)v189 + 42));
        }
        if ( v181[0] )
        {
          if ( v45 )
          {
            if ( (*((_DWORD *)v45 + 1) & 1) != 0 )
            {
              v116 = *((_QWORD *)v45 + 7);
              if ( !*(_DWORD *)(v116 + 24) && (*(_DWORD *)(v116 + 12) & 8) == 0 )
              {
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v203);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v203);
                if ( (*(_BYTE *)&a2->Flags & 2) == 0 )
                {
                  v118 = WdLogNewEntry5_WdAssertion(v117);
                  *(_QWORD *)(v118 + 24) = 4417LL;
                  WdLogEvent5_WdAssertion(v118);
                }
                Global = DXGGLOBAL::GetGlobal();
                v120 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v45 + 7), 2u);
                v124 = *((_QWORD *)v45 + 7);
                *(_DWORD *)(v124 + 24) = v120;
                if ( !*(_DWORD *)(*((_QWORD *)v45 + 7) + 24LL) )
                {
                  v125 = WdLogNewEntry5_WdWarning(v124, v121, v122, v123);
                  *(_QWORD *)(v125 + 24) = this;
                  *(_QWORD *)(v125 + 32) = -1073741801LL;
                  WdLogEvent5_WdWarning(v125);
                  LODWORD(v44) = -1073741801;
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v203);
                  goto LABEL_297;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v203);
              }
            }
          }
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v207,
            (struct _KTHREAD **)this + 20);
          v126 = *((_QWORD *)this + 7);
          if ( v126 )
            *(_QWORD *)(v126 + 32) = v45;
          *((_QWORD *)v45 + 5) = *((_QWORD *)this + 7);
          *((_QWORD *)this + 7) = v45;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v207);
        }
        v127 = 0;
        if ( v45 )
          v127 = *((_DWORD *)v45 + 4);
        a2->hResource = v127;
        v128 = a2->Flags;
        if ( ((*(_BYTE *)&v128 & 2) != 0 || v214) && (*(_BYTE *)&v128 & 0x40) == 0 )
          v129 = *(_DWORD *)(*((_QWORD *)v45 + 7) + 24LL);
        else
          v129 = 0;
        a2->hGlobalShare = v129;
        v130 = *((_QWORD *)this + 2);
        v131 = *(_QWORD *)(v130 + 16);
        v59 = *(_QWORD *)(*(_QWORD *)(v131 + 1904) + 24LL);
        if ( v59 && (*(_BYTE *)(v59 + 72) || *(_BYTE *)(v59 + 73)) && !*(_BYTE *)(v131 + 1945) )
        {
          if ( v189 )
          {
            if ( (*(_DWORD *)v189 & 0x200) == 0 )
            {
              v59 = *(unsigned __int8 *)(*((_QWORD *)this + 36) + 352LL);
              if ( (_BYTE)v59 )
              {
                memset(v208, 0, 0x68uLL);
                v208[7] |= 1uLL;
                v187 = 0;
                if ( a2->NumAllocations )
                {
                  v132 = (_QWORD *)(v130 + 432);
                  v201 = v130 + 432;
                  v133 = (unsigned int *)(v130 + 424);
                  v200 = (unsigned int *)(v130 + 424);
                  while ( 1 )
                  {
                    v134 = (*((_DWORD *)v60 + 18) >> 12) & 0x3F;
                    if ( *((_DWORD *)v189 + 4) == 4 )
                    {
                      v135 = *(_DWORD *)(*((_QWORD *)v189 + 3) + 12LL);
                      if ( ((v135 - 1) & 0xFFFFFFFC) != 0 || v135 == 2 )
                      {
                        if ( *(_BYTE *)(*(_QWORD *)(v130 + 16) + 1923LL) )
                          v134 = -1;
                      }
                    }
                    LOBYTE(v178) = 0;
                    v136 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*(_QWORD *)v133 + 8LL)
                                                                                                 + 776LL))(
                             *v132,
                             0LL,
                             *((_QWORD *)v60 + 3),
                             v208,
                             v178,
                             v134);
                    v44 = v136;
                    if ( v136 < 0 )
                      break;
                    v130 = *((_QWORD *)this + 2);
                    v59 = *(unsigned __int8 *)(*(_QWORD *)(v130 + 16) + 1923LL);
                    v140 = v208[1];
                    if ( (_BYTE)v59 )
                      v140 = v208[11];
                    v208[1] = v140;
                    v208[11] = 0LL;
                    ++v187;
                    v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
                    v132 = (_QWORD *)v201;
                    v133 = v200;
                    if ( v187 >= a2->NumAllocations )
                      goto LABEL_239;
                  }
                  v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v137, v131, v138, v139);
                  v141[3] = v44;
LABEL_296:
                  WdLogEvent5_WdWarning(v141);
                  goto LABEL_297;
                }
LABEL_239:
                v60 = v182;
              }
            }
          }
        }
        if ( v180 )
        {
          v142 = 0LL;
          v186 = 0;
          k = v60;
          while ( (unsigned int)v142 < a2->NumAllocations )
          {
            v131 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v142;
            if ( v131 >= MmUserProbeAddress )
              v131 = MmUserProbeAddress;
            *(_DWORD *)v131 = *((_DWORD *)k + 4);
            v142 = (unsigned int)(v142 + 1);
            v186 = v142;
            k = (struct DXGALLOCATION *)*((_QWORD *)k + 8);
          }
          if ( (int)v44 < 0 )
            goto LABEL_299;
        }
        else
        {
          v142 = 0LL;
          for ( k = v60; (unsigned int)v142 < a2->NumAllocations; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
          {
            v131 = 96LL * (unsigned int)v142;
            v59 = (unsigned __int64)a2->pAllocationInfo;
            *(_DWORD *)(v131 + v59) = *((_DWORD *)k + 4);
            v142 = (unsigned int)(v142 + 1);
          }
        }
        v144 = 0;
        v186 = 0;
        for ( m = v60; v144 < a2->NumAllocations; m = v60 )
        {
          v131 = *(unsigned int *)(*((_QWORD *)v60 + 6) + 4LL);
          if ( (v131 & 1) != 0 )
          {
            LODWORD(v44) = DXGDEVICE::AddPrimaryAllocation((DXGADAPTER **)this, v60);
            if ( (int)v44 < 0 )
              goto LABEL_297;
          }
          else if ( (v131 & 2) != 0 )
          {
            DXGDEVICE::SetDisplayedPrimary(this, ((unsigned int)v131 >> 6) & 0xF, v60, 0, 1);
          }
          v186 = ++v144;
          v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
        }
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          if ( a2->pPrivateRuntimeData )
          {
            v145 = *((_QWORD *)v45 + 7);
            if ( *(_QWORD *)(v145 + 88) )
            {
              if ( *(_DWORD *)(v145 + 96) != a2->PrivateRuntimeDataSize )
              {
                LODWORD(v44) = -1073741811;
                v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v145, v131, v142, k);
                v141[3] = this;
                v141[4] = a2->PrivateRuntimeDataSize;
                v141[5] = *(unsigned int *)(*((_QWORD *)v45 + 7) + 96LL);
                goto LABEL_296;
              }
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v45 + 7) + 88LL) = operator new[](
                                                           a2->PrivateRuntimeDataSize,
                                                           0x4B677844u,
                                                           PagedPool);
              v149 = *((_QWORD *)v45 + 7);
              if ( !*(_QWORD *)(v149 + 88) )
              {
                LODWORD(v44) = -1073741801;
                v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v149, v146, v147, v148);
                v141[3] = this;
                PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_262:
                v141[4] = PrivateRuntimeDataSize;
                v141[5] = -1073741801LL;
                goto LABEL_296;
              }
              *(_DWORD *)(v149 + 96) = a2->PrivateRuntimeDataSize;
            }
            v151 = v180;
            if ( v180 )
            {
              v152 = a2->PrivateRuntimeDataSize;
              pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
              v154 = *(void **)(*((_QWORD *)v45 + 7) + 88LL);
              if ( &pPrivateRuntimeData[v152] < pPrivateRuntimeData
                || (unsigned __int64)&pPrivateRuntimeData[v152] > MmUserProbeAddress )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v154, pPrivateRuntimeData, v152);
            }
            else
            {
              memmove(*(void **)(*((_QWORD *)v45 + 7) + 88LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
            }
          }
          else
          {
            v151 = v180;
          }
          if ( a2->pStandardAllocation )
          {
            v155 = *((_QWORD *)v45 + 7);
            if ( *(_QWORD *)(v155 + 104) )
            {
              if ( *(_DWORD *)(v155 + 112) != a2->PrivateDriverDataSize )
              {
                LODWORD(v44) = -1073741811;
                v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v155, v131, v142, k);
                v141[3] = this;
                v141[4] = a2->PrivateDriverDataSize;
                v141[5] = *(unsigned int *)(*((_QWORD *)v45 + 7) + 112LL);
                v141[6] = 4712LL;
                goto LABEL_296;
              }
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v45 + 7) + 104LL) = operator new[](
                                                            a2->PrivateDriverDataSize,
                                                            0x4B677844u,
                                                            PagedPool);
              v159 = *((_QWORD *)v45 + 7);
              if ( !*(_QWORD *)(v159 + 104) )
              {
                LODWORD(v44) = -1073741801;
                v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v159, v156, v157, v158);
                v141[3] = this;
                PrivateRuntimeDataSize = a2->PrivateDriverDataSize;
                goto LABEL_262;
              }
              *(_DWORD *)(v159 + 112) = a2->PrivateDriverDataSize;
            }
            v160 = P;
            if ( !v151 )
              v160 = a2->pStandardAllocation;
            memmove(*(void **)(*((_QWORD *)v45 + 7) + 104LL), v160, a2->PrivateDriverDataSize);
          }
          v161 = 0;
          v60 = v182;
          v162 = v182;
          if ( a2->NumAllocations )
          {
            v59 = (unsigned __int64)v184;
            while ( 1 )
            {
              v163 = (char *)(v59 + 96LL * v161);
              if ( *((_QWORD *)v163 + 2) )
              {
                *(_QWORD *)(*((_QWORD *)v162 + 6) + 32LL) = operator new[](
                                                              *((unsigned int *)v163 + 6),
                                                              0x4B677844u,
                                                              PagedPool);
                v167 = *(void **)(*((_QWORD *)v162 + 6) + 32LL);
                if ( !v167 )
                {
                  LODWORD(v44) = -1073741801;
                  v169 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v164, v165, v166);
                  v169[3] = this;
                  v169[4] = v161 + 1;
                  v169[5] = v184[v161].PrivateDriverDataSize;
                  v169[6] = -1073741801LL;
                  WdLogEvent5_WdWarning(v169);
LABEL_294:
                  v45 = v196;
                  goto LABEL_297;
                }
                if ( v180 )
                  v168 = v193[v161];
                else
                  v168 = (const void *)*((_QWORD *)v163 + 2);
                memmove(v167, v168, *((unsigned int *)v163 + 6));
                *(_DWORD *)(*((_QWORD *)v162 + 6) + 40LL) = *((_DWORD *)v163 + 6);
                v59 = (unsigned __int64)v184;
              }
              ++v161;
              v162 = (struct DXGALLOCATION *)*((_QWORD *)v162 + 8);
              if ( v161 >= a2->NumAllocations )
                goto LABEL_294;
            }
          }
          v45 = v196;
        }
        else
        {
LABEL_297:
          v60 = v182;
        }
      }
    }
  }
LABEL_298:
  if ( (int)v44 < 0 )
    goto LABEL_299;
LABEL_320:
  v176 = v191;
  if ( a2->NumAllocations )
  {
    do
    {
      v177 = v176[v23];
      if ( v177 )
        ExFreePoolWithTag(v177, 0);
      ++v23;
    }
    while ( v23 < a2->NumAllocations );
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( a2->NumAllocations > 5 )
  {
    operator delete(v184);
    operator delete(v190);
    operator delete(v195);
    operator delete(v176);
    operator delete(v193);
  }
  return (unsigned int)v44;
}

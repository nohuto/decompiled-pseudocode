/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060
 * Callers:
 *     DxgkCreateAllocation @ 0x1C0076DD0 (DxgkCreateAllocation.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0096D28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0097038 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00074F8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E9C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0009C0C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C00128BC (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C002128C (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00217A4 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002191C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00966D4 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C00968D0 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00969A0 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0097840 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C009ACF4 (-CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C009AE20 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@H@Z @ 0x1C009B180 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C009B870 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB04 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB8C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0151A08 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C015E840 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
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
  char v11; // si
  char v12; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 Flags; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v22; // rax
  UINT v23; // esi
  unsigned __int64 NumAllocations; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v25; // r13
  int v26; // r14d
  SIZE_T v27; // rax
  unsigned __int64 v28; // rdx
  SIZE_T v29; // rax
  unsigned __int64 v30; // rdx
  SIZE_T v31; // rax
  void **v32; // rdx
  unsigned __int64 v33; // rcx
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  void **v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  UINT v42; // ecx
  struct DXGRESOURCE *v43; // r15
  size_t v44; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  char *Value; // rdx
  __int64 VidPnSourceId; // r8
  __int64 v48; // r9
  unsigned int v49; // r14d
  __int64 v50; // rcx
  __int64 v51; // rcx
  char *v52; // r12
  __int64 v53; // r13
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  _QWORD *v58; // rax
  struct DXGALLOCATION *v59; // r12
  _QWORD *v60; // rax
  UINT v61; // r12d
  __int64 v62; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v63; // r13
  unsigned int PrivateDriverDataSize; // eax
  __int64 v65; // rax
  char *PoolWithTag; // rax
  bool v67; // zf
  unsigned int v68; // eax
  SIZE_T v69; // rdx
  __int64 v70; // r14
  void **v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rcx
  char *v74; // r9
  size_t v75; // r8
  char *pPrivateDriverData; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  PVOID v80; // r9
  size_t v81; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  char v89; // cl
  struct _D3DDDI_ALLOCATIONINFO2 *v90; // r14
  struct _DXGK_ALLOCATIONINFO *v91; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v92; // eax
  ULONG64 v93; // rdx
  __int64 v94; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v95; // eax
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // r14
  int v106; // eax
  struct _D3DKM_CREATESTANDARDALLOCATION *v107; // r14
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  struct DXGGLOBAL *Global; // rax
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  D3DKMT_HANDLE v119; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v120; // eax
  D3DKMT_HANDLE v121; // ecx
  __int64 v122; // r13
  UINT v123; // r12d
  struct DXGALLOCATION *v124; // r14
  unsigned int *v125; // r8
  __int64 v126; // r9
  int v127; // edx
  int v128; // ecx
  unsigned int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 j; // r9
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // r8
  struct DXGALLOCATION *v136; // r10
  UINT v137; // r12d
  struct DXGALLOCATION *v138; // r13
  struct DXGALLOCATION *v139; // r14
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  _QWORD *v145; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  _QWORD *v147; // rax
  unsigned __int8 v148; // r14
  size_t v149; // r8
  char *pPrivateRuntimeData; // rdx
  void *v151; // r9
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  const void *v157; // rdx
  UINT v158; // r12d
  struct _D3DDDI_ALLOCATIONINFO2 *v159; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v160; // r14
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  void *v164; // rcx
  void *v165; // rdx
  __int64 v166; // rcx
  UINT v167; // r15d
  __int64 v168; // r13
  unsigned __int64 v169; // r12
  unsigned int v170; // r14d
  __int64 v171; // r8
  __int64 v172; // rcx
  __int64 v173; // r12
  __int64 v174; // rax
  UINT v175; // r12d
  struct DXGALLOCATION *v176; // r14
  __int64 v177; // rax
  int v178; // eax
  __int64 v179; // rax
  UINT v180; // eax
  struct DXGALLOCATION *v181; // r13
  struct DXGALLOCATION *v182; // r14
  _QWORD *v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rdx
  _QWORD *v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // rcx
  char v190; // r14
  int v191; // eax
  __int64 v192; // rcx
  void **v193; // rdi
  void *v194; // rcx
  int v195; // [rsp+20h] [rbp-6E8h]
  unsigned __int8 v196; // [rsp+70h] [rbp-698h]
  unsigned __int8 v197[7]; // [rsp+71h] [rbp-697h] BYREF
  __int64 v198; // [rsp+78h] [rbp-690h]
  struct DXGALLOCATION *v199; // [rsp+80h] [rbp-688h]
  char v200; // [rsp+88h] [rbp-680h]
  int v201; // [rsp+8Ch] [rbp-67Ch]
  UINT v202; // [rsp+90h] [rbp-678h]
  struct _D3DDDI_ALLOCATIONINFO2 *v203; // [rsp+98h] [rbp-670h]
  int v204; // [rsp+A0h] [rbp-668h]
  void **v205; // [rsp+A8h] [rbp-660h]
  void **v206; // [rsp+B0h] [rbp-658h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v207; // [rsp+B8h] [rbp-650h]
  struct DXGALLOCATION *v208; // [rsp+C0h] [rbp-648h] BYREF
  struct _DXGK_ALLOCATIONINFO *v209; // [rsp+C8h] [rbp-640h]
  struct DXGRESOURCE *v210; // [rsp+D0h] [rbp-638h]
  struct _DXGK_OPENALLOCATIONINFO *v211; // [rsp+D8h] [rbp-630h]
  DXGDEVICE *v212; // [rsp+E0h] [rbp-628h]
  struct _D3DKMT_CREATEALLOCATION *v213; // [rsp+F0h] [rbp-618h]
  PVOID P; // [rsp+100h] [rbp-608h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v215[2]; // [rsp+108h] [rbp-600h] BYREF
  struct DXGRESOURCE *v216; // [rsp+110h] [rbp-5F8h] BYREF
  unsigned int *v217; // [rsp+118h] [rbp-5F0h]
  __int64 i; // [rsp+120h] [rbp-5E8h]
  struct _DXGKARG_DESCRIBEALLOCATION v219; // [rsp+128h] [rbp-5E0h] BYREF
  struct DXGALLOCATION *v220; // [rsp+158h] [rbp-5B0h] BYREF
  unsigned __int64 *v221; // [rsp+160h] [rbp-5A8h]
  struct DXGALLOCATION *v222; // [rsp+168h] [rbp-5A0h]
  _BYTE v223[16]; // [rsp+170h] [rbp-598h] BYREF
  _BYTE v224[16]; // [rsp+180h] [rbp-588h] BYREF
  _BYTE v225[24]; // [rsp+190h] [rbp-578h] BYREF
  _BYTE v226[24]; // [rsp+1A8h] [rbp-560h] BYREF
  _QWORD v227[14]; // [rsp+1C0h] [rbp-548h] BYREF
  _BYTE v228[40]; // [rsp+230h] [rbp-4D8h] BYREF
  _BYTE v229[40]; // [rsp+258h] [rbp-4B0h] BYREF
  char v230; // [rsp+280h] [rbp-488h] BYREF
  char v231; // [rsp+320h] [rbp-3E8h] BYREF
  _BYTE v232[480]; // [rsp+4E0h] [rbp-228h] BYREF
  char v233; // [rsp+728h] [rbp+20h]

  v233 = a4;
  v11 = a4;
  v12 = a3;
  v196 = a3;
  v212 = this;
  v213 = a2;
  v207 = a6;
  i = (__int64)a7;
  v217 = a10;
  v221 = a11;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 144)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 3951LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a7 )
  {
    v15 = *((_QWORD *)a7 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v15 + 144));
  }
  if ( v12 && v11 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v17 + 24) = 3956LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( (*(_DWORD *)(v19 + 1524) & 0x10) == 0 )
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
  v206 = 0LL;
  P = 0LL;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v25 = (struct _D3DDDI_ALLOCATIONINFO2 *)v232;
    v203 = (struct _D3DDDI_ALLOCATIONINFO2 *)v232;
    v209 = (struct _DXGK_ALLOCATIONINFO *)&v231;
    v211 = (struct _DXGK_OPENALLOCATIONINFO *)&v230;
    v32 = (void **)v228;
    v205 = (void **)v228;
    v36 = (void **)v229;
    v206 = (void **)v229;
  }
  else
  {
    v25 = 0LL;
    v203 = 0LL;
    if ( 96 * NumAllocations > 0xFFFFFFFF )
    {
      v201 = -1;
      v26 = -1073741675;
    }
    else
    {
      v201 = 96 * NumAllocations;
      v26 = 0;
    }
    if ( v26 >= 0 )
    {
      v27 = 96 * NumAllocations;
      if ( !is_mul_ok(NumAllocations, 0x60uLL) )
        v27 = -1LL;
      v25 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new(v27, 0x4B677844u, PagedPool);
      v203 = v25;
    }
    v209 = 0LL;
    if ( v26 >= 0 )
    {
      v28 = a2->NumAllocations;
      if ( 88 * v28 > 0xFFFFFFFF )
      {
        v201 = -1;
        v26 = -1073741675;
      }
      else
      {
        v201 = 88 * v28;
        v26 = 0;
      }
      if ( v26 >= 0 )
      {
        v29 = 88 * v28;
        if ( !is_mul_ok(v28, 0x58uLL) )
          v29 = -1LL;
        v209 = (struct _DXGK_ALLOCATIONINFO *)operator new(v29, 0x4B677844u, PagedPool);
      }
    }
    v211 = 0LL;
    if ( v26 >= 0 )
    {
      v30 = a2->NumAllocations;
      if ( 32 * v30 > 0xFFFFFFFF )
      {
        v201 = -1;
        v26 = -1073741675;
      }
      else
      {
        v201 = 32 * v30;
        v26 = 0;
      }
      if ( v26 >= 0 )
      {
        v31 = 32 * v30;
        if ( !is_mul_ok(v30, 0x20uLL) )
          v31 = -1LL;
        v211 = (struct _DXGK_OPENALLOCATIONINFO *)operator new(v31, 0x4B677844u, PagedPool);
      }
    }
    v32 = 0LL;
    v205 = 0LL;
    if ( v26 < 0
      || ((v33 = a2->NumAllocations, 8 * v33 > 0xFFFFFFFF) ? (v201 = -1, v26 = -1073741675) : (v201 = 8 * v33, v26 = 0),
          v26 < 0) )
    {
      v36 = 0LL;
    }
    else
    {
      v34 = 8 * v33;
      if ( !is_mul_ok(v33, 8uLL) )
        v34 = -1LL;
      v32 = (void **)operator new(v34, 0x4B677844u, PagedPool);
      v205 = v32;
      if ( v12 )
      {
        v35 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v35 = -1LL;
        v36 = (void **)operator new(v35, 0x4B677844u, PagedPool);
        v206 = v36;
        v32 = v205;
      }
      else
      {
        v36 = 0LL;
      }
    }
    if ( v26 < 0 || !v25 || !v209 || !v211 || !v32 || !v36 && v12 )
    {
      operator delete(v25);
      operator delete(v209);
      operator delete(v211);
      operator delete(v205);
      operator delete(v36);
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
      v41[3] = this;
      v41[4] = a2->NumAllocations;
      if ( v26 >= 0 )
      {
        v26 = -1073741801;
        v41[5] = -1073741801LL;
      }
      else
      {
        v41[5] = v26;
      }
      WdLogEvent5_WdWarning(v41);
      return (unsigned int)v26;
    }
  }
  v42 = 0;
  v202 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v32[v42] = 0LL;
      if ( v12 )
        v36[v42] = 0LL;
      ++v42;
    }
    while ( v42 < a2->NumAllocations );
    v202 = v42;
  }
  v199 = 0LL;
  v208 = 0LL;
  LODWORD(v198) = 0;
  v197[0] = 0;
  v43 = 0LL;
  v210 = 0LL;
  v200 = 0;
  v216 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v224);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v225, 0LL);
  if ( v12 )
  {
    v44 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v44) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v44 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v25, pAllocationInfo, v44);
  }
  else
  {
    memmove(v25, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v204 = -1;
  v49 = 0;
  if ( a2->NumAllocations )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
      {
        v50 = v49;
        Value = (char *)v25[v50].Flags.Value;
        if ( ((unsigned __int8)Value & 1) != 0 )
        {
          VidPnSourceId = v25[v50].VidPnSourceId;
          v204 = v25[v50].VidPnSourceId;
          if ( !*((_QWORD *)this + 357) )
          {
            Value = (char *)((unsigned int)Value & 0xFFFFFFFE);
            v25[v50].Flags.Value = (unsigned int)Value;
          }
        }
        if ( (v25[v50].Flags.Value & 2) != 0 )
          break;
      }
      v51 = 96LL * v49;
      v52 = (char *)v25 + v51;
      if ( (*(UINT *)((_BYTE *)&v25->Flags.Value + v51) & 1) != 0 )
      {
        v53 = *((_QWORD *)this + 357);
        if ( !v53 )
          goto LABEL_104;
        v54 = *(_QWORD *)(v53 + 2128);
        if ( !v54 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v54 + 16)) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v54);
          *(_QWORD *)(v55 + 24) = 4185LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v51 = *(unsigned int *)(*(_QWORD *)(v53 + 2128) + 80LL);
        if ( (_DWORD)v51 != *((_DWORD *)this + 716) )
        {
          v56 = WdLogNewEntry5_WdAssertion(v51);
          *(_QWORD *)(v56 + 24) = 4191LL;
          WdLogEvent5_WdAssertion(v56);
        }
        VidPnSourceId = *((unsigned int *)v52 + 7);
        if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 716) )
        {
LABEL_104:
          v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, Value, VidPnSourceId, v48);
          v58[3] = this;
          v58[4] = v203[v49].VidPnSourceId;
          v58[5] = -1073741811LL;
          goto LABEL_100;
        }
        if ( !*((_DWORD *)this + 76)
          && !v233
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v53 + 2128), this, VidPnSourceId) )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, Value, VidPnSourceId, v48);
          LODWORD(v25) = -1071775744;
          v198 = -1071775744LL;
          v60[3] = -1071775744LL;
          v60[4] = this;
          v60[5] = v203[v49].VidPnSourceId;
          v60[6] = v49;
          WdLogEvent5_WdWarning(v60);
          goto LABEL_102;
        }
        v25 = v203;
      }
      v57 = *((_DWORD *)v52 + 8);
      if ( (v57 & 2) != 0 && (v57 & 1) == 0 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, Value, VidPnSourceId, v48);
        v58[3] = -1073741811LL;
        v58[4] = this;
        goto LABEL_100;
      }
      if ( ++v49 >= a2->NumAllocations )
        goto LABEL_106;
    }
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v50 * 96, Value, VidPnSourceId, v48);
    v58[3] = this;
    v58[4] = -1073741811LL;
LABEL_100:
    WdLogEvent5_WdWarning(v58);
LABEL_101:
    LODWORD(v25) = -1073741811;
    v198 = 3221225485LL;
    goto LABEL_102;
  }
LABEL_106:
  v61 = 0;
  v202 = 0;
  v62 = v196;
  while ( v61 < a2->NumAllocations )
  {
    v63 = &v25[v61];
    PrivateDriverDataSize = v63->PrivateDriverDataSize;
    if ( PrivateDriverDataSize > 0x7FFFFFFF )
    {
      v65 = WdLogNewEntry5_WdWarning(v62, Value, VidPnSourceId, v48);
      *(_QWORD *)(v65 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v65);
      LODWORD(v25) = v198;
      goto LABEL_102;
    }
    if ( !v63->pPrivateDriverData || !PrivateDriverDataSize )
    {
      v205[v61] = 0LL;
      if ( (_BYTE)v62 )
        v206[v61] = 0LL;
      goto LABEL_130;
    }
    if ( (_BYTE)v62 )
    {
      v67 = 2 * PrivateDriverDataSize == 0;
      v68 = 2 * PrivateDriverDataSize;
      v69 = v68;
      if ( v67 )
      {
        v69 = 1LL;
LABEL_118:
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v69, 0x4B677844u);
        goto LABEL_119;
      }
      if ( v68 <= 0x7FFFFFFFuLL )
        goto LABEL_118;
      PoolWithTag = 0LL;
    }
    else
    {
      PoolWithTag = (char *)operator new(v63->PrivateDriverDataSize, 0x4B677844u, PagedPool);
    }
LABEL_119:
    v70 = v61;
    v71 = &v205[v70];
    v205[v70] = PoolWithTag;
    Value = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v25) = -1073741801;
      v198 = 3221225495LL;
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, 0LL, VidPnSourceId, v48);
      v72[3] = this;
      v73 = a2->NumAllocations;
      goto LABEL_121;
    }
    if ( v196 )
    {
      v74 = &PoolWithTag[v63->PrivateDriverDataSize];
      v206[v70] = v74;
      v75 = v63->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v63->pPrivateDriverData;
      if ( &pPrivateDriverData[v75] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v75] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v74, pPrivateDriverData, v75);
      v62 = v196;
    }
    else
    {
      v62 = 0LL;
    }
LABEL_130:
    v202 = ++v61;
    v25 = v203;
  }
  if ( v196 && a2->pStandardAllocation )
  {
    v80 = operator new(a2->PrivateDriverDataSize, 0x4B677844u, PagedPool);
    P = v80;
    if ( !v80 )
    {
      LODWORD(v25) = -1073741801;
      v198 = 3221225495LL;
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v77, v79, 0LL);
      v72[3] = this;
      v73 = a2->PrivateDriverDataSize;
LABEL_121:
      v72[4] = v73;
      v72[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v72);
LABEL_102:
      v59 = 0LL;
      goto LABEL_283;
    }
    v81 = a2->PrivateDriverDataSize;
    pStandardAllocation = a2->pStandardAllocation;
    if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v81) < pStandardAllocation
      || (unsigned __int64)pStandardAllocation + v81 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v80, pStandardAllocation, v81);
  }
  LODWORD(v25) = DXGDEVICE::OpenResourceObject(
                   this,
                   a2,
                   v25,
                   v233,
                   a9,
                   a5,
                   (struct DXGRESOURCEREFERENCE *)&v216,
                   v197,
                   (struct DXGAUTOMUTEX *)v224,
                   (struct DXGAUTOPUSHLOCK *)v225);
  v198 = (unsigned int)v25;
  if ( (int)v25 < 0 )
    goto LABEL_102;
  v43 = v216;
  v210 = v216;
  if ( v216 && (*((_DWORD *)v216 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v83);
    v84[3] = this;
    v84[4] = v43;
    v84[5] = -1073741811LL;
    WdLogEvent5_WdError(v84);
    goto LABEL_101;
  }
  LODWORD(v25) = DXGDEVICE::CreateDestructionBuffers(this, a2->NumAllocations, v216, v197[0]);
  v198 = (unsigned int)v25;
  if ( (int)v25 < 0 )
    goto LABEL_102;
  LODWORD(v25) = DXGDEVICE::CreateAllocationObjects(this, a2->NumAllocations, &v208, v43, &v220);
  v198 = (unsigned int)v25;
  v59 = v208;
  v199 = v208;
  if ( (int)v25 < 0 )
    goto LABEL_283;
  if ( v220 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice((struct _KTHREAD **)this, v43, v208, v220);
    v200 = 1;
  }
  v86 = a2->Flags;
  if ( (*(_WORD *)&v86 & 0x800) != 0 )
  {
    if ( v204 != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v43 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
    goto LABEL_160;
  }
  if ( (*(_WORD *)&v86 & 0x1000) == 0 )
  {
    if ( !v43 )
      goto LABEL_160;
    v88 = *((_QWORD *)v43 + 7);
    if ( !v88 || (*(_BYTE *)(v88 + 12) & 0x60) != 0x60 )
      goto LABEL_160;
LABEL_159:
    *((_DWORD *)v43 + 1) |= 8u;
    goto LABEL_160;
  }
  if ( (*(_DWORD *)v207 & 0x80u) != 0 )
  {
    v87 = WdLogNewEntry5_WdAssertion(v85);
    *(_QWORD *)(v87 + 24) = 4441LL;
    WdLogEvent5_WdAssertion(v87);
  }
  if ( (*(_DWORD *)v207 & 0x100) != 0 )
    goto LABEL_159;
LABEL_160:
  memset(v209, 0, 88LL * a2->NumAllocations);
  v89 = v233;
  v90 = v203;
  if ( !v233 )
  {
    LODWORD(v25) = DXGDEVICE::CreateDriverAllocations(this, a2, v203, v209, v59, v43, v205, v206, P, v207, v196);
    v198 = (unsigned int)v25;
    v89 = 0;
  }
  if ( (int)v25 < 0 )
    goto LABEL_283;
  LODWORD(v25) = DXGDEVICE::OpenAllocations(this, a2, v90, v59, v211, v205, v206, P, v196, v89, a8, v217, v221);
  v198 = (unsigned int)v25;
  if ( (int)v25 < 0 )
    goto LABEL_283;
  v91 = v209;
  if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
    v209->Flags.Value |= 0x4000008u;
  v92 = a2->Flags;
  if ( (*(_WORD *)&v92 & 0x100) != 0 )
  {
    v91->Flags.Value = v91->Flags.Value & 0xFEFFFFFB | 0x1000000;
  }
  else if ( (*(_WORD *)&v92 & 0x200) != 0 )
  {
    v91->Flags.Value |= 0x800004u;
  }
  LODWORD(v25) = DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
                   this,
                   (__int64)a2,
                   (__int64)v90,
                   (__int64)v91,
                   (__int64)v59,
                   (unsigned int *)v207,
                   v233,
                   i);
  v198 = (unsigned int)v25;
  if ( (int)v25 < 0 )
    goto LABEL_283;
  v95 = a2->Flags;
  if ( (*(_WORD *)&v95 & 0x800) != 0 )
  {
    memset(&v219, 0, sizeof(v219));
    v219.hAllocation = *(HANDLE *)(*((_QWORD *)v59 + 6) + 16LL);
    v96 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v219, v94);
    v25 = (struct _D3DDDI_ALLOCATIONINFO2 *)v96;
    v198 = v96;
    if ( v96 < 0 )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdWarning(v98, v97, v99, v100);
      v101[3] = v25;
      v101[4] = this;
      v101[5] = *((unsigned int *)v59 + 4);
      v101[6] = v59;
      WdLogEvent5_WdWarning(v101);
      goto LABEL_283;
    }
    if ( v219.Format == D3DDDIFMT_UNKNOWN && v219.Height != 1 )
    {
      v102 = (_QWORD *)WdLogNewEntry5_WdWarning(v98, v97, v99, v100);
      v102[3] = -1073741811LL;
      v102[4] = this;
      v102[5] = v219.Height;
      WdLogEvent5_WdWarning(v102);
      LODWORD(v25) = -1073741811;
      v198 = 3221225485LL;
      goto LABEL_283;
    }
    v103 = *(_QWORD *)(*((_QWORD *)v59 + 5) + 56LL);
    if ( (*(_DWORD *)(v103 + 12) & 0x20) == 0 )
    {
      v104 = WdLogNewEntry5_WdAssertion(v103);
      *(_QWORD *)(v104 + 24) = 4563LL;
      WdLogEvent5_WdAssertion(v104);
    }
    v105 = *(_QWORD *)(*((_QWORD *)v59 + 5) + 56LL);
    *(_DWORD *)(v105 + 176) = v219.Width;
    *(_DWORD *)(v105 + 180) = v219.Height;
    *(_DWORD *)(v105 + 184) = v219.Format;
    *(_QWORD *)(v105 + 192) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                                *((struct _VIDMM_MULTI_ALLOC **)v59 + 3));
    *(_QWORD *)(v105 + 200) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 752LL))(
                                *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
                                *((_QWORD *)v59 + 3));
    v106 = v204;
    *(_DWORD *)(v105 + 208) = v204;
    if ( v106 != -1 )
    {
      *(_DWORD *)(v105 + 12) |= 0x40u;
      *(_DWORD *)(v105 + 12) ^= (*(_DWORD *)(v105 + 12) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
LABEL_183:
    v107 = v207;
  }
  else
  {
    if ( (*(_WORD *)&v95 & 0x1000) == 0 )
      goto LABEL_183;
    v107 = v207;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL)
                                                   + 760LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
      *((_QWORD *)v59 + 3),
      *((_QWORD *)v207 + 42));
  }
  if ( v197[0] )
  {
    if ( v43 )
    {
      if ( (*((_DWORD *)v43 + 1) & 1) != 0 )
      {
        v108 = *((_QWORD *)v43 + 7);
        if ( !*(_DWORD *)(v108 + 24) && (*(_DWORD *)(v108 + 12) & 8) == 0 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v223);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v223);
          if ( (*(_BYTE *)&a2->Flags & 2) == 0 )
          {
            v110 = WdLogNewEntry5_WdAssertion(v109);
            *(_QWORD *)(v110 + 24) = 4608LL;
            WdLogEvent5_WdAssertion(v110);
          }
          Global = DXGGLOBAL::GetGlobal();
          v112 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v43 + 7), 2u);
          v116 = *((_QWORD *)v43 + 7);
          *(_DWORD *)(v116 + 24) = v112;
          if ( !*(_DWORD *)(*((_QWORD *)v43 + 7) + 24LL) )
          {
            v117 = WdLogNewEntry5_WdWarning(v116, v113, v114, v115);
            *(_QWORD *)(v117 + 24) = this;
            *(_QWORD *)(v117 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v117);
            LODWORD(v25) = -1073741801;
            v198 = 3221225495LL;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v223);
            goto LABEL_283;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v223);
        }
      }
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v226, (struct _KTHREAD **)this + 20);
    v118 = *((_QWORD *)this + 7);
    if ( v118 )
      *(_QWORD *)(v118 + 32) = v43;
    *((_QWORD *)v43 + 5) = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v43;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v226);
  }
  v119 = 0;
  if ( v43 )
    v119 = *((_DWORD *)v43 + 4);
  a2->hResource = v119;
  v120 = a2->Flags;
  if ( ((*(_BYTE *)&v120 & 2) != 0 || v233) && (*(_BYTE *)&v120 & 0x40) == 0 )
    v121 = *(_DWORD *)(*((_QWORD *)v43 + 7) + 24LL);
  else
    v121 = 0;
  a2->hGlobalShare = v121;
  v122 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(v122 + 16) + 1524LL) & 0x40) != 0 && v107 && (*(_DWORD *)v107 & 0x200) == 0 )
  {
    memset(v227, 0, 0x68uLL);
    v227[7] |= 1uLL;
    v123 = 0;
    v124 = v199;
    if ( a2->NumAllocations )
    {
      v125 = (unsigned int *)(v122 + 408);
      v217 = (unsigned int *)(v122 + 408);
      v126 = v122 + 400;
      for ( i = v122 + 400; ; v126 = i )
      {
        v127 = (*((_DWORD *)v124 + 18) >> 12) & 0x3F;
        if ( *((_DWORD *)v207 + 4) == 4 )
        {
          v128 = *(_DWORD *)(*((_QWORD *)v207 + 3) + 12LL);
          if ( ((v128 - 1) & 0xFFFFFFFC) != 0 || v128 == 2 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v122 + 16) + 2058LL) )
              v127 = -1;
          }
        }
        LOBYTE(v195) = 0;
        v129 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*(_QWORD *)v126 + 8LL)
                                                                                     + 792LL))(
                 *(_QWORD *)v125,
                 0LL,
                 *((_QWORD *)v124 + 3),
                 v227,
                 v195,
                 v127);
        j = v129;
        v198 = v129;
        if ( (v129 & 0x80000000) != 0 )
        {
          v134 = WdLogNewEntry5_WdWarning(v130, v93, v131, v129);
          LODWORD(v25) = v198;
          *(_QWORD *)(v134 + 24) = (int)v198;
          WdLogEvent5_WdWarning(v134);
          goto LABEL_282;
        }
        v122 = *((_QWORD *)this + 2);
        v133 = v227[1];
        if ( *(_BYTE *)(*(_QWORD *)(v122 + 16) + 2058LL) )
          v133 = v227[11];
        v227[1] = v133;
        v227[11] = 0LL;
        ++v123;
        v124 = (struct DXGALLOCATION *)*((_QWORD *)v124 + 8);
        v125 = v217;
        if ( v123 >= a2->NumAllocations )
          break;
      }
    }
    else
    {
      j = v198;
    }
    v59 = v199;
  }
  else
  {
    j = v198;
  }
  if ( v196 )
  {
    v135 = 0LL;
    v202 = 0;
    v136 = v59;
    while ( (unsigned int)v135 < a2->NumAllocations )
    {
      v93 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v135;
      if ( v93 >= MmUserProbeAddress )
        v93 = MmUserProbeAddress;
      *(_DWORD *)v93 = *((_DWORD *)v136 + 4);
      v135 = (unsigned int)(v135 + 1);
      v202 = v135;
      v136 = (struct DXGALLOCATION *)*((_QWORD *)v136 + 8);
    }
    if ( (int)j < 0 )
    {
      LODWORD(v25) = v198;
      goto LABEL_283;
    }
  }
  else
  {
    v135 = 0LL;
    for ( j = (__int64)v59; (unsigned int)v135 < a2->NumAllocations; j = *(_QWORD *)(j + 64) )
    {
      v93 = 96LL * (unsigned int)v135;
      *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v93) = *(_DWORD *)(j + 16);
      v135 = (unsigned int)(v135 + 1);
    }
  }
  v137 = 0;
  v202 = 0;
  v138 = v199;
  v139 = v199;
  v222 = v199;
  if ( a2->NumAllocations )
  {
    do
    {
      v93 = *(unsigned int *)(*((_QWORD *)v139 + 6) + 4LL);
      if ( (v93 & 1) != 0 )
      {
        LODWORD(v25) = DXGDEVICE::AddPrimaryAllocation((DXGADAPTER **)this, v139);
        v198 = (unsigned int)v25;
        if ( (int)v25 < 0 )
          goto LABEL_282;
      }
      else if ( (v93 & 2) != 0 )
      {
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v93 >> 6) & 0xF, v139, 0, 1);
      }
      v202 = ++v137;
      v139 = (struct DXGALLOCATION *)*((_QWORD *)v139 + 8);
      v222 = v139;
    }
    while ( v137 < a2->NumAllocations );
    v138 = v199;
  }
  if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
    goto LABEL_281;
  if ( a2->pPrivateRuntimeData )
  {
    v140 = *((_QWORD *)v43 + 7);
    if ( *(_QWORD *)(v140 + 96) )
    {
      if ( *(_DWORD *)(v140 + 104) != a2->PrivateRuntimeDataSize )
      {
        LODWORD(v25) = -1073741811;
        v198 = 3221225485LL;
        v147 = (_QWORD *)WdLogNewEntry5_WdWarning(v140, v93, v135, j);
        v147[3] = this;
        v147[4] = a2->PrivateRuntimeDataSize;
        v147[5] = *(unsigned int *)(*((_QWORD *)v43 + 7) + 104LL);
        WdLogEvent5_WdWarning(v147);
        goto LABEL_282;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v43 + 7) + 96LL) = operator new(a2->PrivateRuntimeDataSize, 0x4B677844u, PagedPool);
      v144 = *((_QWORD *)v43 + 7);
      if ( !*(_QWORD *)(v144 + 96) )
      {
        LODWORD(v25) = -1073741801;
        v198 = 3221225495LL;
        v145 = (_QWORD *)WdLogNewEntry5_WdWarning(v144, v141, v142, v143);
        v145[3] = this;
        PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_247:
        v145[4] = PrivateRuntimeDataSize;
        v145[5] = -1073741801LL;
        goto LABEL_248;
      }
      *(_DWORD *)(v144 + 104) = a2->PrivateRuntimeDataSize;
    }
    v148 = v196;
    if ( v196 )
    {
      v149 = a2->PrivateRuntimeDataSize;
      pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
      v151 = *(void **)(*((_QWORD *)v43 + 7) + 96LL);
      if ( &pPrivateRuntimeData[v149] < pPrivateRuntimeData
        || (unsigned __int64)&pPrivateRuntimeData[v149] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v151, pPrivateRuntimeData, v149);
    }
    else
    {
      memmove(*(void **)(*((_QWORD *)v43 + 7) + 96LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
    }
  }
  else
  {
    v148 = v196;
  }
  if ( a2->pStandardAllocation )
  {
    v152 = *((_QWORD *)v43 + 7);
    if ( *(_QWORD *)(v152 + 112) )
    {
      if ( *(_DWORD *)(v152 + 120) != a2->PrivateDriverDataSize )
      {
        LODWORD(v25) = -1073741811;
        v198 = 3221225485LL;
        v145 = (_QWORD *)WdLogNewEntry5_WdWarning(v152, v93, v135, j);
        v145[3] = this;
        v145[4] = a2->PrivateDriverDataSize;
        v145[5] = *(unsigned int *)(*((_QWORD *)v43 + 7) + 120LL);
        v145[6] = 4898LL;
        goto LABEL_248;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v43 + 7) + 112LL) = operator new(a2->PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v156 = *((_QWORD *)v43 + 7);
      if ( !*(_QWORD *)(v156 + 112) )
      {
        LODWORD(v25) = -1073741801;
        v198 = 3221225495LL;
        v145 = (_QWORD *)WdLogNewEntry5_WdWarning(v156, v153, v154, v155);
        v145[3] = this;
        PrivateRuntimeDataSize = a2->PrivateDriverDataSize;
        goto LABEL_247;
      }
      *(_DWORD *)(v156 + 120) = a2->PrivateDriverDataSize;
    }
    v157 = P;
    if ( !v148 )
      v157 = a2->pStandardAllocation;
    memmove(*(void **)(*((_QWORD *)v43 + 7) + 112LL), v157, a2->PrivateDriverDataSize);
  }
  v158 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_281:
    LODWORD(v25) = v198;
    goto LABEL_282;
  }
  v159 = v203;
  while ( 2 )
  {
    v160 = &v159[v158];
    if ( !v160->pPrivateDriverData )
    {
LABEL_277:
      ++v158;
      v138 = (struct DXGALLOCATION *)*((_QWORD *)v138 + 8);
      if ( v158 >= a2->NumAllocations )
        goto LABEL_281;
      continue;
    }
    break;
  }
  *(_QWORD *)(*((_QWORD *)v138 + 6) + 32LL) = operator new(v160->PrivateDriverDataSize, 0x4B677844u, PagedPool);
  v164 = *(void **)(*((_QWORD *)v138 + 6) + 32LL);
  if ( v164 )
  {
    if ( v196 )
      v165 = v206[v158];
    else
      v165 = v160->pPrivateDriverData;
    memmove(v164, v165, v160->PrivateDriverDataSize);
    *(_DWORD *)(*((_QWORD *)v138 + 6) + 40LL) = v160->PrivateDriverDataSize;
    v159 = v203;
    goto LABEL_277;
  }
  LODWORD(v25) = -1073741801;
  v198 = 3221225495LL;
  v145 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v161, v162, v163);
  v145[3] = this;
  v145[4] = v158 + 1;
  v145[5] = v203[v158].PrivateDriverDataSize;
  v145[6] = -1073741801LL;
LABEL_248:
  WdLogEvent5_WdWarning(v145);
LABEL_282:
  v59 = v199;
LABEL_283:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v224);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v225);
  if ( (int)v25 < 0 )
  {
    if ( v59 )
    {
      v175 = 0;
      v176 = v199;
      if ( a2->NumAllocations )
      {
        do
        {
          v177 = *((_QWORD *)v176 + 6);
          if ( *(_QWORD *)(v177 + 8) && !v233 )
          {
            if ( (v178 = *(_DWORD *)(v177 + 4), (v178 & 1) != 0) && !*((_DWORD *)this + 76) || (v178 & 2) != 0 )
            {
              if ( (v178 & 0x10) != 0 )
              {
                v179 = WdLogNewEntry5_WdAssertion(v166);
                *(_QWORD *)(v179 + 24) = 4998LL;
                WdLogEvent5_WdAssertion(v179);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v176 + 6) + 8LL));
              *(_DWORD *)(*((_QWORD *)v176 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v175;
          v176 = (struct DXGALLOCATION *)*((_QWORD *)v176 + 8);
        }
        while ( v175 < a2->NumAllocations );
        LODWORD(v25) = v198;
      }
      v59 = v199;
    }
    if ( v197[0] )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v215, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v216, v215);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v215);
      DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v43);
      DXGDEVICE::DestroyResource(this, v43, 0LL, 0);
    }
    else if ( v59 )
    {
      if ( v200 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(this, v43, v59, a2->NumAllocations);
      v180 = 0;
      *(_QWORD *)&v215[0].0 = 0LL;
      if ( !v43 || *((_QWORD *)v43 + 7) )
      {
        v181 = v59;
        do
        {
          v182 = v181;
          v183 = (_QWORD *)((char *)v181 + 64);
          v181 = (struct DXGALLOCATION *)*((_QWORD *)v181 + 8);
          *((_QWORD *)v182 + 7) = 0LL;
          *v183 = 0LL;
          if ( v43 )
          {
            v184 = *((_QWORD *)v43 + 7);
            if ( v184 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v182 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v184 + 32));
                --*(_DWORD *)(*((_QWORD *)v43 + 7) + 124LL);
                v185 = *((_QWORD *)v182 + 6) + 48LL;
                v186 = *(_QWORD *)v185;
                v187 = *(_QWORD **)(*((_QWORD *)v182 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v185 + 8LL) != v185 || *v187 != v185 )
                  __fastfail(3u);
                *v187 = v186;
                *(_QWORD *)(v186 + 8) = v187;
                *(_QWORD *)(*((_QWORD *)v182 + 6) + 48LL) = 0LL;
                v188 = *((_QWORD *)v43 + 7) + 32LL;
                *(_QWORD *)(v188 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v188, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations(this, 0LL, 0, v182, 0LL, v215[0]);
        }
        while ( v181 );
        LODWORD(v25) = v198;
        v180 = v215[0].Value;
      }
      if ( v43 )
      {
        v189 = *((_QWORD *)v43 + 7);
        if ( v189 )
        {
          v190 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v189 + 32));
          v191 = *((_DWORD *)v43 + 1);
          if ( (v191 & 0x10) == 0 )
          {
            *((_DWORD *)v43 + 1) = v191 | 0x10;
            v190 = 1;
          }
          v192 = *((_QWORD *)v43 + 7) + 32LL;
          *(_QWORD *)(v192 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v192, 0LL);
          KeLeaveCriticalRegion();
          if ( v190 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v43);
            DXGDEVICE::DestroyResource(this, v43, 0LL, 0);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(this, v43, 0, v59, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v180);
        }
      }
    }
  }
  else
  {
    if ( v59 )
    {
      v204 = 0;
      if ( a2->NumAllocations )
      {
        v167 = 0;
        do
        {
          v168 = *((_QWORD *)this + 5);
          v169 = *((unsigned int *)v59 + 4);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v168 + 184));
          v170 = ((unsigned int)v169 >> 6) & 0xFFFFFF;
          if ( v170 < *(_DWORD *)(v168 + 224) )
          {
            v171 = *(_QWORD *)(v168 + 208);
            v172 = ((unsigned int)v169 >> 26) & 0x30;
            if ( (((unsigned int)v169 >> 26) & 0x30) == (*(_BYTE *)(v171 + 16LL * v170 + 8) & 0x30)
              && (*(_DWORD *)(v171 + 16LL * v170 + 8) & 0xF) != 0 )
            {
              v173 = 2 * ((v169 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v171 + 8 * v173 + 8) & 0x1000) == 0 )
              {
                v174 = WdLogNewEntry5_WdAssertion(v172);
                *(_QWORD *)(v174 + 24) = 193LL;
                WdLogEvent5_WdAssertion(v174);
              }
              *(_DWORD *)(*(_QWORD *)(v168 + 208) + 8 * v173 + 8) &= ~0x1000u;
            }
            if ( v170 < *(_DWORD *)(v168 + 224) )
              *(_DWORD *)(*(_QWORD *)(v168 + 208) + 16LL * v170 + 8) &= ~0x2000u;
          }
          *(_QWORD *)(v168 + 192) = 0LL;
          ExReleasePushLockExclusiveEx(v168 + 184, 0LL);
          KeLeaveCriticalRegion();
          ++v167;
          v59 = (struct DXGALLOCATION *)*((_QWORD *)v199 + 8);
          v199 = v59;
        }
        while ( v167 < a2->NumAllocations );
        v43 = v210;
        LODWORD(v25) = v198;
      }
    }
    if ( v197[0] )
      DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)this + 5), v43);
  }
  v193 = v205;
  if ( a2->NumAllocations )
  {
    do
    {
      v194 = v193[v23];
      if ( v194 )
        ExFreePoolWithTag(v194, 0);
      ++v23;
    }
    while ( v23 < a2->NumAllocations );
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( a2->NumAllocations > 5 )
  {
    operator delete(v203);
    operator delete(v209);
    operator delete(v211);
    operator delete(v193);
    operator delete(v206);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v225);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v224);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v216);
  return (unsigned int)v25;
}

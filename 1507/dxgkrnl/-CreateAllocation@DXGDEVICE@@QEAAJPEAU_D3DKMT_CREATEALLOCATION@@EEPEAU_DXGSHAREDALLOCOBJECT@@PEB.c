/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B52C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     DxgkCreateAllocation @ 0x1C00A2D80 (DxgkCreateAllocation.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00048F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000F470 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0010DE8 (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C001C24C (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001C5D4 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001C6F0 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C007B14C (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C007B1F4 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C007C030 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C007F320 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXH@Z @ 0x1C007F690 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C007FD00 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0080050 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00800E0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00B7B74 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C012D0CC (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C01369A4 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
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
  char v11; // bl
  char v12; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 Flags; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v22; // rax
  UINT v23; // r14d
  unsigned __int64 NumAllocations; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v25; // r15
  int v26; // ebx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  void **v32; // r12
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  void **v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  UINT v42; // ecx
  struct DXGALLOCATION *v43; // r12
  __int64 v44; // r13
  size_t v45; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  char *v47; // rdx
  __int64 v48; // rcx
  __int64 VidPnSourceId; // r8
  __int64 v50; // r9
  unsigned int v51; // ebx
  __int64 v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  UINT Value; // eax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  UINT v59; // eax
  __int64 v60; // rbx
  struct _D3DDDI_ALLOCATIONINFO2 *v61; // r15
  unsigned int PrivateDriverDataSize; // eax
  __int64 v63; // rax
  SIZE_T v64; // rdx
  bool v65; // zf
  char *PoolWithTag; // rax
  __int64 v67; // rbx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  char *v70; // r9
  size_t v71; // r8
  char *pPrivateDriverData; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  void *v76; // r9
  size_t v77; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v79; // rcx
  struct DXGRESOURCE *v80; // rbx
  _QWORD *v81; // rax
  int v82; // r13d
  unsigned __int64 v83; // r15
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  struct DXGRESOURCE *v90; // rbx
  __int64 i; // rcx
  unsigned __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  void *v97; // r12
  _QWORD *v98; // rax
  void *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  struct DXGALLOCATION *v103; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v104; // eax
  _DWORD *v105; // r15
  __int64 v106; // rax
  __int64 v107; // rax
  struct _DXGK_ALLOCATIONINFO *v108; // r15
  char v109; // cl
  struct _DXGK_ALLOCATIONINFO *v110; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v111; // r15
  struct _DXGK_ALLOCATIONINFO *v112; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v113; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v114; // eax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // r15
  int v123; // ecx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  struct DXGGLOBAL *Global; // rax
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  D3DKMT_HANDLE v138; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v139; // eax
  D3DKMT_HANDLE v140; // ecx
  __int64 v141; // r15
  ULONG64 v142; // rdx
  __int64 v143; // rcx
  struct DXGALLOCATION *v144; // rbx
  struct COREDEVICEACCESS *v145; // r8
  unsigned int *v146; // r9
  int v147; // edx
  int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  __int64 v153; // r8
  struct DXGALLOCATION *j; // r9
  UINT v155; // r15d
  struct DXGALLOCATION *v156; // rbx
  struct DXGRESOURCE *v157; // rbx
  __int64 v158; // rcx
  SIZE_T PrivateRuntimeDataSize; // rdx
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  unsigned __int8 v164; // r15
  size_t v165; // r8
  char *pPrivateRuntimeData; // rdx
  void *v167; // r9
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rcx
  const void *v173; // rdx
  UINT v174; // r15d
  struct DXGALLOCATION *v175; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v176; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v177; // rbx
  SIZE_T v178; // rdx
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  void *v182; // rcx
  void *v183; // rdx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  int v188; // eax
  __int64 v189; // r13
  unsigned __int64 v190; // r15
  __int64 v191; // r9
  unsigned int v192; // ebx
  __int64 v193; // r8
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r15
  __int64 v197; // rax
  UINT v198; // r15d
  struct DXGALLOCATION *v199; // rbx
  __int64 v200; // rax
  int v201; // eax
  __int64 v202; // rax
  __int64 v203; // r8
  __int64 v204; // r9
  struct DXGRESOURCE *v205; // rbx
  struct DXGALLOCATION *v206; // r9
  _QWORD *v207; // rax
  void **v208; // rbx
  void *v209; // rcx
  int v210; // [rsp+20h] [rbp-6E8h]
  unsigned __int8 v211; // [rsp+70h] [rbp-698h]
  unsigned __int8 v212[7]; // [rsp+71h] [rbp-697h] BYREF
  __int64 v213; // [rsp+78h] [rbp-690h]
  char v214; // [rsp+80h] [rbp-688h]
  struct _D3DDDI_ALLOCATIONINFO2 *v215; // [rsp+88h] [rbp-680h]
  int v216; // [rsp+90h] [rbp-678h]
  UINT v217; // [rsp+94h] [rbp-674h]
  void **v218; // [rsp+98h] [rbp-670h]
  struct _D3DDDI_ALLOCATIONINFO2 *v219; // [rsp+A0h] [rbp-668h]
  struct DXGALLOCATION *v220; // [rsp+A8h] [rbp-660h] BYREF
  void **v221; // [rsp+B0h] [rbp-658h]
  struct _DXGK_ALLOCATIONINFO *v222; // [rsp+B8h] [rbp-650h]
  struct DXGRESOURCE *v223; // [rsp+C0h] [rbp-648h]
  int v224; // [rsp+C8h] [rbp-640h]
  struct _DXGK_OPENALLOCATIONINFO *v225; // [rsp+D0h] [rbp-638h]
  PVOID P; // [rsp+D8h] [rbp-630h]
  struct DXGRESOURCE *v227[5]; // [rsp+E0h] [rbp-628h] BYREF
  __int64 v228; // [rsp+108h] [rbp-600h]
  unsigned int *v229; // [rsp+110h] [rbp-5F8h]
  struct COREDEVICEACCESS *v230; // [rsp+118h] [rbp-5F0h]
  struct _EX_RUNDOWN_REF *v231; // [rsp+120h] [rbp-5E8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v232; // [rsp+128h] [rbp-5E0h] BYREF
  _BYTE v233[16]; // [rsp+158h] [rbp-5B0h] BYREF
  struct DXGALLOCATION *v234; // [rsp+168h] [rbp-5A0h] BYREF
  _BYTE v235[16]; // [rsp+170h] [rbp-598h] BYREF
  unsigned __int64 *v236; // [rsp+180h] [rbp-588h]
  struct DXGALLOCATION *k; // [rsp+188h] [rbp-580h]
  _BYTE v238[24]; // [rsp+190h] [rbp-578h] BYREF
  _BYTE v239[24]; // [rsp+1A8h] [rbp-560h] BYREF
  _QWORD v240[14]; // [rsp+1C0h] [rbp-548h] BYREF
  _BYTE v241[40]; // [rsp+230h] [rbp-4D8h] BYREF
  _BYTE v242[40]; // [rsp+258h] [rbp-4B0h] BYREF
  char v243; // [rsp+280h] [rbp-488h] BYREF
  char v244; // [rsp+320h] [rbp-3E8h] BYREF
  _BYTE v245[480]; // [rsp+4E0h] [rbp-228h] BYREF
  char v246; // [rsp+728h] [rbp+20h]

  v246 = a4;
  v11 = a4;
  v12 = a3;
  v211 = a3;
  v227[4] = this;
  v227[2] = (struct DXGRESOURCE *)a2;
  v228 = (__int64)a6;
  v230 = a7;
  v229 = a10;
  v236 = a11;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 128)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 3845LL;
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
    v17 = WdLogNewEntry5_WdAssertion(v15, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 3850LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( (*(_DWORD *)(v19 + 1380) & 0x10) == 0 )
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
  v218 = 0LL;
  P = 0LL;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v25 = (struct _D3DDDI_ALLOCATIONINFO2 *)v245;
    v215 = (struct _D3DDDI_ALLOCATIONINFO2 *)v245;
    v222 = (struct _DXGK_ALLOCATIONINFO *)&v244;
    v225 = (struct _DXGK_OPENALLOCATIONINFO *)&v243;
    v32 = (void **)v241;
    v221 = (void **)v241;
    v36 = (void **)v242;
    v218 = (void **)v242;
  }
  else
  {
    v25 = 0LL;
    v215 = 0LL;
    if ( 96 * NumAllocations > 0xFFFFFFFF )
    {
      v216 = -1;
      v26 = -1073741675;
    }
    else
    {
      v216 = 96 * NumAllocations;
      v26 = 0;
    }
    if ( v26 >= 0 )
    {
      v27 = 96 * NumAllocations;
      if ( !is_mul_ok(NumAllocations, 0x60uLL) )
        v27 = -1LL;
      v25 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v27, 0x4B677844u, PagedPool);
      v215 = v25;
    }
    v222 = 0LL;
    if ( v26 >= 0 )
    {
      v28 = a2->NumAllocations;
      if ( 88 * v28 > 0xFFFFFFFF )
      {
        v216 = -1;
        v26 = -1073741675;
      }
      else
      {
        v216 = 88 * v28;
        v26 = 0;
      }
      if ( v26 >= 0 )
      {
        v29 = 88 * v28;
        if ( !is_mul_ok(v28, 0x58uLL) )
          v29 = -1LL;
        v222 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v29, 0x4B677844u, PagedPool);
      }
    }
    v225 = 0LL;
    if ( v26 >= 0 )
    {
      v30 = a2->NumAllocations;
      if ( 32 * v30 > 0xFFFFFFFF )
      {
        v216 = -1;
        v26 = -1073741675;
      }
      else
      {
        v216 = 32 * v30;
        v26 = 0;
      }
      if ( v26 >= 0 )
      {
        v31 = 32 * v30;
        if ( !is_mul_ok(v30, 0x20uLL) )
          v31 = -1LL;
        v225 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v31, 0x4B677844u, PagedPool);
      }
    }
    v32 = 0LL;
    v221 = 0LL;
    if ( v26 < 0
      || ((v33 = a2->NumAllocations, 8 * v33 > 0xFFFFFFFF) ? (v216 = -1, v26 = -1073741675) : (v216 = 8 * v33, v26 = 0),
          v26 < 0) )
    {
      v36 = 0LL;
    }
    else
    {
      v34 = 8 * v33;
      if ( !is_mul_ok(v33, 8uLL) )
        v34 = -1LL;
      v32 = (void **)operator new[](v34, 0x4B677844u, PagedPool);
      v221 = v32;
      if ( v12 )
      {
        v35 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v35 = -1LL;
        v36 = (void **)operator new[](v35, 0x4B677844u, PagedPool);
        v218 = v36;
      }
      else
      {
        v36 = 0LL;
      }
    }
    if ( v26 < 0 || !v25 || !v222 || !v225 || !v32 || !v36 && v12 )
    {
      operator delete(v25);
      operator delete(v222);
      operator delete(v225);
      operator delete(v32);
      operator delete(v218);
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
  v217 = 0;
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
    v217 = v42;
  }
  v43 = 0LL;
  v220 = 0LL;
  LODWORD(v44) = 0;
  v213 = 0LL;
  v212[0] = 0;
  v223 = 0LL;
  v214 = 0;
  v227[0] = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v235);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v238, 0LL);
  if ( v211 )
  {
    v45 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v45) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v45 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v25, pAllocationInfo, v45);
  }
  else
  {
    memmove(v25, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v224 = -1;
  v51 = 0;
  if ( a2->NumAllocations )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
      {
        v48 = 96LL * v51;
        v47 = (char *)*(unsigned int *)((char *)&v25->Flags.Value + v48);
        if ( ((unsigned __int8)v47 & 1) != 0 )
        {
          VidPnSourceId = *(unsigned int *)((char *)&v25->VidPnSourceId + v48);
          v224 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v25->VidPnSourceId + v48);
          if ( !*((_QWORD *)this + 2338) )
          {
            v47 = (char *)((unsigned int)v47 & 0xFFFFFFFE);
            *(UINT *)((char *)&v25->Flags.Value + v48) = (unsigned int)v47;
          }
        }
        if ( (*(UINT *)((_BYTE *)&v25->Flags.Value + v48) & 2) != 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, VidPnSourceId, v50);
          v57[3] = this;
          v57[4] = -1073741811LL;
          goto LABEL_101;
        }
      }
      v219 = &v25[v51];
      if ( (v219->Flags.Value & 1) != 0 )
      {
        v52 = *((_QWORD *)this + 2338);
        if ( !v52 )
          goto LABEL_103;
        v53 = *(_QWORD *)(v52 + 1976);
        if ( !v53 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v53 + 16)) )
        {
          v54 = WdLogNewEntry5_WdAssertion(v53, v47, VidPnSourceId, v50);
          *(_QWORD *)(v54 + 24) = 4080LL;
          WdLogEvent5_WdAssertion(v54);
        }
        v48 = *(unsigned int *)(*(_QWORD *)(v52 + 1976) + 80LL);
        if ( (_DWORD)v48 != *((_DWORD *)this + 4678) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v48, v47, VidPnSourceId, v50);
          *(_QWORD *)(v55 + 24) = 4086LL;
          WdLogEvent5_WdAssertion(v55);
        }
        VidPnSourceId = v219->VidPnSourceId;
        if ( (_DWORD)VidPnSourceId != -2 && (unsigned int)VidPnSourceId >= *((_DWORD *)this + 4678) )
        {
LABEL_103:
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, VidPnSourceId, v50);
          v57[3] = this;
          v57[4] = v215[v51].VidPnSourceId;
          v57[5] = -1073741811LL;
          goto LABEL_101;
        }
        if ( !*((_DWORD *)this + 70)
          && !v246
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v52 + 1976), this, VidPnSourceId) )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, VidPnSourceId, v50);
          LODWORD(v44) = -1071775744;
          v213 = -1071775744LL;
          v58[3] = -1071775744LL;
          v58[4] = this;
          v58[5] = v215[v51].VidPnSourceId;
          v58[6] = v51;
          WdLogEvent5_WdWarning(v58);
          goto LABEL_295;
        }
        v25 = v215;
      }
      Value = v219->Flags.Value;
      if ( (Value & 2) != 0 && (Value & 1) == 0 )
        break;
      if ( ++v51 >= a2->NumAllocations )
        goto LABEL_107;
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, VidPnSourceId, v50);
    v57[3] = -1073741811LL;
    v57[4] = this;
    goto LABEL_101;
  }
LABEL_107:
  v59 = 0;
  while ( 1 )
  {
    v217 = v59;
    LODWORD(v219) = v59;
    if ( v59 >= a2->NumAllocations )
      break;
    v60 = v59;
    v61 = &v25[v59];
    PrivateDriverDataSize = v61->PrivateDriverDataSize;
    if ( PrivateDriverDataSize > 0x7FFFFFFF )
    {
      v63 = WdLogNewEntry5_WdWarning(v48, v47, VidPnSourceId, v50);
      *(_QWORD *)(v63 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v63);
      goto LABEL_295;
    }
    if ( v61->pPrivateDriverData && PrivateDriverDataSize )
    {
      if ( v211 )
      {
        v65 = 2 * PrivateDriverDataSize == 0;
        v64 = 2 * PrivateDriverDataSize;
      }
      else
      {
        v64 = v61->PrivateDriverDataSize;
        v65 = PrivateDriverDataSize == 0;
      }
      if ( v65 )
        v64 = 1LL;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v64, 0x4B677844u);
      v67 = v60;
      v48 = (__int64)&v221[v67];
      v221[v67] = PoolWithTag;
      v47 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v44) = -1073741801;
        v213 = 3221225495LL;
        v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, 0LL, VidPnSourceId, v50);
        v68[3] = this;
        v69 = a2->NumAllocations;
LABEL_120:
        v68[4] = v69;
        v68[5] = -1073741801LL;
        goto LABEL_121;
      }
      if ( v211 )
      {
        v70 = &PoolWithTag[v61->PrivateDriverDataSize];
        v218[v67] = v70;
        v71 = v61->PrivateDriverDataSize;
        pPrivateDriverData = (char *)v61->pPrivateDriverData;
        if ( &pPrivateDriverData[v71] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v71] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v70, pPrivateDriverData, v71);
      }
    }
    else
    {
      v221[v60] = 0LL;
      if ( v211 )
        v218[v60] = 0LL;
    }
    v59 = (_DWORD)v219 + 1;
    v25 = v215;
  }
  if ( v211 && a2->pStandardAllocation )
  {
    v76 = operator new[](a2->PrivateDriverDataSize, 0x4B677844u, PagedPool);
    P = v76;
    if ( !v76 )
    {
      LODWORD(v44) = -1073741801;
      v213 = 3221225495LL;
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v73, v75, 0LL);
      v68[3] = this;
      v69 = a2->PrivateDriverDataSize;
      goto LABEL_120;
    }
    v77 = a2->PrivateDriverDataSize;
    pStandardAllocation = a2->pStandardAllocation;
    if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v77) < pStandardAllocation
      || (unsigned __int64)pStandardAllocation + v77 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v76, pStandardAllocation, v77);
  }
  LODWORD(v44) = DXGDEVICE::OpenResourceObject(
                   this,
                   a2,
                   v25,
                   v246,
                   a9,
                   a5,
                   (struct DXGRESOURCEREFERENCE *)v227,
                   v212,
                   (struct DXGAUTOMUTEX *)v235,
                   (struct DXGAUTOPUSHLOCK *)v238);
  v213 = (unsigned int)v44;
  if ( (int)v44 < 0 )
    goto LABEL_295;
  v80 = v227[0];
  v223 = v227[0];
  if ( v227[0] && (*((_DWORD *)v227[0] + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdError(v79);
    v81[3] = this;
    v81[4] = v80;
    v81[5] = -1073741811LL;
    WdLogEvent5_WdError(v81);
    goto LABEL_102;
  }
  v82 = v212[0];
  v83 = a2->NumAllocations;
  v84 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v84 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v84 + 128)) )
  {
    v89 = WdLogNewEntry5_WdAssertion(v86, v85, v87, v88);
    *(_QWORD *)(v89 + 24) = 3770LL;
    WdLogEvent5_WdAssertion(v89);
  }
  v90 = v227[0];
  if ( v227[0] )
  {
    if ( !v82 )
    {
      for ( i = *((_QWORD *)v227[0] + 3); i; v83 = (unsigned int)(v83 + 1) )
        i = *(_QWORD *)(i + 64);
    }
    if ( (unsigned int)v83 > 0x10 )
    {
      v92 = 8 * v83;
      if ( !is_mul_ok(v83, 8uLL) )
        v92 = -1LL;
      v97 = operator new[](v92, 0x4B677844u, PagedPool);
      if ( !v97 )
      {
        v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v93, v95, v96);
        v98[3] = this;
        v98[4] = v83;
        v98[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v98);
        LODWORD(v44) = -1073741801;
        v213 = 3221225495LL;
        v43 = v220;
        goto LABEL_295;
      }
      if ( !v82 )
      {
        v99 = (void *)*((_QWORD *)v90 + 8);
        if ( v99 )
          operator delete(v99);
      }
      *((_QWORD *)v90 + 8) = v97;
    }
  }
  LODWORD(v44) = DXGDEVICE::CreateAllocationObjects(this, a2->NumAllocations, &v220, v90, &v234);
  v213 = (unsigned int)v44;
  v43 = v220;
  if ( (int)v44 >= 0 )
  {
    v103 = v234;
    if ( v234 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice((struct _KTHREAD **)this, v90, v220, v234);
      v214 = 1;
    }
    v104 = a2->Flags;
    if ( (*(_WORD *)&v104 & 0x800) != 0 )
    {
      if ( v224 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v90 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v90 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v90 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v90 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_174;
    }
    if ( (*(_WORD *)&v104 & 0x1000) != 0 )
    {
      v105 = (_DWORD *)v228;
      if ( (*(_DWORD *)v228 & 0x80u) != 0 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v101, v100, v102, v103);
        *(_QWORD *)(v106 + 24) = 4337LL;
        WdLogEvent5_WdAssertion(v106);
      }
      if ( (*v105 & 0x100) == 0 )
        goto LABEL_174;
    }
    else
    {
      if ( !v90 )
        goto LABEL_174;
      v107 = *((_QWORD *)v90 + 7);
      if ( !v107 || (*(_BYTE *)(v107 + 12) & 0x60) != 0x60 )
        goto LABEL_174;
    }
    *((_DWORD *)v90 + 1) |= 8u;
LABEL_174:
    v108 = v222;
    memset(v222, 0, 88LL * a2->NumAllocations);
    v109 = v246;
    if ( v246 )
    {
      v111 = v215;
    }
    else
    {
      v110 = v108;
      v111 = v215;
      LODWORD(v44) = DXGDEVICE::CreateDriverAllocations(this, a2, v215, v110, v43, v90, v221, v218, P, v211);
      v213 = (unsigned int)v44;
      v109 = 0;
    }
    if ( (int)v44 < 0 )
      goto LABEL_295;
    LODWORD(v44) = DXGDEVICE::OpenAllocations(this, a2, v111, v43, v225, v221, v218, P, v211, v109, a8, v229, v236);
    v213 = (unsigned int)v44;
    if ( (int)v44 < 0 )
      goto LABEL_295;
    v112 = v222;
    if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
      v222->Flags.Value |= 0x4000008u;
    v113 = a2->Flags;
    if ( (*(_WORD *)&v113 & 0x100) != 0 )
    {
      v112->Flags.Value = v112->Flags.Value & 0xFEFFFFFB | 0x1000000;
    }
    else if ( (*(_WORD *)&v113 & 0x200) != 0 )
    {
      v112->Flags.Value |= 0x800004u;
    }
    LODWORD(v44) = DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
                     this,
                     (__int64)a2,
                     (__int64)v111,
                     (__int64)v112,
                     (__int64)v43,
                     (unsigned int *)v228,
                     v246,
                     v230);
    v213 = (unsigned int)v44;
    if ( (int)v44 < 0 )
      goto LABEL_295;
    v114 = a2->Flags;
    if ( (*(_WORD *)&v114 & 0x800) != 0 )
    {
      memset(&v232, 0, sizeof(v232));
      v232.hAllocation = *(HANDLE *)(*((_QWORD *)v43 + 6) + 16LL);
      v115 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v232);
      v44 = v115;
      v213 = v115;
      if ( v115 < 0 )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v117, v116, v118, v119);
        v68[3] = v44;
        v68[4] = this;
        v68[5] = *((unsigned int *)v43 + 4);
        v68[6] = v43;
        goto LABEL_121;
      }
      if ( v232.Format == D3DDDIFMT_UNKNOWN && v232.Height != 1 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v117, v116, v118, v119);
        v57[3] = -1073741811LL;
        v57[4] = this;
        v57[5] = v232.Height;
LABEL_101:
        WdLogEvent5_WdWarning(v57);
LABEL_102:
        LODWORD(v44) = -1073741811;
        v213 = 3221225485LL;
        goto LABEL_295;
      }
      v120 = *(_QWORD *)(*((_QWORD *)v43 + 5) + 56LL);
      if ( (*(_DWORD *)(v120 + 12) & 0x20) == 0 )
      {
        v121 = WdLogNewEntry5_WdAssertion(v120, v116, v118, v119);
        *(_QWORD *)(v121 + 24) = 4458LL;
        WdLogEvent5_WdAssertion(v121);
      }
      v122 = *(_QWORD *)(*((_QWORD *)v43 + 5) + 56LL);
      *(_DWORD *)(v122 + 168) = v232.Width;
      *(_DWORD *)(v122 + 172) = v232.Height;
      *(_DWORD *)(v122 + 176) = v232.Format;
      *(_QWORD *)(v122 + 184) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                                  *((struct _VIDMM_MULTI_ALLOC **)v43 + 3));
      *(_QWORD *)(v122 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 400LL)
                                                                                      + 8LL)
                                                                          + 736LL))(
                                  *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
                                  *((_QWORD *)v43 + 3));
      v123 = v224;
      *(_DWORD *)(v122 + 200) = v224;
      if ( v123 != -1 )
      {
        *(_DWORD *)(v122 + 12) |= 0x40u;
        *(_DWORD *)(v122 + 12) ^= (*(_DWORD *)(v122 + 12) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
    }
    else if ( (*(_WORD *)&v114 & 0x1000) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL)
                                                     + 744LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        *((_QWORD *)v43 + 3),
        *(_QWORD *)(v228 + 336));
    }
    if ( v212[0] )
    {
      if ( v90 )
      {
        if ( (*((_DWORD *)v90 + 1) & 1) != 0 )
        {
          v124 = *((_QWORD *)v90 + 7);
          if ( !*(_DWORD *)(v124 + 24) && (*(_DWORD *)(v124 + 12) & 8) == 0 )
          {
            DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v233);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v233);
            if ( (*(_BYTE *)&a2->Flags & 2) == 0 )
            {
              v129 = WdLogNewEntry5_WdAssertion(v126, v125, v127, v128);
              *(_QWORD *)(v129 + 24) = 4503LL;
              WdLogEvent5_WdAssertion(v129);
            }
            Global = DXGGLOBAL::GetGlobal(v126, v125, v127, v128);
            v131 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v90 + 7), 2u);
            v135 = *((_QWORD *)v90 + 7);
            *(_DWORD *)(v135 + 24) = v131;
            if ( !*(_DWORD *)(*((_QWORD *)v90 + 7) + 24LL) )
            {
              v136 = WdLogNewEntry5_WdWarning(v135, v132, v133, v134);
              *(_QWORD *)(v136 + 24) = this;
              *(_QWORD *)(v136 + 32) = -1073741801LL;
              WdLogEvent5_WdWarning(v136);
              LODWORD(v44) = -1073741801;
              v213 = 3221225495LL;
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v233);
              goto LABEL_295;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v233);
          }
        }
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v239,
        (struct _KTHREAD **)this + 20);
      v137 = *((_QWORD *)this + 7);
      if ( v137 )
        *(_QWORD *)(v137 + 32) = v90;
      *((_QWORD *)v90 + 5) = *((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v90;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v239);
    }
    v138 = 0;
    if ( v90 )
      v138 = *((_DWORD *)v90 + 4);
    a2->hResource = v138;
    v139 = a2->Flags;
    if ( ((*(_BYTE *)&v139 & 2) != 0 || v246) && (*(_BYTE *)&v139 & 0x40) == 0 )
      v140 = *(_DWORD *)(*((_QWORD *)v90 + 7) + 24LL);
    else
      v140 = 0;
    a2->hGlobalShare = v140;
    v141 = *((_QWORD *)this + 2);
    v142 = *(_QWORD *)(v141 + 16);
    v143 = *(_QWORD *)(*(_QWORD *)(v142 + 1896) + 24LL);
    if ( v143 && (*(_BYTE *)(v143 + 72) || *(_BYTE *)(v143 + 73)) && !*(_BYTE *)(v142 + 1937) )
    {
      if ( v228 )
      {
        if ( (*(_DWORD *)v228 & 0x200) == 0 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this + 36) + 352LL) )
          {
            memset(v240, 0, 0x68uLL);
            v240[7] |= 1uLL;
            LODWORD(v219) = 0;
            v144 = v43;
            if ( a2->NumAllocations )
            {
              v145 = (struct COREDEVICEACCESS *)(v141 + 408);
              v230 = (struct COREDEVICEACCESS *)(v141 + 408);
              v146 = (unsigned int *)(v141 + 400);
              v229 = (unsigned int *)(v141 + 400);
              do
              {
                v147 = (*((_DWORD *)v144 + 18) >> 9) & 0x3F;
                if ( *(_DWORD *)(v228 + 16) == 4
                  && *(_DWORD *)(*(_QWORD *)(v228 + 24) + 12LL) != 1
                  && *(_BYTE *)(*(_QWORD *)(v141 + 16) + 1915LL) )
                {
                  v147 = -1;
                }
                LOBYTE(v210) = 0;
                v148 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*(_QWORD *)v146 + 8LL)
                                                                                             + 776LL))(
                         *(_QWORD *)v145,
                         0LL,
                         *((_QWORD *)v144 + 3),
                         v240,
                         v210,
                         v147);
                v44 = v148;
                v213 = v148;
                if ( v148 < 0 )
                {
                  v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v149, v142, v150, v151);
                  v68[3] = v44;
                  goto LABEL_121;
                }
                v141 = *((_QWORD *)this + 2);
                v152 = v240[1];
                if ( *(_BYTE *)(*(_QWORD *)(v141 + 16) + 1915LL) )
                  v152 = v240[11];
                v240[1] = v152;
                v240[11] = 0LL;
                LODWORD(v219) = (_DWORD)v219 + 1;
                v144 = (struct DXGALLOCATION *)*((_QWORD *)v144 + 8);
                v145 = v230;
                v146 = v229;
              }
              while ( (unsigned int)v219 < a2->NumAllocations );
            }
          }
        }
      }
    }
    if ( v211 )
    {
      v153 = 0LL;
      v217 = 0;
      j = v43;
      while ( (unsigned int)v153 < a2->NumAllocations )
      {
        v142 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v153;
        if ( v142 >= MmUserProbeAddress )
          v142 = MmUserProbeAddress;
        *(_DWORD *)v142 = *((_DWORD *)j + 4);
        v153 = (unsigned int)(v153 + 1);
        v217 = v153;
        j = (struct DXGALLOCATION *)*((_QWORD *)j + 8);
      }
      if ( (int)v44 < 0 )
        goto LABEL_295;
    }
    else
    {
      v153 = 0LL;
      for ( j = v43; (unsigned int)v153 < a2->NumAllocations; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      {
        v142 = 96LL * (unsigned int)v153;
        *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v142) = *((_DWORD *)j + 4);
        v153 = (unsigned int)(v153 + 1);
      }
    }
    v155 = 0;
    v217 = 0;
    v156 = v43;
    for ( k = v43; v155 < a2->NumAllocations; k = v156 )
    {
      v142 = *(unsigned int *)(*((_QWORD *)v156 + 6) + 4LL);
      if ( (v142 & 1) != 0 )
      {
        LODWORD(v44) = DXGDEVICE::AddPrimaryAllocation(this, v156);
        v213 = (unsigned int)v44;
        if ( (int)v44 < 0 )
          goto LABEL_295;
      }
      else if ( (v142 & 2) != 0 )
      {
        DXGDEVICE::SetDisplayedPrimary(this, ((unsigned int)v142 >> 6) & 0xF, v156, 0);
      }
      v217 = ++v155;
      v156 = (struct DXGALLOCATION *)*((_QWORD *)v156 + 8);
    }
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v157 = v223;
      if ( a2->pPrivateRuntimeData )
      {
        v158 = *((_QWORD *)v223 + 7);
        if ( *(_QWORD *)(v158 + 88) )
        {
          if ( *(_DWORD *)(v158 + 96) != a2->PrivateRuntimeDataSize )
          {
            LODWORD(v44) = -1073741811;
            v213 = 3221225485LL;
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v158, v142, v153, j);
            v68[3] = this;
            v68[4] = a2->PrivateRuntimeDataSize;
            v68[5] = *(unsigned int *)(*((_QWORD *)v157 + 7) + 96LL);
            goto LABEL_121;
          }
        }
        else
        {
          PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
          if ( !a2->PrivateRuntimeDataSize )
            PrivateRuntimeDataSize = 1LL;
          *(_QWORD *)(*((_QWORD *)v157 + 7) + 88LL) = ExAllocatePoolWithTag(
                                                        PagedPool,
                                                        PrivateRuntimeDataSize,
                                                        0x4B677844u);
          v163 = *((_QWORD *)v157 + 7);
          if ( !*(_QWORD *)(v163 + 88) )
          {
            LODWORD(v44) = -1073741801;
            v213 = 3221225495LL;
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v163, v160, v161, v162);
            v68[3] = this;
            v69 = a2->PrivateRuntimeDataSize;
            goto LABEL_120;
          }
          *(_DWORD *)(v163 + 96) = a2->PrivateRuntimeDataSize;
        }
        v164 = v211;
        if ( v211 )
        {
          v165 = a2->PrivateRuntimeDataSize;
          pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
          v167 = *(void **)(*((_QWORD *)v157 + 7) + 88LL);
          if ( &pPrivateRuntimeData[v165] < pPrivateRuntimeData
            || (unsigned __int64)&pPrivateRuntimeData[v165] > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v167, pPrivateRuntimeData, v165);
        }
        else
        {
          memmove(*(void **)(*((_QWORD *)v157 + 7) + 88LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
        }
      }
      else
      {
        v164 = v211;
      }
      if ( a2->pStandardAllocation )
      {
        v168 = *((_QWORD *)v157 + 7);
        if ( *(_QWORD *)(v168 + 104) )
        {
          if ( *(_DWORD *)(v168 + 112) != a2->PrivateDriverDataSize )
          {
            LODWORD(v44) = -1073741811;
            v213 = 3221225485LL;
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v168, v142, v153, j);
            v68[3] = this;
            v68[4] = a2->PrivateDriverDataSize;
            v68[5] = *(unsigned int *)(*((_QWORD *)v157 + 7) + 112LL);
            v68[6] = 4798LL;
            goto LABEL_121;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)v157 + 7) + 104LL) = operator new[](a2->PrivateDriverDataSize, 0x4B677844u, PagedPool);
          v172 = *((_QWORD *)v157 + 7);
          if ( !*(_QWORD *)(v172 + 104) )
          {
            LODWORD(v44) = -1073741801;
            v213 = 3221225495LL;
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v172, v169, v170, v171);
            v68[3] = this;
            v69 = a2->PrivateDriverDataSize;
            goto LABEL_120;
          }
          *(_DWORD *)(v172 + 112) = a2->PrivateDriverDataSize;
        }
        v173 = P;
        if ( !v164 )
          v173 = a2->pStandardAllocation;
        memmove(*(void **)(*((_QWORD *)v157 + 7) + 104LL), v173, a2->PrivateDriverDataSize);
      }
      v174 = 0;
      v175 = v43;
      if ( !a2->NumAllocations )
      {
LABEL_294:
        LODWORD(v44) = v213;
        goto LABEL_295;
      }
      v176 = v215;
      while ( 1 )
      {
        v177 = &v176[v174];
        if ( v177->pPrivateDriverData )
        {
          v178 = v177->PrivateDriverDataSize;
          if ( !v177->PrivateDriverDataSize )
            v178 = 1LL;
          *(_QWORD *)(*((_QWORD *)v175 + 6) + 32LL) = ExAllocatePoolWithTag(PagedPool, v178, 0x4B677844u);
          v182 = *(void **)(*((_QWORD *)v175 + 6) + 32LL);
          if ( !v182 )
          {
            LODWORD(v44) = -1073741801;
            v213 = 3221225495LL;
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v179, v180, v181);
            v68[3] = this;
            v68[4] = v174 + 1;
            v68[5] = v215[v174].PrivateDriverDataSize;
            v68[6] = -1073741801LL;
LABEL_121:
            WdLogEvent5_WdWarning(v68);
            break;
          }
          if ( v211 )
            v183 = v218[v174];
          else
            v183 = v177->pPrivateDriverData;
          memmove(v182, v183, v177->PrivateDriverDataSize);
          *(_DWORD *)(*((_QWORD *)v175 + 6) + 40LL) = v177->PrivateDriverDataSize;
          v176 = v215;
        }
        ++v174;
        v175 = (struct DXGALLOCATION *)*((_QWORD *)v175 + 8);
        if ( v174 >= a2->NumAllocations )
          goto LABEL_294;
      }
    }
  }
LABEL_295:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v235);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v238);
  if ( (int)v44 < 0 )
  {
    if ( v43 )
    {
      v198 = 0;
      v199 = v43;
      if ( a2->NumAllocations )
      {
        do
        {
          v200 = *((_QWORD *)v199 + 6);
          if ( *(_QWORD *)(v200 + 8) && !v246 )
          {
            if ( (v201 = *(_DWORD *)(v200 + 4), (v201 & 1) != 0) && !*((_DWORD *)this + 70) || (v201 & 2) != 0 )
            {
              if ( (v201 & 0x10) != 0 )
              {
                v202 = WdLogNewEntry5_WdAssertion(v185, v184, v186, v187);
                *(_QWORD *)(v202 + 24) = 4901LL;
                WdLogEvent5_WdAssertion(v202);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v199 + 6) + 8LL));
              *(_DWORD *)(*((_QWORD *)v199 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v198;
          v199 = (struct DXGALLOCATION *)*((_QWORD *)v199 + 8);
        }
        while ( v198 < a2->NumAllocations );
        LODWORD(v44) = v213;
      }
    }
    if ( v212[0] )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v231, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(v227, &v231);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v231);
      DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v223, v203, v204);
      DXGDEVICE::DestroyResource(this, v223, 0LL, 0);
    }
    else if ( v43 )
    {
      v205 = v223;
      if ( v214 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(this, v223, v43, a2->NumAllocations);
      if ( v205 )
      {
        DXGDEVICE::DestroyAllocations(this, v205, 0, v43, 0LL, 0);
      }
      else
      {
        do
        {
          v206 = v43;
          v207 = (_QWORD *)((char *)v43 + 64);
          v43 = (struct DXGALLOCATION *)*((_QWORD *)v43 + 8);
          *((_QWORD *)v206 + 7) = 0LL;
          *v207 = 0LL;
          DXGDEVICE::DestroyAllocations(this, 0LL, 0, v206, 0LL, 0);
        }
        while ( v43 );
      }
    }
  }
  else
  {
    LOBYTE(v188) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
    if ( v188 )
    {
      if ( v43 )
      {
        LODWORD(v219) = 0;
        if ( a2->NumAllocations )
        {
          do
          {
            v189 = *((_QWORD *)this + 5);
            v190 = *((unsigned int *)v43 + 4);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v189 + 192));
            v192 = ((unsigned int)v190 >> 6) & 0xFFFFFF;
            if ( v192 < *(_DWORD *)(v189 + 232) )
            {
              v193 = *(_QWORD *)(v189 + 216);
              v194 = *(unsigned int *)(v193 + 16LL * v192 + 8);
              v195 = ((unsigned int)v190 >> 26) & 0x30;
              if ( (((unsigned int)v190 >> 26) & 0x30) == (*(_BYTE *)(v193 + 16LL * v192 + 8) & 0x30)
                && (v194 & 0xF) != 0 )
              {
                v196 = 2 * ((v190 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v193 + 8 * v196 + 8) & 0x1000) == 0 )
                {
                  v197 = WdLogNewEntry5_WdAssertion(v195, v194, v193, v191);
                  *(_QWORD *)(v197 + 24) = 194LL;
                  WdLogEvent5_WdAssertion(v197);
                }
                *(_DWORD *)(*(_QWORD *)(v189 + 216) + 8 * v196 + 8) &= ~0x1000u;
              }
              if ( v192 < *(_DWORD *)(v189 + 232) )
                *(_DWORD *)(*(_QWORD *)(v189 + 216) + 16LL * v192 + 8) &= ~0x2000u;
            }
            *(_QWORD *)(v189 + 200) = 0LL;
            ExReleasePushLockExclusiveEx(v189 + 192, 0LL);
            KeLeaveCriticalRegion();
            LODWORD(v219) = (_DWORD)v219 + 1;
            v43 = (struct DXGALLOCATION *)*((_QWORD *)v43 + 8);
          }
          while ( (unsigned int)v219 < a2->NumAllocations );
          LODWORD(v44) = v213;
        }
      }
    }
    if ( v212[0] )
      DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)this + 5), v223);
  }
  v208 = v221;
  if ( a2->NumAllocations )
  {
    do
    {
      v209 = v208[v23];
      if ( v209 )
        ExFreePoolWithTag(v209, 0);
      ++v23;
    }
    while ( v23 < a2->NumAllocations );
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( a2->NumAllocations > 5 )
  {
    operator delete(v215);
    operator delete(v222);
    operator delete(v225);
    operator delete(v208);
    operator delete(v218);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v238);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v235);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v227);
  return (unsigned int)v44;
}

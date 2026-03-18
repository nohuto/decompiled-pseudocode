/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170448 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00114E8 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001C8F0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A80F0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B3F40 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C015DE20 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01724F4 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        unsigned int a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DXGKARG_PRESENT *a8,
        struct _D3DKMT_PRESENT_RGNS *a9,
        struct _VIDMM_DMA_BUFFER *a10,
        struct VIDSCH_SUBMIT_DATA_BASE *a11,
        enum _D3DDDIFORMAT a12,
        struct _D3DKMT_PRESENT *a13)
{
  struct _DXGKARG_PRESENT *v14; // rcx
  __int64 pPatchLocationListOut; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v19; // rcx
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v22; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v24; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rax
  struct _KTHREAD *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rbx
  _QWORD *v35; // rax
  DXGALLOCATIONREFERENCE *v36; // rax
  __int64 v37; // rcx
  struct _KTHREAD *v38; // r14
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rax
  struct _KTHREAD *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ebx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rbx
  _QWORD *v52; // rax
  DXGCONTEXT *v53; // r14
  struct CRefCountedBuffer *v54; // rbx
  struct _D3DKMT_PRESENT *v55; // rdx
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rax
  char v59; // r14
  unsigned int v60; // r9d
  DXGCONTEXT *v61; // r15
  int v62; // r8d
  int v63; // eax
  __int64 v64; // rax
  UINT v65; // eax
  struct _DXGKARG_PRESENT *v66; // rcx
  RECT *v67; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  unsigned int v70; // r13d
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // ebx
  struct _VIDMM_DMA_BUFFER *v74; // rax
  __int64 v75; // r14
  D3DKMT_HANDLE *v76; // rdx
  DXGALLOCATIONREFERENCE *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  struct _VIDMM_DMA_BUFFER *v80; // r9
  struct DXGCONTEXT **v81; // r15
  __int64 v82; // rcx
  _QWORD *v83; // rax
  unsigned int *v84; // rdx
  DXGALLOCATIONREFERENCE *v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rax
  struct DXGCONTEXT **v88; // r14
  __int64 v89; // rcx
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  _QWORD *v93; // r10
  _BYTE *PoolWithTag; // r10
  struct DXGCONTEXT **v95; // rdx
  _QWORD *v96; // r8
  __int64 v97; // r9
  struct DXGALLOCATION *v98; // r13
  __int64 v99; // rax
  struct _DXGKARG_PRESENT *v100; // rax
  __int64 v101; // rax
  unsigned int v102; // edi
  int v104; // r13d
  _BYTE *v105; // rax
  struct VIDMM_ALLOC **v106; // r14
  struct VIDMM_ALLOC **v107; // r9
  char *v108; // rbx
  struct DXGALLOCATION *v109; // r9
  __int64 v110; // rax
  int v111; // eax
  char *v112; // rdx
  char *v113; // r8
  char *v114; // rcx
  struct _D3DKMT_PRESENT *v115; // rcx
  __int64 v116; // rax
  BOOL v117; // eax
  unsigned int v118; // r15d
  DXGCONTEXT *v119; // r13
  unsigned int v120; // esi
  struct _KTHREAD *v121; // rcx
  __int64 v122; // rax
  struct DXGALLOCATION *v123; // rcx
  __int64 v124; // rax
  struct _KTHREAD *v125; // rdi
  __int64 v126; // rax
  int v127; // ebx
  __int64 v128; // rbx
  __int64 *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  struct _KTHREAD *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  int v136; // ebx
  __int64 v137; // r8
  __int64 v138; // rbx
  __int64 *v139; // rax
  __int64 v140; // rbx
  _QWORD *v141; // rax
  struct DXGALLOCATION *v142; // rcx
  __int64 v143; // rax
  struct _KTHREAD *v144; // rdi
  __int64 v145; // rax
  int v146; // ebx
  __int64 v147; // rbx
  __int64 *v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  struct _KTHREAD *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  int v155; // ebx
  __int64 v156; // r8
  __int64 v157; // rbx
  __int64 *v158; // rax
  __int64 v159; // rbx
  _QWORD *v160; // rax
  int v161; // [rsp+40h] [rbp-368h]
  struct _VIDMM_DMA_BUFFER *v162; // [rsp+48h] [rbp-360h]
  struct DXGALLOCATION *v164; // [rsp+58h] [rbp-350h] BYREF
  DXGCONTEXT *v165; // [rsp+60h] [rbp-348h]
  struct DXGALLOCATION *v166; // [rsp+68h] [rbp-340h] BYREF
  int v167; // [rsp+70h] [rbp-338h] BYREF
  struct _DXGKARG_PRESENT *v168; // [rsp+78h] [rbp-330h]
  __int64 v169; // [rsp+80h] [rbp-328h]
  struct _D3DKMT_PRESENT *v170; // [rsp+88h] [rbp-320h]
  __int64 v171; // [rsp+90h] [rbp-318h]
  unsigned int v172; // [rsp+98h] [rbp-310h]
  struct DXGALLOCATION *v173; // [rsp+A0h] [rbp-308h]
  int v174; // [rsp+A8h] [rbp-300h]
  unsigned int v175; // [rsp+ACh] [rbp-2FCh]
  unsigned int v176; // [rsp+B0h] [rbp-2F8h]
  PVOID P; // [rsp+B8h] [rbp-2F0h]
  struct CRefCountedBuffer *v178; // [rsp+C0h] [rbp-2E8h] BYREF
  signed __int64 v179; // [rsp+C8h] [rbp-2E0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D0h] [rbp-2D8h] BYREF
  struct _D3DKMT_PRESENT *v181; // [rsp+D8h] [rbp-2D0h]
  int v182; // [rsp+E0h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v183; // [rsp+E8h] [rbp-2C0h] BYREF
  struct _EX_RUNDOWN_REF *v184; // [rsp+F0h] [rbp-2B8h] BYREF
  struct _EX_RUNDOWN_REF *v185; // [rsp+F8h] [rbp-2B0h] BYREF
  struct _EX_RUNDOWN_REF *v186[2]; // [rsp+100h] [rbp-2A8h] BYREF
  _BYTE *v187; // [rsp+110h] [rbp-298h] BYREF
  _BYTE v188[64]; // [rsp+118h] [rbp-290h] BYREF
  unsigned int v189; // [rsp+158h] [rbp-250h]
  __int64 v190; // [rsp+160h] [rbp-248h]
  __int64 v191; // [rsp+168h] [rbp-240h]
  __int64 v192; // [rsp+170h] [rbp-238h]
  __int64 v193; // [rsp+178h] [rbp-230h]
  __int64 v194; // [rsp+180h] [rbp-228h]
  __int64 v195; // [rsp+188h] [rbp-220h]
  __int64 v196; // [rsp+190h] [rbp-218h]
  __int64 v197; // [rsp+198h] [rbp-210h]
  __int64 v198; // [rsp+1A0h] [rbp-208h]
  __int64 v199; // [rsp+1A8h] [rbp-200h]
  __int64 v200; // [rsp+1B0h] [rbp-1F8h]
  __int64 v201; // [rsp+1B8h] [rbp-1F0h]
  _QWORD v202[12]; // [rsp+1C0h] [rbp-1E8h] BYREF
  _BYTE v203[320]; // [rsp+220h] [rbp-188h] BYREF

  v170 = a2;
  v165 = this;
  v186[1] = (struct _EX_RUNDOWN_REF *)this;
  v173 = a5;
  v176 = a6;
  v172 = a7;
  v168 = a8;
  v162 = a10;
  v181 = a13;
  v14 = (struct _DXGKARG_PRESENT *)*((_QWORD *)this + 2);
  pPatchLocationListOut = (__int64)v14->pPatchLocationListOut;
  v169 = pPatchLocationListOut;
  v171 = *(_QWORD *)(pPatchLocationListOut + 72);
  v16 = *((_QWORD *)v14->pDmaBufferPrivateData + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v17 + 24) = 5781LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v164 = 0LL;
  v166 = 0LL;
  if ( a6 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe(pPatchLocationListOut, (DXGALLOCATIONREFERENCE *)&v183, a6);
    DXGALLOCATIONREFERENCE::MoveAssign(&v164, AllocationSafe);
    v19 = v183;
    if ( v183 )
      ExReleaseRundownProtection(v183 + 11);
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v20 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v14 = (struct _DXGKARG_PRESENT *)*((unsigned int *)DXGGLOBAL::m_pGlobal + 191);
    if ( (_DWORD)v14 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v22 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v22 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v22);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v24 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v24 = *ThreadWin32Thread;
        if ( v24 )
          v26 = *(_QWORD *)(v24 + 80);
        else
          v26 = 0LL;
        if ( v26 )
        {
          v27 = KeGetCurrentThread();
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v14);
            *(_QWORD *)(v28 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v28);
          }
          v30 = PsGetCurrentProcessSessionId();
          if ( !v30 || (unsigned int)PsGetThreadSessionId(v27) != v30 )
            goto LABEL_28;
          v32 = 0LL;
          v33 = (__int64 *)PsGetThreadWin32Thread(v27);
          if ( v33 )
            v32 = *v33;
          if ( v32 )
            v34 = *(_QWORD *)(v32 + 80);
          else
LABEL_28:
            v34 = 0LL;
          if ( *(_DWORD *)(v34 + 136) )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v29, v31);
            v35[3] = 275LL;
            v35[4] = 25LL;
            v35[5] = *(int *)(v34 + 136);
            v35[6] = 0LL;
            v35[7] = 0LL;
            WdLogEvent5_WdCriticalError(v35);
          }
        }
      }
      pPatchLocationListOut = v169;
    }
  }
  if ( v172 )
  {
    v36 = DXGPROCESS::GetAllocationSafe(pPatchLocationListOut, (DXGALLOCATIONREFERENCE *)&v184, v172);
    DXGALLOCATIONREFERENCE::MoveAssign(&v166, v36);
    v37 = (__int64)v184;
    if ( v184 )
      ExReleaseRundownProtection(v184 + 11);
    v14 = (struct _DXGKARG_PRESENT *)*((unsigned int *)DXGGLOBAL::GetGlobal(v37) + 191);
    if ( (_DWORD)v14 )
    {
      v38 = KeGetCurrentThread();
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v39 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v39);
      }
      v40 = PsGetCurrentProcessSessionId();
      if ( v40 && (unsigned int)PsGetThreadSessionId(v38) == v40 )
      {
        v41 = 0LL;
        v42 = (__int64 *)PsGetThreadWin32Thread(v38);
        if ( v42 )
          v41 = *v42;
        if ( v41 )
          v43 = *(_QWORD *)(v41 + 80);
        else
          v43 = 0LL;
        if ( v43 )
        {
          v44 = KeGetCurrentThread();
          if ( !v44 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v14);
            *(_QWORD *)(v45 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v45);
          }
          v47 = PsGetCurrentProcessSessionId();
          if ( !v47 || (unsigned int)PsGetThreadSessionId(v44) != v47 )
            goto LABEL_54;
          v49 = 0LL;
          v50 = (__int64 *)PsGetThreadWin32Thread(v44);
          if ( v50 )
            v49 = *v50;
          if ( v49 )
            v51 = *(_QWORD *)(v49 + 80);
          else
LABEL_54:
            v51 = 0LL;
          if ( *(_DWORD *)(v51 + 136) )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v46, v48);
            v52[3] = 275LL;
            v52[4] = 25LL;
            v52[5] = *(int *)(v51 + 136);
            v52[6] = 0LL;
            v52[7] = 0LL;
            WdLogEvent5_WdCriticalError(v52);
          }
        }
      }
    }
  }
  v53 = v165;
  if ( *(_QWORD *)(*((_QWORD *)v165 + 2) + 2856LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 2) + 16LL) + 16LL)
    || (*(unsigned int (__fastcall **)(_QWORD))(v171 + 224))(0LL) )
  {
    *((_DWORD *)a11 + 29) = 0;
  }
  v54 = 0LL;
  v178 = 0LL;
  v55 = v170;
  if ( v170 )
  {
    v56 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL) + 16LL),
            v170,
            &v178);
    v57 = v56;
    if ( v56 < 0 )
    {
      v58 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v58 + 24) = v57;
      WdLogEvent5_WdError(v58);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v166);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v164);
      return (unsigned int)v57;
    }
    v54 = v178;
    v55 = v170;
  }
  P = v54;
  v59 = 0;
  if ( (*(int *)(v16 + 1792) >= 0x2000 || *(_BYTE *)(v16 + 2076)) && *(_DWORD *)(v16 + 1352) >= 0x5007u && v55 )
  {
    v59 = 1;
    if ( v54 )
    {
      v14 = v168;
      v168->PrivateDriverDataSize = v55->PrivateDriverDataSize;
      v14->pPrivateDriverData = (char *)v54 + 8;
    }
    *((_QWORD *)a11 + 3) = v54;
    goto LABEL_74;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v16) )
  {
LABEL_74:
    v60 = a3;
    goto LABEL_75;
  }
  v60 = a3;
  if ( a3 )
  {
    LODWORD(v57) = -1073741811;
    v161 = -1073741811;
    v61 = v165;
LABEL_190:
    v80 = v162;
    goto LABEL_191;
  }
LABEL_75:
  LODWORD(v171) = v60 + 1;
  v62 = *((_DWORD *)*a4 + 81);
  if ( v60 )
  {
    LODWORD(v55) = 1;
    while ( 1 )
    {
      v14 = (struct _DXGKARG_PRESENT *)a4[(unsigned int)v55];
      v63 = *(&v14[1].PrivateDriverDataSize + 1);
      if ( (v63 & v62) != 0 )
        break;
      v62 |= v63;
      v55 = (struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v55 + 1);
      if ( (int)v55 - 1 >= v60 )
        goto LABEL_82;
    }
    v64 = WdLogNewEntry5_WdError(v14);
    v61 = v165;
    goto LABEL_81;
  }
LABEL_82:
  *((_DWORD *)a11 + 34) = v62;
  v61 = v165;
  if ( a9 )
  {
    v55 = (struct _D3DKMT_PRESENT *)*((_QWORD *)v165 + 2);
    v14 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)&v55->VidPnSourceId + 16LL);
    if ( (*(&v14[1].Reserved + 1) & 0x10) != 0 )
    {
      v14 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)&v55->VidPnSourceId + 16LL);
      if ( v14 == *((struct _DXGKARG_PRESENT **)&v55[1].PresentHistoryToken.Token.SurfaceComplete + 123) )
      {
        v65 = a9->DirtyRectCount + a9->MoveRectCount;
        if ( v65 <= 0x14 )
        {
          v66 = v168;
          v168->SubRectCnt = v65;
          v66->pDstSubRects = (const RECT *)v203;
          v67 = (RECT *)v203;
          MoveRectCount = a9->MoveRectCount;
          if ( (_DWORD)MoveRectCount )
          {
            p_DestRect = &a9->pMoveRects->DestRect;
            do
            {
              *v67 = *p_DestRect;
              p_DestRect = (RECT *)((char *)p_DestRect + 24);
              ++v67;
              --MoveRectCount;
            }
            while ( MoveRectCount );
          }
          memmove(v67, a9->pDirtyRects, 16LL * a9->DirtyRectCount);
        }
      }
    }
  }
  if ( ((*((_DWORD *)a11 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    v70 = v171;
    if ( (unsigned int)v171 <= 1 )
    {
      LODWORD(v57) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       v61,
                       v55,
                       v164,
                       v166,
                       v168,
                       a10,
                       a11,
                       (struct COREDEVICEACCESS *)v181);
      v161 = v57;
      v80 = 0LL;
LABEL_191:
      if ( v80 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v80,
          0LL);
      if ( P )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(P, 0);
        LODWORD(v57) = v161;
      }
      v123 = v166;
      if ( v166 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v166 + 11);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v124 = WdLogNewEntry5_WdAssertion(v123);
        *(_QWORD *)(v124 + 24) = 982LL;
        WdLogEvent5_WdAssertion(v124);
      }
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 191) )
      {
        v125 = KeGetCurrentThread();
        if ( !v125 )
        {
          v126 = WdLogNewEntry5_WdAssertion(v123);
          *(_QWORD *)(v126 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v126);
        }
        v127 = PsGetCurrentProcessSessionId();
        if ( v127 && (unsigned int)PsGetThreadSessionId(v125) == v127 )
        {
          v128 = 0LL;
          v129 = (__int64 *)PsGetThreadWin32Thread(v125);
          if ( v129 )
            v128 = *v129;
          if ( v128 )
            v131 = *(_QWORD *)(v128 + 80);
          else
            v131 = 0LL;
          if ( v131 )
          {
            v132 = KeGetCurrentThread();
            if ( !v132 )
            {
              v133 = WdLogNewEntry5_WdAssertion(v130);
              *(_QWORD *)(v133 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v133);
            }
            v136 = PsGetCurrentProcessSessionId();
            if ( !v136 || (unsigned int)PsGetThreadSessionId(v132) != v136 )
              goto LABEL_220;
            v138 = 0LL;
            v139 = (__int64 *)PsGetThreadWin32Thread(v132);
            if ( v139 )
              v138 = *v139;
            if ( v138 )
              v140 = *(_QWORD *)(v138 + 80);
            else
LABEL_220:
              v140 = 0LL;
            if ( *(_DWORD *)(v140 + 136) )
            {
              v141 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v135, v134, v137);
              v141[3] = 275LL;
              v141[4] = 25LL;
              v141[5] = *(int *)(v140 + 136);
              v141[6] = 0LL;
              v141[7] = 0LL;
              WdLogEvent5_WdCriticalError(v141);
            }
          }
        }
        LODWORD(v57) = v161;
      }
      v142 = v164;
      if ( v164 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v164 + 11);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v143 = WdLogNewEntry5_WdAssertion(v142);
        *(_QWORD *)(v143 + 24) = 982LL;
        WdLogEvent5_WdAssertion(v143);
      }
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 191) )
      {
        v144 = KeGetCurrentThread();
        if ( !v144 )
        {
          v145 = WdLogNewEntry5_WdAssertion(v142);
          *(_QWORD *)(v145 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v145);
        }
        v146 = PsGetCurrentProcessSessionId();
        if ( v146 && (unsigned int)PsGetThreadSessionId(v144) == v146 )
        {
          v147 = 0LL;
          v148 = (__int64 *)PsGetThreadWin32Thread(v144);
          if ( v148 )
            v147 = *v148;
          if ( v147 )
            v150 = *(_QWORD *)(v147 + 80);
          else
            v150 = 0LL;
          if ( v150 )
          {
            v151 = KeGetCurrentThread();
            if ( !v151 )
            {
              v152 = WdLogNewEntry5_WdAssertion(v149);
              *(_QWORD *)(v152 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v152);
            }
            v155 = PsGetCurrentProcessSessionId();
            if ( !v155 || (unsigned int)PsGetThreadSessionId(v151) != v155 )
              goto LABEL_247;
            v157 = 0LL;
            v158 = (__int64 *)PsGetThreadWin32Thread(v151);
            if ( v158 )
              v157 = *v158;
            if ( v157 )
              v159 = *(_QWORD *)(v157 + 80);
            else
LABEL_247:
              v159 = 0LL;
            if ( *(_DWORD *)(v159 + 136) )
            {
              v160 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v154, v153, v156);
              v160[3] = 275LL;
              v160[4] = 25LL;
              v160[5] = *(int *)(v159 + 136);
              v160[6] = 0LL;
              v160[7] = 0LL;
              WdLogEvent5_WdCriticalError(v160);
            }
          }
        }
        LODWORD(v57) = v161;
      }
      return (unsigned int)v57;
    }
    if ( !v59 )
    {
      v64 = WdLogNewEntry5_WdError(v14);
LABEL_81:
      *(_QWORD *)(v64 + 24) = v61;
      LODWORD(v57) = -1073741811;
      *(_QWORD *)(v64 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v64);
      v161 = -1073741811;
      goto LABEL_190;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v61 + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v72 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v72 + 24) = -1073741801LL;
      *(_QWORD *)(v72 + 32) = 6106LL;
      WdLogEvent5_WdError(v72);
      LODWORD(v57) = -1073741801;
      v161 = -1073741801;
      goto LABEL_190;
    }
    v179 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v61 + 2) + 2896LL));
    *(_DWORD *)a11 |= 0xC00u;
    v73 = 0;
    v74 = a10;
    while ( v73 < v70 )
    {
      if ( v73 )
      {
        LODWORD(v75) = 0;
        v174 = 0;
        v175 = 0;
        if ( v176 )
        {
          v76 = &v170->BroadcastSrcAllocation[v73 - 1];
          if ( v76 + 1 < v76 || (unsigned __int64)(v76 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v75 = *v76;
          v174 = v75;
          v77 = DXGPROCESS::GetAllocationSafe(v169, (DXGALLOCATIONREFERENCE *)&v185, v75);
          DXGALLOCATIONREFERENCE::MoveAssign(&v164, v77);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v185);
          if ( !v164 )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdError(v78);
            v79[3] = v75;
            LODWORD(v57) = -1073741811;
            v79[4] = -1073741811LL;
            v79[5] = 6132LL;
            WdLogEvent5_WdError(v79);
            v161 = -1073741811;
            v80 = v162;
            goto LABEL_191;
          }
          v81 = &a4[v73];
          v190 = *((_QWORD *)*v81 + 2);
          v191 = *(_QWORD *)(*((_QWORD *)v164 + 1) + 16LL);
          v192 = *(_QWORD *)(v191 + 16);
          v193 = *(_QWORD *)(v190 + 16);
          v82 = *(_QWORD *)(v193 + 16);
          v194 = v82;
          if ( v192 != v82 )
          {
            _mm_lfence();
            v83 = (_QWORD *)WdLogNewEntry5_WdError(v82);
            v195 = *((_QWORD *)*v81 + 2);
            v83[3] = v195;
            v83[4] = v164;
            LODWORD(v57) = -1073741811;
            v83[5] = -1073741811LL;
            WdLogEvent5_WdError(v83);
            v161 = -1073741811;
            v61 = v165;
            v80 = v162;
            goto LABEL_191;
          }
          v61 = v165;
        }
        if ( v172 )
        {
          v84 = &v170->BroadcastDstAllocation[v73 - 1];
          if ( v84 + 1 < v84 || (unsigned __int64)(v84 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v175 = *v84;
          v85 = DXGPROCESS::GetAllocationSafe(v169, (DXGALLOCATIONREFERENCE *)v186, v175);
          DXGALLOCATIONREFERENCE::MoveAssign(&v166, v85);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v186);
          if ( !v166 )
          {
            v87 = (_QWORD *)WdLogNewEntry5_WdError(v86);
            v87[3] = (unsigned int)v75;
            LODWORD(v57) = -1073741811;
            v87[4] = -1073741811LL;
            v87[5] = 6155LL;
            WdLogEvent5_WdError(v87);
            v161 = -1073741811;
            v80 = v162;
            goto LABEL_191;
          }
          v88 = &a4[v73];
          v196 = *((_QWORD *)*v88 + 2);
          v197 = *(_QWORD *)(*((_QWORD *)v166 + 1) + 16LL);
          v198 = *(_QWORD *)(v197 + 16);
          v199 = *(_QWORD *)(v196 + 16);
          v89 = *(_QWORD *)(v199 + 16);
          v200 = v89;
          if ( v198 != v89 )
          {
            _mm_lfence();
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v89);
            v201 = *((_QWORD *)*v88 + 2);
            v90[3] = v201;
            v90[4] = v166;
            LODWORD(v57) = -1073741811;
            v90[5] = -1073741811LL;
            WdLogEvent5_WdError(v90);
            v161 = -1073741811;
            v80 = v162;
            goto LABEL_191;
          }
        }
        v74 = v162;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  a4[v73],
                  v181,
                  v164,
                  v166,
                  v168,
                  v74,
                  a11,
                  (struct COREDEVICEACCESS *)v181) < 0 )
      {
        v92 = WdLogNewEntry5_WdError(v91);
        LODWORD(v57) = -1073741811;
        *(_QWORD *)(v92 + 24) = -1073741811LL;
        *(_QWORD *)(v92 + 32) = 6191LL;
        WdLogEvent5_WdError(v92);
        v161 = -1073741811;
        goto LABEL_190;
      }
      v74 = 0LL;
      v162 = 0LL;
      *(_DWORD *)a11 &= ~0x800u;
      ++v73;
    }
    v93 = 0LL;
    v187 = 0LL;
    v189 = 0;
    if ( a3 <= 8 )
    {
      PoolWithTag = v188;
      v187 = v188;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / a3 < 8 )
        goto LABEL_125;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x4B677844u);
      v187 = PoolWithTag;
    }
    v189 = a3;
    if ( !PoolWithTag )
      goto LABEL_126;
    memset(PoolWithTag, 0, 8LL * a3);
    v93 = v187;
LABEL_125:
    if ( v93 )
    {
      if ( v70 > 1 )
      {
        v95 = a4 + 1;
        v96 = v93;
        v97 = v70 - 1;
        do
        {
          *v96++ = *((_QWORD *)*v95++ + 27);
          --v97;
        }
        while ( v97 );
      }
      v182 = 0;
      LODWORD(v57) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 376LL) + 8LL) + 544LL))(
                       a3,
                       v93,
                       1LL,
                       &BroadcastPresentSyncObject,
                       0,
                       &v179);
      v161 = v57;
      if ( (int)v57 >= 0 )
      {
        LODWORD(v57) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 376LL) + 8LL) + 536LL))(
                         *((_QWORD *)v61 + 27),
                         BroadcastPresentSyncObject,
                         v179);
        v161 = v57;
      }
      goto LABEL_132;
    }
LABEL_126:
    LODWORD(v57) = -1073741801;
    v161 = -1073741801;
LABEL_132:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v187);
    goto LABEL_190;
  }
  v98 = v173;
  if ( !v173 )
  {
    v99 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v99 + 24) = 5921LL;
    WdLogEvent5_WdAssertion(v99);
  }
  v100 = v168;
  if ( v168->pDmaBuffer )
  {
    v101 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v101 + 24) = 5922LL;
    WdLogEvent5_WdAssertion(v101);
    v100 = v168;
  }
  if ( !a3 || !v59 )
  {
    v104 = v171;
    *(_DWORD *)a11 = *(_DWORD *)a11 ^ (*(_DWORD *)a11 ^ (((unsigned int)v171 > 1) << 10)) & 0x400 | 0x800;
    *((_DWORD *)a11 + 35) = v104;
    v105 = (char *)a11 + 424;
    if ( !*((_BYTE *)a11 + 348) )
      v105 = (char *)a11 + 416;
    *v105 = 1;
    v106 = (struct VIDMM_ALLOC **)((char *)a11 + 424);
    if ( *((_BYTE *)a11 + 348) )
      v107 = (struct VIDMM_ALLOC **)((char *)a11
                                   + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8)
                                   + 472);
    else
      v107 = (struct VIDMM_ALLOC **)((char *)a11 + 424);
    LODWORD(v57) = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 400LL),
                     *(struct VIDMM_DEVICE **)(*((_QWORD *)v61 + 2) + 560LL),
                     *((struct _VIDMM_MULTI_ALLOC **)v173 + 3),
                     v107);
    v161 = v57;
    if ( (int)v57 >= 0 )
    {
      if ( *((_BYTE *)a11 + 348) )
        v108 = (char *)a11 + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8) + 464;
      else
        v108 = (char *)a11 + 440;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2)
                                                                                                + 16LL)
                                                                                    + 400LL)
                                                                        + 8LL)
                                                            + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 408LL),
        *(_QWORD *)(*((_QWORD *)v173 + 6) + 8LL),
        &v167,
        v108);
      if ( *((_BYTE *)a11 + 348) )
        *(_WORD *)((char *)v106 + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8) + 32) = v167;
      else
        *((_DWORD *)a11 + 119) ^= (*((_DWORD *)a11 + 119) ^ (v167 << 17)) & 0x3E0000;
      v109 = v173;
      v110 = *((_QWORD *)v173 + 5);
      if ( v110 )
        v111 = (*(_DWORD *)(v110 + 4) >> 3) & 1;
      else
        v111 = 0;
      if ( *((_BYTE *)a11 + 348) )
        *((_BYTE *)v106 + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8) + 56) = v111 != 0;
      else
        *((_DWORD *)a11 + 119) ^= (*((_DWORD *)a11 + 119) ^ (v111 << 23)) & 0x800000;
      v112 = (char *)a11 + 568;
      if ( *((_BYTE *)a11 + 348) )
      {
        v113 = (char *)a11 + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8) + 448;
      }
      else
      {
        v112 = (char *)a11 + 448;
        v113 = (char *)a11 + 432;
      }
      *(_QWORD *)v113 = *(_QWORD *)(*((_QWORD *)v109 + 6) + 16LL);
      if ( *((_BYTE *)a11 + 348) )
        v114 = (char *)a11 + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8) + 440;
      else
        v114 = (char *)a11 + 480;
      *(_QWORD *)v114 = *((_QWORD *)v61 + 21);
      v115 = v170;
      *(_WORD *)v112 = v170->SrcRect.left;
      *((_WORD *)v112 + 1) = v115->SrcRect.right;
      *((_WORD *)v112 + 2) = v115->SrcRect.top;
      *((_WORD *)v112 + 3) = v115->SrcRect.bottom;
      v116 = *(_QWORD *)v112;
      *((_QWORD *)v112 + 1) = *(_QWORD *)v112;
      *((_QWORD *)v112 + 2) = v116;
      v117 = a12 == D3DDDIFMT_A16B16G16R16F || a12 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v112 + 6) = v117;
      *((_DWORD *)v112 + 7) &= 0xFFFFFFE7;
      if ( *((_BYTE *)v61 + 350) )
      {
        memset(v202, 0, sizeof(v202));
        v202[4] = *((_QWORD *)v173 + 4);
        v202[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 400LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 408LL),
                    *((_QWORD *)v164 + 3),
                    *((unsigned __int8 *)v61 + 351),
                    *((unsigned int *)v61 + 82));
        v202[6] = *(_QWORD *)v108;
        LOWORD(v202[7]) = v167;
      }
      else
      {
        memset(v202, 0, 24);
        memset(&v202[4], 0, 40);
        v202[3] = *((_QWORD *)v109 + 4);
        v202[4] = 2 * (v167 & 0x1Fu);
        v202[5] = *(_QWORD *)v108;
      }
      v168->pAllocationList = (DXGK_ALLOCATIONLIST *)v202;
      LODWORD(v57) = ADAPTER_RENDER::DdiPresent(
                       *(ADAPTER_RENDER **)(*((_QWORD *)v61 + 2) + 16LL),
                       *((void **)v61 + 21),
                       v168);
      v161 = v57;
      if ( (int)v57 >= 0 )
      {
        v118 = 0;
        if ( v104 )
        {
          v119 = v165;
          v120 = v171;
          do
          {
            v121 = KeGetCurrentThread();
            if ( *((struct _KTHREAD **)*a4 + 46) != v121 )
            {
              v122 = WdLogNewEntry5_WdAssertion(v121);
              *(_QWORD *)(v122 + 24) = 6063LL;
              WdLogEvent5_WdAssertion(v122);
            }
            LODWORD(v57) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v119 + 2) + 16LL) + 376LL) + 8LL)
                                                                                               + 344LL))(
                             *((_QWORD *)*a4 + 27),
                             a11);
            v161 = v57;
            if ( (int)v57 < 0 )
              break;
            *(_DWORD *)a11 &= ~0x800u;
            ++v118;
            ++a4;
          }
          while ( v118 < v120 );
          v61 = v119;
        }
        else
        {
          v61 = v165;
        }
      }
      if ( (int)v57 < 0 )
      {
        if ( *((_BYTE *)a11 + 348) )
          v106 = (struct VIDMM_ALLOC **)((char *)a11
                                       + *((_DWORD *)a11 + 107) * ((8 * *((_DWORD *)a11 + 108) + 167) & 0xFFFFFFF8)
                                       + 472);
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 400LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)v61 + 2) + 560LL),
          *((_DWORD *)a11 + 34),
          *v106);
      }
    }
    goto LABEL_190;
  }
  v102 = DXGCONTEXT::SubmitPresentLda(v61, v170, a3, a4, v98, v100, a11);
  if ( a10 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 496LL))(
      a10,
      0LL);
  if ( v54 )
    CRefCountedBuffer::RefCountedBufferRelease(v54);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v166);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v164);
  return v102;
}

/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0147318 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA0C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0017194 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C006991C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7E90 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0136024 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01489E4 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        __int64 a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DXGKARG_PRESENT *a8,
        struct _D3DKMT_PRESENT_RGNS *a9,
        struct _VIDMM_DMA_BUFFER *a10,
        struct VIDSCH_SUBMIT_DATA_BASE *a11,
        struct COREDEVICEACCESS *a12)
{
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v28; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v30; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rax
  struct _KTHREAD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rbx
  _QWORD *v44; // rax
  DXGALLOCATIONREFERENCE *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  struct _KTHREAD *v49; // rsi
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rax
  struct _KTHREAD *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // ebx
  __int64 v63; // rbx
  __int64 *v64; // rax
  __int64 v65; // rbx
  _QWORD *v66; // rax
  CRefCountedBuffer *v67; // rbx
  struct _D3DKMT_PRESENT *v68; // rdx
  int PresentPrivateDriverData; // eax
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rax
  char v73; // si
  struct _DXGKARG_PRESENT *v74; // rcx
  unsigned int v75; // r9d
  DXGCONTEXT *v76; // r15
  unsigned int v77; // r13d
  __int64 v78; // r8
  int v79; // eax
  __int64 v80; // rax
  struct _D3DKMT_PRESENT_RGNS *v81; // r9
  UINT v82; // eax
  struct _DXGKARG_PRESENT *v83; // rcx
  RECT *v84; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned int v89; // ebx
  struct _VIDMM_DMA_BUFFER *v90; // rax
  __int64 v91; // rsi
  D3DKMT_HANDLE *v92; // rdx
  DXGALLOCATIONREFERENCE *v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  struct _VIDMM_DMA_BUFFER *v96; // r9
  struct DXGCONTEXT **v97; // r15
  __int64 v98; // rcx
  _QWORD *v99; // rax
  unsigned int *v100; // rdx
  DXGALLOCATIONREFERENCE *v101; // rax
  __int64 v102; // rcx
  _QWORD *v103; // rax
  struct DXGCONTEXT **v104; // rsi
  __int64 v105; // rcx
  _QWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  _QWORD *v109; // r10
  _BYTE *PoolWithTag; // r10
  struct DXGCONTEXT **v111; // rdx
  _QWORD *v112; // r8
  __int64 v113; // r9
  struct DXGALLOCATION *v114; // rcx
  __int64 v115; // rax
  struct _DXGKARG_PRESENT *v116; // rax
  __int64 v117; // rax
  unsigned int v118; // edi
  _BYTE *v120; // rax
  struct VIDMM_ALLOC **v121; // r9
  char *v122; // rbx
  _QWORD *v123; // rsi
  struct DXGALLOCATION *v124; // rdx
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // r9
  unsigned int i; // esi
  struct _KTHREAD *v129; // rcx
  __int64 v130; // rax
  struct VIDMM_ALLOC **v131; // r9
  char v132; // si
  __int64 v133; // rcx
  const char *ProcessImageFileName; // rax
  struct DXGALLOCATION *v135; // rcx
  __int64 v136; // rax
  struct _KTHREAD *v137; // rsi
  __int64 v138; // rax
  int v139; // ebx
  __int64 v140; // rbx
  __int64 *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  struct _KTHREAD *v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rcx
  int v147; // ebx
  __int64 v148; // rbx
  __int64 *v149; // rax
  __int64 v150; // rbx
  _QWORD *v151; // rax
  struct DXGALLOCATION *v152; // rcx
  __int64 v153; // rax
  struct _KTHREAD *v154; // rsi
  __int64 v155; // rax
  int v156; // ebx
  __int64 v157; // rbx
  __int64 *v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rax
  struct _KTHREAD *v164; // rsi
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  int v168; // ebx
  __int64 v169; // r8
  __int64 v170; // rbx
  __int64 *v171; // rax
  __int64 v172; // rbx
  _QWORD *v173; // rax
  int v174; // [rsp+40h] [rbp-398h]
  struct _VIDMM_DMA_BUFFER *v175; // [rsp+48h] [rbp-390h]
  struct DXGALLOCATION *v176; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v177; // [rsp+58h] [rbp-380h]
  struct DXGALLOCATION *v178; // [rsp+60h] [rbp-378h] BYREF
  struct _DXGKARG_PRESENT *v179; // [rsp+68h] [rbp-370h]
  int v180; // [rsp+70h] [rbp-368h] BYREF
  __int64 v181; // [rsp+78h] [rbp-360h]
  struct DXGALLOCATION *v182; // [rsp+80h] [rbp-358h]
  DXGCONTEXT *v183; // [rsp+88h] [rbp-350h]
  struct _D3DKMT_PRESENT *v184; // [rsp+90h] [rbp-348h]
  unsigned int v185; // [rsp+98h] [rbp-340h]
  unsigned int v186; // [rsp+9Ch] [rbp-33Ch]
  int v187; // [rsp+A0h] [rbp-338h]
  struct CRefCountedBuffer *v188; // [rsp+A8h] [rbp-330h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+B0h] [rbp-328h] BYREF
  struct _D3DKMT_PRESENT *v190; // [rsp+B8h] [rbp-320h]
  signed __int64 v191; // [rsp+C0h] [rbp-318h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-310h] BYREF
  __int64 v193; // [rsp+D8h] [rbp-300h]
  char v194[8]; // [rsp+E0h] [rbp-2F8h] BYREF
  int v195; // [rsp+E8h] [rbp-2F0h]
  _QWORD v196[2]; // [rsp+F0h] [rbp-2E8h] BYREF
  char v197[8]; // [rsp+100h] [rbp-2D8h] BYREF
  CRefCountedBuffer *v198; // [rsp+108h] [rbp-2D0h]
  struct _D3DKMT_PRESENT_RGNS *v199; // [rsp+110h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v200; // [rsp+118h] [rbp-2C0h] BYREF
  _BYTE *v201; // [rsp+120h] [rbp-2B8h] BYREF
  _BYTE v202[64]; // [rsp+128h] [rbp-2B0h] BYREF
  int v203; // [rsp+168h] [rbp-270h]
  __int64 v204; // [rsp+170h] [rbp-268h]
  __int64 v205; // [rsp+178h] [rbp-260h]
  __int64 v206; // [rsp+180h] [rbp-258h]
  __int64 v207; // [rsp+188h] [rbp-250h]
  __int64 v208; // [rsp+190h] [rbp-248h]
  struct _STRING DestinationString; // [rsp+198h] [rbp-240h] BYREF
  __int64 v210; // [rsp+1A8h] [rbp-230h]
  __int64 v211; // [rsp+1B0h] [rbp-228h]
  __int64 v212; // [rsp+1B8h] [rbp-220h]
  __int64 v213; // [rsp+1C0h] [rbp-218h]
  __int64 v214; // [rsp+1C8h] [rbp-210h]
  _BYTE v215[16]; // [rsp+1D0h] [rbp-208h] BYREF
  int v216[4]; // [rsp+1E0h] [rbp-1F8h] BYREF
  _QWORD v217[12]; // [rsp+1F0h] [rbp-1E8h] BYREF
  _BYTE v218[320]; // [rsp+250h] [rbp-188h] BYREF

  v177 = a3;
  v184 = a2;
  v183 = this;
  v196[1] = this;
  v182 = a5;
  v186 = a6;
  v185 = a7;
  v179 = a8;
  v199 = a9;
  v175 = a10;
  v190 = (struct _D3DKMT_PRESENT *)a12;
  v14 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(v14 + 40);
  v181 = v15;
  v193 = *(_QWORD *)(v15 + 80);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 128)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, v17, a3, v19);
    *(_QWORD *)(v20 + 24) = 5279LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v176 = 0LL;
  v178 = 0LL;
  if ( a6 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe(v15, (DXGALLOCATIONREFERENCE *)v196, a6);
    DXGALLOCATIONREFERENCE::MoveAssign(&v176, AllocationSafe);
    v24 = v196[0];
    if ( v196[0] )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v196[0] + 88LL));
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v22, a3, v23);
      *(_QWORD *)(v25 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = *((unsigned int *)DXGGLOBAL::m_pGlobal + 195);
    if ( (_DWORD)v26 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26, v22, a3, v23);
        *(_QWORD *)(v28 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v28);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v26, v22, a3, v23);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v30 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v30 = *ThreadWin32Thread;
        if ( v30 )
          v35 = *(_QWORD *)(v30 + 80);
        else
          v35 = 0LL;
        if ( v35 )
        {
          v36 = KeGetCurrentThread();
          if ( !v36 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v33, v32, a3, v34);
            *(_QWORD *)(v37 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v37);
          }
          v40 = PsGetCurrentProcessSessionId(v33, v32, a3, v34);
          if ( !v40 || (unsigned int)PsGetThreadSessionId(v36) != v40 )
            goto LABEL_28;
          v41 = 0LL;
          v42 = (__int64 *)PsGetThreadWin32Thread(v36);
          if ( v42 )
            v41 = *v42;
          if ( v41 )
            v43 = *(_QWORD *)(v41 + 80);
          else
LABEL_28:
            v43 = 0LL;
          if ( *(_DWORD *)(v43 + 136) )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38, a3);
            v44[3] = 275LL;
            v44[4] = 25LL;
            v44[5] = *(int *)(v43 + 136);
            v44[6] = 0LL;
            v44[7] = 0LL;
            WdLogEvent5_WdCriticalError(v44);
          }
        }
      }
      v15 = v181;
    }
  }
  if ( v185 )
  {
    v45 = DXGPROCESS::GetAllocationSafe(v15, (DXGALLOCATIONREFERENCE *)&v200, v185);
    DXGALLOCATIONREFERENCE::MoveAssign(&v178, v45);
    if ( v200 )
      ExReleaseRundownProtection(v200 + 11);
    v47 = *((unsigned int *)DXGGLOBAL::GetGlobal() + 195);
    if ( (_DWORD)v47 )
    {
      v49 = KeGetCurrentThread();
      if ( !v49 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v47, v46, a3, v48);
        *(_QWORD *)(v50 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v50);
      }
      v51 = PsGetCurrentProcessSessionId(v47, v46, a3, v48);
      if ( v51 && (unsigned int)PsGetThreadSessionId(v49) == v51 )
      {
        v52 = 0LL;
        v53 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v53 )
          v52 = *v53;
        if ( v52 )
          v57 = *(_QWORD *)(v52 + 80);
        else
          v57 = 0LL;
        if ( v57 )
        {
          v58 = KeGetCurrentThread();
          if ( !v58 )
          {
            v59 = WdLogNewEntry5_WdAssertion(v55, v54, a3, v56);
            *(_QWORD *)(v59 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v59);
          }
          v62 = PsGetCurrentProcessSessionId(v55, v54, a3, v56);
          if ( !v62 || (unsigned int)PsGetThreadSessionId(v58) != v62 )
            goto LABEL_54;
          v63 = 0LL;
          v64 = (__int64 *)PsGetThreadWin32Thread(v58);
          if ( v64 )
            v63 = *v64;
          if ( v63 )
            v65 = *(_QWORD *)(v63 + 80);
          else
LABEL_54:
            v65 = 0LL;
          if ( *(_DWORD *)(v65 + 136) )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v60, a3);
            v66[3] = 275LL;
            v66[4] = 25LL;
            v66[5] = *(int *)(v65 + 136);
            v66[6] = 0LL;
            v66[7] = 0LL;
            WdLogEvent5_WdCriticalError(v66);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || (*(unsigned int (__fastcall **)(_QWORD))(v193 + 224))(0LL) )
  {
    *((_DWORD *)a11 + 29) = 0;
  }
  v67 = 0LL;
  v188 = 0LL;
  v68 = v184;
  if ( v184 )
  {
    PresentPrivateDriverData = ReadPresentPrivateDriverData(
                                 *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                                 v184,
                                 (UINT **)&v188);
    v71 = PresentPrivateDriverData;
    if ( PresentPrivateDriverData < 0 )
    {
      v72 = WdLogNewEntry5_WdError(v70);
      *(_QWORD *)(v72 + 24) = v71;
      WdLogEvent5_WdError(v72);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v178);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v176);
      return (unsigned int)v71;
    }
    v67 = v188;
    v68 = v184;
  }
  v198 = v67;
  v73 = 0;
  v74 = (struct _DXGKARG_PRESENT *)*(unsigned int *)(v16 + 1648);
  if ( ((int)v74 >= 0x2000 || *(_BYTE *)(v16 + 1932)) && *(_DWORD *)(v16 + 1256) >= 0x5007u && v68 )
  {
    v73 = 1;
    if ( v67 )
    {
      v74 = v179;
      v179->PrivateDriverDataSize = v68->PrivateDriverDataSize;
      v74->pPrivateDriverData = (char *)v67 + 8;
    }
    *((_QWORD *)a11 + 3) = v67;
    goto LABEL_75;
  }
  if ( (int)v74 < 0x2000 && !*(_BYTE *)(v16 + 1932) )
  {
LABEL_75:
    v75 = v177;
    goto LABEL_76;
  }
  v75 = v177;
  if ( v177 )
  {
    LODWORD(v71) = -1073741811;
    v174 = -1073741811;
    v76 = this;
LABEL_174:
    v96 = v175;
    goto LABEL_175;
  }
LABEL_76:
  v77 = v75 + 1;
  v78 = *((unsigned int *)*a4 + 81);
  if ( v75 )
  {
    LODWORD(v68) = 1;
    while ( 1 )
    {
      v74 = (struct _DXGKARG_PRESENT *)a4[(unsigned int)v68];
      v79 = *(&v74[1].PrivateDriverDataSize + 1);
      if ( (v79 & (unsigned int)v78) != 0 )
        break;
      v78 = v79 | (unsigned int)v78;
      v68 = (struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v68 + 1);
      if ( (int)v68 - 1 >= v75 )
        goto LABEL_83;
    }
    v80 = WdLogNewEntry5_WdError(v74);
    v76 = v183;
    goto LABEL_82;
  }
LABEL_83:
  *((_DWORD *)a11 + 34) = v78;
  v81 = v199;
  v76 = v183;
  if ( v199 )
  {
    v68 = (struct _D3DKMT_PRESENT *)*((_QWORD *)v183 + 2);
    v74 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)&v68->VidPnSourceId + 16LL);
    if ( (*(&v74[1].DmaBufferSegmentId + 1) & 8) != 0 )
    {
      v74 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)&v68->VidPnSourceId + 16LL);
      if ( v74 == *((struct _DXGKARG_PRESENT **)&v68[12].PresentHistoryToken.Token.SurfaceComplete + 47) )
      {
        v82 = v199->DirtyRectCount + v199->MoveRectCount;
        if ( v82 <= 0x14 )
        {
          v83 = v179;
          v179->SubRectCnt = v82;
          v83->pDstSubRects = (const RECT *)v218;
          v84 = (RECT *)v218;
          MoveRectCount = v81->MoveRectCount;
          if ( (_DWORD)MoveRectCount )
          {
            p_DestRect = &v81->pMoveRects->DestRect;
            do
            {
              *v84 = *p_DestRect;
              p_DestRect = (RECT *)((char *)p_DestRect + 24);
              ++v84;
              --MoveRectCount;
            }
            while ( MoveRectCount );
          }
          memmove(v84, v81->pDirtyRects, 16LL * v81->DirtyRectCount);
        }
      }
    }
  }
  if ( ((*((_DWORD *)a11 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v77 <= 1 )
    {
      LODWORD(v71) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       v76,
                       v68,
                       v176,
                       v178,
                       v179,
                       a10,
                       a11,
                       (struct COREDEVICEACCESS *)v190);
      v174 = v71;
      v96 = 0LL;
LABEL_175:
      if ( v96 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 480LL))(
          v96,
          0LL);
      if ( v198 )
        CRefCountedBuffer::RefCountedBufferRelease(v198);
      v135 = v178;
      if ( v178 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v178 + 11);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v136 = WdLogNewEntry5_WdAssertion(v135, v68, a3, v96);
        *(_QWORD *)(v136 + 24) = 1038LL;
        WdLogEvent5_WdAssertion(v136);
      }
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 195) )
      {
        v137 = KeGetCurrentThread();
        if ( !v137 )
        {
          v138 = WdLogNewEntry5_WdAssertion(v135, v68, a3, v96);
          *(_QWORD *)(v138 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v138);
        }
        v139 = PsGetCurrentProcessSessionId(v135, v68, a3, v96);
        if ( v139 && (unsigned int)PsGetThreadSessionId(v137) == v139 )
        {
          v140 = 0LL;
          v141 = (__int64 *)PsGetThreadWin32Thread(v137);
          if ( v141 )
            v140 = *v141;
          if ( v140 )
            v143 = *(_QWORD *)(v140 + 80);
          else
            v143 = 0LL;
          if ( v143 )
          {
            v144 = KeGetCurrentThread();
            if ( !v144 )
            {
              v145 = WdLogNewEntry5_WdAssertion(v142, v68, a3, v96);
              *(_QWORD *)(v145 + 24) = 92LL;
              WdLogEvent5_WdAssertion(v145);
            }
            v147 = PsGetCurrentProcessSessionId(v142, v68, a3, v96);
            if ( !v147 || (unsigned int)PsGetThreadSessionId(v144) != v147 )
              goto LABEL_202;
            v148 = 0LL;
            v149 = (__int64 *)PsGetThreadWin32Thread(v144);
            if ( v149 )
              v148 = *v149;
            if ( v148 )
              v150 = *(_QWORD *)(v148 + 80);
            else
LABEL_202:
              v150 = 0LL;
            if ( *(_DWORD *)(v150 + 136) )
            {
              v151 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v146, v68, a3);
              v151[3] = 275LL;
              v151[4] = 25LL;
              v151[5] = *(int *)(v150 + 136);
              v151[6] = 0LL;
              v151[7] = 0LL;
              WdLogEvent5_WdCriticalError(v151);
            }
          }
        }
        LODWORD(v71) = v174;
      }
      v152 = v176;
      if ( v176 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v176 + 11);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v153 = WdLogNewEntry5_WdAssertion(v152, v68, a3, v96);
        *(_QWORD *)(v153 + 24) = 1038LL;
        WdLogEvent5_WdAssertion(v153);
      }
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 195) )
      {
        v154 = KeGetCurrentThread();
        if ( !v154 )
        {
          v155 = WdLogNewEntry5_WdAssertion(v152, v68, a3, v96);
          *(_QWORD *)(v155 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v155);
        }
        v156 = PsGetCurrentProcessSessionId(v152, v68, a3, v96);
        if ( v156 && (unsigned int)PsGetThreadSessionId(v154) == v156 )
        {
          v157 = 0LL;
          v158 = (__int64 *)PsGetThreadWin32Thread(v154);
          if ( v158 )
            v157 = *v158;
          if ( v157 )
            v163 = *(_QWORD *)(v157 + 80);
          else
            v163 = 0LL;
          if ( v163 )
          {
            v164 = KeGetCurrentThread();
            if ( !v164 )
            {
              v165 = WdLogNewEntry5_WdAssertion(v160, v159, v161, v162);
              *(_QWORD *)(v165 + 24) = 92LL;
              WdLogEvent5_WdAssertion(v165);
            }
            v168 = PsGetCurrentProcessSessionId(v160, v159, v161, v162);
            if ( !v168 || (unsigned int)PsGetThreadSessionId(v164) != v168 )
              goto LABEL_229;
            v170 = 0LL;
            v171 = (__int64 *)PsGetThreadWin32Thread(v164);
            if ( v171 )
              v170 = *v171;
            if ( v170 )
              v172 = *(_QWORD *)(v170 + 80);
            else
LABEL_229:
              v172 = 0LL;
            if ( *(_DWORD *)(v172 + 136) )
            {
              v173 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v167, v166, v169);
              v173[3] = 275LL;
              v173[4] = 25LL;
              v173[5] = *(int *)(v172 + 136);
              v173[6] = 0LL;
              v173[7] = 0LL;
              WdLogEvent5_WdCriticalError(v173);
            }
          }
        }
        LODWORD(v71) = v174;
      }
      return (unsigned int)v71;
    }
    if ( !v73 )
    {
      v80 = WdLogNewEntry5_WdError(v74);
LABEL_82:
      *(_QWORD *)(v80 + 24) = v76;
      LODWORD(v71) = -1073741811;
      *(_QWORD *)(v80 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v80);
      v174 = -1073741811;
      goto LABEL_174;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v76 + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v88 = WdLogNewEntry5_WdError(v87);
      *(_QWORD *)(v88 + 24) = -1073741801LL;
      *(_QWORD *)(v88 + 32) = 5594LL;
      WdLogEvent5_WdError(v88);
      LODWORD(v71) = -1073741801;
      v174 = -1073741801;
      goto LABEL_174;
    }
    v191 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v76 + 2) + 18744LL));
    v89 = 0;
    v90 = a10;
    while ( v89 < v77 )
    {
      if ( v89 )
      {
        LODWORD(v91) = 0;
        v187 = 0;
        v195 = 0;
        if ( v186 )
        {
          v92 = &v184->BroadcastSrcAllocation[v89 - 1];
          if ( v92 + 1 < v92 || (unsigned __int64)(v92 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v91 = *v92;
          v187 = v91;
          v93 = DXGPROCESS::GetAllocationSafe(v181, (DXGALLOCATIONREFERENCE *)v197, v91);
          DXGALLOCATIONREFERENCE::MoveAssign(&v176, v93);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v197);
          if ( !v176 )
          {
            v95 = (_QWORD *)WdLogNewEntry5_WdError(v94);
            v95[3] = v91;
            LODWORD(v71) = -1073741811;
            v95[4] = -1073741811LL;
            v95[5] = 5616LL;
            WdLogEvent5_WdError(v95);
            v174 = -1073741811;
            v96 = v175;
            goto LABEL_175;
          }
          v97 = &a4[v89];
          v214 = *((_QWORD *)*v97 + 2);
          v207 = *(_QWORD *)(*((_QWORD *)v176 + 1) + 16LL);
          v213 = *(_QWORD *)(v207 + 16);
          v206 = *(_QWORD *)(v214 + 16);
          v98 = *(_QWORD *)(v206 + 16);
          v204 = v98;
          if ( v213 != v98 )
          {
            _mm_lfence();
            v99 = (_QWORD *)WdLogNewEntry5_WdError(v98);
            v99[3] = *((_QWORD *)*v97 + 2);
            v99[4] = v176;
            LODWORD(v71) = -1073741811;
            v99[5] = -1073741811LL;
            WdLogEvent5_WdError(v99);
            v174 = -1073741811;
            v76 = v183;
            v96 = v175;
            goto LABEL_175;
          }
          v76 = v183;
        }
        if ( v185 )
        {
          v100 = &v184->BroadcastDstAllocation[v89 - 1];
          if ( v100 + 1 < v100 || (unsigned __int64)(v100 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v101 = DXGPROCESS::GetAllocationSafe(v181, (DXGALLOCATIONREFERENCE *)v194, *v100);
          DXGALLOCATIONREFERENCE::MoveAssign(&v178, v101);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v194);
          if ( !v178 )
          {
            v103 = (_QWORD *)WdLogNewEntry5_WdError(v102);
            v103[3] = (unsigned int)v91;
            LODWORD(v71) = -1073741811;
            v103[4] = -1073741811LL;
            v103[5] = 5639LL;
            WdLogEvent5_WdError(v103);
            v174 = -1073741811;
            v96 = v175;
            goto LABEL_175;
          }
          v104 = &a4[v89];
          v208 = *((_QWORD *)*v104 + 2);
          v211 = *(_QWORD *)(*((_QWORD *)v178 + 1) + 16LL);
          v210 = *(_QWORD *)(v211 + 16);
          v212 = *(_QWORD *)(v208 + 16);
          v105 = *(_QWORD *)(v212 + 16);
          v205 = v105;
          if ( v210 != v105 )
          {
            _mm_lfence();
            v106 = (_QWORD *)WdLogNewEntry5_WdError(v105);
            v106[3] = *((_QWORD *)*v104 + 2);
            v106[4] = v178;
            LODWORD(v71) = -1073741811;
            v106[5] = -1073741811LL;
            WdLogEvent5_WdError(v106);
            v174 = -1073741811;
            v96 = v175;
            goto LABEL_175;
          }
        }
        v90 = v175;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  a4[v89],
                  v190,
                  v176,
                  v178,
                  v179,
                  v90,
                  a11,
                  (struct COREDEVICEACCESS *)v190) < 0 )
      {
        v108 = WdLogNewEntry5_WdError(v107);
        LODWORD(v71) = -1073741811;
        *(_QWORD *)(v108 + 24) = -1073741811LL;
        *(_QWORD *)(v108 + 32) = 5675LL;
        WdLogEvent5_WdError(v108);
        v174 = -1073741811;
        goto LABEL_174;
      }
      v90 = 0LL;
      v175 = 0LL;
      ++v89;
    }
    v109 = 0LL;
    v201 = 0LL;
    v203 = 0;
    v71 = v177;
    if ( v177 <= 8 )
    {
      PoolWithTag = v202;
      v201 = v202;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v177 < 8 )
        goto LABEL_126;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v177, 0x4B677844u);
      v201 = PoolWithTag;
    }
    v203 = v71;
    if ( !PoolWithTag )
      goto LABEL_127;
    memset(PoolWithTag, 0, 8 * v71);
    v109 = v201;
LABEL_126:
    if ( v109 )
    {
      v111 = a4 + 1;
      v112 = v109;
      v113 = v77 - 1;
      do
      {
        *v112++ = *((_QWORD *)*v111++ + 27);
        --v113;
      }
      while ( v113 );
      LODWORD(v71) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 376LL) + 8LL) + 544LL))(
                       (unsigned int)v71,
                       v109,
                       1LL,
                       &BroadcastPresentSyncObject,
                       0,
                       &v191);
      v174 = v71;
      if ( (int)v71 >= 0 )
      {
        LODWORD(v71) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 376LL) + 8LL) + 536LL))(
                         *((_QWORD *)v76 + 27),
                         BroadcastPresentSyncObject,
                         v191);
        v174 = v71;
      }
      goto LABEL_132;
    }
LABEL_127:
    LODWORD(v71) = -1073741801;
    v174 = -1073741801;
LABEL_132:
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v201);
    goto LABEL_174;
  }
  v114 = v182;
  if ( !v182 )
  {
    v115 = WdLogNewEntry5_WdAssertion(0LL, v68, v78, v81);
    *(_QWORD *)(v115 + 24) = 5421LL;
    WdLogEvent5_WdAssertion(v115);
  }
  v116 = v179;
  if ( v179->pDmaBuffer )
  {
    v117 = WdLogNewEntry5_WdAssertion(v114, v68, v78, v81);
    *(_QWORD *)(v117 + 24) = 5422LL;
    WdLogEvent5_WdAssertion(v117);
    v116 = v179;
  }
  if ( !v177 || !v73 )
  {
    *(_DWORD *)a11 = *(_DWORD *)a11 & 0xFFFFF7FF | (((v77 > 1) | 2) << 11);
    *((_DWORD *)a11 + 35) = v77;
    v120 = (char *)a11 + 360;
    if ( !*((_BYTE *)a11 + 348) )
      v120 = (char *)a11 + 352;
    *v120 = 1;
    v121 = (struct VIDMM_ALLOC **)((char *)a11 + 376);
    if ( !*((_BYTE *)a11 + 348) )
      v121 = (struct VIDMM_ALLOC **)((char *)a11 + 360);
    LODWORD(v71) = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 400LL),
                     *(struct VIDMM_DEVICE **)(*((_QWORD *)v76 + 2) + 536LL),
                     *((struct _VIDMM_MULTI_ALLOC **)v182 + 3),
                     v121);
    v174 = v71;
    if ( (int)v71 >= 0 )
    {
      v122 = (char *)a11 + 376;
      if ( !*((_BYTE *)a11 + 348) )
        v122 = (char *)a11 + 360;
      v123 = v122 + 16;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2)
                                                                                                + 16LL)
                                                                                    + 400LL)
                                                                        + 8LL)
                                                            + 208LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 408LL),
        *(_QWORD *)(*((_QWORD *)v182 + 6) + 8LL),
        &v180,
        v122 + 16);
      *((_DWORD *)v122 + 13) ^= (*((_DWORD *)v122 + 13) ^ (v180 << 17)) & 0x3E0000;
      v124 = v182;
      v125 = *((_QWORD *)v182 + 5);
      if ( v125 )
        v126 = (*(_DWORD *)(v125 + 4) >> 3) & 1;
      else
        v126 = 0;
      *((_DWORD *)v122 + 13) ^= (*((_DWORD *)v122 + 13) ^ (v126 << 23)) & 0x800000;
      *((_QWORD *)v122 + 1) = *(_QWORD *)(*((_QWORD *)v124 + 6) + 16LL);
      if ( *((_BYTE *)v76 + 350) )
      {
        memset(v217, 0, sizeof(v217));
        v217[4] = *((_QWORD *)v182 + 4);
        v217[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 400LL)
                                                                                        + 8LL)
                                                                            + 240LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 408LL),
                    *((_QWORD *)v176 + 3),
                    *((unsigned __int8 *)v76 + 351),
                    *((unsigned int *)v76 + 82));
        v217[6] = *v123;
        LOWORD(v217[7]) = v180;
      }
      else
      {
        memset(v217, 0, 24);
        memset(&v217[4], 0, 40);
        v217[3] = *((_QWORD *)v124 + 4);
        v217[4] = 2 * (v180 & 0x1Fu);
        v217[5] = *v123;
      }
      v179->pAllocationList = (DXGK_ALLOCATIONLIST *)v217;
      LODWORD(v71) = ADAPTER_RENDER::DdiPresent(
                       *(ADAPTER_RENDER **)(*((_QWORD *)v76 + 2) + 16LL),
                       *((void **)v76 + 21),
                       v179);
      v174 = v71;
      if ( (int)v71 >= 0 )
      {
        for ( i = 0; i < v77; ++a4 )
        {
          v129 = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*a4 + 46) != v129 )
          {
            v130 = WdLogNewEntry5_WdAssertion(v129, v68, a3, v127);
            *(_QWORD *)(v130 + 24) = 5547LL;
            WdLogEvent5_WdAssertion(v130);
          }
          LODWORD(v71) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 376LL) + 8LL)
                                                                                             + 344LL))(
                           *((_QWORD *)*a4 + 27),
                           a11);
          v174 = v71;
          if ( (int)v71 < 0 )
            break;
          *(_DWORD *)a11 &= ~0x1000u;
          ++i;
        }
      }
      if ( (int)v71 < 0 )
      {
        v131 = (struct VIDMM_ALLOC **)((char *)a11 + 376);
        if ( !*((_BYTE *)a11 + 348) )
          v131 = (struct VIDMM_ALLOC **)((char *)a11 + 360);
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 400LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)v76 + 2) + 536LL),
          *((_DWORD *)a11 + 34),
          *v131);
        v132 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v133 = *(_QWORD *)(v181 + 56);
        if ( v133
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v133),
              RtlInitAnsiString(&DestinationString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v132 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v215, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v216, 2);
        DxgkSqmAddToStream(4783LL, 2LL, v215);
        if ( v132 )
          RtlFreeUnicodeString(&UnicodeString);
      }
    }
    goto LABEL_174;
  }
  v118 = DXGCONTEXT::SubmitPresentLda(v76, v184, v177, a4, v182, v116, a11);
  if ( a10 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL)
                                                                                       + 400LL)
                                                                           + 8LL)
                                                               + 480LL))(
      a10,
      0LL);
  if ( v67 )
    CRefCountedBuffer::RefCountedBufferRelease(v67);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v178);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v176);
  return v118;
}

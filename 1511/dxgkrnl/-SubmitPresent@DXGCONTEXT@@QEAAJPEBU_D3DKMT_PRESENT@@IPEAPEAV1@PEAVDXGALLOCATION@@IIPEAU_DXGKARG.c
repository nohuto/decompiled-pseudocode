/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C014B0AC (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0011054 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00187E0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DB48 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00898CC (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C013A754 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C014C6BC (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
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
  struct DXGCONTEXT *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rcx
  __int64 v24; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v26; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v28; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v30; // rax
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rbx
  _QWORD *v38; // rax
  struct _EX_RUNDOWN_REF *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  struct CRefCountedBuffer *v46; // rbx
  struct _D3DKMT_PRESENT *v47; // rdx
  int v48; // eax
  __int64 v49; // rbx
  __int64 v50; // rax
  char v52; // di
  unsigned int v53; // r9d
  int v54; // edi
  unsigned int v55; // r12d
  int v56; // r8d
  int v57; // eax
  __int64 v58; // rax
  struct _D3DKMT_PRESENT_RGNS *v59; // r9
  UINT v60; // eax
  RECT *v61; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // edi
  struct _VIDMM_DMA_BUFFER *v67; // rax
  __int64 v68; // rbx
  D3DKMT_HANDLE *v69; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  struct _VIDMM_DMA_BUFFER *v73; // r9
  unsigned int *v74; // rdx
  struct DXGALLOCATION **v75; // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  _QWORD *v80; // r10
  _BYTE *PoolWithTag; // r10
  struct DXGCONTEXT **v82; // rdx
  _QWORD *v83; // r8
  __int64 v84; // r9
  struct DXGALLOCATION *v85; // rcx
  __int64 v86; // rax
  struct _DXGKARG_PRESENT *v87; // rax
  __int64 v88; // rax
  _BYTE *v89; // rax
  struct VIDMM_ALLOC **v90; // r9
  char *v91; // rbx
  struct DXGALLOCATION *v92; // rdx
  __int64 v93; // rax
  int v94; // eax
  unsigned int i; // ebx
  struct _KTHREAD *v96; // rcx
  __int64 v97; // rax
  struct VIDMM_ALLOC **v98; // r9
  char v99; // bl
  __int64 v100; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v102; // rax
  struct _KTHREAD *v103; // rdi
  __int64 v104; // rax
  int v105; // ebx
  __int64 v106; // rbx
  __int64 *v107; // rax
  __int64 v108; // rax
  struct _KTHREAD *v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rdx
  int v112; // ebx
  __int64 v113; // r8
  __int64 v114; // rbx
  __int64 *v115; // rax
  __int64 v116; // rbx
  _QWORD *v117; // rax
  __int64 v118; // rax
  struct _KTHREAD *v119; // rdi
  __int64 v120; // rax
  int v121; // ebx
  __int64 v122; // rbx
  __int64 *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  struct _KTHREAD *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  int v130; // ebx
  __int64 v131; // r8
  __int64 v132; // rbx
  __int64 *v133; // rax
  __int64 v134; // rbx
  _QWORD *v135; // rax
  unsigned int v136; // [rsp+40h] [rbp-348h]
  struct _VIDMM_DMA_BUFFER *v137; // [rsp+48h] [rbp-340h]
  unsigned int v138; // [rsp+50h] [rbp-338h]
  struct DXGALLOCATION *v139; // [rsp+60h] [rbp-328h] BYREF
  struct DXGALLOCATION *v140; // [rsp+68h] [rbp-320h] BYREF
  int v141; // [rsp+70h] [rbp-318h] BYREF
  __int64 v142; // [rsp+78h] [rbp-310h]
  struct DXGALLOCATION *v143; // [rsp+80h] [rbp-308h]
  unsigned int v144; // [rsp+88h] [rbp-300h]
  struct _D3DKMT_PRESENT *v145; // [rsp+90h] [rbp-2F8h]
  __int64 v146; // [rsp+98h] [rbp-2F0h]
  unsigned int v147; // [rsp+A0h] [rbp-2E8h]
  int v148; // [rsp+A4h] [rbp-2E4h]
  unsigned int v149; // [rsp+A8h] [rbp-2E0h]
  struct CRefCountedBuffer *v150; // [rsp+B0h] [rbp-2D8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+B8h] [rbp-2D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-2C8h] BYREF
  struct _D3DKMT_PRESENT *v153; // [rsp+D0h] [rbp-2B8h]
  signed __int64 v154; // [rsp+D8h] [rbp-2B0h] BYREF
  PVOID P; // [rsp+E0h] [rbp-2A8h]
  struct _EX_RUNDOWN_REF *v156; // [rsp+E8h] [rbp-2A0h] BYREF
  struct _EX_RUNDOWN_REF *v157; // [rsp+F0h] [rbp-298h] BYREF
  struct _EX_RUNDOWN_REF *v158[2]; // [rsp+F8h] [rbp-290h] BYREF
  struct _EX_RUNDOWN_REF *v159; // [rsp+108h] [rbp-280h] BYREF
  int v160; // [rsp+110h] [rbp-278h]
  struct _D3DKMT_PRESENT_RGNS *v161; // [rsp+118h] [rbp-270h]
  _BYTE *v162; // [rsp+120h] [rbp-268h] BYREF
  _BYTE v163[64]; // [rsp+128h] [rbp-260h] BYREF
  unsigned int v164; // [rsp+168h] [rbp-220h]
  struct _STRING DestinationString; // [rsp+170h] [rbp-218h] BYREF
  _BYTE v166[16]; // [rsp+180h] [rbp-208h] BYREF
  int v167[4]; // [rsp+190h] [rbp-1F8h] BYREF
  _QWORD v168[12]; // [rsp+1A0h] [rbp-1E8h] BYREF
  _BYTE v169[320]; // [rsp+200h] [rbp-188h] BYREF

  v138 = a3;
  v145 = a2;
  v158[1] = (struct _EX_RUNDOWN_REF *)this;
  v143 = a5;
  v147 = a6;
  v144 = a7;
  v161 = a9;
  v137 = a10;
  v153 = (struct _D3DKMT_PRESENT *)a12;
  v14 = (struct DXGCONTEXT *)*((_QWORD *)this + 2);
  v15 = *((_QWORD *)v14 + 5);
  v142 = v15;
  v16 = *(_QWORD *)(v15 + 80);
  v146 = v16;
  v17 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 144) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 128)) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v18 + 24) = 5243LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v15 = v142;
  }
  v139 = 0LL;
  v140 = 0LL;
  if ( a6 )
  {
    v19 = *(struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v15, (DXGALLOCATIONREFERENCE *)&v157, a6);
    v139 = (struct DXGALLOCATION *)v19;
    if ( v19 && !ExAcquireRundownProtection(v19 + 11) )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, a3);
      v22[3] = 275LL;
      v22[4] = 25LL;
      v22[5] = v19;
      v22[6] = 0LL;
      v22[7] = 0LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    v23 = v157;
    if ( v157 )
      ExReleaseRundownProtection(v157 + 11);
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v24 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v14 = (struct DXGCONTEXT *)*((unsigned int *)DXGGLOBAL::m_pGlobal + 231);
    if ( (_DWORD)v14 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v26 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v26 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v26);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v28 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v28 = *ThreadWin32Thread;
        if ( v28 )
          v30 = *(_QWORD *)(v28 + 80);
        else
          v30 = 0LL;
        if ( v30 )
        {
          v31 = KeGetCurrentThread();
          if ( !v31 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v14);
            *(_QWORD *)(v32 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v32);
          }
          v34 = PsGetCurrentProcessSessionId();
          if ( !v34 || (unsigned int)PsGetThreadSessionId(v31) != v34 )
            goto LABEL_32;
          v35 = 0LL;
          v36 = (__int64 *)PsGetThreadWin32Thread(v31);
          if ( v36 )
            v35 = *v36;
          if ( v35 )
            v37 = *(_QWORD *)(v35 + 80);
          else
LABEL_32:
            v37 = 0LL;
          if ( *(_DWORD *)(v37 + 136) )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v33, a3);
            v38[3] = 275LL;
            v38[4] = 25LL;
            v38[5] = *(int *)(v37 + 136);
            v38[6] = 0LL;
            v38[7] = 0LL;
            WdLogEvent5_WdCriticalError(v38);
          }
        }
      }
      v16 = v146;
    }
  }
  if ( v144 )
  {
    v39 = *(struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v142, (DXGALLOCATIONREFERENCE *)v158, v144);
    v140 = (struct DXGALLOCATION *)v39;
    if ( v39 && !ExAcquireRundownProtection(v39 + 11) )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40, v42);
      v43[3] = 275LL;
      v43[4] = 25LL;
      v43[5] = v39;
      v43[6] = 0LL;
      v43[7] = 0LL;
      WdLogEvent5_WdCriticalError(v43);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v158);
  }
  v44 = *((_QWORD *)this + 2);
  v45 = *(_QWORD *)(v44 + 2832);
  if ( v45 != *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL)
    || (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64))(v16 + 224))(0LL, v45, a3, v15) )
  {
    *((_DWORD *)a11 + 29) = 0;
  }
  v46 = 0LL;
  v150 = 0LL;
  v47 = v145;
  if ( v145 )
  {
    v48 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            v145,
            &v150);
    v49 = v48;
    if ( v48 < 0 )
    {
      v50 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v50 + 24) = v49;
      WdLogEvent5_WdError(v50);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v140);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v139);
      return (unsigned int)v49;
    }
    v46 = v150;
    v47 = v145;
  }
  P = v46;
  v52 = 0;
  if ( (*(int *)(v17 + 1656) >= 0x2000 || *(_BYTE *)(v17 + 1940)) && *(_DWORD *)(v17 + 1264) >= 0x5007u && v47 )
  {
    v52 = 1;
    if ( v46 )
    {
      v14 = (struct DXGCONTEXT *)a8;
      a8->PrivateDriverDataSize = v47->PrivateDriverDataSize;
      a8->pPrivateDriverData = (char *)v46 + 8;
    }
    *((_QWORD *)a11 + 3) = v46;
    goto LABEL_58;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
  {
LABEL_58:
    v53 = v138;
    goto LABEL_59;
  }
  v53 = v138;
  if ( v138 )
  {
    v54 = -1073741811;
    v136 = -1073741811;
LABEL_150:
    v73 = v137;
    goto LABEL_151;
  }
LABEL_59:
  v55 = v53 + 1;
  v56 = *((_DWORD *)*a4 + 81);
  if ( v53 )
  {
    LODWORD(v47) = 1;
    do
    {
      v14 = a4[(unsigned int)v47];
      v57 = *((_DWORD *)v14 + 81);
      if ( (v57 & v56) != 0 )
        goto LABEL_64;
      v56 |= v57;
      v47 = (struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v47 + 1);
    }
    while ( (int)v47 - 1 < v53 );
  }
  *((_DWORD *)a11 + 34) = v56;
  v59 = v161;
  if ( v161 )
  {
    v47 = (struct _D3DKMT_PRESENT *)*((_QWORD *)this + 2);
    v14 = *(struct DXGCONTEXT **)(*(_QWORD *)&v47->VidPnSourceId + 16LL);
    if ( (*((_DWORD *)v14 + 71) & 0x10) != 0 )
    {
      v14 = *(struct DXGCONTEXT **)(*(_QWORD *)&v47->VidPnSourceId + 16LL);
      if ( v14 == *((struct DXGCONTEXT **)&v47[1].PresentHistoryToken.Token.SurfaceComplete + 120) )
      {
        v60 = v161->DirtyRectCount + v161->MoveRectCount;
        if ( v60 <= 0x14 )
        {
          a8->SubRectCnt = v60;
          a8->pDstSubRects = (const RECT *)v169;
          v61 = (RECT *)v169;
          MoveRectCount = v59->MoveRectCount;
          if ( (_DWORD)MoveRectCount )
          {
            p_DestRect = &v59->pMoveRects->DestRect;
            do
            {
              *v61 = *p_DestRect;
              p_DestRect = (RECT *)((char *)p_DestRect + 24);
              ++v61;
              --MoveRectCount;
            }
            while ( MoveRectCount );
          }
          memmove(v61, v59->pDirtyRects, 16LL * v59->DirtyRectCount);
        }
      }
    }
  }
  if ( ((*((_DWORD *)a11 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
    v85 = v143;
    if ( !v143 )
    {
      v86 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v86 + 24) = 5385LL;
      WdLogEvent5_WdAssertion(v86);
    }
    v87 = a8;
    if ( a8->pDmaBuffer )
    {
      v88 = WdLogNewEntry5_WdAssertion(v85);
      *(_QWORD *)(v88 + 24) = 5386LL;
      WdLogEvent5_WdAssertion(v88);
      v87 = a8;
    }
    if ( v138 && v52 )
    {
      v54 = DXGCONTEXT::SubmitPresentLda(this, v145, v138, a4, v143, v87, a11);
      if ( a10 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 424LL)
                                                                               + 8LL)
                                                                   + 480LL))(
          a10,
          0LL);
      if ( v46 )
        CRefCountedBuffer::RefCountedBufferRelease(v46);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v140);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v139);
      return (unsigned int)v54;
    }
    *(_DWORD *)a11 = *(_DWORD *)a11 ^ (*(_DWORD *)a11 ^ ((v55 > 1) << 10)) & 0x400 | 0x800;
    *((_DWORD *)a11 + 35) = v55;
    v89 = (char *)a11 + 360;
    if ( !*((_BYTE *)a11 + 348) )
      v89 = (char *)a11 + 352;
    *v89 = 1;
    v90 = (struct VIDMM_ALLOC **)((char *)a11 + 376);
    if ( !*((_BYTE *)a11 + 348) )
      v90 = (struct VIDMM_ALLOC **)((char *)a11 + 360);
    v54 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *((struct _VIDMM_MULTI_ALLOC **)v143 + 3),
            v90);
    v136 = v54;
    if ( v54 >= 0 )
    {
      v91 = (char *)a11 + 376;
      if ( !*((_BYTE *)a11 + 348) )
        v91 = (char *)a11 + 360;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 424LL)
                                                                        + 8LL)
                                                            + 208LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
        *(_QWORD *)(*((_QWORD *)v143 + 6) + 8LL),
        &v141,
        v91 + 16);
      *((_DWORD *)v91 + 13) ^= (*((_DWORD *)v91 + 13) ^ (v141 << 17)) & 0x3E0000;
      v92 = v143;
      v93 = *((_QWORD *)v143 + 5);
      if ( v93 )
        v94 = (*(_DWORD *)(v93 + 4) >> 3) & 1;
      else
        v94 = 0;
      *((_DWORD *)v91 + 13) ^= (*((_DWORD *)v91 + 13) ^ (v94 << 23)) & 0x800000;
      *((_QWORD *)v91 + 1) = *(_QWORD *)(*((_QWORD *)v92 + 6) + 16LL);
      *((_QWORD *)v91 + 7) = *((_QWORD *)this + 21);
      if ( *((_BYTE *)this + 350) )
      {
        memset(v168, 0, sizeof(v168));
        v168[4] = *((_QWORD *)v143 + 4);
        v168[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                        + 8LL)
                                                                            + 240LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                    *((_QWORD *)v139 + 3),
                    *((unsigned __int8 *)this + 351),
                    *((unsigned int *)this + 82));
        v168[6] = *((_QWORD *)v91 + 2);
        LOWORD(v168[7]) = v141;
      }
      else
      {
        memset(v168, 0, 24);
        memset(&v168[4], 0, 40);
        v168[3] = *((_QWORD *)v92 + 4);
        v168[4] = 2 * (v141 & 0x1Fu);
        v168[5] = *((_QWORD *)v91 + 2);
      }
      a8->pAllocationList = (DXGK_ALLOCATIONLIST *)v168;
      v54 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 21), a8);
      v136 = v54;
      if ( v54 >= 0 )
      {
        for ( i = 0; i < v55; ++a4 )
        {
          v96 = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*a4 + 46) != v96 )
          {
            v97 = WdLogNewEntry5_WdAssertion(v96);
            *(_QWORD *)(v97 + 24) = 5512LL;
            WdLogEvent5_WdAssertion(v97);
          }
          v54 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                                + 8LL)
                                                                                    + 344LL))(
                  *((_QWORD *)*a4 + 27),
                  a11);
          v136 = v54;
          if ( v54 < 0 )
            break;
          *(_DWORD *)a11 &= ~0x800u;
          ++i;
        }
      }
      if ( v54 < 0 )
      {
        v98 = (struct VIDMM_ALLOC **)((char *)a11 + 376);
        if ( !*((_BYTE *)a11 + 348) )
          v98 = (struct VIDMM_ALLOC **)((char *)a11 + 360);
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
          *((_DWORD *)a11 + 34),
          *v98);
        v99 = 0;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        UnicodeString.Buffer = 0LL;
        v100 = *(_QWORD *)(v142 + 56);
        if ( v100
          && (ProcessImageFileName = (const char *)PsGetProcessImageFileName(v100),
              RtlInitAnsiString(&DestinationString, ProcessImageFileName),
              RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0) )
        {
          v99 = 1;
        }
        else
        {
          RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
        }
        DxgkSqmCreateStringStreamEntry((__int64)v166, UnicodeString.Buffer);
        DxgkSqmCreateDwordStreamEntry(v167, 2);
        DxgkSqmAddToStream(4783LL, 2LL, v166);
        if ( v99 )
          RtlFreeUnicodeString(&UnicodeString);
      }
    }
    goto LABEL_150;
  }
  if ( v55 > 1 )
  {
    if ( !v52 )
    {
LABEL_64:
      v58 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v58 + 24) = this;
      v54 = -1073741811;
      *(_QWORD *)(v58 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v58);
      v136 = -1073741811;
      goto LABEL_150;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v65 = WdLogNewEntry5_WdError(v64);
      *(_QWORD *)(v65 + 24) = -1073741801LL;
      *(_QWORD *)(v65 + 32) = 5559LL;
      WdLogEvent5_WdError(v65);
      v54 = -1073741801;
      v136 = -1073741801;
      goto LABEL_150;
    }
    v154 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 2872LL));
    *(_DWORD *)a11 |= 0xC00u;
    v66 = 0;
    v67 = a10;
    while ( v66 < v55 )
    {
      if ( v66 )
      {
        LODWORD(v68) = 0;
        v148 = 0;
        v149 = 0;
        if ( v147 )
        {
          v69 = &v145->BroadcastSrcAllocation[v66 - 1];
          if ( v69 + 1 < v69 || (unsigned __int64)(v69 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v68 = *v69;
          v148 = v68;
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      v142,
                                                      (DXGALLOCATIONREFERENCE *)&v156,
                                                      v68);
          DXGALLOCATIONREFERENCE::Assign((struct _EX_RUNDOWN_REF **)&v139, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v156);
          if ( !v139 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdError(v71);
            v72[3] = v68;
            v54 = -1073741811;
            v72[4] = -1073741811LL;
            v72[5] = 5585LL;
            WdLogEvent5_WdError(v72);
            v136 = -1073741811;
            v73 = v137;
            goto LABEL_151;
          }
        }
        if ( v144 )
        {
          v74 = &v145->BroadcastDstAllocation[v66 - 1];
          if ( v74 + 1 < v74 || (unsigned __int64)(v74 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v149 = *v74;
          v75 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v142, (DXGALLOCATIONREFERENCE *)&v159, v149);
          DXGALLOCATIONREFERENCE::Assign((struct _EX_RUNDOWN_REF **)&v140, v75);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v159);
          if ( !v140 )
          {
            v77 = (_QWORD *)WdLogNewEntry5_WdError(v76);
            v77[3] = (unsigned int)v68;
            v54 = -1073741811;
            v77[4] = -1073741811LL;
            v77[5] = 5599LL;
            WdLogEvent5_WdError(v77);
            v136 = -1073741811;
            v73 = v137;
            goto LABEL_151;
          }
        }
        v67 = v137;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  a4[v66],
                  v153,
                  v139,
                  v140,
                  a8,
                  v67,
                  a11,
                  (struct COREDEVICEACCESS *)v153) < 0 )
      {
        v79 = WdLogNewEntry5_WdError(v78);
        v54 = -1073741811;
        *(_QWORD *)(v79 + 24) = -1073741811LL;
        *(_QWORD *)(v79 + 32) = 5626LL;
        WdLogEvent5_WdError(v79);
        v136 = -1073741811;
        goto LABEL_150;
      }
      v67 = 0LL;
      v137 = 0LL;
      *(_DWORD *)a11 &= ~0x800u;
      ++v66;
    }
    v80 = 0LL;
    v162 = 0LL;
    v164 = 0;
    if ( v138 <= 8 )
    {
      PoolWithTag = v163;
      v162 = v163;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v138 < 8 )
        goto LABEL_103;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v138, 0x4B677844u);
      v162 = PoolWithTag;
    }
    v164 = v138;
    if ( !PoolWithTag )
      goto LABEL_104;
    memset(PoolWithTag, 0, 8LL * v138);
    v80 = v162;
LABEL_103:
    if ( v80 )
    {
      v82 = a4 + 1;
      v83 = v80;
      v84 = v55 - 1;
      do
      {
        *v83++ = *((_QWORD *)*v82++ + 27);
        --v84;
      }
      while ( v84 );
      v160 = 0;
      v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 544LL))(
              v138,
              v80,
              1LL,
              &BroadcastPresentSyncObject,
              0,
              &v154);
      v136 = v54;
      if ( v54 >= 0 )
      {
        v54 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                              + 536LL))(
                *((_QWORD *)this + 27),
                BroadcastPresentSyncObject,
                v154);
        v136 = v54;
      }
      goto LABEL_109;
    }
LABEL_104:
    v54 = -1073741801;
    v136 = -1073741801;
LABEL_109:
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v162);
    goto LABEL_150;
  }
  v54 = DXGCONTEXT::SubmitPresentWithDmaBuffer(this, v47, v139, v140, a8, a10, a11, (struct COREDEVICEACCESS *)v153);
  v136 = v54;
  v73 = 0LL;
LABEL_151:
  if ( v73 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 424LL)
                                                                           + 8LL)
                                                               + 480LL))(
      v73,
      0LL);
  if ( P )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(P, 0);
    v54 = v136;
  }
  if ( v140 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v140 + 11);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v102 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v102 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v102);
  }
  if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 231) )
  {
    v103 = KeGetCurrentThread();
    if ( !v103 )
    {
      v104 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v104 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v104);
    }
    v105 = PsGetCurrentProcessSessionId();
    if ( v105 && (unsigned int)PsGetThreadSessionId(v103) == v105 )
    {
      v106 = 0LL;
      v107 = (__int64 *)PsGetThreadWin32Thread(v103);
      if ( v107 )
        v106 = *v107;
      if ( v106 )
        v108 = *(_QWORD *)(v106 + 80);
      else
        v108 = 0LL;
      if ( v108 )
      {
        v109 = KeGetCurrentThread();
        if ( !v109 )
        {
          v110 = WdLogNewEntry5_WdAssertion(v14);
          *(_QWORD *)(v110 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v110);
        }
        v112 = PsGetCurrentProcessSessionId();
        if ( !v112 || (unsigned int)PsGetThreadSessionId(v109) != v112 )
          goto LABEL_180;
        v114 = 0LL;
        v115 = (__int64 *)PsGetThreadWin32Thread(v109);
        if ( v115 )
          v114 = *v115;
        if ( v114 )
          v116 = *(_QWORD *)(v114 + 80);
        else
LABEL_180:
          v116 = 0LL;
        if ( *(_DWORD *)(v116 + 136) )
        {
          v117 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v111, v113);
          v117[3] = 275LL;
          v117[4] = 25LL;
          v117[5] = *(int *)(v116 + 136);
          v117[6] = 0LL;
          v117[7] = 0LL;
          WdLogEvent5_WdCriticalError(v117);
        }
      }
    }
    v54 = v136;
  }
  if ( v139 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v139 + 11);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v118 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v118 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v118);
  }
  if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 231) )
  {
    v119 = KeGetCurrentThread();
    if ( !v119 )
    {
      v120 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v120 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v120);
    }
    v121 = PsGetCurrentProcessSessionId();
    if ( v121 && (unsigned int)PsGetThreadSessionId(v119) == v121 )
    {
      v122 = 0LL;
      v123 = (__int64 *)PsGetThreadWin32Thread(v119);
      if ( v123 )
        v122 = *v123;
      if ( v122 )
        v125 = *(_QWORD *)(v122 + 80);
      else
        v125 = 0LL;
      if ( v125 )
      {
        v126 = KeGetCurrentThread();
        if ( !v126 )
        {
          v127 = WdLogNewEntry5_WdAssertion(v124);
          *(_QWORD *)(v127 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v127);
        }
        v130 = PsGetCurrentProcessSessionId();
        if ( !v130 || (unsigned int)PsGetThreadSessionId(v126) != v130 )
          goto LABEL_207;
        v132 = 0LL;
        v133 = (__int64 *)PsGetThreadWin32Thread(v126);
        if ( v133 )
          v132 = *v133;
        if ( v132 )
          v134 = *(_QWORD *)(v132 + 80);
        else
LABEL_207:
          v134 = 0LL;
        if ( *(_DWORD *)(v134 + 136) )
        {
          v135 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v129, v128, v131);
          v135[3] = 275LL;
          v135[4] = 25LL;
          v135[5] = *(int *)(v134 + 136);
          v135[6] = 0LL;
          v135[7] = 0LL;
          WdLogEvent5_WdCriticalError(v135);
        }
      }
    }
    return v136;
  }
  return (unsigned int)v54;
}

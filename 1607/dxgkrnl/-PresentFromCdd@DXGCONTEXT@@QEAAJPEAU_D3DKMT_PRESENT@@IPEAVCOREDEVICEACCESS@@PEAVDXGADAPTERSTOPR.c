/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C01559B0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000BE68 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000CABC (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000CB04 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000CB20 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001CE68 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0025EC0 (Template_ppxppttqddddddddq.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C002612C (Template_ptqDR2DR2DR2DR2.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00943C8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00CA23C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00CA5C4 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00DA84C (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C0143A24 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // r12
  DXGADAPTER **v10; // rcx
  __int64 Value; // rcx
  const RECT **p_pSrcSubRects; // r14
  unsigned int *p_SubRectCnt; // r15
  D3DKMT_HANDLE hDestination; // ebx
  __int64 v15; // r13
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v22; // r13
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // edx
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v31; // rdx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  DXGADAPTERSTOPRESETLOCKSHARED *v36; // r13
  int v37; // eax
  __int64 v38; // rcx
  struct DXGPRESENTMUTEX *v39; // r8
  char v40; // r13
  int v41; // ebx
  DXGADAPTER **v42; // r13
  int updated; // eax
  __int64 v44; // rcx
  bool v45; // zf
  RECT DstRect; // xmm0
  int CurrentOrientation; // eax
  UINT v48; // eax
  __int64 v49; // rcx
  RECT SrcRect; // xmm0
  D3DKMT_HANDLE v51; // eax
  UINT i; // r15d
  struct COREDEVICEACCESS *v53; // r14
  DXGPRESENT *v55; // rax
  __int64 v56; // rcx
  DXGPRESENT *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  const RECT *DdiSubRectList; // r15
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  const struct tagRECT *ContentRect; // rbx
  __int64 left; // rcx
  __int64 v78; // rax
  LONG top; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  const struct tagRECT *v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rax
  UINT v85; // r12d
  int v86; // r13d
  int v87; // edi
  __int64 v88; // rbx
  LONG v89; // r8d
  LONG v90; // edx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v107; // r12
  UINT v108; // ebx
  __int64 v109; // rdx
  unsigned int v110; // r9d
  UINT v111; // r10d
  __int64 v112; // r11
  __int64 v113; // rcx
  _QWORD *v114; // rax
  struct DXGALLOCATION *v115; // [rsp+20h] [rbp-100h]
  __int64 v116; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v117; // [rsp+A0h] [rbp-80h] BYREF
  ADAPTER_DISPLAY *v118; // [rsp+A8h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v119[2]; // [rsp+B0h] [rbp-70h] BYREF
  struct _EX_RUNDOWN_REF *v120; // [rsp+C0h] [rbp-60h] BYREF
  union _LARGE_INTEGER v121; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-50h]
  COREDEVICEACCESS *v123; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v124; // [rsp+E0h] [rbp-40h]
  DXGCONTEXT *v125; // [rsp+E8h] [rbp-38h]
  _BYTE v126[32]; // [rsp+F0h] [rbp-30h] BYREF
  struct _DXGKARG_PRESENT v127; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v129[64]; // [rsp+1C0h] [rbp+A0h] BYREF
  _BYTE v130[64]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v131[64]; // [rsp+240h] [rbp+120h] BYREF
  _BYTE v132[64]; // [rsp+280h] [rbp+160h] BYREF

  v6 = this;
  v124 = a5;
  v121.QuadPart = (LONGLONG)a6;
  v125 = this;
  v8 = *((_QWORD *)this + 2);
  v123 = a4;
  v9 = a3;
  v122 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 72LL);
  v10 = *(DXGADAPTER ***)(*(_QWORD *)(v8 + 2856) + 2128LL);
  v118 = (ADAPTER_DISPLAY *)v10;
  if ( !v10 || !DXGADAPTER::IsCoreResourceSharedOwner(v10[2]) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v58 + 24) = 5084LL;
    WdLogEvent5_WdAssertion(v58);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)) )
  {
    v59 = WdLogNewEntry5_WdAssertion(Value);
    *(_QWORD *)(v59 + 24) = 5085LL;
    WdLogEvent5_WdAssertion(v59);
  }
  p_pSrcSubRects = &a2->pSrcSubRects;
  if ( !a2->pSrcSubRects
    || (p_SubRectCnt = &a2->SubRectCnt, !a2->SubRectCnt)
    || (Value = a2->Flags.Value, (((unsigned __int8)Value ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1) == 0)
    || (Value & 0x63C) != 0 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdError(Value);
    LODWORD(v35) = -1073741811;
    v114[3] = -1073741811LL;
    v114[4] = v6;
    v114[5] = *p_pSrcSubRects;
    v114[6] = a2->SubRectCnt;
    v114[7] = a2->Flags.Value;
    WdLogEvent5_WdError(v114);
    return (unsigned int)v35;
  }
  memset(&v127, 0, sizeof(v127));
  hDestination = a2->hDestination;
  v15 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 184));
  v16 = (hDestination >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v15 + 224)
    && (v17 = *(_QWORD *)(v15 + 208),
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        ((hDestination >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 5 )
  {
    v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * v16);
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v120, v19);
  ExReleasePushLockSharedEx(v15 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v120 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    LODWORD(v35) = -1073741811;
    v60[3] = -1073741811LL;
    v60[4] = v6;
    v60[5] = *p_pSrcSubRects;
    v60[6] = *p_SubRectCnt;
    v60[7] = a2->hDestination;
    WdLogEvent5_WdError(v60);
    goto LABEL_70;
  }
  if ( (a2->Flags.Value & 1) != 0 )
  {
    hSource = a2->hSource;
    v22 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 184));
    v23 = (hSource >> 6) & 0xFFFFFF;
    if ( v23 < *(_DWORD *)(v22 + 224)
      && (v24 = *(_QWORD *)(v22 + 208),
          v25 = *(_DWORD *)(v24 + 16LL * v23 + 8),
          ((hSource >> 26) & 0x30) == (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x30))
      && (v25 & 0x1000) == 0
      && (v25 & 0xF) != 0
      && (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0xF) == 5 )
    {
      v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * v23);
    }
    else
    {
      v26 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v119, v26);
    ExReleasePushLockSharedEx(v22 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( !v119[0] )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      LODWORD(v35) = -1073741811;
      v61[3] = -1073741811LL;
      v61[4] = v6;
      v61[5] = a2->hSource;
      WdLogEvent5_WdError(v61);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v119);
      goto LABEL_70;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v119);
  }
  if ( !*((_QWORD *)v6 + 17) )
  {
    v55 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL);
    v57 = v55 ? DXGPRESENT::DXGPRESENT(v55, 1u) : 0LL;
    *((_QWORD *)v6 + 17) = v57;
    if ( !v57 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdLowResource(v56);
      v62[3] = -1073741801LL;
      v62[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL);
      v62[5] = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
      v62[6] = v6;
      WdLogEvent5_WdLowResource(v62);
      LODWORD(v35) = -1073741801;
      goto LABEL_70;
    }
  }
  v28 = *((_QWORD *)v6 + 2);
  v119[0] = 0LL;
  v119[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v28 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v119);
  v31 = v119[0];
  if ( !v119[0] )
  {
    v63 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v63 + 24) = 5149LL;
    WdLogEvent5_WdLowResource(v63);
    LODWORD(v35) = -1073741801;
    goto LABEL_69;
  }
  v32 = *(_DWORD *)v119[0] | 0x10000;
  *(_DWORD *)v119[0] = v32;
  if ( (a2->Flags.Value & 0x4000) == 0 )
    *(_DWORD *)v31 = v32 | 1;
  *(_DWORD *)v31 |= 0x100u;
  v33 = *((_QWORD *)v6 + 2);
  LOBYTE(v30) = 1;
  v117 = 0LL;
  LODWORD(v35) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 400LL) + 8LL)
                                                                                                 + 488LL))(
                   *((_QWORD *)v6 + 26),
                   0LL,
                   v30,
                   &v117);
  if ( (int)v35 < 0 )
    goto LABEL_69;
  if ( !v117 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v64 + 24) = 5167LL;
    WdLogEvent5_WdAssertion(v64);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)v126,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v6 + 2) + 16LL));
  if ( (a2->Flags.Value & 0x4000) == 0 )
  {
    COREDEVICEACCESS::Release(v123);
    v36 = v124;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v124);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v126);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v36);
    v37 = COREDEVICEACCESS::AcquireShared(v123);
    v35 = v37;
    if ( v37 < 0 )
    {
      v65 = WdLogNewEntry5_WdEvent(v38);
      *(_QWORD *)(v65 + 24) = v35;
      *(_QWORD *)(v65 + 32) = v6;
      WdLogEvent5_WdEvent(v65);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v117,
        0LL);
      goto LABEL_68;
    }
    v40 = 0;
    if ( v122 )
    {
      v41 = *(_DWORD *)(*((_QWORD *)v6 + 17) + 8LL);
      if ( v41 != (*(unsigned int (**)(void))(v122 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v6 + 17) + 8LL) = (*(__int64 (**)(void))(v122 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v6 + 2), 2);
        v40 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v6 + 2), v6, v39, v40);
  }
  if ( (a2->Flags.Value & 1) == 0 || a2->hSource == a2->hDestination )
  {
    v42 = (DXGADAPTER **)v118;
    goto LABEL_43;
  }
  v42 = (DXGADAPTER **)v118;
  if ( (*(_DWORD *)(v120[6].Count + 4) & 2) == 0 )
    goto LABEL_43;
  updated = DxgkCddUpdatePresentRects(v118, v9, &a2->pSrcSubRects, &a2->SubRectCnt);
  v35 = updated;
  if ( updated < 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdEvent(v44);
    v66[3] = v35;
    v66[4] = *((_QWORD *)v6 + 2);
    v66[5] = v9;
    goto LABEL_91;
  }
  LODWORD(v35) = 0;
  if ( *p_SubRectCnt )
  {
LABEL_43:
    LODWORD(v35) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v6 + 17), *p_SubRectCnt);
    if ( (int)v35 < 0 )
    {
LABEL_92:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v117,
        0LL);
      v117 = 0LL;
      goto LABEL_68;
    }
    v45 = (a2->Flags.Value & 0x4000) == 0;
    DstRect = a2->DstRect;
    v127.SubRectCnt = *p_SubRectCnt;
    v127.DstRect = DstRect;
    if ( v45 )
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v42, v9, 1);
      v48 = (*(_BYTE *)&v127.Flags.0 ^ (unsigned __int8)((CurrentOrientation != 1) << 7)) & 0x80 ^ v127.Flags.Value;
      v127.Flags.Value = v48;
    }
    else
    {
      v48 = v127.Flags.Value;
    }
    v49 = a2->Flags.Value;
    if ( (v49 & 1) == 0 )
    {
      if ( (v49 & 2) == 0 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v103 + 24) = 5369LL;
        WdLogEvent5_WdAssertion(v103);
        v48 = v127.Flags.Value;
      }
      v127.Flags.Value = v48 | 2;
      v127.Color = a2->Color;
      v127.pDstSubRects = *p_pSrcSubRects;
      goto LABEL_64;
    }
    SrcRect = a2->SrcRect;
    v127.Flags.Value = v48 | 1;
    v51 = a2->hDestination;
    v127.SrcRect = SrcRect;
    if ( a2->hSource != v51 )
    {
      v127.pDstSubRects = *p_pSrcSubRects;
LABEL_49:
      for ( i = 0; i < v127.SubRectCnt; ++i )
      {
        if ( (*p_pSrcSubRects)[i].left >= (*p_pSrcSubRects)[i].right )
        {
          v97 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
          *(_QWORD *)(v97 + 24) = 5353LL;
          WdLogEvent5_WdAssertion(v97);
        }
        if ( (*p_pSrcSubRects)[i].top >= (*p_pSrcSubRects)[i].bottom )
        {
          v98 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
          *(_QWORD *)(v98 + 24) = 5354LL;
          WdLogEvent5_WdAssertion(v98);
        }
        if ( (a2->Flags.Value & 0x4000) == 0 )
        {
          if ( (*p_pSrcSubRects)[i].left < v127.SrcRect.left )
          {
            v99 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v99 + 24) = 5359LL;
            WdLogEvent5_WdAssertion(v99);
          }
          if ( (*p_pSrcSubRects)[i].right > v127.SrcRect.right )
          {
            v100 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v100 + 24) = 5360LL;
            WdLogEvent5_WdAssertion(v100);
          }
          if ( (*p_pSrcSubRects)[i].top < v127.SrcRect.top )
          {
            v101 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v101 + 24) = 5361LL;
            WdLogEvent5_WdAssertion(v101);
          }
          if ( (*p_pSrcSubRects)[i].bottom > v127.SrcRect.bottom )
          {
            v102 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v102 + 24) = 5362LL;
            WdLogEvent5_WdAssertion(v102);
          }
        }
      }
LABEL_64:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 400LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 408LL),
          a2->hDestination);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 400LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 408LL),
          a2->hSource);
        pDstSubRects = v127.pDstSubRects;
        SubRectCnt = v127.SubRectCnt;
        v107 = v117;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          Template_ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v127.DstRect.left),
            HIDWORD(*(_QWORD *)&v127.DstRect.right),
            HIDWORD(*(_QWORD *)&v127.SrcRect.left),
            0LL,
            v117);
        v108 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v109 = SubRectCnt - v108;
            if ( (unsigned int)v109 > 0x10 )
              break;
            v110 = SubRectCnt - v108;
            if ( (_DWORD)v109 )
              goto LABEL_134;
LABEL_136:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v116) = v110;
              LODWORD(v115) = SubRectCnt - v108 <= 0x10;
              Template_ptqDR2DR2DR2DR2((__int64)v132, v109, v104, v107, v115, v116, v132, v131, v130, v129);
            }
            v108 += 16;
            if ( v108 >= SubRectCnt )
              goto LABEL_65;
          }
          v110 = 16;
LABEL_134:
          v111 = v108;
          v112 = v110;
          v104 = 0LL;
          do
          {
            v104 += 4LL;
            v113 = v111++;
            *(_DWORD *)&v131[v104 + 60] = pDstSubRects[v113].left;
            *(_DWORD *)&v130[v104 + 60] = pDstSubRects[v113].right;
            *(_DWORD *)&v129[v104 + 60] = pDstSubRects[v113].top;
            *(_DWORD *)&v129[v104 - 4] = pDstSubRects[v113].bottom;
            --v112;
          }
          while ( v112 );
          goto LABEL_136;
        }
      }
LABEL_65:
      v53 = v123;
      LODWORD(v35) = DXGCONTEXT::SubmitPresent(
                       v6,
                       a2,
                       a2->BroadcastContextCount,
                       (struct DXGCONTEXT **)v121.QuadPart,
                       0LL,
                       a2->hSource,
                       a2->hDestination,
                       &v127,
                       0LL,
                       v117,
                       v119[0],
                       D3DDDIFMT_A8B8G8R8,
                       (struct _D3DKMT_PRESENT *)v123);
      if ( (int)v35 >= 0 && a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_GDI )
      {
        v121.QuadPart = -100000LL;
        LODWORD(v35) = DXGCONTEXT::SubmitPresentHistoryToken(
                         v6,
                         &a2->PresentHistoryToken,
                         v53,
                         v124,
                         0LL,
                         0,
                         &v121,
                         0LL,
                         0LL);
      }
      goto LABEL_68;
    }
    if ( (v49 & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v42, v9) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v6 + 17), 0);
      v70 = (unsigned int)(v127.DstRect.right - v127.DstRect.left);
      v127.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v70 != v127.SrcRect.right - v127.SrcRect.left )
      {
        v71 = WdLogNewEntry5_WdAssertion(v70);
        *(_QWORD *)(v71 + 24) = 5314LL;
        WdLogEvent5_WdAssertion(v71);
      }
      v72 = (unsigned int)(v127.SrcRect.bottom - v127.SrcRect.top);
      if ( v127.DstRect.bottom - v127.DstRect.top != (_DWORD)v72 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v72);
        *(_QWORD *)(v73 + 24) = 5317LL;
        WdLogEvent5_WdAssertion(v73);
      }
      if ( v127.SrcRect.left >= v127.SrcRect.right )
      {
        v74 = WdLogNewEntry5_WdAssertion(v72);
        *(_QWORD *)(v74 + 24) = 5319LL;
        WdLogEvent5_WdAssertion(v74);
      }
      if ( v127.SrcRect.left < 0 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v72);
        *(_QWORD *)(v75 + 24) = 5320LL;
        WdLogEvent5_WdAssertion(v75);
      }
      ContentRect = ADAPTER_DISPLAY::GetContentRect(v42, v9);
      left = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v42, v9)->left;
      if ( v127.SrcRect.right > ContentRect->right - (int)left )
      {
        v78 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v78 + 24) = 5321LL;
        WdLogEvent5_WdAssertion(v78);
      }
      top = v127.DstRect.top;
      if ( v127.DstRect.top >= v127.DstRect.bottom )
      {
        v80 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v80 + 24) = 5323LL;
        WdLogEvent5_WdAssertion(v80);
        top = v127.DstRect.top;
      }
      if ( top < 0 )
      {
        v81 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v81 + 24) = 5324LL;
        WdLogEvent5_WdAssertion(v81);
      }
      v82 = ADAPTER_DISPLAY::GetContentRect(v42, v9);
      v83 = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v42, v9)->top;
      if ( v127.SrcRect.bottom > v82->bottom - (int)v83 )
      {
        v84 = WdLogNewEntry5_WdAssertion(v83);
        *(_QWORD *)(v84 + 24) = 5325LL;
        WdLogEvent5_WdAssertion(v84);
      }
      v85 = 0;
      v86 = v127.DstRect.left - v127.SrcRect.left;
      if ( v127.SubRectCnt )
      {
        v87 = v127.DstRect.top - v127.SrcRect.top;
        do
        {
          v88 = v85;
          v89 = v86 + (*p_pSrcSubRects)[v85].left;
          DdiSubRectList[v88].left = v89;
          v90 = v86 + (*p_pSrcSubRects)[v85].right;
          DdiSubRectList[v88].right = v90;
          DdiSubRectList[v88].top = v87 + (*p_pSrcSubRects)[v85].top;
          DdiSubRectList[v88].bottom = v87 + (*p_pSrcSubRects)[v85].bottom;
          if ( v89 >= v90 )
          {
            v91 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v91 + 24) = 5337LL;
            WdLogEvent5_WdAssertion(v91);
          }
          if ( DdiSubRectList[v85].left < v127.DstRect.left )
          {
            v92 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v92 + 24) = 5338LL;
            WdLogEvent5_WdAssertion(v92);
          }
          if ( DdiSubRectList[v85].right > v127.DstRect.right )
          {
            v93 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v93 + 24) = 5339LL;
            WdLogEvent5_WdAssertion(v93);
          }
          if ( DdiSubRectList[v85].top >= DdiSubRectList[v85].bottom )
          {
            v94 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v94 + 24) = 5340LL;
            WdLogEvent5_WdAssertion(v94);
          }
          if ( DdiSubRectList[v85].top < v127.DstRect.top )
          {
            v95 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v95 + 24) = 5341LL;
            WdLogEvent5_WdAssertion(v95);
          }
          if ( DdiSubRectList[v85].bottom > v127.DstRect.bottom )
          {
            v96 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v96 + 24) = 5342LL;
            WdLogEvent5_WdAssertion(v96);
          }
          ++v85;
        }
        while ( v85 < v127.SubRectCnt );
        v6 = v125;
      }
      goto LABEL_49;
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdEvent(v68);
    LODWORD(v35) = -1071774910;
    v66[3] = -1071774910LL;
    v66[4] = *((_QWORD *)v6 + 2);
    v66[5] = a2->hDestination;
    v66[6] = v9;
LABEL_91:
    WdLogEvent5_WdEvent(v66);
    goto LABEL_92;
  }
  v67 = (_QWORD *)WdLogNewEntry5_WdEvent(v44);
  v67[3] = 0LL;
  v67[4] = *((_QWORD *)v6 + 2);
  v67[5] = a2->hDestination;
  v67[6] = v9;
  WdLogEvent5_WdEvent(v67);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2)
                                                                                                 + 16LL)
                                                                                     + 400LL)
                                                                         + 8LL)
                                                             + 496LL))(
    v117,
    0LL);
  v117 = 0LL;
LABEL_68:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v126);
LABEL_69:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v119);
LABEL_70:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v120);
  return (unsigned int)v35;
}

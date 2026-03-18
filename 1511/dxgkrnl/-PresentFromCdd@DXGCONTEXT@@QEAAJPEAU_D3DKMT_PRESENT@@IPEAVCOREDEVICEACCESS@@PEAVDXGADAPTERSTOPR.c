/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0136560 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0003470 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000C200 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000C240 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000C264 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F398 (Template_ppxppttqddddddddq.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C001F604 (Template_ptqDR2DR2DR2DR2.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C006C644 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00B375C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00B3AE0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00C4BB0 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C0123BF8 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
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
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  DXGADAPTER **v11; // rcx
  __int64 Value; // rcx
  const RECT **p_pSrcSubRects; // r14
  unsigned int *p_SubRectCnt; // r15
  D3DKMT_HANDLE hDestination; // ebx
  __int64 v16; // r13
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // edx
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v23; // r13
  unsigned int v24; // ecx
  __int64 v25; // r8
  int v26; // edx
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v33; // rdx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  COREDEVICEACCESS *v38; // r12
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGPRESENTMUTEX *v42; // r8
  __int64 v43; // r9
  char v44; // r12
  __int64 v45; // r13
  int v46; // ebx
  ADAPTER_DISPLAY *v47; // r13
  int updated; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  bool v53; // zf
  RECT DstRect; // xmm0
  int CurrentOrientation; // eax
  UINT v56; // eax
  __int64 v57; // rcx
  RECT SrcRect; // xmm0
  D3DKMT_HANDLE v59; // eax
  UINT i; // r15d
  struct COREDEVICEACCESS *v61; // r14
  DXGPRESENT *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  DXGPRESENT *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  const RECT *DdiSubRectList; // r15
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  UINT v97; // r12d
  int v98; // r13d
  int v99; // edi
  __int64 v100; // rbx
  LONG v101; // r8d
  LONG v102; // edx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v119; // r12
  UINT v120; // ebx
  __int64 v121; // rdx
  unsigned int v122; // r9d
  UINT v123; // r10d
  __int64 v124; // r11
  __int64 v125; // rcx
  _QWORD *v126; // rax
  struct DXGALLOCATION *v127; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v128; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v129; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v130; // [rsp+A8h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v131[2]; // [rsp+B0h] [rbp-70h] BYREF
  ADAPTER_DISPLAY *v132; // [rsp+C0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v133; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v134; // [rsp+D0h] [rbp-50h] BYREF
  COREDEVICEACCESS *v135; // [rsp+D8h] [rbp-48h]
  __int64 v136; // [rsp+E0h] [rbp-40h]
  DXGADAPTERSTOPRESETLOCKSHARED *v137; // [rsp+E8h] [rbp-38h]
  DXGCONTEXT *v138; // [rsp+F0h] [rbp-30h]
  _BYTE v139[24]; // [rsp+F8h] [rbp-28h] BYREF
  struct _DXGKARG_PRESENT v140; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v142[64]; // [rsp+1C0h] [rbp+A0h] BYREF
  _BYTE v143[64]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v144[64]; // [rsp+240h] [rbp+120h] BYREF
  char v145[64]; // [rsp+280h] [rbp+160h] BYREF

  v6 = this;
  v137 = a5;
  v138 = this;
  v8 = a3;
  v9 = *((_QWORD *)this + 2);
  v134.QuadPart = (LONGLONG)a6;
  v135 = a4;
  v130 = a3;
  v10 = *(_QWORD *)(v9 + 2832);
  v136 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 80LL);
  v11 = *(DXGADAPTER ***)(v10 + 1984);
  v132 = (ADAPTER_DISPLAY *)v11;
  if ( !v11 || !DXGADAPTER::IsCoreResourceSharedOwner(v11[2]) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v69 + 24) = 4563LL;
    WdLogEvent5_WdAssertion(v69);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)) )
  {
    v70 = WdLogNewEntry5_WdAssertion(Value);
    *(_QWORD *)(v70 + 24) = 4564LL;
    WdLogEvent5_WdAssertion(v70);
  }
  p_pSrcSubRects = &a2->pSrcSubRects;
  if ( !a2->pSrcSubRects
    || (p_SubRectCnt = &a2->SubRectCnt, !a2->SubRectCnt)
    || (Value = a2->Flags.Value, (((unsigned __int8)Value ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1) == 0)
    || (Value & 0x63C) != 0 )
  {
    v126 = (_QWORD *)WdLogNewEntry5_WdError(Value);
    LODWORD(v37) = -1073741811;
    v126[3] = -1073741811LL;
    v126[4] = v6;
    v126[5] = *p_pSrcSubRects;
    v126[6] = a2->SubRectCnt;
    v126[7] = a2->Flags.Value;
    WdLogEvent5_WdError(v126);
    return (unsigned int)v37;
  }
  memset(&v140, 0, sizeof(v140));
  hDestination = a2->hDestination;
  v16 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 192));
  v17 = (hDestination >> 6) & 0xFFFFFF;
  if ( v17 < *(_DWORD *)(v16 + 232)
    && (v18 = *(_QWORD *)(v16 + 216),
        v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
        ((hDestination >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
    && (v19 & 0x1000) == 0
    && (v19 & 0xF) != 0
    && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 5 )
  {
    v20 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * v17);
  }
  else
  {
    v20 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v133, v20);
  ExReleasePushLockSharedEx(v16 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v133 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    LODWORD(v37) = -1073741811;
    v71[3] = -1073741811LL;
    v71[4] = v6;
    v71[5] = *p_pSrcSubRects;
    v71[6] = *p_SubRectCnt;
    v71[7] = a2->hDestination;
    WdLogEvent5_WdError(v71);
    goto LABEL_70;
  }
  if ( (a2->Flags.Value & 1) != 0 )
  {
    hSource = a2->hSource;
    v23 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 192));
    v24 = (hSource >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(v23 + 232)
      && (v25 = *(_QWORD *)(v23 + 216),
          v26 = *(_DWORD *)(v25 + 16LL * v24 + 8),
          ((hSource >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x30))
      && (v26 & 0x1000) == 0
      && (v26 & 0xF) != 0
      && (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0xF) == 5 )
    {
      v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * v24);
    }
    else
    {
      v27 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v131, v27);
    ExReleasePushLockSharedEx(v23 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v131[0] )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      LODWORD(v37) = -1073741811;
      v72[3] = -1073741811LL;
      v72[4] = v6;
      v72[5] = a2->hSource;
      WdLogEvent5_WdError(v72);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v131);
      goto LABEL_70;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v131);
  }
  if ( !*((_QWORD *)v6 + 17) )
  {
    v63 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL);
    v68 = v63 ? DXGPRESENT::DXGPRESENT(v63, 1u) : 0LL;
    *((_QWORD *)v6 + 17) = v68;
    if ( !v68 )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdLowResource(v65, v64, v66, v67);
      v73[3] = -1073741801LL;
      v73[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL);
      v73[5] = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
      v73[6] = v6;
      WdLogEvent5_WdLowResource(v73);
      LODWORD(v37) = -1073741801;
      goto LABEL_70;
    }
  }
  v29 = *((_QWORD *)v6 + 2);
  v131[0] = 0LL;
  v131[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v29 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v131);
  v33 = v131[0];
  if ( !v131[0] )
  {
    v74 = WdLogNewEntry5_WdLowResource(v30, 0LL, v31, v32);
    *(_QWORD *)(v74 + 24) = 4628LL;
    WdLogEvent5_WdLowResource(v74);
    LODWORD(v37) = -1073741801;
    goto LABEL_69;
  }
  v34 = *(_DWORD *)v131[0] | 0x10000;
  *(_DWORD *)v131[0] = v34;
  if ( (a2->Flags.Value & 0x4000) == 0 )
    *(_DWORD *)v33 = v34 | 1;
  *(_DWORD *)v33 |= 0x100u;
  v35 = *((_QWORD *)v6 + 2);
  LOBYTE(v31) = 1;
  v129 = 0LL;
  LODWORD(v37) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 424LL) + 8LL)
                                                                                                 + 472LL))(
                   *((_QWORD *)v6 + 26),
                   0LL,
                   v31,
                   &v129);
  if ( (int)v37 < 0 )
    goto LABEL_69;
  if ( !v129 )
  {
    v75 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v75 + 24) = 4646LL;
    WdLogEvent5_WdAssertion(v75);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)v139,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v6 + 2) + 16LL));
  if ( (a2->Flags.Value & 0x4000) == 0 )
  {
    v38 = v135;
    COREDEVICEACCESS::Release(v135);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v137);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v139);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v137);
    v39 = COREDEVICEACCESS::AcquireShared(v38);
    v37 = v39;
    if ( v39 < 0 )
    {
      v76 = WdLogNewEntry5_WdEvent(v41, v40, v42, v43);
      *(_QWORD *)(v76 + 24) = v37;
      *(_QWORD *)(v76 + 32) = v6;
      WdLogEvent5_WdEvent(v76);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 424LL)
                                                                             + 8LL)
                                                                 + 480LL))(
        v129,
        0LL);
      goto LABEL_68;
    }
    v44 = 0;
    v45 = v136;
    if ( v136 )
    {
      v46 = *(_DWORD *)(*((_QWORD *)v6 + 17) + 8LL);
      if ( v46 != (*(unsigned int (**)(void))(v136 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v6 + 17) + 8LL) = (*(__int64 (**)(void))(v45 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v6 + 2), 2);
        v44 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v6 + 2), v6, v42, v44);
    v8 = v130;
  }
  if ( (a2->Flags.Value & 1) == 0 || a2->hSource == a2->hDestination )
  {
    v47 = v132;
    goto LABEL_43;
  }
  v47 = v132;
  if ( (*(_DWORD *)(v133[6].Count + 4) & 2) == 0 )
    goto LABEL_43;
  updated = DxgkCddUpdatePresentRects(v132, v8, &a2->pSrcSubRects, &a2->SubRectCnt);
  v37 = updated;
  if ( updated < 0 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
    v77[3] = v37;
    v77[4] = *((_QWORD *)v6 + 2);
    v77[5] = v8;
    goto LABEL_91;
  }
  LODWORD(v37) = 0;
  if ( *p_SubRectCnt )
  {
LABEL_43:
    LODWORD(v37) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v6 + 17), *p_SubRectCnt);
    if ( (int)v37 < 0 )
    {
LABEL_92:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 424LL)
                                                                             + 8LL)
                                                                 + 480LL))(
        v129,
        0LL);
      v129 = 0LL;
      goto LABEL_68;
    }
    v53 = (a2->Flags.Value & 0x4000) == 0;
    DstRect = a2->DstRect;
    v140.SubRectCnt = *p_SubRectCnt;
    v140.DstRect = DstRect;
    if ( v53 )
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(v47, v8, 1LL);
      v56 = (*(_BYTE *)&v140.Flags.0 ^ (unsigned __int8)((CurrentOrientation != 1) << 7)) & 0x80 ^ v140.Flags.Value;
      v140.Flags.Value = v56;
    }
    else
    {
      v56 = v140.Flags.Value;
    }
    v57 = a2->Flags.Value;
    if ( (v57 & 1) == 0 )
    {
      if ( (v57 & 2) == 0 )
      {
        v115 = WdLogNewEntry5_WdAssertion(v57);
        *(_QWORD *)(v115 + 24) = 4848LL;
        WdLogEvent5_WdAssertion(v115);
        v56 = v140.Flags.Value;
      }
      v140.Flags.Value = v56 | 2;
      v140.Color = a2->Color;
      v140.pDstSubRects = *p_pSrcSubRects;
      goto LABEL_64;
    }
    SrcRect = a2->SrcRect;
    v140.Flags.Value = v56 | 1;
    v59 = a2->hDestination;
    v140.SrcRect = SrcRect;
    if ( a2->hSource != v59 )
    {
      v140.pDstSubRects = *p_pSrcSubRects;
LABEL_49:
      for ( i = 0; i < v140.SubRectCnt; ++i )
      {
        if ( (*p_pSrcSubRects)[i].left >= (*p_pSrcSubRects)[i].right )
        {
          v109 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
          *(_QWORD *)(v109 + 24) = 4832LL;
          WdLogEvent5_WdAssertion(v109);
        }
        if ( (*p_pSrcSubRects)[i].top >= (*p_pSrcSubRects)[i].bottom )
        {
          v110 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
          *(_QWORD *)(v110 + 24) = 4833LL;
          WdLogEvent5_WdAssertion(v110);
        }
        if ( (a2->Flags.Value & 0x4000) == 0 )
        {
          if ( (*p_pSrcSubRects)[i].left < v140.SrcRect.left )
          {
            v111 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v111 + 24) = 4838LL;
            WdLogEvent5_WdAssertion(v111);
          }
          if ( (*p_pSrcSubRects)[i].right > v140.SrcRect.right )
          {
            v112 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v112 + 24) = 4839LL;
            WdLogEvent5_WdAssertion(v112);
          }
          if ( (*p_pSrcSubRects)[i].top < v140.SrcRect.top )
          {
            v113 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v113 + 24) = 4840LL;
            WdLogEvent5_WdAssertion(v113);
          }
          if ( (*p_pSrcSubRects)[i].bottom > v140.SrcRect.bottom )
          {
            v114 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects);
            *(_QWORD *)(v114 + 24) = 4841LL;
            WdLogEvent5_WdAssertion(v114);
          }
        }
      }
LABEL_64:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 424LL)
                                                           + 8LL)
                                               + 320LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 432LL),
          a2->hDestination);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 424LL)
                                                           + 8LL)
                                               + 320LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 432LL),
          a2->hSource);
        pDstSubRects = v140.pDstSubRects;
        SubRectCnt = v140.SubRectCnt;
        v119 = v129;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v140.DstRect.left),
            HIDWORD(*(_QWORD *)&v140.DstRect.right),
            HIDWORD(*(_QWORD *)&v140.SrcRect.left),
            0LL,
            v129);
        v120 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v121 = SubRectCnt - v120;
            if ( (unsigned int)v121 > 0x10 )
              break;
            v122 = SubRectCnt - v120;
            if ( (_DWORD)v121 )
              goto LABEL_134;
LABEL_136:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(v128) = v122;
              LODWORD(v127) = SubRectCnt - v120 <= 0x10;
              Template_ptqDR2DR2DR2DR2((__int64)v143, v121, v116, v119, v127, v128, v143, v144, v145, v142);
            }
            v120 += 16;
            if ( v120 >= SubRectCnt )
              goto LABEL_65;
          }
          v122 = 16;
LABEL_134:
          v123 = v120;
          v124 = v122;
          v116 = 0LL;
          do
          {
            v116 += 4LL;
            v125 = v123++;
            *(_DWORD *)&v142[v116 + 60] = pDstSubRects[v125].left;
            *(_DWORD *)&v143[v116 + 60] = pDstSubRects[v125].right;
            *(_DWORD *)&v144[v116 + 60] = pDstSubRects[v125].top;
            *(_DWORD *)&v142[v116 - 4] = pDstSubRects[v125].bottom;
            --v124;
          }
          while ( v124 );
          goto LABEL_136;
        }
      }
LABEL_65:
      v61 = v135;
      LODWORD(v37) = DXGCONTEXT::SubmitPresent(
                       v6,
                       a2,
                       a2->BroadcastContextCount,
                       (struct DXGCONTEXT **)v134.QuadPart,
                       0LL,
                       a2->hSource,
                       a2->hDestination,
                       &v140,
                       0LL,
                       v129,
                       v131[0],
                       v135);
      if ( (int)v37 >= 0 && a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_GDI )
      {
        v134.QuadPart = -100000LL;
        LODWORD(v37) = DXGCONTEXT::SubmitPresentHistoryToken(v6, &a2->PresentHistoryToken, v61, 0LL, 0, &v134, 0LL, 0LL);
      }
      goto LABEL_68;
    }
    if ( (v57 & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v47, v8) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v6 + 17), 0);
      v84 = (unsigned int)(v140.DstRect.right - v140.DstRect.left);
      v140.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v84 != v140.SrcRect.right - v140.SrcRect.left )
      {
        v85 = WdLogNewEntry5_WdAssertion(v84);
        *(_QWORD *)(v85 + 24) = 4793LL;
        WdLogEvent5_WdAssertion(v85);
      }
      v86 = (unsigned int)(v140.SrcRect.bottom - v140.SrcRect.top);
      if ( v140.DstRect.bottom - v140.DstRect.top != (_DWORD)v86 )
      {
        v87 = WdLogNewEntry5_WdAssertion(v86);
        *(_QWORD *)(v87 + 24) = 4796LL;
        WdLogEvent5_WdAssertion(v87);
      }
      if ( v140.SrcRect.left >= v140.SrcRect.right )
      {
        v88 = WdLogNewEntry5_WdAssertion(v86);
        *(_QWORD *)(v88 + 24) = 4798LL;
        WdLogEvent5_WdAssertion(v88);
      }
      if ( v140.SrcRect.left < 0 )
      {
        v89 = WdLogNewEntry5_WdAssertion(v86);
        *(_QWORD *)(v89 + 24) = 4799LL;
        WdLogEvent5_WdAssertion(v89);
      }
      v90 = 1016LL * v8;
      v91 = (unsigned int)(*(_DWORD *)(v90 + *((_QWORD *)v47 + 17) + 636)
                         - *(_DWORD *)(v90 + *((_QWORD *)v47 + 17) + 628));
      if ( v140.SrcRect.right > (int)v91 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v91);
        *(_QWORD *)(v92 + 24) = 4800LL;
        WdLogEvent5_WdAssertion(v92);
      }
      if ( v140.DstRect.top >= v140.DstRect.bottom )
      {
        v93 = WdLogNewEntry5_WdAssertion(v91);
        *(_QWORD *)(v93 + 24) = 4802LL;
        WdLogEvent5_WdAssertion(v93);
      }
      if ( v140.DstRect.top < 0 )
      {
        v94 = WdLogNewEntry5_WdAssertion(v91);
        *(_QWORD *)(v94 + 24) = 4803LL;
        WdLogEvent5_WdAssertion(v94);
      }
      v95 = (unsigned int)(*(_DWORD *)(v90 + *((_QWORD *)v47 + 17) + 640)
                         - *(_DWORD *)(v90 + *((_QWORD *)v47 + 17) + 632));
      if ( v140.SrcRect.bottom > (int)v95 )
      {
        v96 = WdLogNewEntry5_WdAssertion(v95);
        *(_QWORD *)(v96 + 24) = 4804LL;
        WdLogEvent5_WdAssertion(v96);
      }
      v97 = 0;
      v98 = v140.DstRect.left - v140.SrcRect.left;
      if ( v140.SubRectCnt )
      {
        v99 = v140.DstRect.top - v140.SrcRect.top;
        do
        {
          v100 = v97;
          v101 = v98 + (*p_pSrcSubRects)[v97].left;
          DdiSubRectList[v100].left = v101;
          v102 = v98 + (*p_pSrcSubRects)[v97].right;
          DdiSubRectList[v100].right = v102;
          DdiSubRectList[v100].top = v99 + (*p_pSrcSubRects)[v97].top;
          DdiSubRectList[v100].bottom = v99 + (*p_pSrcSubRects)[v97].bottom;
          if ( v101 >= v102 )
          {
            v103 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v103 + 24) = 4816LL;
            WdLogEvent5_WdAssertion(v103);
          }
          if ( DdiSubRectList[v97].left < v140.DstRect.left )
          {
            v104 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v104 + 24) = 4817LL;
            WdLogEvent5_WdAssertion(v104);
          }
          if ( DdiSubRectList[v97].right > v140.DstRect.right )
          {
            v105 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v105 + 24) = 4818LL;
            WdLogEvent5_WdAssertion(v105);
          }
          if ( DdiSubRectList[v97].top >= DdiSubRectList[v97].bottom )
          {
            v106 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v106 + 24) = 4819LL;
            WdLogEvent5_WdAssertion(v106);
          }
          if ( DdiSubRectList[v97].top < v140.DstRect.top )
          {
            v107 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v107 + 24) = 4820LL;
            WdLogEvent5_WdAssertion(v107);
          }
          if ( DdiSubRectList[v97].bottom > v140.DstRect.bottom )
          {
            v108 = WdLogNewEntry5_WdAssertion(v95);
            *(_QWORD *)(v108 + 24) = 4821LL;
            WdLogEvent5_WdAssertion(v108);
          }
          ++v97;
        }
        while ( v97 < v140.SubRectCnt );
        v6 = v138;
      }
      goto LABEL_49;
    }
    v77 = (_QWORD *)WdLogNewEntry5_WdEvent(v80, v79, v81, v82);
    LODWORD(v37) = -1071774910;
    v77[3] = -1071774910LL;
    v77[4] = *((_QWORD *)v6 + 2);
    v77[5] = a2->hDestination;
    v77[6] = v8;
LABEL_91:
    WdLogEvent5_WdEvent(v77);
    goto LABEL_92;
  }
  v78 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v51, v52);
  v78[3] = 0LL;
  v78[4] = *((_QWORD *)v6 + 2);
  v78[5] = a2->hDestination;
  v78[6] = v8;
  WdLogEvent5_WdEvent(v78);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2)
                                                                                                 + 16LL)
                                                                                     + 424LL)
                                                                         + 8LL)
                                                             + 480LL))(
    v129,
    0LL);
  v129 = 0LL;
LABEL_68:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v139);
LABEL_69:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v131);
LABEL_70:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v133);
  return (unsigned int)v37;
}

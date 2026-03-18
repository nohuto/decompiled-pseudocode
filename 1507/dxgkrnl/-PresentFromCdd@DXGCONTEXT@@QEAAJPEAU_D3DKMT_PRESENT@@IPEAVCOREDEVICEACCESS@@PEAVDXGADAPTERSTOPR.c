/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0131C70 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0001600 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C000E534 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000E574 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000E590 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_ppxppttqddddddddq @ 0x1C001F4AC (Template_ppxppttqddddddddq.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C001F718 (Template_ptqDR2DR2DR2DR2.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00BB890 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00D0A18 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00D147C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00D1554 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C011E418 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        __int64 a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v6; // rdi
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  DXGADAPTER **v12; // rcx
  __int64 v13; // rdx
  __int64 Value; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const RECT **p_pSrcSubRects; // r14
  unsigned int *p_SubRectCnt; // r15
  D3DKMT_HANDLE hDestination; // ebx
  __int64 v20; // r13
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // edx
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v27; // r13
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // edx
  struct _EX_RUNDOWN_REF *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  DXGPRESENT *v36; // rax
  __int64 v37; // rcx
  DXGPRESENT *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v42; // rdx
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  COREDEVICEACCESS *v50; // r12
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DXGPRESENTMUTEX *v54; // r8
  __int64 v55; // r9
  unsigned __int8 v56; // r12
  __int64 v57; // r13
  int v58; // ebx
  ADAPTER_DISPLAY *v59; // r13
  int updated; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  bool v68; // zf
  RECT DstRect; // xmm0
  int CurrentOrientation; // eax
  UINT v71; // eax
  __int64 v72; // rcx
  RECT SrcRect; // xmm0
  D3DKMT_HANDLE v74; // eax
  UINT i; // r15d
  struct COREDEVICEACCESS *v76; // r14
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  const RECT *DdiSubRectList; // r15
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  UINT v112; // r12d
  int v113; // r13d
  int v114; // edi
  __int64 v115; // rbx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v132; // r12
  UINT v133; // ebx
  __int64 v134; // rdx
  unsigned int v135; // r9d
  UINT v136; // r10d
  __int64 v137; // r11
  __int64 v138; // rcx
  _QWORD *v139; // rax
  struct DXGALLOCATION *v140; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v141; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v142; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v143; // [rsp+A8h] [rbp-78h]
  struct VIDSCH_SUBMIT_DATA_BASE *v144[2]; // [rsp+B0h] [rbp-70h] BYREF
  ADAPTER_DISPLAY *v145; // [rsp+C0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v146; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v147; // [rsp+D0h] [rbp-50h] BYREF
  COREDEVICEACCESS *v148; // [rsp+D8h] [rbp-48h]
  __int64 v149; // [rsp+E0h] [rbp-40h]
  DXGADAPTERSTOPRESETLOCKSHARED *v150; // [rsp+E8h] [rbp-38h]
  DXGCONTEXT *v151; // [rsp+F0h] [rbp-30h]
  _BYTE v152[24]; // [rsp+F8h] [rbp-28h] BYREF
  struct _DXGKARG_PRESENT v153; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v155[64]; // [rsp+1C0h] [rbp+A0h] BYREF
  _BYTE v156[64]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v157[64]; // [rsp+240h] [rbp+120h] BYREF
  char v158[64]; // [rsp+280h] [rbp+160h] BYREF

  v6 = this;
  v150 = a5;
  v151 = this;
  v8 = a3;
  v9 = *((_QWORD *)this + 2);
  v147.QuadPart = (LONGLONG)a6;
  v148 = a4;
  v143 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 80LL);
  v11 = *(_QWORD *)(v9 + 18704);
  v149 = v10;
  v12 = *(DXGADAPTER ***)(v11 + 1976);
  v145 = (ADAPTER_DISPLAY *)v12;
  if ( !v12 || !DXGADAPTER::IsCoreResourceSharedOwner(v12[2]) )
  {
    v81 = WdLogNewEntry5_WdAssertion(v12, v10, a3, a4);
    *(_QWORD *)(v81 + 24) = 4581LL;
    WdLogEvent5_WdAssertion(v81);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL)) )
  {
    v82 = WdLogNewEntry5_WdAssertion(Value, v13, v15, v16);
    *(_QWORD *)(v82 + 24) = 4582LL;
    WdLogEvent5_WdAssertion(v82);
  }
  p_pSrcSubRects = &a2->pSrcSubRects;
  if ( !a2->pSrcSubRects
    || (p_SubRectCnt = &a2->SubRectCnt, !a2->SubRectCnt)
    || (Value = a2->Flags.Value, (((unsigned __int8)Value ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1) == 0)
    || (Value & 0x63C) != 0 )
  {
    v139 = (_QWORD *)WdLogNewEntry5_WdError(Value);
    LODWORD(v47) = -1073741811;
    v139[3] = -1073741811LL;
    v139[4] = v6;
    v139[5] = *p_pSrcSubRects;
    v139[6] = a2->SubRectCnt;
    v139[7] = a2->Flags.Value;
    WdLogEvent5_WdError(v139);
    return (unsigned int)v47;
  }
  memset(&v153, 0, sizeof(v153));
  hDestination = a2->hDestination;
  v20 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 192));
  v21 = (hDestination >> 6) & 0xFFFFFF;
  if ( v21 < *(_DWORD *)(v20 + 232)
    && (v22 = *(_QWORD *)(v20 + 216),
        v23 = *(_DWORD *)(v22 + 16LL * v21 + 8),
        ((hDestination >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30))
    && (v23 & 0x1000) == 0
    && (v23 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) == 5 )
  {
    v24 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * v21);
  }
  else
  {
    v24 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v146, v24);
  ExReleasePushLockSharedEx(v20 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v146 )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v47) = -1073741811;
    v83[3] = -1073741811LL;
    v83[4] = v6;
    v83[5] = *p_pSrcSubRects;
    v83[6] = *p_SubRectCnt;
    v83[7] = a2->hDestination;
    WdLogEvent5_WdError(v83);
    goto LABEL_73;
  }
  if ( (a2->Flags.Value & 1) != 0 )
  {
    hSource = a2->hSource;
    v27 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 192));
    v28 = (hSource >> 6) & 0xFFFFFF;
    if ( v28 < *(_DWORD *)(v27 + 232)
      && (v29 = *(_QWORD *)(v27 + 216),
          v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
          ((hSource >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
      && (v30 & 0x1000) == 0
      && (v30 & 0xF) != 0
      && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 5 )
    {
      v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * v28);
    }
    else
    {
      v31 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v144, v31);
    ExReleasePushLockSharedEx(v27 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v144[0] )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      LODWORD(v47) = -1073741811;
      v84[3] = -1073741811LL;
      v84[4] = v6;
      v84[5] = a2->hSource;
      WdLogEvent5_WdError(v84);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v144, v85, v86, v87);
      goto LABEL_73;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v144, v32, v34, v35);
  }
  if ( !*((_QWORD *)v6 + 17) )
  {
    v36 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL);
    v38 = v36 ? DXGPRESENT::DXGPRESENT(v36, 1) : 0LL;
    *((_QWORD *)v6 + 17) = v38;
    if ( !v38 )
    {
      v88 = (_QWORD *)WdLogNewEntry5_WdLowResource(v37);
      v88[3] = -1073741801LL;
      v88[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL);
      v88[5] = *(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL);
      v88[6] = v6;
      WdLogEvent5_WdLowResource(v88);
      LODWORD(v47) = -1073741801;
      goto LABEL_73;
    }
  }
  v39 = *((_QWORD *)v6 + 2);
  v144[0] = 0LL;
  v144[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v39 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v144);
  v42 = v144[0];
  if ( !v144[0] )
  {
    v89 = WdLogNewEntry5_WdLowResource(v40);
    *(_QWORD *)(v89 + 24) = 4646LL;
    WdLogEvent5_WdLowResource(v89);
    LODWORD(v47) = -1073741801;
    goto LABEL_72;
  }
  v43 = *(_DWORD *)v144[0] | 0x20000;
  *(_DWORD *)v144[0] = v43;
  if ( (a2->Flags.Value & 0x4000) == 0 )
    *(_DWORD *)v42 = v43 | 1;
  *(_DWORD *)v42 |= 0x200u;
  v44 = *((_QWORD *)v6 + 2);
  LOBYTE(v41) = 1;
  v142 = 0LL;
  LODWORD(v47) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 400LL) + 8LL)
                                                                                                 + 472LL))(
                   *((_QWORD *)v6 + 26),
                   0LL,
                   v41,
                   &v142);
  if ( (int)v47 < 0 )
    goto LABEL_72;
  if ( !v142 )
  {
    v90 = WdLogNewEntry5_WdAssertion(v46, v45, v48, v49);
    *(_QWORD *)(v90 + 24) = 4664LL;
    WdLogEvent5_WdAssertion(v90);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX(
    (DXGPRESENTMUTEX *)v152,
    *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v6 + 2) + 16LL));
  if ( (a2->Flags.Value & 0x4000) == 0 )
  {
    v50 = v148;
    COREDEVICEACCESS::Release(v148);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v150);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v152);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v150);
    v51 = COREDEVICEACCESS::AcquireShared(v50);
    v47 = v51;
    if ( v51 < 0 )
    {
      v91 = WdLogNewEntry5_WdEvent(v53, v52, v54, v55);
      *(_QWORD *)(v91 + 24) = v47;
      *(_QWORD *)(v91 + 32) = v6;
      WdLogEvent5_WdEvent(v91);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 480LL))(
        v142,
        0LL);
      goto LABEL_71;
    }
    v56 = 0;
    v57 = v149;
    if ( v149 )
    {
      v58 = *(_DWORD *)(*((_QWORD *)v6 + 17) + 8LL);
      if ( v58 != (*(unsigned int (**)(void))(v149 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v6 + 17) + 8LL) = (*(__int64 (**)(void))(v57 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v6 + 2), 2);
        v56 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v6 + 2), v6, v54, v56);
    v8 = v143;
  }
  if ( (a2->Flags.Value & 1) == 0 || a2->hSource == a2->hDestination )
  {
    v59 = v145;
    goto LABEL_46;
  }
  v59 = v145;
  if ( (*(_DWORD *)(v146[6].Count + 4) & 2) == 0 )
    goto LABEL_46;
  updated = DxgkCddUpdatePresentRects((DXGADAPTER **)v145, v8, (struct tagRECT **)&a2->pSrcSubRects, &a2->SubRectCnt);
  v47 = updated;
  if ( updated < 0 )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdEvent(v62, v61, v63, v64);
    v92[3] = v47;
    v92[4] = *((_QWORD *)v6 + 2);
    v92[5] = v8;
    goto LABEL_91;
  }
  LODWORD(v47) = 0;
  if ( *p_SubRectCnt )
  {
LABEL_46:
    LODWORD(v47) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v6 + 17), *p_SubRectCnt);
    if ( (int)v47 < 0 )
    {
LABEL_92:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 480LL))(
        v142,
        0LL);
      v142 = 0LL;
      goto LABEL_71;
    }
    v68 = (a2->Flags.Value & 0x4000) == 0;
    DstRect = a2->DstRect;
    v153.SubRectCnt = *p_SubRectCnt;
    v153.DstRect = DstRect;
    if ( v68 )
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v59, v8, 1);
      v71 = (*(_BYTE *)&v153.Flags.0 ^ (unsigned __int8)((CurrentOrientation != 1) << 7)) & 0x80 ^ v153.Flags.Value;
      v153.Flags.Value = v71;
    }
    else
    {
      v71 = v153.Flags.Value;
    }
    v72 = a2->Flags.Value;
    if ( (v72 & 1) == 0 )
    {
      if ( (v72 & 2) == 0 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v72, v65, v66, v67);
        *(_QWORD *)(v128 + 24) = 4866LL;
        WdLogEvent5_WdAssertion(v128);
        v71 = v153.Flags.Value;
      }
      v153.Flags.Value = v71 | 2;
      v153.Color = a2->Color;
      v153.pDstSubRects = *p_pSrcSubRects;
      goto LABEL_67;
    }
    SrcRect = a2->SrcRect;
    v153.Flags.Value = v71 | 1;
    v74 = a2->hDestination;
    v153.SrcRect = SrcRect;
    if ( a2->hSource != v74 )
    {
      v153.pDstSubRects = *p_pSrcSubRects;
LABEL_52:
      for ( i = 0; i < v153.SubRectCnt; ++i )
      {
        if ( (*p_pSrcSubRects)[i].left >= (*p_pSrcSubRects)[i].right )
        {
          v122 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v65, v66, v67);
          *(_QWORD *)(v122 + 24) = 4850LL;
          WdLogEvent5_WdAssertion(v122);
        }
        if ( (*p_pSrcSubRects)[i].top >= (*p_pSrcSubRects)[i].bottom )
        {
          v123 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v65, v66, v67);
          *(_QWORD *)(v123 + 24) = 4851LL;
          WdLogEvent5_WdAssertion(v123);
        }
        if ( (a2->Flags.Value & 0x4000) == 0 )
        {
          if ( (*p_pSrcSubRects)[i].left < v153.SrcRect.left )
          {
            v124 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v65, v66, v67);
            *(_QWORD *)(v124 + 24) = 4856LL;
            WdLogEvent5_WdAssertion(v124);
          }
          if ( (*p_pSrcSubRects)[i].right > v153.SrcRect.right )
          {
            v125 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v65, v66, v67);
            *(_QWORD *)(v125 + 24) = 4857LL;
            WdLogEvent5_WdAssertion(v125);
          }
          if ( (*p_pSrcSubRects)[i].top < v153.SrcRect.top )
          {
            v126 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v65, v66, v67);
            *(_QWORD *)(v126 + 24) = 4858LL;
            WdLogEvent5_WdAssertion(v126);
          }
          if ( (*p_pSrcSubRects)[i].bottom > v153.SrcRect.bottom )
          {
            v127 = WdLogNewEntry5_WdAssertion(*p_pSrcSubRects, v65, v66, v67);
            *(_QWORD *)(v127 + 24) = 4859LL;
            WdLogEvent5_WdAssertion(v127);
          }
        }
      }
LABEL_67:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 400LL)
                                                           + 8LL)
                                               + 320LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 408LL),
          a2->hDestination);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 400LL)
                                                           + 8LL)
                                               + 320LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 408LL),
          a2->hSource);
        pDstSubRects = v153.pDstSubRects;
        SubRectCnt = v153.SubRectCnt;
        v132 = v142;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v153.DstRect.left),
            HIDWORD(*(_QWORD *)&v153.DstRect.right),
            HIDWORD(*(_QWORD *)&v153.SrcRect.left),
            0LL,
            v142);
        v133 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v134 = SubRectCnt - v133;
            if ( (unsigned int)v134 > 0x10 )
              break;
            v135 = SubRectCnt - v133;
            if ( (_DWORD)v134 )
              goto LABEL_134;
LABEL_136:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(v141) = v135;
              LODWORD(v140) = SubRectCnt - v133 <= 0x10;
              Template_ptqDR2DR2DR2DR2((__int64)v156, v134, v129, v132, v140, v141, v156, v157, v158, v155);
            }
            v133 += 16;
            if ( v133 >= SubRectCnt )
              goto LABEL_68;
          }
          v135 = 16;
LABEL_134:
          v136 = v133;
          v137 = v135;
          v129 = 0LL;
          do
          {
            v129 += 4LL;
            v138 = v136++;
            *(_DWORD *)&v155[v129 + 60] = pDstSubRects[v138].left;
            *(_DWORD *)&v156[v129 + 60] = pDstSubRects[v138].right;
            *(_DWORD *)&v157[v129 + 60] = pDstSubRects[v138].top;
            *(_DWORD *)&v155[v129 - 4] = pDstSubRects[v138].bottom;
            --v137;
          }
          while ( v137 );
          goto LABEL_136;
        }
      }
LABEL_68:
      v76 = v148;
      LODWORD(v47) = DXGCONTEXT::SubmitPresent(
                       v6,
                       a2,
                       a2->BroadcastContextCount,
                       (struct DXGCONTEXT **)v147.QuadPart,
                       0LL,
                       a2->hSource,
                       a2->hDestination,
                       &v153,
                       0LL,
                       v142,
                       v144[0],
                       v148);
      if ( (int)v47 >= 0 && a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_GDI )
      {
        v147.QuadPart = -100000LL;
        LODWORD(v47) = DXGCONTEXT::SubmitPresentHistoryToken(v6, &a2->PresentHistoryToken, v76, 0LL, 0, &v147, 0LL, 0LL);
      }
      goto LABEL_71;
    }
    if ( (v72 & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v59, v8) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v6 + 17), 0);
      v65 = (unsigned int)(v153.SrcRect.right - v153.SrcRect.left);
      v99 = (unsigned int)(v153.DstRect.right - v153.DstRect.left);
      v153.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v99 != (_DWORD)v65 )
      {
        v100 = WdLogNewEntry5_WdAssertion(v99, v65, v66, v67);
        *(_QWORD *)(v100 + 24) = 4811LL;
        WdLogEvent5_WdAssertion(v100);
      }
      v101 = (unsigned int)(v153.SrcRect.bottom - v153.SrcRect.top);
      if ( v153.DstRect.bottom - v153.DstRect.top != (_DWORD)v101 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v101, v65, v66, v67);
        *(_QWORD *)(v102 + 24) = 4814LL;
        WdLogEvent5_WdAssertion(v102);
      }
      if ( v153.SrcRect.left >= v153.SrcRect.right )
      {
        v103 = WdLogNewEntry5_WdAssertion(v101, v65, v66, v67);
        *(_QWORD *)(v103 + 24) = 4816LL;
        WdLogEvent5_WdAssertion(v103);
      }
      if ( v153.SrcRect.left < 0 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v101, v65, v66, v67);
        *(_QWORD *)(v104 + 24) = 4817LL;
        WdLogEvent5_WdAssertion(v104);
      }
      v105 = 1008LL * v8;
      v106 = (unsigned int)(*(_DWORD *)(v105 + *((_QWORD *)v59 + 14) + 636)
                          - *(_DWORD *)(v105 + *((_QWORD *)v59 + 14) + 628));
      if ( v153.SrcRect.right > (int)v106 )
      {
        v107 = WdLogNewEntry5_WdAssertion(v106, v65, v66, v67);
        *(_QWORD *)(v107 + 24) = 4818LL;
        WdLogEvent5_WdAssertion(v107);
      }
      if ( v153.DstRect.top >= v153.DstRect.bottom )
      {
        v108 = WdLogNewEntry5_WdAssertion(v106, v65, v66, v67);
        *(_QWORD *)(v108 + 24) = 4820LL;
        WdLogEvent5_WdAssertion(v108);
      }
      if ( v153.DstRect.top < 0 )
      {
        v109 = WdLogNewEntry5_WdAssertion(v106, v65, v66, v67);
        *(_QWORD *)(v109 + 24) = 4821LL;
        WdLogEvent5_WdAssertion(v109);
      }
      v110 = (unsigned int)(*(_DWORD *)(v105 + *((_QWORD *)v59 + 14) + 640)
                          - *(_DWORD *)(v105 + *((_QWORD *)v59 + 14) + 632));
      if ( v153.SrcRect.bottom > (int)v110 )
      {
        v111 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
        *(_QWORD *)(v111 + 24) = 4822LL;
        WdLogEvent5_WdAssertion(v111);
      }
      v112 = 0;
      v113 = v153.DstRect.left - v153.SrcRect.left;
      if ( v153.SubRectCnt )
      {
        v114 = v153.DstRect.top - v153.SrcRect.top;
        do
        {
          v115 = v112;
          v66 = (unsigned int)(v113 + (*p_pSrcSubRects)[v112].left);
          DdiSubRectList[v115].left = v66;
          v65 = (unsigned int)(v113 + (*p_pSrcSubRects)[v112].right);
          DdiSubRectList[v115].right = v65;
          DdiSubRectList[v115].top = v114 + (*p_pSrcSubRects)[v112].top;
          DdiSubRectList[v115].bottom = v114 + (*p_pSrcSubRects)[v112].bottom;
          if ( (int)v66 >= (int)v65 )
          {
            v116 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
            *(_QWORD *)(v116 + 24) = 4834LL;
            WdLogEvent5_WdAssertion(v116);
          }
          if ( DdiSubRectList[v112].left < v153.DstRect.left )
          {
            v117 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
            *(_QWORD *)(v117 + 24) = 4835LL;
            WdLogEvent5_WdAssertion(v117);
          }
          if ( DdiSubRectList[v112].right > v153.DstRect.right )
          {
            v118 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
            *(_QWORD *)(v118 + 24) = 4836LL;
            WdLogEvent5_WdAssertion(v118);
          }
          if ( DdiSubRectList[v112].top >= DdiSubRectList[v112].bottom )
          {
            v119 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
            *(_QWORD *)(v119 + 24) = 4837LL;
            WdLogEvent5_WdAssertion(v119);
          }
          if ( DdiSubRectList[v112].top < v153.DstRect.top )
          {
            v120 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
            *(_QWORD *)(v120 + 24) = 4838LL;
            WdLogEvent5_WdAssertion(v120);
          }
          if ( DdiSubRectList[v112].bottom > v153.DstRect.bottom )
          {
            v121 = WdLogNewEntry5_WdAssertion(v110, v65, v66, v67);
            *(_QWORD *)(v121 + 24) = 4839LL;
            WdLogEvent5_WdAssertion(v121);
          }
          ++v112;
        }
        while ( v112 < v153.SubRectCnt );
        v6 = v151;
      }
      goto LABEL_52;
    }
    v92 = (_QWORD *)WdLogNewEntry5_WdEvent(v95, v94, v96, v97);
    LODWORD(v47) = -1071774910;
    v92[3] = -1071774910LL;
    v92[4] = *((_QWORD *)v6 + 2);
    v92[5] = a2->hDestination;
    v92[6] = v8;
LABEL_91:
    WdLogEvent5_WdEvent(v92);
    goto LABEL_92;
  }
  v93 = (_QWORD *)WdLogNewEntry5_WdEvent(v62, v61, v63, v64);
  v93[3] = 0LL;
  v93[4] = *((_QWORD *)v6 + 2);
  v93[5] = a2->hDestination;
  v93[6] = v8;
  WdLogEvent5_WdEvent(v93);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2)
                                                                                                 + 16LL)
                                                                                     + 400LL)
                                                                         + 8LL)
                                                             + 480LL))(
    v142,
    0LL);
  v142 = 0LL;
LABEL_71:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v152);
LABEL_72:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v144);
LABEL_73:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v146, v77, v78, v79);
  return (unsigned int)v47;
}

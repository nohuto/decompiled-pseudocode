/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C0160150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000FAF4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_qqqqqqq @ 0x1C0010608 (Template_qqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00698B8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147AFC (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _CapturePresentMultiPlaneOverlayArgs_::_19_::_AUTO::__AUTO @ 0x1C015BC20 (_CapturePresentMultiPlaneOverlayArgs_--_19_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C015BF10 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGDEVICE **v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // ebx
  __int64 v31; // rax
  unsigned int v32; // ebx
  PVOID PoolWithTag; // rax
  struct DXGDEVICE ***v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r11
  unsigned int v37; // r9d
  __int64 v38; // rcx
  __int64 v39; // r10
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  struct DXGDEVICE *v51; // rax
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rcx
  struct DXGDEVICE *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int16 v70; // ax
  struct DXGCONTEXT *v72; // [rsp+90h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0;
  memset((void *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 260), 0, 0x12CuLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v3, &EventProfilerEnter, v4, 2092);
  Current = DXGPROCESS::GetCurrent(v3);
  if ( !a1 )
  {
    v7 = -1073741811;
    LOBYTE(v8) = 13;
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
    WdLogEvent5_WdError(v9);
    goto LABEL_55;
  }
  *(_OWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
  v14 = CapturePresentMultiPlaneOverlayArgs(
          a1,
          (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)(v1 + 256),
          (struct D3DKMT_MULTIPLANE_OVERLAY **)(v1 + 72),
          (struct tagRECT **)(v1 + 80));
  v8 = v14;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) >= 0x10u )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208);
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      goto LABEL_54;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)(v1 + 104),
      *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100),
      Current,
      (struct DXGCONTEXT **)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL),
      0);
    v23 = *(struct DXGDEVICE ***)v1;
    if ( !*(_QWORD *)v1 )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v24[3] = -1073741811LL;
      v24[4] = PsGetCurrentProcess(v25);
      v24[5] = *(unsigned int *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
      WdLogEvent5_WdWarning(v24);
LABEL_53:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v1 + 104));
      goto LABEL_54;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v1 + 88), v23[2]);
    v30 = *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104);
    if ( v30 > 0x40 )
    {
      v31 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      v7 = -1073741811;
      *(_QWORD *)(v31 + 24) = v23;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
LABEL_52:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v1 + 88));
      goto LABEL_53;
    }
    *(_QWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
    v32 = v30 + 1;
    *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
    if ( v32 <= 4 )
    {
      PoolWithTag = (PVOID)(v1 + 32);
    }
    else
    {
      v27 = v32;
      v26 = 0xFFFFFFFFFFFFFFFFuLL % v32;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v32 < 8 )
        goto LABEL_50;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v32, 0x4B677844u);
    }
    *(_QWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = PoolWithTag;
    *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v32;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v32);
      v34 = *(struct DXGDEVICE ****)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( v34 )
      {
        *v34 = v23;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL),
          Current);
        v35 = 0LL;
        if ( *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) )
        {
          v36 = *(_QWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v37 = 1;
          while ( 1 )
          {
            v38 = (*(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108 + 4 * v35) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v38 < *((_DWORD *)Current + 58)
              && (v39 = *((_QWORD *)Current + 27),
                  v40 = *(_DWORD *)(v39 + 16LL * (unsigned int)v38 + 8),
                  ((*(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108 + 4 * v35) >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * (unsigned int)v38 + 8) & 0x30))
              && (v40 & 0x1000) == 0
              && (v40 & 0xF) != 0
              && (v41 = 2 * v38, (*(_BYTE *)(v39 + 8 * v41 + 8) & 0xF) == 7) )
            {
              v42 = *(_QWORD *)(v39 + 8 * v41);
            }
            else
            {
              v42 = 0LL;
            }
            *(_QWORD *)(v36 + 8LL * v37) = v42;
            v36 = *(_QWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v43 = *(_QWORD *)(v36 + 8LL * v37);
            if ( !v43 || *(struct DXGDEVICE **)(v43 + 16) != v23[2] )
              break;
            v35 = (unsigned int)(v35 + 1);
            ++v37;
            if ( (unsigned int)v35 >= *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) )
              goto LABEL_32;
          }
          v49 = (_QWORD *)WdLogNewEntry5_WdError(v43);
          v7 = -1073741811;
          v49[3] = v23;
          v49[4] = *(unsigned int *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108 + 4 * v35);
          v49[5] = (unsigned int)v35;
          v49[6] = -1073741811LL;
          WdLogEvent5_WdError(v49);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL));
        }
        else
        {
LABEL_32:
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL));
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            v1 + 120,
            *(const void **)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
          if ( *(_BYTE *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) )
          {
            if ( *(_QWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
            {
              v50 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
              *(_QWORD *)(v50 + 24) = 425LL;
              WdLogEvent5_WdWarning(v50);
              v7 = -1073741811;
            }
            else
            {
              v48 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
              *(_QWORD *)(v48 + 24) = 420LL;
              WdLogEvent5_WdWarning(v48);
              v7 = -1073741801;
            }
          }
          else
          {
            v51 = v23[2];
            *(_BYTE *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
            *(_QWORD *)v1 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL));
            COREDEVICEACCESS::COREDEVICEACCESS(v1 + 176, (__int64)v23[2], 1, v52, 0);
            v53 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v1 + 176));
            v8 = v53;
            if ( v53 >= 0 )
            {
              if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*((_QWORD *)v23[2] + 2338) + 1976LL),
                     v23[2],
                     *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208)) )
              {
                v65 = v23[2];
                v66 = *(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL);
                if ( *((_QWORD *)v65 + 2338) == v66 )
                {
                  LODWORD(v8) = DXGCONTEXT::PresentMultiPlaneOverlay(
                                  (DXGCONTEXT *)v23,
                                  (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)(v1 + 256),
                                  (struct COREDEVICEACCESS *)(v1 + 176),
                                  *(struct DXGCONTEXT ***)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
                }
                else
                {
                  v67 = WdLogNewEntry5_WdWarning(v66, v65, v60, v61);
                  *(_QWORD *)(v67 + 24) = -1073741811LL;
                  *(_QWORD *)(v67 + 32) = PsGetCurrentProcess(v68);
                  WdLogEvent5_WdWarning(v67);
                  LODWORD(v8) = -1073741811;
                }
                if ( (_DWORD)v8 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle(v23[2], (DXGADAPTER **)(v1 + 176));
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 176));
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL));
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(v1 + 120);
                PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)(v1 + 24));
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v1 + 88));
                v7 = v8;
                goto LABEL_53;
              }
              LODWORD(v8) = -1073741790;
              v63 = WdLogNewEntry5_WdError(v62);
              *(_QWORD *)(v63 + 24) = -1073741790LL;
              *(_QWORD *)(v63 + 32) = PsGetCurrentProcess(v64);
              WdLogEvent5_WdError(v63);
            }
            else
            {
              v58 = WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
              *(_QWORD *)(v58 + 24) = v8;
              *(_QWORD *)(v58 + 32) = PsGetCurrentProcess(v59);
              WdLogEvent5_WdWarning(v58);
            }
            v7 = v8;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 176));
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL));
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(v1 + 120);
        }
        goto LABEL_51;
      }
    }
LABEL_50:
    v69 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v69 + 24) = 371LL;
    WdLogEvent5_WdWarning(v69);
    v7 = -1073741801;
LABEL_51:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)(v1 + 24));
    goto LABEL_52;
  }
  v16 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v16 + 24) = v8;
  *(_QWORD *)(v16 + 32) = PsGetCurrentProcess(v17);
  WdLogEvent5_WdError(v16);
  v7 = v8;
LABEL_54:
  CapturePresentMultiPlaneOverlayArgs_::_19_::_AUTO::__AUTO((void **)(v1 + 72));
LABEL_55:
  if ( (qword_1C00467F0 & 2) != 0 )
  {
    v70 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_qqqqqqq(
        v12,
        v11,
        v13,
        *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100),
        *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208),
        *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20C),
        *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210),
        *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x214),
        *(_DWORD *)(((unsigned __int64)&v72 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218),
        v8);
      v70 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    if ( (v70 & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2092);
  }
  return v7;
}

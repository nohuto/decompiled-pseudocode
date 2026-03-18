/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C018BB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0001788 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_qqqqqqq @ 0x1C001214C (Template_qqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00A45C8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C0185510 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C0185EDC (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188EE4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // rdi
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGDEVICE **v25; // r14
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // ebx
  __int64 v33; // rax
  unsigned int v34; // ebx
  PVOID PoolWithTag; // rax
  struct DXGDEVICE ***v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r11
  unsigned int v39; // r9d
  __int64 v40; // rcx
  __int64 v41; // r10
  int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rcx
  struct DXGDEVICE *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int16 v71; // ax
  struct DXGCONTEXT *v73[2]; // [rsp+90h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 272), 0, 0x130uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v3, &EventProfilerEnter, v4, 2092);
  CurrentProcess = PsGetCurrentProcess(v3);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !a1 )
  {
    v9 = -1073741811;
    LOBYTE(v10) = 13;
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v12);
    WdLogEvent5_WdError(v11);
    goto LABEL_55;
  }
  *(_OWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  v16 = CapturePresentMultiPlaneOverlayArgs(
          a1,
          (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)(v1 + 272),
          (struct D3DKMT_MULTIPLANE_OVERLAY **)(v1 + 64),
          (struct tagRECT **)(v1 + 72));
  v10 = v16;
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) >= 0x10u )
    {
      v9 = -1073741811;
      LOBYTE(v10) = 13;
      v20 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v20 + 24) = *(unsigned int *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218);
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
      goto LABEL_54;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)(v1 + 104),
      *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110),
      (struct DXGPROCESS *)ProcessDxgProcess,
      (struct DXGCONTEXT **)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL),
      0);
    v25 = *(struct DXGDEVICE ***)v1;
    if ( !*(_QWORD *)v1 )
    {
      v9 = -1073741811;
      LOBYTE(v10) = 13;
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      v26[3] = -1073741811LL;
      v26[4] = PsGetCurrentProcess(v27);
      v26[5] = *(unsigned int *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110);
      WdLogEvent5_WdWarning(v26);
LABEL_53:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v1 + 104));
      goto LABEL_54;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL),
      v25[2]);
    v32 = *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114);
    if ( v32 > 0x40 )
    {
      v33 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      v9 = -1073741811;
      *(_QWORD *)(v33 + 24) = v25;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
LABEL_52:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_53;
    }
    *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    v34 = v32 + 1;
    *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
    if ( v34 <= 4 )
    {
      PoolWithTag = (PVOID)(v1 + 24);
    }
    else
    {
      v29 = v34;
      v28 = 0xFFFFFFFFFFFFFFFFuLL % v34;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v34 < 8 )
        goto LABEL_50;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v34, 0x4B677844u);
    }
    *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = PoolWithTag;
    *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v34;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v34);
      v36 = *(struct DXGDEVICE ****)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( v36 )
      {
        *v36 = v25;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)(v1 + 80),
          (struct _KTHREAD **)ProcessDxgProcess);
        v37 = 0LL;
        if ( *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114) )
        {
          v38 = *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v39 = 1;
          while ( 1 )
          {
            v40 = (*(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118 + 4 * v37) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v40 < *(_DWORD *)(ProcessDxgProcess + 224)
              && (v41 = *(_QWORD *)(ProcessDxgProcess + 208),
                  v42 = *(_DWORD *)(v41 + 16LL * (unsigned int)v40 + 8),
                  ((*(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118 + 4 * v37) >> 26) & 0x30) == (*(_BYTE *)(v41 + 16LL * (unsigned int)v40 + 8) & 0x30))
              && (v42 & 0x1000) == 0
              && (v42 & 0xF) != 0
              && (v43 = 2 * v40, (*(_BYTE *)(v41 + 8 * v43 + 8) & 0xF) == 7) )
            {
              v44 = *(_QWORD *)(v41 + 8 * v43);
            }
            else
            {
              v44 = 0LL;
            }
            *(_QWORD *)(v38 + 8LL * v39) = v44;
            v38 = *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v45 = *(_QWORD *)(v38 + 8LL * v39);
            if ( !v45 || *(struct DXGDEVICE **)(v45 + 16) != v25[2] )
              break;
            v37 = (unsigned int)(v37 + 1);
            ++v39;
            if ( (unsigned int)v37 >= *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114) )
              goto LABEL_32;
          }
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v45);
          v9 = -1073741811;
          v51[3] = v25;
          v51[4] = *(unsigned int *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118 + 4 * v37);
          v51[5] = (unsigned int)v37;
          v51[6] = -1073741811LL;
          WdLogEvent5_WdError(v51);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v1 + 80));
        }
        else
        {
LABEL_32:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v1 + 80));
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            v1 + 120,
            *(const void **)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
          if ( *(_BYTE *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) )
          {
            if ( *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
            {
              v52 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
              *(_QWORD *)(v52 + 24) = 425LL;
              WdLogEvent5_WdWarning(v52);
              v9 = -1073741811;
            }
            else
            {
              v50 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
              *(_QWORD *)(v50 + 24) = 420LL;
              WdLogEvent5_WdWarning(v50);
              v9 = -1073741801;
            }
          }
          else
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)(v1 + 80),
              *(struct DXGADAPTER **)(*((_QWORD *)v25[2] + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS(v1 + 176, (__int64)v25[2], 1, v53, 0);
            v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v1 + 176));
            v10 = v54;
            if ( v54 >= 0 )
            {
              if ( (*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*((_QWORD *)v25[2] + 357) + 2128LL),
                     v25[2],
                     *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218)) )
              {
                v66 = v25[2];
                v67 = *(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL);
                if ( *((_QWORD *)v66 + 357) == v67 )
                {
                  LODWORD(v10) = DXGCONTEXT::PresentMultiPlaneOverlay(
                                   (DXGCONTEXT *)v25,
                                   (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)(v1 + 272),
                                   (struct COREDEVICEACCESS *)(v1 + 176),
                                   *(struct DXGCONTEXT ***)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
                }
                else
                {
                  v68 = WdLogNewEntry5_WdWarning(v67, v66, v61, v62);
                  *(_QWORD *)(v68 + 24) = -1073741811LL;
                  *(_QWORD *)(v68 + 32) = PsGetCurrentProcess(v69);
                  WdLogEvent5_WdWarning(v68);
                  LODWORD(v10) = -1073741811;
                }
                if ( (_DWORD)v10 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle(v25[2], (DXGADAPTER **)(v1 + 176));
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 176));
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v1 + 80));
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(v1 + 120);
                PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)(v1 + 16));
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL));
                v9 = v10;
                goto LABEL_53;
              }
              LODWORD(v10) = -1073741790;
              v64 = WdLogNewEntry5_WdError(v63);
              *(_QWORD *)(v64 + 24) = -1073741790LL;
              *(_QWORD *)(v64 + 32) = PsGetCurrentProcess(v65);
              WdLogEvent5_WdError(v64);
            }
            else
            {
              v59 = WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
              *(_QWORD *)(v59 + 24) = v10;
              *(_QWORD *)(v59 + 32) = PsGetCurrentProcess(v60);
              WdLogEvent5_WdWarning(v59);
            }
            v9 = v10;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 176));
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v1 + 80));
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(v1 + 120);
        }
        goto LABEL_51;
      }
    }
LABEL_50:
    v70 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    *(_QWORD *)(v70 + 24) = 371LL;
    WdLogEvent5_WdWarning(v70);
    v9 = -1073741801;
LABEL_51:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)(v1 + 16));
    goto LABEL_52;
  }
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = v10;
  *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v19);
  WdLogEvent5_WdError(v18);
  v9 = v10;
LABEL_54:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)(v1 + 64));
LABEL_55:
  if ( (qword_1C0056840 & 2) != 0 )
  {
    v71 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_qqqqqqq(
        v14,
        v13,
        v15,
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x21C),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x224),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228),
        v10);
      v71 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    if ( (v71 & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2092);
  }
  return v9;
}

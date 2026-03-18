/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C0164410
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_qqqqqqq @ 0x1C0011D78 (Template_qqqqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B818 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     sub_1C015FF14 @ 0x1C015FF14 (sub_1C015FF14.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C0160204 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r15
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
  unsigned int v35; // ebx
  unsigned int v36; // r12d
  unsigned int v37; // edi
  unsigned int v38; // ecx
  __int64 v39; // r8
  int v40; // edx
  __int64 v41; // rdi
  _QWORD *v42; // rdx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rcx
  struct DXGDEVICE *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rcx
  void *v68; // rcx
  __int64 v69; // rax
  void *v70; // rcx
  __int16 v71; // ax
  _BYTE v73[576]; // [rsp+2D0h] [rbp+2D0h] BYREF

  v1 = (unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0;
  memset((void *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 260), 0, 0x12CuLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v3, &EventProfilerEnter, v4, 2092);
  Current = DXGPROCESS::GetCurrent();
  if ( !a1 )
  {
    v7 = -1073741811;
    LOBYTE(v8) = 13;
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
    WdLogEvent5_WdError(v9);
    goto LABEL_68;
  }
  *(_OWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  v14 = CapturePresentMultiPlaneOverlayArgs(
          a1,
          (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)(v1 + 256),
          (struct D3DKMT_MULTIPLANE_OVERLAY **)(v1 + 80),
          (struct tagRECT **)(v1 + 88));
  v8 = v14;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) >= 0x10u )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208);
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      goto LABEL_67;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)(v1 + 96),
      *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100),
      Current,
      (struct DXGCONTEXT **)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL),
      0);
    v23 = *(struct DXGDEVICE ***)v1;
    if ( !*(_QWORD *)v1 )
    {
      v7 = -1073741811;
      LOBYTE(v8) = 13;
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v24[3] = -1073741811LL;
      v24[4] = PsGetCurrentProcess(v25);
      v24[5] = *(unsigned int *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
      WdLogEvent5_WdWarning(v24);
LABEL_66:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v1 + 96));
      goto LABEL_67;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v1 + 64), v23[2]);
    v30 = *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104);
    if ( v30 > 0x40 )
    {
      v31 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      v7 = -1073741811;
      *(_QWORD *)(v31 + 24) = v23;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
LABEL_64:
      if ( *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v1 + 64));
      goto LABEL_66;
    }
    v32 = v30 + 1;
    *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
    if ( v32 <= 4 )
    {
      PoolWithTag = (PVOID)(v1 + 24);
    }
    else
    {
      v27 = v32;
      v26 = 0xFFFFFFFFFFFFFFFFuLL % v32;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v32 < 8 )
        goto LABEL_60;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v32, 0x4B677844u);
    }
    *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = PoolWithTag;
    *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v32;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v32);
      v34 = *(struct DXGDEVICE ****)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( v34 )
      {
        *v34 = v23;
        v35 = 0;
        if ( *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) )
        {
          v36 = 1;
          while ( 1 )
          {
            v37 = *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108 + 4LL * v35);
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
            v38 = (v37 >> 6) & 0xFFFFFF;
            if ( v38 < *((_DWORD *)Current + 58)
              && (v39 = *((_QWORD *)Current + 27),
                  v40 = *(_DWORD *)(v39 + 16LL * v38 + 8),
                  ((v37 >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x30))
              && (v40 & 0x1000) == 0
              && (v40 & 0xF) != 0
              && (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0xF) == 7 )
            {
              v41 = *(_QWORD *)(v39 + 16LL * v38);
            }
            else
            {
              v41 = 0LL;
            }
            ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 8LL * v36) = v41;
            v42 = *(_QWORD **)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v43 = v42[v36];
            if ( !v43 || *(struct DXGDEVICE **)(v43 + 16) != v23[2] )
              break;
            ++v35;
            ++v36;
            if ( v35 >= *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) )
              goto LABEL_35;
          }
          v44 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v7 = -1073741811;
          v44[3] = v23;
          v44[4] = *(unsigned int *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108 + 4LL * v35);
          v44[5] = v35;
          v44[6] = -1073741811LL;
          WdLogEvent5_WdError(v44);
        }
        else
        {
          v42 = *(_QWORD **)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_35:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            v1 + 112,
            v42,
            *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
          if ( *(_BYTE *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) )
          {
            if ( *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) )
            {
              v50 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
              *(_QWORD *)(v50 + 24) = 417LL;
              WdLogEvent5_WdWarning(v50);
              v7 = -1073741811;
            }
            else
            {
              v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
              *(_QWORD *)(v49 + 24) = 412LL;
              WdLogEvent5_WdWarning(v49);
              v7 = -1073741801;
            }
          }
          else
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL),
              *(struct DXGADAPTER **)(*((_QWORD *)v23[2] + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS(v1 + 176, (__int64)v23[2], 1, v51, 0);
            v52 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v1 + 176));
            v8 = v52;
            if ( v52 >= 0 )
            {
              if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*((_QWORD *)v23[2] + 354) + 1984LL),
                     v23[2],
                     *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208)) )
              {
                v64 = v23[2];
                v65 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
                if ( *((_QWORD *)v64 + 354) == v65 )
                {
                  LODWORD(v8) = DXGCONTEXT::PresentMultiPlaneOverlay(
                                  (DXGCONTEXT *)v23,
                                  (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)(v1 + 256),
                                  (struct COREDEVICEACCESS *)(v1 + 176),
                                  *(struct DXGCONTEXT ***)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
                }
                else
                {
                  v66 = WdLogNewEntry5_WdWarning(v65, v64, v59, v60);
                  *(_QWORD *)(v66 + 24) = -1073741811LL;
                  *(_QWORD *)(v66 + 32) = PsGetCurrentProcess(v67);
                  WdLogEvent5_WdWarning(v66);
                  LODWORD(v8) = -1073741811;
                }
                if ( (_DWORD)v8 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle(v23[2], (DXGADAPTER **)(v1 + 176));
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 176));
                if ( *(_BYTE *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL));
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(v1 + 112);
                v68 = *(void **)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                if ( v68 != (void *)(v1 + 24) && v68 )
                  ExFreePoolWithTag(v68, 0);
                if ( *(_QWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v1 + 64));
                v7 = v8;
                goto LABEL_66;
              }
              LODWORD(v8) = -1073741790;
              v62 = WdLogNewEntry5_WdError(v61);
              *(_QWORD *)(v62 + 24) = -1073741790LL;
              *(_QWORD *)(v62 + 32) = PsGetCurrentProcess(v63);
              WdLogEvent5_WdError(v62);
            }
            else
            {
              v57 = WdLogNewEntry5_WdWarning(v54, v53, v55, v56);
              *(_QWORD *)(v57 + 24) = v8;
              *(_QWORD *)(v57 + 32) = PsGetCurrentProcess(v58);
              WdLogEvent5_WdWarning(v57);
            }
            v7 = v8;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v1 + 176));
            if ( *(_BYTE *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL));
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(v1 + 112);
        }
        goto LABEL_61;
      }
    }
LABEL_60:
    v69 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v69 + 24) = 371LL;
    WdLogEvent5_WdWarning(v69);
    v7 = -1073741801;
LABEL_61:
    v70 = *(void **)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( v70 != (void *)(v1 + 24) && v70 )
      ExFreePoolWithTag(v70, 0);
    goto LABEL_64;
  }
  v16 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v16 + 24) = v8;
  *(_QWORD *)(v16 + 32) = PsGetCurrentProcess(v17);
  WdLogEvent5_WdError(v16);
  v7 = v8;
LABEL_67:
  sub_1C015FF14((void **)(v1 + 80));
LABEL_68:
  if ( (qword_1C00467F0 & 2) != 0 )
  {
    v71 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_qqqqqqq(
        v12,
        v11,
        v13,
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20C),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x214),
        *(_DWORD *)(((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218),
        v8);
      v71 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    if ( (v71 & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v13, 2092);
  }
  return v7;
}

/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C0164A80
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
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B818 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     sub_1C015FF14 @ 0x1C015FF14 (sub_1C015FF14.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C015FF34 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  ULONG v25; // ebx
  _BYTE *PoolWithTag; // rax
  ULONG v27; // ebx
  unsigned int v28; // r15d
  D3DKMT_HANDLE v29; // edi
  unsigned int v30; // ecx
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rdi
  PVOID v34; // rdx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  struct DXGCONTEXT *v62; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+48h] [rbp-C0h]
  _BYTE v65[32]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+70h] [rbp-98h]
  _QWORD v67[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v68[2]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v69[16]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v70[6]; // [rsp+A8h] [rbp-60h] BYREF
  char v71; // [rsp+D8h] [rbp-30h]
  DXGADAPTER *v72[10]; // [rsp+E8h] [rbp-20h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v73; // [rsp+138h] [rbp+30h] BYREF

  memset(&v73, 0, sizeof(v73));
  Current = DXGPROCESS::GetCurrent();
  if ( a1 )
  {
    *(_OWORD *)v68 = 0LL;
    v7 = CapturePresentMultiPlaneOverlayArgs2(a1, &v73, v68, (struct tagRECT **)&v68[1]);
    v4 = v7;
    if ( v7 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v4;
      *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
      v11 = v9;
LABEL_7:
      WdLogEvent5_WdError(v11);
LABEL_57:
      sub_1C015FF14((void **)v68);
      return (unsigned int)v4;
    }
    if ( v73.VidPnSourceId >= 0x10 )
    {
      v12 = WdLogNewEntry5_WdError(v8);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v12 + 24) = v73.VidPnSourceId;
      v11 = v12;
      *(_QWORD *)(v12 + 32) = -1073741811LL;
      goto LABEL_7;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v69, v73.hDevice, Current, &v62, 0);
    v17 = (__int64 *)v62;
    if ( !v62 )
    {
      LODWORD(v4) = -1073741811;
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v18[3] = -1073741811LL;
      v18[4] = PsGetCurrentProcess(v19);
      v18[5] = v73.hDevice;
      WdLogEvent5_WdWarning(v18);
LABEL_56:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v69);
      goto LABEL_57;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v67,
      *((struct DXGDEVICE **)v62 + 2));
    if ( v73.BroadcastContextCount > 0x40 )
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v24 + 24) = v17;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
LABEL_54:
      if ( v67[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v67);
      goto LABEL_56;
    }
    v25 = v73.BroadcastContextCount + 1;
    P = 0LL;
    LODWORD(v66) = 0;
    if ( v73.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = v65;
    }
    else
    {
      v21 = v25;
      v20 = 0xFFFFFFFFFFFFFFFFuLL % v25;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        goto LABEL_50;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v25, 0x4B677844u);
    }
    P = PoolWithTag;
    LODWORD(v66) = v25;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v25);
      if ( P )
      {
        *(_QWORD *)P = v17;
        v27 = 0;
        if ( v73.BroadcastContextCount )
        {
          v28 = 1;
          while ( 1 )
          {
            v29 = v73.BroadcastContext[v27];
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
            v30 = (v29 >> 6) & 0xFFFFFF;
            if ( v30 < *((_DWORD *)Current + 58)
              && (v31 = *((_QWORD *)Current + 27),
                  v32 = *(_DWORD *)(v31 + 16LL * v30 + 8),
                  ((v29 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x30))
              && (v32 & 0x1000) == 0
              && (v32 & 0xF) != 0
              && (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0xF) == 7 )
            {
              v33 = *(_QWORD *)(v31 + 16LL * v30);
            }
            else
            {
              v33 = 0LL;
            }
            ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
            KeLeaveCriticalRegion();
            *((_QWORD *)P + v28) = v33;
            v34 = P;
            v35 = *((_QWORD *)P + v28);
            if ( !v35 || *(_QWORD *)(v35 + 16) != v17[2] )
              break;
            ++v27;
            ++v28;
            if ( v27 >= v73.BroadcastContextCount )
              goto LABEL_33;
          }
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          LODWORD(v4) = -1073741811;
          v36[3] = v17;
          v36[4] = v73.BroadcastContext[v27];
          v36[5] = v27;
          v36[6] = -1073741811LL;
          WdLogEvent5_WdError(v36);
        }
        else
        {
          v34 = P;
LABEL_33:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v70,
            v34,
            v66);
          if ( v71 )
          {
            if ( v70[0] )
            {
              v42 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
              *(_QWORD *)(v42 + 24) = 2330LL;
              WdLogEvent5_WdWarning(v42);
              LODWORD(v4) = -1073741811;
            }
            else
            {
              v41 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
              *(_QWORD *)(v41 + 24) = 2325LL;
              WdLogEvent5_WdWarning(v41);
              LODWORD(v4) = -1073741801;
            }
          }
          else
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)&v62,
              *(struct DXGADAPTER **)(*(_QWORD *)(v17[2] + 16) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, v17[2], 1, v43, 0);
            v44 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72);
            v4 = v44;
            if ( v44 >= 0 )
            {
              if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(v17[2] + 2832) + 1984LL),
                     (const struct DXGDEVICE *)v17[2],
                     v73.VidPnSourceId) )
              {
                v56 = v17[2];
                v57 = *(_QWORD *)(*(_QWORD *)(v56 + 16) + 16LL);
                if ( *(_QWORD *)(v56 + 2832) == v57 )
                {
                  LODWORD(v4) = DXGCONTEXT::PresentMultiPlaneOverlay2(
                                  (DXGCONTEXT *)v17,
                                  &v73,
                                  (struct COREDEVICEACCESS *)v72,
                                  (struct DXGCONTEXT **)P);
                }
                else
                {
                  LODWORD(v4) = -1073741811;
                  v58 = WdLogNewEntry5_WdWarning(v57, v56, v51, v52);
                  *(_QWORD *)(v58 + 24) = -1073741811LL;
                  *(_QWORD *)(v58 + 32) = PsGetCurrentProcess(v59);
                  WdLogEvent5_WdWarning(v58);
                }
                if ( (_DWORD)v4 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v17[2], v72);
              }
              else
              {
                LODWORD(v4) = -1073741790;
                v54 = WdLogNewEntry5_WdError(v53);
                *(_QWORD *)(v54 + 24) = -1073741790LL;
                *(_QWORD *)(v54 + 32) = PsGetCurrentProcess(v55);
                WdLogEvent5_WdError(v54);
              }
            }
            else
            {
              v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
              *(_QWORD *)(v49 + 24) = v4;
              *(_QWORD *)(v49 + 32) = PsGetCurrentProcess(v50);
              WdLogEvent5_WdWarning(v49);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
            if ( (_BYTE)v63 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v62);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v70);
        }
        goto LABEL_51;
      }
    }
LABEL_50:
    v60 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v60 + 24) = 2284LL;
    WdLogEvent5_WdWarning(v60);
    LODWORD(v4) = -1073741801;
LABEL_51:
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_54;
  }
  LODWORD(v4) = -1073741811;
  v5 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  *(_QWORD *)(v5 + 32) = PsGetCurrentProcess(v6);
  WdLogEvent5_WdError(v5);
  return (unsigned int)v4;
}

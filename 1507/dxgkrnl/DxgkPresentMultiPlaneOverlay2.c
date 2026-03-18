/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C0160760
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
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00698B8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147AFC (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _CapturePresentMultiPlaneOverlayArgs_::_19_::_AUTO::__AUTO @ 0x1C015BC20 (_CapturePresentMultiPlaneOverlayArgs_--_19_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C015BC40 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
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
  struct DXGCONTEXT **PoolWithTag; // rax
  __int64 v27; // rbx
  struct DXGCONTEXT **v28; // r11
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // r10
  int v32; // r9d
  __int64 v33; // rcx
  struct DXGCONTEXT *v34; // rcx
  struct DXGCONTEXT *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rax
  struct DXGCONTEXT *v63; // [rsp+30h] [rbp-D0h] BYREF
  char v64; // [rsp+38h] [rbp-C8h]
  struct DXGCONTEXT **v65; // [rsp+48h] [rbp-B8h] BYREF
  char v66; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v67; // [rsp+70h] [rbp-90h]
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v68[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v69[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v70[16]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v71[6]; // [rsp+A8h] [rbp-58h] BYREF
  char v72; // [rsp+D8h] [rbp-28h]
  DXGADAPTER *v73[10]; // [rsp+E0h] [rbp-20h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v74; // [rsp+130h] [rbp+30h] BYREF

  memset(&v74, 0, sizeof(v74));
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( a1 )
  {
    *(_OWORD *)v68 = 0LL;
    v7 = CapturePresentMultiPlaneOverlayArgs2(a1, &v74, v68, (struct tagRECT **)&v68[1]);
    v4 = v7;
    if ( v7 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = v4;
      *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
      v11 = v9;
LABEL_7:
      WdLogEvent5_WdError(v11);
LABEL_51:
      CapturePresentMultiPlaneOverlayArgs_::_19_::_AUTO::__AUTO((void **)v68);
      return (unsigned int)v4;
    }
    if ( v74.VidPnSourceId >= 0x10 )
    {
      v12 = WdLogNewEntry5_WdError(v8);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v12 + 24) = v74.VidPnSourceId;
      v11 = v12;
      *(_QWORD *)(v12 + 32) = -1073741811LL;
      goto LABEL_7;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v70, v74.hDevice, Current, &v63, 0);
    v17 = (__int64 *)v63;
    if ( !v63 )
    {
      LODWORD(v4) = -1073741811;
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v18[3] = -1073741811LL;
      v18[4] = PsGetCurrentProcess(v19);
      v18[5] = v74.hDevice;
      WdLogEvent5_WdWarning(v18);
LABEL_50:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v70);
      goto LABEL_51;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v69,
      *((struct DXGDEVICE **)v63 + 2));
    if ( v74.BroadcastContextCount > 0x40 )
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v24 + 24) = v17;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
LABEL_49:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
      goto LABEL_50;
    }
    v65 = 0LL;
    v25 = v74.BroadcastContextCount + 1;
    v67 = 0;
    if ( v74.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v66;
    }
    else
    {
      v21 = v25;
      v20 = 0xFFFFFFFFFFFFFFFFuLL % v25;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        goto LABEL_47;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v25, 0x4B677844u);
    }
    v65 = PoolWithTag;
    v67 = v25;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v25);
      if ( v65 )
      {
        *v65 = (struct DXGCONTEXT *)v17;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v63, Current);
        v27 = 0LL;
        if ( v74.BroadcastContextCount )
        {
          v28 = v65;
          v29 = 1;
          while ( 1 )
          {
            v30 = (v74.BroadcastContext[v27] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v30 < *((_DWORD *)Current + 58)
              && (v31 = *((_QWORD *)Current + 27),
                  v32 = *(_DWORD *)(v31 + 16LL * (unsigned int)v30 + 8),
                  ((v74.BroadcastContext[v27] >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * (unsigned int)v30 + 8) & 0x30))
              && (v32 & 0x1000) == 0
              && (v32 & 0xF) != 0
              && (v33 = 2 * v30, (*(_BYTE *)(v31 + 8 * v33 + 8) & 0xF) == 7) )
            {
              v34 = *(struct DXGCONTEXT **)(v31 + 8 * v33);
            }
            else
            {
              v34 = 0LL;
            }
            v28[v29] = v34;
            v28 = v65;
            v35 = v65[v29];
            if ( !v35 || *((_QWORD *)v35 + 2) != v17[2] )
              break;
            v27 = (unsigned int)(v27 + 1);
            ++v29;
            if ( (unsigned int)v27 >= v74.BroadcastContextCount )
              goto LABEL_30;
          }
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v35);
          LODWORD(v4) = -1073741811;
          v41[3] = v17;
          v41[4] = v74.BroadcastContext[v27];
          v41[5] = (unsigned int)v27;
          v41[6] = -1073741811LL;
          WdLogEvent5_WdError(v41);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v63);
        }
        else
        {
LABEL_30:
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v63);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v71,
            v65,
            v67);
          if ( v72 )
          {
            if ( v71[0] )
            {
              v42 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
              *(_QWORD *)(v42 + 24) = 2345LL;
              WdLogEvent5_WdWarning(v42);
              LODWORD(v4) = -1073741811;
            }
            else
            {
              v40 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
              *(_QWORD *)(v40 + 24) = 2340LL;
              WdLogEvent5_WdWarning(v40);
              LODWORD(v4) = -1073741801;
            }
          }
          else
          {
            v43 = v17[2];
            v64 = 0;
            v63 = *(struct DXGCONTEXT **)(*(_QWORD *)(v43 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v63);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, v17[2], 1, v44, 0);
            v45 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73);
            v4 = v45;
            if ( v45 >= 0 )
            {
              if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(v17[2] + 18704) + 1976LL),
                     (const struct DXGDEVICE *)v17[2],
                     v74.VidPnSourceId) )
              {
                v57 = v17[2];
                v58 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL);
                if ( *(_QWORD *)(v57 + 18704) == v58 )
                {
                  LODWORD(v4) = DXGCONTEXT::PresentMultiPlaneOverlay2(
                                  (DXGCONTEXT *)v17,
                                  &v74,
                                  (struct COREDEVICEACCESS *)v73,
                                  v65);
                }
                else
                {
                  LODWORD(v4) = -1073741811;
                  v59 = WdLogNewEntry5_WdWarning(v58, v57, v52, v53);
                  *(_QWORD *)(v59 + 24) = -1073741811LL;
                  *(_QWORD *)(v59 + 32) = PsGetCurrentProcess(v60);
                  WdLogEvent5_WdWarning(v59);
                }
                if ( (_DWORD)v4 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v17[2], v73);
              }
              else
              {
                LODWORD(v4) = -1073741790;
                v55 = WdLogNewEntry5_WdError(v54);
                *(_QWORD *)(v55 + 24) = -1073741790LL;
                *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v56);
                WdLogEvent5_WdError(v55);
              }
            }
            else
            {
              v50 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
              *(_QWORD *)(v50 + 24) = v4;
              *(_QWORD *)(v50 + 32) = PsGetCurrentProcess(v51);
              WdLogEvent5_WdWarning(v50);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v63);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
        }
        goto LABEL_48;
      }
    }
LABEL_47:
    v61 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v61 + 24) = 2291LL;
    WdLogEvent5_WdWarning(v61);
    LODWORD(v4) = -1073741801;
LABEL_48:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v65);
    goto LABEL_49;
  }
  LODWORD(v4) = -1073741811;
  v5 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  *(_QWORD *)(v5 + 32) = PsGetCurrentProcess(v6);
  WdLogEvent5_WdError(v5);
  return (unsigned int)v4;
}

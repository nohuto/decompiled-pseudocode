/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C018C130
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
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00A45C8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C0185510 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C0185530 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0187350 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ProcessDxgProcess; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  ULONG v28; // ebx
  struct DXGCONTEXT **PoolWithTag; // rax
  __int64 v30; // rbx
  struct DXGCONTEXT **v31; // r11
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r10
  int v35; // r9d
  __int64 v36; // rcx
  struct DXGCONTEXT *v37; // rcx
  struct DXGCONTEXT *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct DXGCONTEXT *v65[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGCONTEXT **v66; // [rsp+40h] [rbp-C0h] BYREF
  char v67; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v68; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v69[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v70[24]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v71[16]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v72[6]; // [rsp+A8h] [rbp-58h] BYREF
  char v73; // [rsp+D8h] [rbp-28h]
  DXGADAPTER *v74[12]; // [rsp+E0h] [rbp-20h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v75; // [rsp+140h] [rbp+40h] BYREF

  memset(&v75, 0, sizeof(v75));
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v4);
  if ( a1 )
  {
    *(_OWORD *)v69 = 0LL;
    v10 = CapturePresentMultiPlaneOverlayArgs2(a1, &v75, v69, (struct tagRECT **)&v69[1]);
    v7 = v10;
    if ( v10 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v7;
      *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13);
      v14 = v12;
LABEL_7:
      WdLogEvent5_WdError(v14);
LABEL_51:
      DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v69);
      return (unsigned int)v7;
    }
    if ( v75.VidPnSourceId >= 0x10 )
    {
      v15 = WdLogNewEntry5_WdError(v11);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v15 + 24) = v75.VidPnSourceId;
      v14 = v15;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      goto LABEL_7;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)v71,
      v75.hDevice,
      (struct DXGPROCESS *)ProcessDxgProcess,
      v65,
      0);
    v20 = (__int64 *)v65[0];
    if ( !v65[0] )
    {
      LODWORD(v7) = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v21[3] = -1073741811LL;
      v21[4] = PsGetCurrentProcess(v22);
      v21[5] = v75.hDevice;
      WdLogEvent5_WdWarning(v21);
LABEL_50:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v71);
      goto LABEL_51;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v65,
      *((struct DXGDEVICE **)v65[0] + 2));
    if ( v75.BroadcastContextCount > 0x40 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v27 + 24) = v20;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
LABEL_49:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v65);
      goto LABEL_50;
    }
    v66 = 0LL;
    v28 = v75.BroadcastContextCount + 1;
    v68 = 0;
    if ( v75.BroadcastContextCount + 1 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v67;
    }
    else
    {
      v24 = v28;
      v23 = 0xFFFFFFFFFFFFFFFFuLL % v28;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 8 )
        goto LABEL_47;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v28, 0x4B677844u);
    }
    v66 = PoolWithTag;
    v68 = v28;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v28);
      if ( v66 )
      {
        *v66 = (struct DXGCONTEXT *)v20;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)v70,
          (struct _KTHREAD **)ProcessDxgProcess);
        v30 = 0LL;
        if ( v75.BroadcastContextCount )
        {
          v31 = v66;
          v32 = 1;
          while ( 1 )
          {
            v33 = (v75.BroadcastContext[v30] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v33 < *(_DWORD *)(ProcessDxgProcess + 224)
              && (v34 = *(_QWORD *)(ProcessDxgProcess + 208),
                  v35 = *(_DWORD *)(v34 + 16LL * (unsigned int)v33 + 8),
                  ((v75.BroadcastContext[v30] >> 26) & 0x30) == (*(_BYTE *)(v34 + 16LL * (unsigned int)v33 + 8) & 0x30))
              && (v35 & 0x1000) == 0
              && (v35 & 0xF) != 0
              && (v36 = 2 * v33, (*(_BYTE *)(v34 + 8 * v36 + 8) & 0xF) == 7) )
            {
              v37 = *(struct DXGCONTEXT **)(v34 + 8 * v36);
            }
            else
            {
              v37 = 0LL;
            }
            v31[v32] = v37;
            v31 = v66;
            v38 = v66[v32];
            if ( !v38 || *((_QWORD *)v38 + 2) != v20[2] )
              break;
            v30 = (unsigned int)(v30 + 1);
            ++v32;
            if ( (unsigned int)v30 >= v75.BroadcastContextCount )
              goto LABEL_30;
          }
          v44 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          LODWORD(v7) = -1073741811;
          v44[3] = v20;
          v44[4] = v75.BroadcastContext[v30];
          v44[5] = (unsigned int)v30;
          v44[6] = -1073741811LL;
          WdLogEvent5_WdError(v44);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
        }
        else
        {
LABEL_30:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v72,
            v66,
            v68);
          if ( v73 )
          {
            if ( v72[0] )
            {
              v45 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
              *(_QWORD *)(v45 + 24) = 2381LL;
              WdLogEvent5_WdWarning(v45);
              LODWORD(v7) = -1073741811;
            }
            else
            {
              v43 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
              *(_QWORD *)(v43 + 24) = 2376LL;
              WdLogEvent5_WdWarning(v43);
              LODWORD(v7) = -1073741801;
            }
          }
          else
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v70,
              *(struct DXGADAPTER **)(*(_QWORD *)(v20[2] + 16) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v20[2], 1, v46, 0);
            v47 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74);
            v7 = v47;
            if ( v47 >= 0 )
            {
              if ( (*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(v20[2] + 2856) + 2128LL),
                     (const struct DXGDEVICE *)v20[2],
                     v75.VidPnSourceId) )
              {
                v59 = v20[2];
                v60 = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 16LL);
                if ( *(_QWORD *)(v59 + 2856) == v60 )
                {
                  LODWORD(v7) = DXGCONTEXT::PresentMultiPlaneOverlay2(
                                  (DXGCONTEXT *)v20,
                                  &v75,
                                  (struct COREDEVICEACCESS *)v74,
                                  v66);
                }
                else
                {
                  LODWORD(v7) = -1073741811;
                  v61 = WdLogNewEntry5_WdWarning(v60, v59, v54, v55);
                  *(_QWORD *)(v61 + 24) = -1073741811LL;
                  *(_QWORD *)(v61 + 32) = PsGetCurrentProcess(v62);
                  WdLogEvent5_WdWarning(v61);
                }
                if ( (_DWORD)v7 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v20[2], v74);
              }
              else
              {
                LODWORD(v7) = -1073741790;
                v57 = WdLogNewEntry5_WdError(v56);
                *(_QWORD *)(v57 + 24) = -1073741790LL;
                *(_QWORD *)(v57 + 32) = PsGetCurrentProcess(v58);
                WdLogEvent5_WdError(v57);
              }
            }
            else
            {
              v52 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
              *(_QWORD *)(v52 + 24) = v7;
              *(_QWORD *)(v52 + 32) = PsGetCurrentProcess(v53);
              WdLogEvent5_WdWarning(v52);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v72);
        }
        goto LABEL_48;
      }
    }
LABEL_47:
    v63 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    *(_QWORD *)(v63 + 24) = 2327LL;
    WdLogEvent5_WdWarning(v63);
    LODWORD(v7) = -1073741801;
LABEL_48:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v66);
    goto LABEL_49;
  }
  LODWORD(v7) = -1073741811;
  v8 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v9);
  WdLogEvent5_WdError(v8);
  return (unsigned int)v7;
}

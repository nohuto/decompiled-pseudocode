/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C018C640
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
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00A45C8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C01854B8 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0185810 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188084 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ProcessDxgProcess; // r13
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  UINT PresentPlaneCount; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 ContextCount; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 HDRMetaDataType; // rbx
  D3DKMT_HANDLE *pContextList; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // ebx
  struct DXGCONTEXT **PoolWithTag; // rax
  struct DXGCONTEXT **v37; // r11
  unsigned int v38; // ecx
  __int64 v39; // r9
  int v40; // r8d
  struct DXGCONTEXT *v41; // rax
  struct DXGCONTEXT *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct DXGCONTEXT **v69; // [rsp+58h] [rbp-B0h] BYREF
  char v70; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v71; // [rsp+80h] [rbp-88h]
  _BYTE v72[32]; // [rsp+88h] [rbp-80h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v73; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v74[16]; // [rsp+F8h] [rbp-10h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v75[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v76[16]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v77[6]; // [rsp+158h] [rbp+50h] BYREF
  char v78; // [rsp+188h] [rbp+80h]
  DXGADAPTER *v79[12]; // [rsp+198h] [rbp+90h] BYREF
  struct DXGCONTEXT *v80; // [rsp+218h] [rbp+110h] BYREF

  memset(&v73, 0, sizeof(v73));
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v4);
  if ( a1 )
  {
    memset(v75, 0, sizeof(v75));
    v10 = CapturePresentMultiPlaneOverlayArgs3(
            a1,
            &v73,
            v75,
            (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v75[1],
            (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)&v75[2],
            (struct tagRECT **)&v75[3],
            (unsigned int **)&v75[4],
            (unsigned int **)&v75[5],
            (unsigned __int8 **)&v75[6],
            (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)&v75[7]);
    v7 = v10;
    if ( v10 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v7;
      *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13);
      v14 = v12;
LABEL_69:
      WdLogEvent5_WdError(v14);
      goto LABEL_70;
    }
    PresentPlaneCount = v73.PresentPlaneCount;
    if ( !v73.PresentPlaneCount )
    {
      v16 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v16 + 24) = 4253LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( PresentPlaneCount > 8 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v17 + 24) = 4254LL;
      WdLogEvent5_WdAssertion(v17);
    }
    ContextCount = v73.ContextCount;
    if ( !v73.ContextCount )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v19 + 24) = 4255LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (unsigned int)ContextCount > 0x40 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v20 + 24) = 4256LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( v73.VidPnSourceId >= 0x10 )
    {
      v21 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v21 + 24) = v73.VidPnSourceId;
LABEL_15:
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v21 + 32) = -1073741811LL;
LABEL_68:
      v14 = v21;
      goto LABEL_69;
    }
    HDRMetaDataType = v73.HDRMetaDataType;
    if ( v73.HDRMetaDataType )
    {
      if ( v73.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        HDRMetaDataType = v73.HDRMetaDataSize;
        if ( !v73.HDRMetaDataSize || v73.HDRMetaDataSize == 28 )
        {
          if ( v73.pHDRMetaData )
          {
            if ( v73.HDRMetaDataSize )
              goto LABEL_28;
          }
          else if ( !v73.HDRMetaDataSize )
          {
            goto LABEL_28;
          }
        }
      }
      v21 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v21 + 24) = HDRMetaDataType;
      goto LABEL_15;
    }
    if ( v73.HDRMetaDataSize || v73.pHDRMetaData )
    {
      v21 = WdLogNewEntry5_WdError(v11);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v21 + 24) = -1073741811LL;
      goto LABEL_68;
    }
LABEL_28:
    pContextList = v73.pContextList;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)v76,
      *v73.pContextList,
      (struct DXGPROCESS *)ProcessDxgProcess,
      &v80,
      0);
    v28 = (__int64 *)v80;
    if ( !v80 )
    {
      LODWORD(v7) = -1073741811;
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      v29[3] = -1073741811LL;
      v29[4] = PsGetCurrentProcess(v30);
      v29[5] = *pContextList;
      WdLogEvent5_WdWarning(v29);
LABEL_66:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
LABEL_70:
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((void **)v75);
      return (unsigned int)v7;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v74,
      *((struct DXGDEVICE **)v80 + 2));
    v69 = 0LL;
    v35 = 1;
    v71 = 0;
    if ( (unsigned int)ContextCount <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v70;
    }
    else
    {
      v31 = 0xFFFFFFFFFFFFFFFFuLL % ContextCount;
      if ( 0xFFFFFFFFFFFFFFFFuLL / ContextCount < 8 )
        goto LABEL_64;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8 * ContextCount, 0x4B677844u);
    }
    v69 = PoolWithTag;
    v71 = ContextCount;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * ContextCount);
      *v69 = (struct DXGCONTEXT *)v28;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v72,
        (struct _KTHREAD **)ProcessDxgProcess);
      if ( (unsigned int)ContextCount <= 1 )
      {
LABEL_47:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v72);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v77,
          v69,
          v71);
        if ( v78 )
        {
          if ( v77[0] )
          {
            v49 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
            *(_QWORD *)(v49 + 24) = 4384LL;
            WdLogEvent5_WdWarning(v49);
            LODWORD(v7) = -1073741811;
          }
          else
          {
            v47 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
            *(_QWORD *)(v47 + 24) = 4379LL;
            WdLogEvent5_WdWarning(v47);
            LODWORD(v7) = -1073741801;
          }
        }
        else
        {
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v72,
            *(struct DXGADAPTER **)(*(_QWORD *)(v28[2] + 16) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, v28[2], 1, v50, 0);
          v51 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v79);
          v7 = v51;
          if ( v51 >= 0 )
          {
            if ( (*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))()
              || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*(_QWORD *)(v28[2] + 2856) + 2128LL),
                   (const struct DXGDEVICE *)v28[2],
                   v73.VidPnSourceId) )
            {
              v63 = v28[2];
              v64 = *(_QWORD *)(*(_QWORD *)(v63 + 16) + 16LL);
              if ( *(_QWORD *)(v63 + 2856) == v64 )
              {
                LODWORD(v7) = DXGCONTEXT::PresentMultiPlaneOverlay3(
                                (DXGCONTEXT *)v28,
                                &v73,
                                (struct COREDEVICEACCESS *)v79,
                                v69);
              }
              else
              {
                LODWORD(v7) = -1073741811;
                v65 = WdLogNewEntry5_WdWarning(v64, v63, v58, v59);
                *(_QWORD *)(v65 + 24) = -1073741811LL;
                *(_QWORD *)(v65 + 32) = PsGetCurrentProcess(v66);
                WdLogEvent5_WdWarning(v65);
              }
              if ( (_DWORD)v7 == -1071775482 )
                DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v28[2], v79);
            }
            else
            {
              LODWORD(v7) = -1073741790;
              v61 = WdLogNewEntry5_WdError(v60);
              *(_QWORD *)(v61 + 24) = -1073741790LL;
              *(_QWORD *)(v61 + 32) = PsGetCurrentProcess(v62);
              WdLogEvent5_WdError(v61);
            }
          }
          else
          {
            v56 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
            *(_QWORD *)(v56 + 24) = v7;
            *(_QWORD *)(v56 + 32) = PsGetCurrentProcess(v57);
            WdLogEvent5_WdWarning(v56);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v72);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v77);
      }
      else
      {
        v37 = v69;
        while ( 1 )
        {
          v38 = (pContextList[v35] >> 6) & 0xFFFFFF;
          if ( v38 < *(_DWORD *)(ProcessDxgProcess + 224)
            && (v39 = *(_QWORD *)(ProcessDxgProcess + 208),
                v40 = *(_DWORD *)(v39 + 16LL * v38 + 8),
                ((pContextList[v35] >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x30))
            && (v40 & 0x1000) == 0
            && (v40 & 0xF) != 0
            && (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0xF) == 7 )
          {
            v41 = *(struct DXGCONTEXT **)(v39 + 16LL * v38);
          }
          else
          {
            v41 = 0LL;
          }
          v37[v35] = v41;
          v37 = v69;
          v42 = v69[v35];
          if ( !v42 || *((_QWORD *)v42 + 2) != v28[2] )
            break;
          if ( ++v35 >= (unsigned int)ContextCount )
            goto LABEL_47;
        }
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        LODWORD(v7) = -1073741811;
        v48[3] = v28;
        v48[4] = pContextList[v35];
        v48[5] = v35;
        v48[6] = -1073741811LL;
        WdLogEvent5_WdError(v48);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v72);
      }
      goto LABEL_65;
    }
LABEL_64:
    v67 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    *(_QWORD *)(v67 + 24) = 4330LL;
    WdLogEvent5_WdWarning(v67);
    LODWORD(v7) = -1073741801;
LABEL_65:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v69);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v74);
    goto LABEL_66;
  }
  LODWORD(v7) = -1073741811;
  v8 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v9);
  WdLogEvent5_WdError(v8);
  return (unsigned int)v7;
}

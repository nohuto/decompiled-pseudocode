/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188084
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018C640 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E9C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000C708 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000C758 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAIIPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0028A3C (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAIIPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 *     ?SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0028B28 (-SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z.c)
 *     Template_qqqpqddddddddddddqqqq @ 0x1C0028BA4 (Template_qqqpqddddddddddddqqqq.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C009326C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0143CD4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015E2E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01861BC (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 *     InverseXformMPORect @ 0x1C0187124 (InverseXformMPORect.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018A568 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 VidPnSourceId; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 LayerIndex; // rsi
  __int64 p_ClipRect; // r8
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rcx
  _QWORD *v32; // rax
  __int64 Rotation; // rdx
  int bottom; // eax
  __int64 v35; // rdx
  unsigned __int8 v36; // r10
  unsigned int v37; // r14d
  int v38; // ebx
  __int64 v39; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v40; // r12
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E Value; // eax
  bool v42; // zf
  D3DKMT_HANDLE *pAllocationList; // rax
  D3DKMT_HANDLE v44; // r13d
  unsigned int v45; // ecx
  ULONG_PTR Count; // r8
  int v47; // edx
  struct _EX_RUNDOWN_REF *v48; // rdx
  struct _EX_RUNDOWN_REF **v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  struct _EX_RUNDOWN_REF *v54; // r13
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // eax
  __int64 v61; // r12
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rsi
  signed int Width; // r13d
  D3DDDI_ROTATION v64; // eax
  _QWORD *v65; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v66; // rdx
  _QWORD *v67; // rax
  D3DKMT_HANDLE v68; // r8d
  struct _EX_RUNDOWN_REF **v69; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v70; // rdx
  _QWORD *v71; // rax
  UINT v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v75; // r14
  __int64 v76; // rax
  int v77; // ecx
  int v78; // eax
  int v79; // ecx
  UINT v80; // eax
  UINT v81; // ecx
  UINT Duration; // eax
  int v83; // eax
  unsigned __int64 HDRMetaDataType; // rcx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  int v105; // [rsp+B0h] [rbp-90h]
  char v106; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v107; // [rsp+C1h] [rbp-7Fh]
  unsigned __int8 v108; // [rsp+C2h] [rbp-7Eh]
  D3DDDI_FLIPINTERVAL_TYPE v109; // [rsp+C4h] [rbp-7Ch] BYREF
  int v110; // [rsp+C8h] [rbp-78h]
  unsigned int v111; // [rsp+CCh] [rbp-74h]
  RECT SrcRect; // [rsp+D0h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v113; // [rsp+E0h] [rbp-60h] BYREF
  unsigned int v114; // [rsp+E8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v115; // [rsp+F0h] [rbp-50h] BYREF
  COREDEVICEACCESS *v116; // [rsp+F8h] [rbp-48h]
  struct VIDSCH_SUBMIT_DATA_BASE *v117[2]; // [rsp+100h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v118; // [rsp+110h] [rbp-30h]
  struct _EX_RUNDOWN_REF **v119; // [rsp+118h] [rbp-28h]
  D3DKMT_MULTIPLANE_OVERLAY3 *v120; // [rsp+120h] [rbp-20h]
  struct DXGCONTEXT **v121; // [rsp+128h] [rbp-18h]
  RECT v122; // [rsp+130h] [rbp-10h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v123; // [rsp+140h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v124; // [rsp+170h] [rbp+30h] BYREF
  struct DXGALLOCATION *v125[8]; // [rsp+220h] [rbp+E0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v121 = a4;
  v116 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 4463LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( *(_QWORD *)(v9 + 2856) != v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 4464LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v111 = a2->VidPnSourceId;
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(_QWORD *)(v12 + 2856) != v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 4468LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v21 = -1073741811;
    v20[3] = -1073741811LL;
    v20[4] = this;
LABEL_169:
    WdLogEvent5_WdWarning(v20);
    return v21;
  }
  v22 = *((_QWORD *)this + 2);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( a2->PresentPlaneCount > *(_DWORD *)(v23 + 2000) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v18, v19);
    v20[3] = a2->PresentPlaneCount;
    v20[4] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2000LL);
LABEL_168:
    v21 = -1073741811;
    v20[5] = -1073741811LL;
    goto LABEL_169;
  }
  if ( (*(_DWORD *)(v22 + 4 * VidPnSourceId + 1000) & 0x200) == 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v18, v19);
    v21 = -1071775739;
    v20[3] = -1071775739LL;
    v20[4] = this;
    v20[5] = VidPnSourceId;
    goto LABEL_169;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v18, v19);
    v20[3] = this;
    v20[4] = a2->Flags.Value;
    goto LABEL_168;
  }
  `vector constructor iterator'(
    (char *)v125,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v125);
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                      VidPnSourceId);
  if ( !DisplayModeInfo )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v27[3] = -1073741811LL;
    v27[4] = this;
    v27[5] = VidPnSourceId;
LABEL_54:
    WdLogEvent5_WdError(v27);
LABEL_162:
    LODWORD(v61) = -1073741811;
    goto LABEL_163;
  }
  v28 = *(unsigned int *)DisplayModeInfo;
  LODWORD(LayerIndex) = 0;
  p_ClipRect = *((unsigned int *)DisplayModeInfo + 1);
  pPostComposition = a2->pPostComposition;
  *(_QWORD *)&SrcRect.left = 0LL;
  *(_QWORD *)&SrcRect.right = __PAIR64__(p_ClipRect, v28);
  if ( pPostComposition )
  {
    if ( pPostComposition->Flags.Value )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(pPostComposition, v28, p_ClipRect, v26);
      v32[3] = this;
      Rotation = (__int64)a2->pPostComposition->Flags.0;
LABEL_19:
      v32[4] = Rotation;
LABEL_160:
      v32[5] = -1073741811LL;
      goto LABEL_161;
    }
    if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(pPostComposition, v28, p_ClipRect, v26);
      v32[3] = this;
      Rotation = a2->pPostComposition->Rotation;
      goto LABEL_19;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
      || pPostComposition->DstRect.left >= pPostComposition->DstRect.right
      || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom)
      || pPostComposition->DstRect.left < 0
      || (int)v28 < pPostComposition->DstRect.right
      || pPostComposition->DstRect.top < 0
      || (int)p_ClipRect < bottom )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(pPostComposition, v28, p_ClipRect, v26);
      v32[3] = this;
      v32[4] = -1073741811LL;
LABEL_161:
      WdLogEvent5_WdWarning(v32);
      goto LABEL_162;
    }
    SrcRect = pPostComposition->SrcRect;
  }
  v110 = -1;
  v35 = 0LL;
  LOBYTE(v26) = 0;
  v107 = 0;
  v36 = 0;
  v108 = 0;
  LOBYTE(p_ClipRect) = 0;
  v106 = 0;
  v37 = 0;
  v109 = D3DDDI_FLIPINTERVAL_ONE;
  if ( !a2->PresentPlaneCount )
    goto LABEL_165;
  v38 = -1073741811;
  while ( 1 )
  {
    v39 = v37;
    v40 = a2->ppPresentPlanes[v37];
    v120 = v40;
    LayerIndex = v40->LayerIndex;
    if ( (unsigned int)LayerIndex >= 8 || (v39 = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)v35) != 0) )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v35, p_ClipRect, v26);
      v32[4] = LayerIndex;
      v32[3] = this;
      goto LABEL_160;
    }
    Value = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v40->InputFlags.Value;
    v114 = (1 << LayerIndex) | v35;
    if ( (*(_BYTE *)&Value & 1) == 0 )
    {
      v69 = (struct _EX_RUNDOWN_REF **)&v125[LayerIndex];
      LODWORD(LayerIndex) = 0;
      if ( *v69 )
        v106 = p_ClipRect + 1;
      v113 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign(v69, &v113);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v113);
      goto LABEL_100;
    }
    v42 = v125[LayerIndex] == 0LL;
    v119 = (struct _EX_RUNDOWN_REF **)&v125[LayerIndex];
    if ( v42 )
      v108 = v36 + 1;
    else
      v107 = v26 + 1;
    pAllocationList = v40->pAllocationList;
    v113 = *(struct _EX_RUNDOWN_REF **)(*((_QWORD *)this + 2) + 40LL);
    v44 = *pAllocationList;
    v118 = v113 + 23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v113[23]);
    v45 = (v44 >> 6) & 0xFFFFFF;
    if ( v45 < LODWORD(v113[28].Count)
      && (Count = v113[26].Count,
          v47 = *(_DWORD *)(Count + 16LL * v45 + 8),
          ((v44 >> 26) & 0x30) == (*(_BYTE *)(Count + 16LL * v45 + 8) & 0x30))
      && (v47 & 0x1000) == 0
      && (v47 & 0xF) != 0
      && (*(_BYTE *)(Count + 16LL * v45 + 8) & 0xF) == 5 )
    {
      v48 = *(struct _EX_RUNDOWN_REF **)(Count + 16LL * v45);
    }
    else
    {
      v48 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v115, v48);
    ExReleasePushLockSharedEx(v118, 0LL);
    KeLeaveCriticalRegion();
    v49 = v119;
    DXGALLOCATIONREFERENCE::MoveAssign(v119, &v115);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v115);
    v54 = *v49;
    if ( !v54 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
      v32[3] = -1073741811LL;
      v32[4] = this;
      v32[5] = *v40->pAllocationList;
      goto LABEL_161;
    }
    _mm_lfence();
    v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL) != *(_QWORD *)(v55 + 16) )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v27[3] = *((_QWORD *)this + 2);
      v27[4] = v125[LayerIndex];
      v27[5] = -1073741811LL;
      goto LABEL_54;
    }
    _mm_lfence();
    v56 = *(unsigned int *)(v54[6].Count + 4);
    _mm_lfence();
    if ( (v56 & 0x2000) != 0 )
    {
      if ( (*(_DWORD *)(v54[6].Count + 4) & 0x20) == 0
        && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), (const struct DXGALLOCATION *)v54) )
      {
        _mm_lfence();
LABEL_53:
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v56);
        v27[3] = -1073741811LL;
        v27[4] = this;
        v27[5] = v125[LayerIndex];
        v27[6] = *((_QWORD *)v125[LayerIndex] + 6);
        v27[7] = *v40->pAllocationList;
        goto LABEL_54;
      }
    }
    else
    {
      if ( (v56 & 0xB) == 0 )
        goto LABEL_53;
      v57 = v110;
      if ( (*(_BYTE *)(v54[6].Count + 4) & 1) != 0 )
        v57 = LayerIndex;
      v110 = v57;
    }
    _mm_lfence();
    memset(&v123, 0, sizeof(v123));
    v58 = *((_QWORD *)this + 2);
    v123.hAllocation = *(HANDLE *)(v54[6].Count + 16);
    v60 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v58 + 16), &v123, v59);
    v61 = v60;
    if ( v60 < 0 )
      break;
    v40 = v120;
    pPlaneAttributes = v120->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right )
      goto LABEL_114;
    if ( pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom )
      goto LABEL_114;
    Width = v123.Width;
    LODWORD(v113) = v123.Height;
    if ( pPlaneAttributes->SrcRect.left < 0
      || (int)v123.Width < pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top < 0
      || (int)v123.Height < pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || SrcRect.left > pPlaneAttributes->ClipRect.left
      || SrcRect.right < pPlaneAttributes->ClipRect.right
      || SrcRect.top > pPlaneAttributes->ClipRect.top
      || SrcRect.bottom < pPlaneAttributes->ClipRect.bottom
      || pPlaneAttributes->DstRect.left > pPlaneAttributes->ClipRect.left
      || pPlaneAttributes->DstRect.right < pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->DstRect.top > pPlaneAttributes->ClipRect.top
      || pPlaneAttributes->DstRect.bottom < pPlaneAttributes->ClipRect.bottom )
    {
      goto LABEL_114;
    }
    v64 = pPlaneAttributes->Rotation;
    if ( v64 )
    {
      if ( (unsigned int)(v64 - 1) > 3 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(pPostComposition);
        v65[3] = -1073741811LL;
        v65[4] = this;
        v65[5] = v37;
        v65[6] = v40->pPlaneAttributes->Rotation;
LABEL_115:
        WdLogEvent5_WdError(v65);
        goto LABEL_164;
      }
    }
    else
    {
      pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    pPostComposition = *(D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)(*((_QWORD *)this + 2) + 2856LL);
    if ( BYTE2(pPostComposition[51].SrcRect.right) )
    {
      v66 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)v40->pPlaneAttributes;
      p_ClipRect = (__int64)&v66->ClipRect;
      if ( v66->DstRect.left != v66->ClipRect.left
        || v66->DstRect.right != v66->ClipRect.right
        || v66->DstRect.top != v66->ClipRect.top
        || v66->DstRect.bottom != v66->ClipRect.bottom )
      {
        InverseXformMPORect(&v122, v66, (_DWORD *)p_ClipRect);
        pPlaneAttributes->SrcRect = v122;
        pPlaneAttributes->DstRect = v40->pPlaneAttributes->ClipRect;
        if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
          || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
          || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
          || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
          || pPlaneAttributes->SrcRect.left < 0
          || Width < pPlaneAttributes->SrcRect.right
          || pPlaneAttributes->SrcRect.top < 0
          || (int)v113 < pPlaneAttributes->SrcRect.bottom
          || SrcRect.left > pPlaneAttributes->DstRect.left
          || SrcRect.right < pPlaneAttributes->DstRect.right
          || SrcRect.top > pPlaneAttributes->DstRect.top
          || SrcRect.bottom < pPlaneAttributes->DstRect.bottom )
        {
LABEL_114:
          v65 = (_QWORD *)WdLogNewEntry5_WdError(pPostComposition);
          v65[3] = -1073741811LL;
          v65[4] = this;
          v65[5] = v37;
          goto LABEL_115;
        }
      }
    }
    LODWORD(VidPnSourceId) = v111;
    LODWORD(LayerIndex) = 0;
LABEL_100:
    if ( (v40->InputFlags.Value & 1) != 0 && v40->FlipInterval != D3DDDI_FLIPINTERVAL_ONE )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(pPostComposition);
      v67[5] = v37;
      v67[3] = -1073741811LL;
      v67[4] = this;
      WdLogEvent5_WdError(v67);
    }
    if ( bTracingEnabled )
    {
      v68 = *v40->pAllocationList;
      p_ClipRect = v68
                 ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 400LL)
                                                                         + 8LL)
                                                             + 336LL))(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                     v68)
                 : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v70 = v40->pPlaneAttributes;
        Template_qqqpqddddddddddddqqqq(
          v40->InputFlags.Value & 1,
          (__int64)v70,
          p_ClipRect,
          VidPnSourceId,
          v40->LayerIndex,
          *(_BYTE *)&v40->InputFlags.0 & 1,
          p_ClipRect,
          v70->Flags,
          v70->SrcRect.left,
          v70->SrcRect.right,
          v70->SrcRect.top,
          v70->SrcRect.bottom,
          v70->DstRect.left,
          v70->DstRect.right,
          v70->DstRect.top,
          v70->DstRect.bottom,
          v70->ClipRect.left,
          v70->ClipRect.right,
          v70->ClipRect.top,
          v70->ClipRect.bottom,
          v70->Rotation,
          v70->Blend,
          v105,
          v70->ColorSpace);
      }
    }
    if ( ++v37 >= a2->PresentPlaneCount )
    {
      if ( v108 || v107 || v106 )
      {
        memset(&v124, 0, sizeof(v124));
        v72 = a2->Flags.Value & 7;
        v117[0] = 0LL;
        v124.FlipInterval = v109;
        v73 = *((_QWORD *)this + 2);
        v124.Flags.Value = v124.Flags.Value & 0xFFFFF8FF | (v72 << 8) | 0x100C;
        v117[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v73 + 16);
        CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v117);
        v75 = v117[0];
        if ( !v117[0] )
        {
          v76 = WdLogNewEntry5_WdLowResource(v74);
          *(_QWORD *)(v76 + 24) = 4897LL;
          WdLogEvent5_WdLowResource(v76);
          LODWORD(LayerIndex) = -1073741801;
LABEL_158:
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v117);
          goto LABEL_166;
        }
        *(_DWORD *)v117[0] |= 0x30020u;
        v77 = *(_DWORD *)v75;
        *((_DWORD *)v75 + 28) = a2->PresentCount;
        v77 |= 0x800005u;
        *(_DWORD *)v75 = v77;
        v78 = v77 ^ ((unsigned __int8)v77 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
        *(_DWORD *)v75 = v78;
        v79 = v78 ^ ((unsigned __int8)v78 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10;
        *(_DWORD *)v75 = v79;
        v80 = v79 ^ (v79 ^ (a2->Flags.Value << 19)) & 0x80000;
        *(_DWORD *)v75 = v80;
        v81 = v80 ^ (v80 ^ (a2->Flags.Value << 19)) & 0x100000;
        *(_DWORD *)v75 = v81;
        *(_DWORD *)v75 = v81 ^ (v81 ^ (a2->Flags.Value << 19)) & 0x200000;
        if ( (a2->Flags.Value & 0x40) != 0 )
          Duration = a2->Duration;
        else
          Duration = 0;
        *((_DWORD *)v75 + 36) = Duration;
        *((_DWORD *)v75 + 29) = VidPnSourceId;
        *((_DWORD *)v75 + 31) = v109;
        v83 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                                + 8LL)
                                                                                    + 424LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
                (unsigned int)VidPnSourceId,
                &v109);
        *((_DWORD *)v75 + 30) = v83;
        HDRMetaDataType = a2->Flags.Value;
        if ( (HDRMetaDataType & 0x80u) != 0LL )
        {
          *(_DWORD *)v75 |= 0x40000000u;
          HDRMetaDataType = (unsigned int)a2->HDRMetaDataType;
          *((_DWORD *)v75 + 88) = HDRMetaDataType;
          if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
          {
            HDRMetaDataType = (unsigned __int64)a2->pHDRMetaData;
            *(_OWORD *)((char *)v75 + 356) = *(_OWORD *)HDRMetaDataType;
            *(_QWORD *)((char *)v75 + 372) = *(_QWORD *)(HDRMetaDataType + 16);
            *((_DWORD *)v75 + 95) = *(_DWORD *)(HDRMetaDataType + 24);
          }
        }
        if ( a2->pPostComposition )
        {
          *(_DWORD *)v75 |= 0x80000000;
          *((_OWORD *)v75 + 24) = a2->pPostComposition->SrcRect;
          *((_OWORD *)v75 + 25) = a2->pPostComposition->DstRect;
        }
        if ( v83 == *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2792) )
        {
          v89 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 8) == 0, v116);
          LayerIndex = v89;
          if ( v89 < 0 )
          {
            v88 = WdLogNewEntry5_WdEvent(v90);
            *(_QWORD *)(v88 + 32) = this;
            goto LABEL_137;
          }
        }
        else
        {
          v85 = WdLogNewEntry5_WdEvent(HDRMetaDataType);
          *(_QWORD *)(v85 + 24) = *((_QWORD *)this + 2);
          WdLogEvent5_WdEvent(v85);
          COREDEVICEACCESS::Release(v116);
          DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
          v86 = COREDEVICEACCESS::AcquireShared(v116);
          LayerIndex = v86;
          if ( v86 < 0 )
          {
            v88 = WdLogNewEntry5_WdEvent(v87);
LABEL_137:
            *(_QWORD *)(v88 + 24) = LayerIndex;
            WdLogEvent5_WdEvent(v88);
            goto LABEL_158;
          }
        }
        v91 = DXGCONTEXT::CheckDevicePresentSettings(this, 1, VidPnSourceId);
        LayerIndex = v91;
        if ( v91 >= 0 )
        {
          if ( *((_DWORD *)v75 + 30) == 5 )
          {
            if ( *((_QWORD *)this + 36) )
            {
              v98 = WdLogNewEntry5_WdAssertion(v93);
              *(_QWORD *)(v98 + 24) = 5019LL;
              WdLogEvent5_WdAssertion(v98);
            }
            LODWORD(LayerIndex) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                                    this,
                                    a2,
                                    v108,
                                    v107,
                                    v106,
                                    (const struct DXGALLOCATIONREFERENCE *)v125,
                                    &v124,
                                    v75,
                                    v121);
            if ( (int)LayerIndex >= 0 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL) + 112LL)
                             + 1016LL * (unsigned int)VidPnSourceId
                             + 964) == -1 )
              {
                v99 = WdLogNewEntry5_WdAssertion(1016LL * (unsigned int)VidPnSourceId);
                *(_QWORD *)(v99 + 24) = 5035LL;
                WdLogEvent5_WdAssertion(v99);
              }
              DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
                *((struct _KTHREAD ***)this + 2),
                VidPnSourceId,
                (const struct DXGALLOCATIONREFERENCE *)v125);
              if ( v110 > -1 )
                DXGDEVICE::SetDisplayedPrimary(
                  *((struct _KTHREAD ***)this + 2),
                  VidPnSourceId,
                  v125[v110],
                  *((_DWORD *)v75 + 34),
                  0);
              *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2792) = *((_DWORD *)v75 + 30);
            }
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
              && (_DWORD)LayerIndex != -1073741130 )
            {
              v101 = WdLogNewEntry5_WdAssertion(v100);
              *(_QWORD *)(v101 + 24) = 5057LL;
              WdLogEvent5_WdAssertion(v101);
            }
            if ( *((_QWORD *)this + 36) )
            {
              v102 = WdLogNewEntry5_WdAssertion(v100);
              *(_QWORD *)(v102 + 24) = 5058LL;
              WdLogEvent5_WdAssertion(v102);
            }
          }
          else
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
            v97[3] = this;
            v97[4] = v109;
            v97[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v97);
            LODWORD(LayerIndex) = -1073741811;
          }
        }
        else
        {
          v96 = WdLogNewEntry5_WdEvent(v93);
          *(_QWORD *)(v96 + 24) = LayerIndex;
          *(_QWORD *)(v96 + 32) = this;
          WdLogEvent5_WdEvent(v96);
          if ( (_DWORD)LayerIndex == -1071774920 )
          {
            DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
              *((struct _KTHREAD ***)this + 2),
              VidPnSourceId,
              (const struct DXGALLOCATIONREFERENCE *)v125);
            if ( v110 > -1 )
              DXGDEVICE::SetDisplayedPrimary(
                *((struct _KTHREAD ***)this + 2),
                VidPnSourceId,
                v125[v110],
                *((_DWORD *)v75 + 34),
                0);
            LODWORD(LayerIndex) = 0;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2792) = *((_DWORD *)v75 + 30);
          }
        }
        goto LABEL_158;
      }
LABEL_165:
      v103 = WdLogNewEntry5_WdEvent(pPostComposition);
      *(_QWORD *)(v103 + 24) = 0LL;
      *(_QWORD *)(v103 + 32) = this;
      WdLogEvent5_WdEvent(v103);
      goto LABEL_166;
    }
    v35 = v114;
    LOBYTE(p_ClipRect) = v106;
    LOBYTE(v26) = v107;
    v36 = v108;
  }
  _mm_lfence();
  v71 = (_QWORD *)WdLogNewEntry5_WdError(pPostComposition);
  v71[3] = v61;
  v71[4] = this;
  v71[5] = *(_QWORD *)(*((_QWORD *)v125[LayerIndex] + 6) + 16LL);
  v71[6] = v125[LayerIndex];
  WdLogEvent5_WdError(v71);
LABEL_163:
  v38 = v61;
LABEL_164:
  LODWORD(LayerIndex) = v38;
LABEL_166:
  `vector destructor iterator'(
    (char *)v125,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)LayerIndex;
}

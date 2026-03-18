/*
 * XREFs of ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0187350
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C018C130 (DxgkPresentMultiPlaneOverlay2.c)
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
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0186E40 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0189C14 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay2(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  struct COREDEVICEACCESS *v6; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 VidPnSourceId; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 Rotation; // rcx
  char v30; // bl
  int v31; // r10d
  D3DKMT_MULTIPLANE_OVERLAY2 *v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r15d
  D3DKMT_MULTIPLANE_OVERLAY2 *pPresentPlanes; // rdx
  unsigned __int64 v36; // rsi
  __int64 LayerIndex; // r12
  bool v38; // zf
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v40; // ecx
  ULONG_PTR Count; // r8
  int v42; // edx
  struct _EX_RUNDOWN_REF *v43; // rdx
  struct _EX_RUNDOWN_REF **v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _EX_RUNDOWN_REF *v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rcx
  unsigned __int64 right; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rdx
  __int64 v59; // rcx
  LONG left; // ecx
  int v61; // r11d
  int v62; // ebx
  LONG v63; // edx
  unsigned int v64; // r10d
  D3DKMT_MULTIPLANE_OVERLAY2 *v65; // rax
  struct _EX_RUNDOWN_REF **v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  D3DDDI_FLIPINTERVAL_TYPE *p_FlipInterval; // r15
  UINT v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v73; // rsi
  __int64 v74; // rax
  int v75; // ecx
  UINT PresentCount; // eax
  int v77; // ecx
  UINT v78; // ecx
  int v79; // ecx
  UINT v80; // ecx
  UINT v81; // ecx
  UINT Duration; // eax
  int v83; // eax
  __int64 v84; // rcx
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
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // [rsp+B0h] [rbp-90h]
  char v106; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v107; // [rsp+C1h] [rbp-7Fh]
  unsigned __int8 v108; // [rsp+C2h] [rbp-7Eh]
  int v109; // [rsp+C4h] [rbp-7Ch]
  struct _EX_RUNDOWN_REF *v110; // [rsp+C8h] [rbp-78h] BYREF
  int v111; // [rsp+D0h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v112; // [rsp+D8h] [rbp-68h] BYREF
  COREDEVICEACCESS *v113; // [rsp+E0h] [rbp-60h]
  struct VIDSCH_SUBMIT_DATA_BASE *v114[2]; // [rsp+E8h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v115; // [rsp+F8h] [rbp-48h]
  struct _EX_RUNDOWN_REF **v116; // [rsp+100h] [rbp-40h]
  struct DXGCONTEXT **v117; // [rsp+110h] [rbp-30h]
  struct _DXGKARG_DESCRIBEALLOCATION v118; // [rsp+118h] [rbp-28h] BYREF
  struct _DXGKARG_PRESENT v119; // [rsp+150h] [rbp+10h] BYREF
  struct DXGALLOCATION *v120[8]; // [rsp+200h] [rbp+C0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v6 = a3;
  v117 = a4;
  v113 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 2551LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 2856) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2552LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(_QWORD *)(v14 + 2856) != v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 2556LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(*(_QWORD *)(v18 + 2856) + 872LL) )
  {
    LODWORD(v6) = DXGCONTEXT::ConvertToPresentMultiPlaneOverlay(this, a2, v6, a4);
    return (unsigned int)v6;
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v18 + 16)) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    LODWORD(v6) = -1073741811;
    v23[3] = -1073741811LL;
    v23[4] = this;
LABEL_10:
    WdLogEvent5_WdWarning(v23);
    return (unsigned int)v6;
  }
  v24 = *((_QWORD *)this + 2);
  v25 = *(_DWORD *)(v24 + 4 * VidPnSourceId + 1000) >> 9;
  if ( (*(_DWORD *)(v24 + 4 * VidPnSourceId + 1000) & 0x200) == 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v19, v21, v22);
    v26[3] = -1071775739LL;
    v26[4] = this;
    v26[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v26);
    return 3223191557LL;
  }
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_DWORD *)&Value & 0xB0E7C3) != 0 || (*(_BYTE *)&Value & 4) == 0 || (*(_DWORD *)&Value & 0x60000) != 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v19, v21, v22);
    LODWORD(v6) = -1073741811;
    v23[3] = this;
    v23[4] = a2->Flags.Value;
    v23[5] = -1073741811LL;
    goto LABEL_10;
  }
  `vector constructor iterator'(
    (char *)v120,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v120);
  v109 = -1;
  v30 = 0;
  v31 = 0;
  LOBYTE(v32) = 0;
  LOBYTE(v33) = 0;
  v107 = 0;
  v34 = 0;
  v108 = 0;
  v106 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_128:
    v104 = WdLogNewEntry5_WdEvent(Rotation);
    *(_QWORD *)(v104 + 24) = 0LL;
    *(_QWORD *)(v104 + 32) = this;
    WdLogEvent5_WdEvent(v104);
    LODWORD(v6) = 0;
    goto LABEL_125;
  }
  while ( 1 )
  {
    pPresentPlanes = a2->pPresentPlanes;
    v36 = v34;
    LayerIndex = pPresentPlanes[v36].LayerIndex;
    if ( (unsigned int)LayerIndex >= 8 || (Rotation = (unsigned int)LayerIndex, ((1 << LayerIndex) & v31) != 0) )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(Rotation, pPresentPlanes, v32, v33);
      LODWORD(v6) = -1073741811;
      v68[5] = -1073741811LL;
      v68[4] = LayerIndex;
      v68[3] = this;
      goto LABEL_127;
    }
    v38 = !pPresentPlanes[v36].Enabled;
    v111 = (1 << LayerIndex) | v31;
    if ( v38 )
    {
      v66 = (struct _EX_RUNDOWN_REF **)&v120[LayerIndex];
      if ( *v66 )
        v106 = ++v30;
      v110 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign(v66, &v110);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v110);
      goto LABEL_75;
    }
    v38 = v120[LayerIndex] == 0LL;
    v116 = (struct _EX_RUNDOWN_REF **)&v120[LayerIndex];
    if ( v38 )
      v108 = v33 + 1;
    else
      v107 = (_BYTE)v32 + 1;
    hAllocation = pPresentPlanes[v36].hAllocation;
    v110 = *(struct _EX_RUNDOWN_REF **)(*((_QWORD *)this + 2) + 40LL);
    v115 = v110 + 23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v110[23]);
    v40 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v40 < LODWORD(v110[28].Count)
      && (Count = v110[26].Count,
          v42 = *(_DWORD *)(Count + 16LL * v40 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(Count + 16LL * v40 + 8) & 0x30))
      && (v42 & 0x1000) == 0
      && (v42 & 0xF) != 0
      && (*(_BYTE *)(Count + 16LL * v40 + 8) & 0xF) == 5 )
    {
      v43 = *(struct _EX_RUNDOWN_REF **)(Count + 16LL * v40);
    }
    else
    {
      v43 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v112, v43);
    ExReleasePushLockSharedEx(v115, 0LL);
    KeLeaveCriticalRegion();
    v44 = v116;
    DXGALLOCATIONREFERENCE::MoveAssign(v116, &v112);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v112);
    v49 = *v44;
    if ( !v49 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      LODWORD(v6) = -1073741811;
      v68[3] = -1073741811LL;
      v68[4] = this;
      v68[5] = a2->pPresentPlanes[v34].hAllocation;
LABEL_127:
      WdLogEvent5_WdWarning(v68);
      goto LABEL_125;
    }
    _mm_lfence();
    v50 = *(unsigned int *)(v49[6].Count + 4);
    _mm_lfence();
    if ( (v50 & 0x2000) != 0 )
    {
      if ( (*(_DWORD *)(v49[6].Count + 4) & 0x20) == 0
        && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), (const struct DXGALLOCATION *)v49) )
      {
        _mm_lfence();
LABEL_36:
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        LODWORD(v6) = -1073741811;
        v51[3] = -1073741811LL;
        v51[4] = this;
        v51[5] = v120[LayerIndex];
        v51[6] = *((_QWORD *)v120[LayerIndex] + 6);
        v51[7] = a2->pPresentPlanes[v34].hAllocation;
LABEL_69:
        WdLogEvent5_WdError(v51);
        goto LABEL_125;
      }
    }
    else
    {
      if ( (v50 & 0xB) == 0 )
        goto LABEL_36;
      v52 = v109;
      if ( (*(_BYTE *)(v49[6].Count + 4) & 1) != 0 )
        v52 = LayerIndex;
      v109 = v52;
    }
    _mm_lfence();
    memset(&v118, 0, sizeof(v118));
    v53 = *((_QWORD *)this + 2);
    v118.hAllocation = *(HANDLE *)(v49[6].Count + 16);
    v55 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v53 + 16), &v118, v54);
    v6 = (struct COREDEVICEACCESS *)v55;
    if ( v55 < 0 )
    {
      _mm_lfence();
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v51[3] = v6;
      v51[4] = this;
      v51[5] = *(_QWORD *)(*((_QWORD *)v120[LayerIndex] + 6) + 16LL);
      v51[6] = v120[LayerIndex];
      goto LABEL_69;
    }
    right = (unsigned __int64)a2->pPresentPlanes;
    if ( *(_DWORD *)(v36 * 120 + right + 20) >= *(_DWORD *)(v36 * 120 + right + 28)
      || *(_DWORD *)(v36 * 120 + right + 24) >= *(_DWORD *)(v36 * 120 + right + 32)
      || *(int *)(v36 * 120 + right + 20) < 0
      || (int)v118.Width < *(_DWORD *)(v36 * 120 + right + 28)
      || *(int *)(v36 * 120 + right + 24) < 0
      || (int)v118.Height < *(_DWORD *)(v36 * 120 + right + 32) )
    {
LABEL_84:
      v51 = (_QWORD *)WdLogNewEntry5_WdError(right);
      LODWORD(v6) = -1073741811;
      v51[3] = -1073741811LL;
      v51[4] = this;
      v51[5] = v34;
      goto LABEL_69;
    }
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                        VidPnSourceId);
    if ( !DisplayModeInfo )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      LODWORD(v6) = -1073741811;
      v51[3] = -1073741811LL;
      v51[4] = this;
      v51[5] = VidPnSourceId;
      goto LABEL_69;
    }
    v32 = a2->pPresentPlanes;
    right = (unsigned int)v32[v36].PlaneAttributes.ClipRect.right;
    if ( v32[v36].PlaneAttributes.ClipRect.left >= (int)right )
      goto LABEL_84;
    right = (unsigned int)v32[v36].PlaneAttributes.ClipRect.bottom;
    if ( v32[v36].PlaneAttributes.ClipRect.top >= (int)right )
      goto LABEL_84;
    if ( v32[v36].PlaneAttributes.DstRect.left >= v32[v36].PlaneAttributes.DstRect.right )
      goto LABEL_84;
    if ( v32[v36].PlaneAttributes.DstRect.top >= v32[v36].PlaneAttributes.DstRect.bottom )
      goto LABEL_84;
    right = *((unsigned int *)DisplayModeInfo + 1);
    if ( v32[v36].PlaneAttributes.ClipRect.left < 0
      || *(_DWORD *)DisplayModeInfo < v32[v36].PlaneAttributes.ClipRect.right
      || v32[v36].PlaneAttributes.ClipRect.top < 0
      || (int)right < v32[v36].PlaneAttributes.ClipRect.bottom
      || v32[v36].PlaneAttributes.DstRect.left > v32[v36].PlaneAttributes.ClipRect.left
      || v32[v36].PlaneAttributes.DstRect.right < v32[v36].PlaneAttributes.ClipRect.right
      || v32[v36].PlaneAttributes.DstRect.top > v32[v36].PlaneAttributes.ClipRect.top
      || v32[v36].PlaneAttributes.DstRect.bottom < v32[v36].PlaneAttributes.ClipRect.bottom )
    {
      goto LABEL_84;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2054LL) )
    {
      left = v32[v36].PlaneAttributes.SrcRect.left;
      v61 = v32[v36].PlaneAttributes.SrcRect.right - left;
      v62 = v32[v36].PlaneAttributes.SrcRect.bottom - v32[v36].PlaneAttributes.SrcRect.top;
      v33 = (unsigned int)(v32[v36].PlaneAttributes.DstRect.bottom - v32[v36].PlaneAttributes.DstRect.top);
      v63 = v32[v36].PlaneAttributes.DstRect.left;
      v64 = v32[v36].PlaneAttributes.DstRect.right - v63;
      if ( v64 && (_DWORD)v33 )
      {
        v32[v36].PlaneAttributes.SrcRect.left = left + v61 * (v32[v36].PlaneAttributes.ClipRect.left - v63) / v64;
        a2->pPresentPlanes[v36].PlaneAttributes.SrcRect.top += v62
                                                             * (a2->pPresentPlanes[v36].PlaneAttributes.ClipRect.top
                                                              - a2->pPresentPlanes[v36].PlaneAttributes.DstRect.top)
                                                             / (unsigned int)v33;
        a2->pPresentPlanes[v36].PlaneAttributes.SrcRect.right -= v61
                                                               * (a2->pPresentPlanes[v36].PlaneAttributes.DstRect.right
                                                                - a2->pPresentPlanes[v36].PlaneAttributes.ClipRect.right)
                                                               / v64;
        v32 = a2->pPresentPlanes;
        v32[v36].PlaneAttributes.SrcRect.bottom -= v62
                                                 * (v32[v36].PlaneAttributes.DstRect.bottom
                                                  - v32[v36].PlaneAttributes.ClipRect.bottom)
                                                 / (unsigned int)v33;
      }
      a2->pPresentPlanes[v36].PlaneAttributes.DstRect = a2->pPresentPlanes[v36].PlaneAttributes.ClipRect;
    }
    v65 = a2->pPresentPlanes;
    Rotation = (unsigned int)v65[v36].PlaneAttributes.Rotation;
    if ( (_DWORD)Rotation )
    {
      if ( (unsigned int)(Rotation - 1) > 3 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(Rotation);
        LODWORD(v6) = -1073741811;
        v51[3] = -1073741811LL;
        v51[4] = this;
        v51[5] = v34;
        v51[6] = a2->pPresentPlanes[v34].PlaneAttributes.Rotation;
        goto LABEL_69;
      }
    }
    else
    {
      v65[v36].PlaneAttributes.Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    v30 = v106;
LABEL_75:
    if ( bTracingEnabled )
    {
      v32 = (D3DKMT_MULTIPLANE_OVERLAY2 *)a2->pPresentPlanes[v36].hAllocation;
      v67 = (_DWORD)v32
          ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 336LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
              (unsigned int)v32)
          : 0LL;
      Rotation = (__int64)a2->pPresentPlanes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqpqddddddddddddqqqq(
          Rotation,
          v67,
          (__int64)v32,
          VidPnSourceId,
          *(_DWORD *)(v36 * 120 + Rotation),
          *(_DWORD *)(v36 * 120 + Rotation + 4),
          v67,
          *(_DWORD *)(v36 * 120 + Rotation + 16),
          *(_DWORD *)(v36 * 120 + Rotation + 20),
          *(_DWORD *)(v36 * 120 + Rotation + 28),
          *(_DWORD *)(v36 * 120 + Rotation + 24),
          *(_DWORD *)(v36 * 120 + Rotation + 32),
          *(_DWORD *)(v36 * 120 + Rotation + 36),
          *(_DWORD *)(v36 * 120 + Rotation + 44),
          *(_DWORD *)(v36 * 120 + Rotation + 40),
          *(_DWORD *)(v36 * 120 + Rotation + 48),
          *(_DWORD *)(v36 * 120 + Rotation + 52),
          *(_DWORD *)(v36 * 120 + Rotation + 60),
          *(_DWORD *)(v36 * 120 + Rotation + 56),
          *(_DWORD *)(v36 * 120 + Rotation + 64),
          *(_DWORD *)(v36 * 120 + Rotation + 68),
          *(_DWORD *)(v36 * 120 + Rotation + 72),
          v105,
          0);
    }
    if ( ++v34 >= a2->PresentPlaneCount )
      break;
    LOBYTE(v32) = v107;
    LOBYTE(v33) = v108;
    v31 = v111;
  }
  if ( !v108 && !v107 && !v30 )
    goto LABEL_128;
  memset(&v119, 0, sizeof(v119));
  p_FlipInterval = &a2->FlipInterval;
  v70 = a2->Flags.Value & 0xE0000;
  v114[0] = 0LL;
  v119.FlipInterval = a2->FlipInterval;
  v71 = *((_QWORD *)this + 2);
  v119.Flags.Value = v119.Flags.Value & 0xFFFFF8FF | ((v70 | 0x201800) >> 9);
  v114[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v71 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v114);
  v73 = v114[0];
  if ( !v114[0] )
  {
    v74 = WdLogNewEntry5_WdLowResource(v72);
    *(_QWORD *)(v74 + 24) = 2939LL;
    WdLogEvent5_WdLowResource(v74);
    LODWORD(v6) = -1073741801;
    goto LABEL_124;
  }
  v75 = *(_DWORD *)v114[0] | 0x10020;
  *(_DWORD *)v114[0] = v75;
  *(_DWORD *)v73 = v75 ^ (v75 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    PresentCount = a2->PresentCount;
  else
    PresentCount = 0;
  v77 = *(_DWORD *)v73;
  *((_DWORD *)v73 + 28) = PresentCount;
  v77 |= 0x800004u;
  *(_DWORD *)v73 = v77;
  v78 = (a2->Flags.Value ^ v77) & 8 ^ v77;
  *(_DWORD *)v73 = v78;
  v79 = ((unsigned __int8)v78 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v78;
  *(_DWORD *)v73 = v79;
  v80 = (v79 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v79;
  *(_DWORD *)v73 = v80;
  v81 = (v80 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v80;
  *(_DWORD *)v73 = v81;
  *(_DWORD *)v73 = v81 ^ (v81 ^ (4 * a2->Flags.Value)) & 0x200000;
  if ( (a2->Flags.Value & 0x8000000) != 0 )
    Duration = a2->Duration;
  else
    Duration = 0;
  *((_DWORD *)v73 + 36) = Duration;
  *((_DWORD *)v73 + 29) = VidPnSourceId;
  *((D3DDDI_FLIPINTERVAL_TYPE *)v73 + 31) = *p_FlipInterval;
  v83 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 568LL),
          (unsigned int)VidPnSourceId,
          &a2->FlipInterval);
  *((_DWORD *)v73 + 30) = v83;
  v84 = *((_QWORD *)this + 2);
  if ( v83 == *(_DWORD *)(v84 + 4 * VidPnSourceId + 2792) )
  {
    v89 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v113);
    v6 = (struct COREDEVICEACCESS *)v89;
    if ( v89 >= 0 )
      goto LABEL_104;
    v88 = WdLogNewEntry5_WdEvent(v90);
    *(_QWORD *)(v88 + 32) = this;
LABEL_103:
    *(_QWORD *)(v88 + 24) = v6;
    WdLogEvent5_WdEvent(v88);
  }
  else
  {
    v85 = WdLogNewEntry5_WdEvent(v84);
    *(_QWORD *)(v85 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v85);
    COREDEVICEACCESS::Release(v113);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v86 = COREDEVICEACCESS::AcquireShared(v113);
    v6 = (struct COREDEVICEACCESS *)v86;
    if ( v86 < 0 )
    {
      v88 = WdLogNewEntry5_WdEvent(v87);
      goto LABEL_103;
    }
LABEL_104:
    v91 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, VidPnSourceId);
    v6 = (struct COREDEVICEACCESS *)v91;
    if ( v91 >= 0 )
    {
      if ( *((_DWORD *)v73 + 30) == 5 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v98 = WdLogNewEntry5_WdAssertion(v93);
          *(_QWORD *)(v98 + 24) = 3041LL;
          WdLogEvent5_WdAssertion(v98);
        }
        LODWORD(v6) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays2(
                        this,
                        a2,
                        v108,
                        v107,
                        v106,
                        (const struct DXGALLOCATIONREFERENCE *)v120,
                        &v119,
                        v73,
                        v117);
        if ( (int)v6 >= 0 )
        {
          v99 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL) + 112LL);
          if ( *(_DWORD *)(v99 + 1016 * VidPnSourceId + 964) == -1 )
          {
            v100 = WdLogNewEntry5_WdAssertion(v99);
            *(_QWORD *)(v100 + 24) = 3057LL;
            WdLogEvent5_WdAssertion(v100);
          }
          DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            (const struct DXGALLOCATIONREFERENCE *)v120);
          if ( v109 > -1 )
            DXGDEVICE::SetDisplayedPrimary(
              *((struct _KTHREAD ***)this + 2),
              VidPnSourceId,
              v120[v109],
              *((_DWORD *)v73 + 34),
              0);
          *(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 2792) = *((_DWORD *)v73 + 30);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v6 != -1073741130 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v101);
          *(_QWORD *)(v102 + 24) = 3079LL;
          WdLogEvent5_WdAssertion(v102);
        }
        if ( *((_QWORD *)this + 36) )
        {
          v103 = WdLogNewEntry5_WdAssertion(v101);
          *(_QWORD *)(v103 + 24) = 3080LL;
          WdLogEvent5_WdAssertion(v103);
        }
      }
      else
      {
        v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
        LODWORD(v6) = -1073741811;
        v97[3] = this;
        v97[4] = *(int *)p_FlipInterval;
        v97[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v97);
      }
    }
    else
    {
      v96 = WdLogNewEntry5_WdEvent(v93);
      *(_QWORD *)(v96 + 24) = v6;
      *(_QWORD *)(v96 + 32) = this;
      WdLogEvent5_WdEvent(v96);
      if ( (_DWORD)v6 == -1071774920 )
      {
        DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
          *((struct _KTHREAD ***)this + 2),
          VidPnSourceId,
          (const struct DXGALLOCATIONREFERENCE *)v120);
        if ( v109 > -1 )
          DXGDEVICE::SetDisplayedPrimary(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            v120[v109],
            *((_DWORD *)v73 + 34),
            0);
        LODWORD(v6) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 2792) = *((_DWORD *)v73 + 30);
      }
    }
  }
LABEL_124:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v114);
LABEL_125:
  `vector destructor iterator'(
    (char *)v120,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v6;
}

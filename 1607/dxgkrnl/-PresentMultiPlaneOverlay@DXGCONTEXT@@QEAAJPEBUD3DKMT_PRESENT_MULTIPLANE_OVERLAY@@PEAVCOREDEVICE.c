/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188EE4
 * Callers:
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0186E40 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C018BB20 (DxgkPresentMultiPlaneOverlay.c)
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
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018AE80 (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 VidPnSourceId; // r13
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 right; // rcx
  __int64 v29; // r9
  unsigned __int8 v30; // r10
  char v31; // bl
  __int64 v32; // r8
  unsigned int v33; // r15d
  D3DKMT_MULTIPLANE_OVERLAY *pPresentPlanes; // rdx
  unsigned __int64 v35; // rsi
  __int64 LayerIndex; // r12
  bool v37; // zf
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v39; // r13
  unsigned int v40; // ecx
  __int64 v41; // r8
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
  __int64 v57; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r8
  D3DKMT_MULTIPLANE_OVERLAY *v59; // rdx
  int v60; // eax
  LONG v61; // r12d
  D3DDDI_ROTATION Rotation; // eax
  D3DKMT_MULTIPLANE_OVERLAY *v63; // rbx
  RECT *p_ClipRect; // r8
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r12
  _QWORD *v68; // rax
  D3DDDI_FLIPINTERVAL_TYPE *p_FlipInterval; // r15
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v73; // rsi
  __int64 v74; // rax
  int v75; // ecx
  UINT PresentCount; // eax
  int v77; // ecx
  int v78; // ecx
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
  __int64 v105; // rcx
  int v106; // [rsp+B0h] [rbp-90h]
  char v107; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v108; // [rsp+C1h] [rbp-7Fh]
  unsigned __int8 v109; // [rsp+C2h] [rbp-7Eh]
  int v110; // [rsp+C4h] [rbp-7Ch]
  struct _EX_RUNDOWN_REF **v111; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v112; // [rsp+D0h] [rbp-70h]
  signed int Width; // [rsp+D4h] [rbp-6Ch]
  signed int Height; // [rsp+D8h] [rbp-68h]
  unsigned int v115; // [rsp+DCh] [rbp-64h]
  struct _EX_RUNDOWN_REF *v116; // [rsp+E0h] [rbp-60h] BYREF
  COREDEVICEACCESS *v117; // [rsp+E8h] [rbp-58h]
  struct VIDSCH_SUBMIT_DATA_BASE *v118[2]; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v119; // [rsp+100h] [rbp-40h]
  struct DXGCONTEXT **v120; // [rsp+108h] [rbp-38h]
  RECT v121; // [rsp+110h] [rbp-30h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v122; // [rsp+120h] [rbp-20h] BYREF
  struct _DXGKARG_PRESENT v123; // [rsp+150h] [rbp+10h] BYREF
  struct DXGALLOCATION *v124[8]; // [rsp+200h] [rbp+C0h] BYREF

  v4 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v120 = a4;
  v117 = a3;
  v8 = *(_QWORD *)(v4 + 16);
  v112 = VidPnSourceId;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 743LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 2856) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 744LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(_QWORD *)(v14 + 2856) != v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 745LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    LODWORD(v22) = -1073741811;
    v21[3] = -1073741811LL;
    v21[4] = this;
LABEL_139:
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v22;
  }
  v23 = *((_QWORD *)this + 2);
  v119 = VidPnSourceId;
  v24 = *(_DWORD *)(v23 + 4 * VidPnSourceId + 1000) >> 9;
  if ( (*(_DWORD *)(v23 + 4 * VidPnSourceId + 1000) & 0x200) == 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v17, v19, v20);
    v25[3] = -1071775739LL;
    v25[4] = this;
    v25[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v25);
    return 3223191557LL;
  }
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_DWORD *)&Value & 0xB0E7C3) != 0 || (*(_BYTE *)&Value & 4) == 0 || (*(_DWORD *)&Value & 0x60000) != 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v17, v19, v20);
    LODWORD(v22) = -1073741811;
    v21[3] = this;
    v105 = a2->Flags.Value;
    v21[5] = -1073741811LL;
    v21[4] = v105;
    goto LABEL_139;
  }
  `vector constructor iterator'(
    (char *)v124,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v124);
  v110 = -1;
  LOBYTE(v29) = 0;
  v30 = 0;
  v108 = 0;
  v31 = 0;
  v109 = 0;
  v32 = 0LL;
  v107 = 0;
  v33 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_136:
    v104 = WdLogNewEntry5_WdEvent(right);
    *(_QWORD *)(v104 + 24) = 0LL;
    *(_QWORD *)(v104 + 32) = this;
    WdLogEvent5_WdEvent(v104);
    LODWORD(v22) = 0;
    goto LABEL_137;
  }
  while ( 1 )
  {
    pPresentPlanes = a2->pPresentPlanes;
    v35 = 120LL * v33;
    LayerIndex = pPresentPlanes[v35 / 0x78].LayerIndex;
    if ( (unsigned int)LayerIndex >= 8
      || (right = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)v32) != 0) )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPresentPlanes, v32, v29);
      LODWORD(v22) = -1073741811;
      v68[5] = -1073741811LL;
      v68[4] = LayerIndex;
      v68[3] = this;
      goto LABEL_135;
    }
    v37 = !pPresentPlanes[v35 / 0x78].Enabled;
    v115 = (1 << LayerIndex) | v32;
    if ( v37 )
    {
      if ( v124[LayerIndex] )
        v107 = ++v31;
      v111 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v124[LayerIndex], (struct _EX_RUNDOWN_REF **)&v111);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v111);
      goto LABEL_80;
    }
    v37 = v124[LayerIndex] == 0LL;
    v111 = (struct _EX_RUNDOWN_REF **)&v124[LayerIndex];
    if ( v37 )
      v109 = v30 + 1;
    else
      v108 = v29 + 1;
    hAllocation = pPresentPlanes[v35 / 0x78].hAllocation;
    v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v39 + 184));
    v40 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v40 < *(_DWORD *)(v39 + 224)
      && (v41 = *(_QWORD *)(v39 + 208),
          v42 = *(_DWORD *)(v41 + 16LL * v40 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0x30))
      && (v42 & 0x1000) == 0
      && (v42 & 0xF) != 0
      && (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0xF) == 5 )
    {
      v43 = *(struct _EX_RUNDOWN_REF **)(v41 + 16LL * v40);
    }
    else
    {
      v43 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v116, v43);
    ExReleasePushLockSharedEx(v39 + 184, 0LL);
    KeLeaveCriticalRegion();
    v44 = v111;
    DXGALLOCATIONREFERENCE::MoveAssign(v111, &v116);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v116);
    v49 = *v44;
    if ( !v49 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      LODWORD(v22) = -1073741811;
      v68[3] = -1073741811LL;
      v68[4] = this;
      v68[5] = a2->pPresentPlanes[v33].hAllocation;
LABEL_135:
      WdLogEvent5_WdWarning(v68);
      goto LABEL_137;
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
LABEL_33:
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        LODWORD(v22) = -1073741811;
        v51[3] = -1073741811LL;
        v51[4] = this;
        v51[5] = v124[LayerIndex];
        v51[6] = *((_QWORD *)v124[LayerIndex] + 6);
        v51[7] = a2->pPresentPlanes[v33].hAllocation;
LABEL_92:
        WdLogEvent5_WdError(v51);
        goto LABEL_137;
      }
    }
    else
    {
      if ( (v50 & 0xB) == 0 )
        goto LABEL_33;
      v52 = v110;
      if ( (*(_BYTE *)(v49[6].Count + 4) & 1) != 0 )
        v52 = LayerIndex;
      v110 = v52;
    }
    _mm_lfence();
    memset(&v122, 0, sizeof(v122));
    v53 = *((_QWORD *)this + 2);
    v122.hAllocation = *(HANDLE *)(v49[6].Count + 16);
    v55 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v53 + 16), &v122, v54);
    v22 = v55;
    if ( v55 < 0 )
    {
      _mm_lfence();
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v51[3] = v22;
      v51[4] = this;
      v51[5] = *(_QWORD *)(*((_QWORD *)v124[LayerIndex] + 6) + 16LL);
      v51[6] = v124[LayerIndex];
      goto LABEL_92;
    }
    right = (__int64)a2->pPresentPlanes;
    if ( *(_DWORD *)(v35 + right + 20) >= *(_DWORD *)(v35 + right + 28) )
      goto LABEL_91;
    if ( *(_DWORD *)(v35 + right + 24) >= *(_DWORD *)(v35 + right + 32) )
      goto LABEL_91;
    Width = v122.Width;
    Height = v122.Height;
    if ( *(int *)(v35 + right + 20) < 0
      || (int)v122.Width < *(_DWORD *)(v35 + right + 28)
      || *(int *)(v35 + right + 24) < 0
      || (int)v122.Height < *(_DWORD *)(v35 + right + 32) )
    {
      goto LABEL_91;
    }
    LODWORD(VidPnSourceId) = v112;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL),
                        v112);
    if ( !DisplayModeInfo )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v57);
      v67 = v119;
      LODWORD(v22) = -1073741811;
      v51[3] = -1073741811LL;
      v51[4] = this;
      v51[5] = v67;
      goto LABEL_92;
    }
    v59 = a2->pPresentPlanes;
    right = (unsigned int)v59[v35 / 0x78].PlaneAttributes.ClipRect.right;
    if ( v59[v35 / 0x78].PlaneAttributes.ClipRect.left >= (int)right )
      goto LABEL_91;
    right = (unsigned int)v59[v35 / 0x78].PlaneAttributes.ClipRect.bottom;
    if ( v59[v35 / 0x78].PlaneAttributes.ClipRect.top >= (int)right )
      goto LABEL_91;
    if ( v59[v35 / 0x78].PlaneAttributes.DstRect.left >= v59[v35 / 0x78].PlaneAttributes.DstRect.right )
      goto LABEL_91;
    if ( v59[v35 / 0x78].PlaneAttributes.DstRect.top >= v59[v35 / 0x78].PlaneAttributes.DstRect.bottom )
      goto LABEL_91;
    v60 = *((_DWORD *)DisplayModeInfo + 1);
    v61 = *(_DWORD *)DisplayModeInfo;
    LODWORD(v111) = v60;
    if ( v59[v35 / 0x78].PlaneAttributes.ClipRect.left < 0
      || v61 < v59[v35 / 0x78].PlaneAttributes.ClipRect.right
      || v59[v35 / 0x78].PlaneAttributes.ClipRect.top < 0
      || v60 < (int)right
      || v59[v35 / 0x78].PlaneAttributes.DstRect.left > v59[v35 / 0x78].PlaneAttributes.ClipRect.left
      || v59[v35 / 0x78].PlaneAttributes.DstRect.right < v59[v35 / 0x78].PlaneAttributes.ClipRect.right
      || v59[v35 / 0x78].PlaneAttributes.DstRect.top > v59[v35 / 0x78].PlaneAttributes.ClipRect.top
      || v59[v35 / 0x78].PlaneAttributes.DstRect.bottom < (int)right )
    {
      goto LABEL_91;
    }
    Rotation = v59[v35 / 0x78].PlaneAttributes.Rotation;
    if ( Rotation )
    {
      if ( (unsigned int)(Rotation - 1) > 3 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(right);
        LODWORD(v22) = -1073741811;
        v51[3] = -1073741811LL;
        v51[4] = this;
        v51[5] = v33;
        v51[6] = a2->pPresentPlanes[v33].PlaneAttributes.Rotation;
        goto LABEL_92;
      }
    }
    else
    {
      v59[v35 / 0x78].PlaneAttributes.Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    right = *(_QWORD *)(*((_QWORD *)this + 2) + 2856LL);
    if ( *(_BYTE *)(right + 2054) )
    {
      v63 = a2->pPresentPlanes;
      p_ClipRect = &v63[v35 / 0x78].PlaneAttributes.ClipRect;
      if ( v63[v35 / 0x78].PlaneAttributes.DstRect.left != p_ClipRect->left
        || v63[v35 / 0x78].PlaneAttributes.DstRect.right != p_ClipRect->right
        || v63[v35 / 0x78].PlaneAttributes.DstRect.top != p_ClipRect->top
        || v63[v35 / 0x78].PlaneAttributes.DstRect.bottom != p_ClipRect->bottom )
      {
        InverseXformMPORect(&v121, &v63[v35 / 0x78].PlaneAttributes.Flags, p_ClipRect);
        v63[v35 / 0x78].PlaneAttributes.SrcRect = v121;
        a2->pPresentPlanes[v35 / 0x78].PlaneAttributes.DstRect = a2->pPresentPlanes[v35 / 0x78].PlaneAttributes.ClipRect;
        right = (__int64)a2->pPresentPlanes;
        if ( *(_DWORD *)(v35 + right + 20) >= *(_DWORD *)(v35 + right + 28)
          || *(_DWORD *)(v35 + right + 24) >= *(_DWORD *)(v35 + right + 32)
          || *(_DWORD *)(v35 + right + 36) >= *(_DWORD *)(v35 + right + 44)
          || *(_DWORD *)(v35 + right + 40) >= *(_DWORD *)(v35 + right + 48)
          || *(int *)(v35 + right + 20) < 0
          || Width < *(_DWORD *)(v35 + right + 28)
          || *(int *)(v35 + right + 24) < 0
          || Height < *(_DWORD *)(v35 + right + 32)
          || *(int *)(v35 + right + 36) < 0
          || v61 < *(_DWORD *)(v35 + right + 44)
          || *(int *)(v35 + right + 40) < 0
          || (int)v111 < *(_DWORD *)(v35 + right + 48) )
        {
LABEL_91:
          v51 = (_QWORD *)WdLogNewEntry5_WdError(right);
          LODWORD(v22) = -1073741811;
          v51[3] = -1073741811LL;
          v51[4] = this;
          v51[5] = v33;
          goto LABEL_92;
        }
      }
    }
    v31 = v107;
LABEL_80:
    if ( bTracingEnabled )
    {
      v65 = a2->pPresentPlanes[v35 / 0x78].hAllocation;
      v66 = (_DWORD)v65
          ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 336LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
              (unsigned int)v65)
          : 0LL;
      right = (__int64)a2->pPresentPlanes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqpqddddddddddddqqqq(
          right,
          v66,
          v65,
          VidPnSourceId,
          *(_DWORD *)(v35 + right),
          *(_DWORD *)(v35 + right + 4),
          v66,
          *(_DWORD *)(v35 + right + 16),
          *(_DWORD *)(v35 + right + 20),
          *(_DWORD *)(v35 + right + 28),
          *(_DWORD *)(v35 + right + 24),
          *(_DWORD *)(v35 + right + 32),
          *(_DWORD *)(v35 + right + 36),
          *(_DWORD *)(v35 + right + 44),
          *(_DWORD *)(v35 + right + 40),
          *(_DWORD *)(v35 + right + 48),
          *(_DWORD *)(v35 + right + 52),
          *(_DWORD *)(v35 + right + 60),
          *(_DWORD *)(v35 + right + 56),
          *(_DWORD *)(v35 + right + 64),
          *(_DWORD *)(v35 + right + 68),
          *(_DWORD *)(v35 + right + 72),
          v106,
          0);
    }
    if ( ++v33 >= a2->PresentPlaneCount )
      break;
    v32 = v115;
    LOBYTE(v29) = v108;
    v30 = v109;
  }
  if ( !v109 && !v108 && !v31 )
    goto LABEL_136;
  memset(&v123, 0, sizeof(v123));
  p_FlipInterval = &a2->FlipInterval;
  v70 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  v118[0] = 0LL;
  v123.FlipInterval = a2->FlipInterval;
  v71 = *((_QWORD *)this + 2);
  v123.Flags.Value = v123.Flags.Value & 0xFFFFF8FF | ((*(unsigned int *)&v70 & 0xE0000 | 0x201800) >> 9);
  v118[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v71 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v118);
  v73 = v118[0];
  if ( !v118[0] )
  {
    v74 = WdLogNewEntry5_WdLowResource(v72);
    *(_QWORD *)(v74 + 24) = 1137LL;
    WdLogEvent5_WdLowResource(v74);
    LODWORD(v22) = -1073741801;
    goto LABEL_133;
  }
  v75 = *(_DWORD *)v118[0] | 0x10020;
  *(_DWORD *)v118[0] = v75;
  *(_DWORD *)v73 = v75 ^ (v75 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    PresentCount = a2->PresentCount;
  else
    PresentCount = 0;
  v77 = *(_DWORD *)v73;
  *((_DWORD *)v73 + 28) = PresentCount;
  v77 |= 0x800004u;
  *(_DWORD *)v73 = v77;
  v78 = ((unsigned __int8)v77 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 8 ^ v77;
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
  if ( v83 == *(_DWORD *)(v84 + 4LL * (unsigned int)VidPnSourceId + 2792) )
  {
    v89 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v117);
    v22 = v89;
    if ( v89 >= 0 )
      goto LABEL_113;
    v88 = WdLogNewEntry5_WdEvent(v90);
    *(_QWORD *)(v88 + 32) = this;
LABEL_112:
    *(_QWORD *)(v88 + 24) = v22;
    WdLogEvent5_WdEvent(v88);
  }
  else
  {
    v85 = WdLogNewEntry5_WdEvent(v84);
    *(_QWORD *)(v85 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v85);
    COREDEVICEACCESS::Release(v117);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v86 = COREDEVICEACCESS::AcquireShared(v117);
    v22 = v86;
    if ( v86 < 0 )
    {
      v88 = WdLogNewEntry5_WdEvent(v87);
      goto LABEL_112;
    }
LABEL_113:
    v91 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, VidPnSourceId);
    v22 = v91;
    if ( v91 >= 0 )
    {
      if ( *((_DWORD *)v73 + 30) == 5 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v98 = WdLogNewEntry5_WdAssertion(v93);
          *(_QWORD *)(v98 + 24) = 1240LL;
          WdLogEvent5_WdAssertion(v98);
        }
        LODWORD(v22) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays(
                         this,
                         a2,
                         v109,
                         v108,
                         v107,
                         (const struct DXGALLOCATIONREFERENCE *)v124,
                         &v123,
                         v73,
                         v120);
        if ( (int)v22 >= 0 )
        {
          v99 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 2128LL) + 112LL);
          if ( *(_DWORD *)(v99 + 1016LL * (unsigned int)VidPnSourceId + 964) == -1 )
          {
            v100 = WdLogNewEntry5_WdAssertion(v99);
            *(_QWORD *)(v100 + 24) = 1256LL;
            WdLogEvent5_WdAssertion(v100);
          }
          DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            (const struct DXGALLOCATIONREFERENCE *)v124);
          if ( v110 > -1 )
            DXGDEVICE::SetDisplayedPrimary(
              *((struct _KTHREAD ***)this + 2),
              VidPnSourceId,
              v124[v110],
              *((_DWORD *)v73 + 34),
              0);
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2792) = *((_DWORD *)v73 + 30);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v22 != -1073741130 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v101);
          *(_QWORD *)(v102 + 24) = 1278LL;
          WdLogEvent5_WdAssertion(v102);
        }
        if ( *((_QWORD *)this + 36) )
        {
          v103 = WdLogNewEntry5_WdAssertion(v101);
          *(_QWORD *)(v103 + 24) = 1279LL;
          WdLogEvent5_WdAssertion(v103);
        }
      }
      else
      {
        v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
        LODWORD(v22) = -1073741811;
        v97[3] = this;
        v97[4] = *(int *)p_FlipInterval;
        v97[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v97);
      }
    }
    else
    {
      v96 = WdLogNewEntry5_WdEvent(v93);
      *(_QWORD *)(v96 + 24) = v22;
      *(_QWORD *)(v96 + 32) = this;
      WdLogEvent5_WdEvent(v96);
      if ( (_DWORD)v22 == -1071774920 )
      {
        DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
          *((struct _KTHREAD ***)this + 2),
          VidPnSourceId,
          (const struct DXGALLOCATIONREFERENCE *)v124);
        if ( v110 > -1 )
          DXGDEVICE::SetDisplayedPrimary(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            v124[v110],
            *((_DWORD *)v73 + 34),
            0);
        LODWORD(v22) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2792) = *((_DWORD *)v73 + 30);
      }
    }
  }
LABEL_133:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v118);
LABEL_137:
  `vector destructor iterator'(
    (char *)v124,
    8LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v22;
}

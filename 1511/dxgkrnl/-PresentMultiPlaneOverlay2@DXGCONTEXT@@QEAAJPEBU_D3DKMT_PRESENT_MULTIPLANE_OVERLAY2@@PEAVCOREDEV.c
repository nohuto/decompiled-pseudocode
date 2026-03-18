/*
 * XREFs of ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0164A80 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0003470 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000B17C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C000B1C8 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAIIPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0021F2C (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAIIPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 *     ?SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0022018 (-SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z.c)
 *     Template_qqqpqddddddddddddqqqq @ 0x1C0022094 (Template_qqqpqddddddddddddqqqq.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005BE80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CheckHardwareProtectionVisibility@DXGADAPTER@@QEAAXPEAV1@@Z @ 0x1C0123FAC (-CheckHardwareProtectionVisibility@DXGADAPTER@@QEAAXPEAV1@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013AC1C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01604D4 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0161268 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0163308 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 DisplayModeInfo; // rdx
  __int64 Rotation; // rcx
  char v28; // bl
  int v29; // r10d
  D3DKMT_MULTIPLANE_OVERLAY2 *v30; // r8
  __int64 v31; // r9
  unsigned int v32; // r15d
  D3DKMT_MULTIPLANE_OVERLAY2 *pPresentPlanes; // rdx
  unsigned __int64 v34; // rsi
  __int64 LayerIndex; // r12
  bool v36; // zf
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v38; // ecx
  __int64 v39; // r8
  int v40; // edx
  struct _EX_RUNDOWN_REF *v41; // rdx
  DXGALLOCATIONREFERENCE *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  const struct DXGALLOCATION *v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  unsigned __int64 right; // rcx
  __int64 v55; // rcx
  LONG left; // ecx
  int v57; // r11d
  int v58; // ebx
  unsigned int v59; // r10d
  D3DKMT_MULTIPLANE_OVERLAY2 *v60; // rax
  struct _EX_RUNDOWN_REF **v61; // rcx
  _QWORD *v62; // rax
  D3DDDI_FLIPINTERVAL_TYPE *p_FlipInterval; // r15
  UINT v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v70; // rsi
  __int64 v71; // rax
  int v72; // ecx
  UINT PresentCount; // eax
  int v74; // ecx
  UINT v75; // ecx
  int v76; // ecx
  UINT v77; // ecx
  UINT v78; // ecx
  UINT Duration; // eax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // [rsp+B0h] [rbp-90h]
  unsigned __int8 v112; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v113; // [rsp+C1h] [rbp-7Fh]
  char v114; // [rsp+C2h] [rbp-7Eh]
  int v115; // [rsp+C4h] [rbp-7Ch]
  struct DXGALLOCATION *v116; // [rsp+C8h] [rbp-78h] BYREF
  int v117; // [rsp+D0h] [rbp-70h]
  COREDEVICEACCESS *v118; // [rsp+D8h] [rbp-68h]
  struct VIDSCH_SUBMIT_DATA_BASE *v119[2]; // [rsp+E0h] [rbp-60h] BYREF
  struct DXGALLOCATION *v120; // [rsp+F0h] [rbp-50h] BYREF
  struct DXGCONTEXT **v121; // [rsp+F8h] [rbp-48h]
  DXGALLOCATIONREFERENCE *v122; // [rsp+100h] [rbp-40h]
  char *v123; // [rsp+108h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v124; // [rsp+118h] [rbp-28h] BYREF
  struct _DXGKARG_PRESENT v125; // [rsp+150h] [rbp+10h] BYREF
  struct DXGALLOCATION *v126[8]; // [rsp+200h] [rbp+C0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v6 = a3;
  v121 = a4;
  v118 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 2499LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 2832) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2500LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(_QWORD *)(v14 + 2832) != v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 2504LL;
    WdLogEvent5_WdAssertion(v17);
  }
  DXGADAPTER::CheckHardwareProtectionVisibility(
    *(DXGADAPTER **)(*((_QWORD *)this + 2) + 2832LL),
    *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
  v20 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(*(_QWORD *)(v20 + 2832) + 856LL) )
  {
    LODWORD(v6) = DXGCONTEXT::ConvertToPresentMultiPlaneOverlay(this, a2, v6, a4);
    return (unsigned int)v6;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  if ( !*(_BYTE *)(v21 + 1860) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v18, v19);
    LODWORD(v6) = -1073741811;
    v22[3] = -1073741811LL;
    v22[4] = this;
LABEL_10:
    WdLogEvent5_WdWarning(v22);
    return (unsigned int)v6;
  }
  if ( (*(_DWORD *)(v20 + 4 * VidPnSourceId + 976) & 0x200) == 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v18, v19);
    v23[3] = -1071775739LL;
    v23[4] = this;
    v23[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v23);
    return 3223191557LL;
  }
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_DWORD *)&Value & 0xB0E7C3) != 0 || (*(_BYTE *)&Value & 4) == 0 || (*(_DWORD *)&Value & 0x60000) != 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v18, v19);
    LODWORD(v6) = -1073741811;
    v22[3] = this;
    v22[4] = a2->Flags.Value;
    v22[5] = -1073741811LL;
    goto LABEL_10;
  }
  `vector constructor iterator'(
    (char *)v126,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v126);
  v115 = -1;
  v28 = 0;
  v29 = 0;
  LOBYTE(v30) = 0;
  LOBYTE(v31) = 0;
  v113 = 0;
  v32 = 0;
  v112 = 0;
  v114 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_127:
    v110 = WdLogNewEntry5_WdEvent(Rotation, DisplayModeInfo, v30, v31);
    *(_QWORD *)(v110 + 24) = 0LL;
    *(_QWORD *)(v110 + 32) = this;
    WdLogEvent5_WdEvent(v110);
    LODWORD(v6) = 0;
    goto LABEL_124;
  }
  while ( 1 )
  {
    pPresentPlanes = a2->pPresentPlanes;
    v34 = v32;
    LayerIndex = pPresentPlanes[v34].LayerIndex;
    if ( (unsigned int)LayerIndex >= 8 || (Rotation = (unsigned int)LayerIndex, ((1 << LayerIndex) & v29) != 0) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(Rotation, pPresentPlanes, v30, v31);
      LODWORD(v6) = -1073741811;
      v62[5] = -1073741811LL;
      v62[4] = LayerIndex;
      v62[3] = this;
      goto LABEL_126;
    }
    v36 = !pPresentPlanes[v34].Enabled;
    v117 = (1 << LayerIndex) | v29;
    if ( v36 )
    {
      v61 = (struct _EX_RUNDOWN_REF **)&v126[LayerIndex];
      if ( *v61 )
        v114 = ++v28;
      v116 = 0LL;
      DXGALLOCATIONREFERENCE::Assign(v61, &v116);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v116);
      goto LABEL_74;
    }
    v36 = v126[LayerIndex] == 0LL;
    v122 = (DXGALLOCATIONREFERENCE *)&v126[LayerIndex];
    if ( v36 )
      v112 = v31 + 1;
    else
      v113 = (_BYTE)v30 + 1;
    hAllocation = pPresentPlanes[v34].hAllocation;
    v116 = *(struct DXGALLOCATION **)(*((_QWORD *)this + 2) + 40LL);
    v123 = (char *)v116 + 192;
    DXGPUSHLOCK::AcquireShared((struct DXGALLOCATION *)((char *)v116 + 192));
    v38 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v38 < *((_DWORD *)v116 + 58)
      && (v39 = *((_QWORD *)v116 + 27),
          v40 = *(_DWORD *)(v39 + 16LL * v38 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x30))
      && (v40 & 0x1000) == 0
      && (v40 & 0xF) != 0
      && (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0xF) == 5 )
    {
      v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v38);
    }
    else
    {
      v41 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v120, v41);
    ExReleasePushLockSharedEx(v123, 0LL);
    KeLeaveCriticalRegion();
    v42 = v122;
    DXGALLOCATIONREFERENCE::Assign((struct _EX_RUNDOWN_REF **)v122, &v120);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v120);
    v47 = *(const struct DXGALLOCATION **)v42;
    if ( !v47 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
      LODWORD(v6) = -1073741811;
      v62[3] = -1073741811LL;
      v62[4] = this;
      v62[5] = a2->pPresentPlanes[v32].hAllocation;
LABEL_126:
      WdLogEvent5_WdWarning(v62);
      goto LABEL_124;
    }
    _mm_lfence();
    v48 = *(unsigned int *)(*((_QWORD *)v47 + 6) + 4LL);
    if ( (v48 & 0x2000) != 0 )
    {
      if ( !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v47) )
      {
        _mm_lfence();
LABEL_35:
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v48);
        LODWORD(v6) = -1073741811;
        v49[3] = -1073741811LL;
        v49[4] = this;
        v49[5] = v126[LayerIndex];
        v49[6] = *((_QWORD *)v126[LayerIndex] + 6);
        v49[7] = a2->pPresentPlanes[v32].hAllocation;
LABEL_68:
        WdLogEvent5_WdError(v49);
        goto LABEL_124;
      }
    }
    else
    {
      _mm_lfence();
      if ( (v48 & 0xB) == 0 )
        goto LABEL_35;
      v50 = v115;
      if ( (*(_BYTE *)(*((_QWORD *)v47 + 6) + 4LL) & 1) != 0 )
        v50 = LayerIndex;
      v115 = v50;
    }
    _mm_lfence();
    memset(&v124, 0, sizeof(v124));
    v51 = *((_QWORD *)this + 2);
    v124.hAllocation = *(HANDLE *)(*((_QWORD *)v47 + 6) + 16LL);
    v52 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v51 + 16), &v124, v45);
    v6 = (struct COREDEVICEACCESS *)v52;
    if ( v52 < 0 )
    {
      _mm_lfence();
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v53);
      v49[3] = v6;
      v49[4] = this;
      v49[5] = *(_QWORD *)(*((_QWORD *)v126[LayerIndex] + 6) + 16LL);
      v49[6] = v126[LayerIndex];
      goto LABEL_68;
    }
    right = (unsigned __int64)a2->pPresentPlanes;
    if ( *(_DWORD *)(v34 * 120 + right + 20) >= *(_DWORD *)(v34 * 120 + right + 28)
      || *(_DWORD *)(v34 * 120 + right + 24) >= *(_DWORD *)(v34 * 120 + right + 32)
      || *(int *)(v34 * 120 + right + 20) < 0
      || (int)v124.Width < *(_DWORD *)(v34 * 120 + right + 28)
      || *(int *)(v34 * 120 + right + 24) < 0
      || (int)v124.Height < *(_DWORD *)(v34 * 120 + right + 32) )
    {
LABEL_83:
      v49 = (_QWORD *)WdLogNewEntry5_WdError(right);
      LODWORD(v6) = -1073741811;
      v49[3] = -1073741811LL;
      v49[4] = this;
      v49[5] = v32;
      goto LABEL_68;
    }
    DisplayModeInfo = (__int64)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL),
                                 VidPnSourceId);
    if ( !DisplayModeInfo )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      LODWORD(v6) = -1073741811;
      v49[3] = -1073741811LL;
      v49[4] = this;
      v49[5] = VidPnSourceId;
      goto LABEL_68;
    }
    v30 = a2->pPresentPlanes;
    right = (unsigned int)v30[v34].PlaneAttributes.ClipRect.right;
    if ( v30[v34].PlaneAttributes.ClipRect.left >= (int)right )
      goto LABEL_83;
    right = (unsigned int)v30[v34].PlaneAttributes.ClipRect.bottom;
    if ( v30[v34].PlaneAttributes.ClipRect.top >= (int)right )
      goto LABEL_83;
    if ( v30[v34].PlaneAttributes.DstRect.left >= v30[v34].PlaneAttributes.DstRect.right )
      goto LABEL_83;
    if ( v30[v34].PlaneAttributes.DstRect.top >= v30[v34].PlaneAttributes.DstRect.bottom )
      goto LABEL_83;
    right = *(unsigned int *)(DisplayModeInfo + 4);
    if ( v30[v34].PlaneAttributes.ClipRect.left < 0
      || *(_DWORD *)DisplayModeInfo < v30[v34].PlaneAttributes.ClipRect.right
      || v30[v34].PlaneAttributes.ClipRect.top < 0
      || (int)right < v30[v34].PlaneAttributes.ClipRect.bottom
      || v30[v34].PlaneAttributes.DstRect.left > v30[v34].PlaneAttributes.ClipRect.left
      || v30[v34].PlaneAttributes.DstRect.right < v30[v34].PlaneAttributes.ClipRect.right
      || v30[v34].PlaneAttributes.DstRect.top > v30[v34].PlaneAttributes.ClipRect.top
      || v30[v34].PlaneAttributes.DstRect.bottom < v30[v34].PlaneAttributes.ClipRect.bottom )
    {
      goto LABEL_83;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1918LL) )
    {
      left = v30[v34].PlaneAttributes.SrcRect.left;
      v57 = v30[v34].PlaneAttributes.SrcRect.right - left;
      v58 = v30[v34].PlaneAttributes.SrcRect.bottom - v30[v34].PlaneAttributes.SrcRect.top;
      v31 = (unsigned int)(v30[v34].PlaneAttributes.DstRect.bottom - v30[v34].PlaneAttributes.DstRect.top);
      DisplayModeInfo = (unsigned int)v30[v34].PlaneAttributes.DstRect.left;
      v59 = v30[v34].PlaneAttributes.DstRect.right - DisplayModeInfo;
      if ( v59 && (_DWORD)v31 )
      {
        v30[v34].PlaneAttributes.SrcRect.left = left
                                              + v57
                                              * (v30[v34].PlaneAttributes.ClipRect.left - (int)DisplayModeInfo)
                                              / v59;
        a2->pPresentPlanes[v34].PlaneAttributes.SrcRect.top += v58
                                                             * (a2->pPresentPlanes[v34].PlaneAttributes.ClipRect.top
                                                              - a2->pPresentPlanes[v34].PlaneAttributes.DstRect.top)
                                                             / (unsigned int)v31;
        HIDWORD(DisplayModeInfo) = 0;
        a2->pPresentPlanes[v34].PlaneAttributes.SrcRect.right -= v57
                                                               * (a2->pPresentPlanes[v34].PlaneAttributes.DstRect.right
                                                                - a2->pPresentPlanes[v34].PlaneAttributes.ClipRect.right)
                                                               / v59;
        v30 = a2->pPresentPlanes;
        LODWORD(DisplayModeInfo) = v58
                                 * (v30[v34].PlaneAttributes.DstRect.bottom - v30[v34].PlaneAttributes.ClipRect.bottom)
                                 % (unsigned int)v31;
        v30[v34].PlaneAttributes.SrcRect.bottom -= v58
                                                 * (v30[v34].PlaneAttributes.DstRect.bottom
                                                  - v30[v34].PlaneAttributes.ClipRect.bottom)
                                                 / (unsigned int)v31;
      }
      a2->pPresentPlanes[v34].PlaneAttributes.DstRect = a2->pPresentPlanes[v34].PlaneAttributes.ClipRect;
    }
    v60 = a2->pPresentPlanes;
    Rotation = (unsigned int)v60[v34].PlaneAttributes.Rotation;
    if ( (_DWORD)Rotation )
    {
      if ( (unsigned int)(Rotation - 1) > 3 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(Rotation);
        LODWORD(v6) = -1073741811;
        v49[3] = -1073741811LL;
        v49[4] = this;
        v49[5] = v32;
        v49[6] = a2->pPresentPlanes[v32].PlaneAttributes.Rotation;
        goto LABEL_68;
      }
    }
    else
    {
      v60[v34].PlaneAttributes.Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    v28 = v114;
LABEL_74:
    if ( bTracingEnabled )
    {
      v30 = (D3DKMT_MULTIPLANE_OVERLAY2 *)a2->pPresentPlanes[v34].hAllocation;
      DisplayModeInfo = (_DWORD)v30
                      ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 424LL)
                                                                              + 8LL)
                                                                  + 320LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                          (unsigned int)v30)
                      : 0LL;
      Rotation = (__int64)a2->pPresentPlanes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqpqddddddddddddqqqq(
          Rotation,
          DisplayModeInfo,
          (__int64)v30,
          VidPnSourceId,
          *(_DWORD *)(v34 * 120 + Rotation),
          *(_DWORD *)(v34 * 120 + Rotation + 4),
          DisplayModeInfo,
          *(_DWORD *)(v34 * 120 + Rotation + 16),
          *(_DWORD *)(v34 * 120 + Rotation + 20),
          *(_DWORD *)(v34 * 120 + Rotation + 28),
          *(_DWORD *)(v34 * 120 + Rotation + 24),
          *(_DWORD *)(v34 * 120 + Rotation + 32),
          *(_DWORD *)(v34 * 120 + Rotation + 36),
          *(_DWORD *)(v34 * 120 + Rotation + 44),
          *(_DWORD *)(v34 * 120 + Rotation + 40),
          *(_DWORD *)(v34 * 120 + Rotation + 48),
          *(_DWORD *)(v34 * 120 + Rotation + 52),
          *(_DWORD *)(v34 * 120 + Rotation + 60),
          *(_DWORD *)(v34 * 120 + Rotation + 56),
          *(_DWORD *)(v34 * 120 + Rotation + 64),
          *(_DWORD *)(v34 * 120 + Rotation + 68),
          *(_DWORD *)(v34 * 120 + Rotation + 72),
          v111,
          0);
    }
    if ( ++v32 >= a2->PresentPlaneCount )
      break;
    LOBYTE(v30) = v113;
    LOBYTE(v31) = v112;
    v29 = v117;
  }
  if ( !v112 && !v113 && !v28 )
    goto LABEL_127;
  memset(&v125, 0, sizeof(v125));
  p_FlipInterval = &a2->FlipInterval;
  v64 = a2->Flags.Value & 0xE0000;
  v119[0] = 0LL;
  v125.FlipInterval = a2->FlipInterval;
  v65 = *((_QWORD *)this + 2);
  v125.Flags.Value = v125.Flags.Value & 0xFFFFF8FF | ((v64 | 0x201800) >> 9);
  v119[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v65 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v119);
  v70 = v119[0];
  if ( !v119[0] )
  {
    v71 = WdLogNewEntry5_WdLowResource(v67, v66, v68, v69);
    *(_QWORD *)(v71 + 24) = 2906LL;
    WdLogEvent5_WdLowResource(v71);
    LODWORD(v6) = -1073741801;
    goto LABEL_123;
  }
  v72 = *(_DWORD *)v119[0] | 0x10020;
  *(_DWORD *)v119[0] = v72;
  *(_DWORD *)v70 = v72 ^ (v72 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    PresentCount = a2->PresentCount;
  else
    PresentCount = 0;
  v74 = *(_DWORD *)v70;
  *((_DWORD *)v70 + 28) = PresentCount;
  v74 |= 0x800004u;
  *(_DWORD *)v70 = v74;
  v75 = (a2->Flags.Value ^ v74) & 8 ^ v74;
  *(_DWORD *)v70 = v75;
  v76 = ((unsigned __int8)v75 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v75;
  *(_DWORD *)v70 = v76;
  v77 = (v76 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v76;
  *(_DWORD *)v70 = v77;
  v78 = (v77 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v77;
  *(_DWORD *)v70 = v78;
  *(_DWORD *)v70 = v78 ^ (v78 ^ (4 * a2->Flags.Value)) & 0x200000;
  if ( (a2->Flags.Value & 0x8000000) != 0 )
    Duration = a2->Duration;
  else
    Duration = 0;
  *((_DWORD *)v70 + 36) = Duration;
  *((_DWORD *)v70 + 29) = VidPnSourceId;
  *((D3DDDI_FLIPINTERVAL_TYPE *)v70 + 31) = *p_FlipInterval;
  v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                          + 8LL)
                                                                              + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
          (unsigned int)VidPnSourceId,
          &a2->FlipInterval);
  *((_DWORD *)v70 + 30) = v80;
  v84 = *((_QWORD *)this + 2);
  if ( v80 == *(_DWORD *)(v84 + 4 * VidPnSourceId + 2768) )
  {
    v92 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v118);
    v6 = (struct COREDEVICEACCESS *)v92;
    if ( v92 >= 0 )
      goto LABEL_103;
    v91 = WdLogNewEntry5_WdEvent(v94, v93, v95, v96);
    *(_QWORD *)(v91 + 32) = this;
LABEL_102:
    *(_QWORD *)(v91 + 24) = v6;
    WdLogEvent5_WdEvent(v91);
  }
  else
  {
    v85 = WdLogNewEntry5_WdEvent(v84, v81, v82, v83);
    *(_QWORD *)(v85 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v85);
    COREDEVICEACCESS::Release(v118);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v86 = COREDEVICEACCESS::AcquireShared(v118);
    v6 = (struct COREDEVICEACCESS *)v86;
    if ( v86 < 0 )
    {
      v91 = WdLogNewEntry5_WdEvent(v88, v87, v89, v90);
      goto LABEL_102;
    }
LABEL_103:
    v97 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, VidPnSourceId);
    v6 = (struct COREDEVICEACCESS *)v97;
    if ( v97 >= 0 )
    {
      if ( *((_DWORD *)v70 + 30) == 5 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v104 = WdLogNewEntry5_WdAssertion(v99);
          *(_QWORD *)(v104 + 24) = 3008LL;
          WdLogEvent5_WdAssertion(v104);
        }
        LODWORD(v6) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays2(
                        this,
                        a2,
                        v112,
                        v113,
                        v114,
                        (const struct DXGALLOCATIONREFERENCE *)v126,
                        &v125,
                        v70,
                        v121);
        if ( (int)v6 >= 0 )
        {
          v105 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL) + 136LL);
          if ( *(_DWORD *)(v105 + 1016 * VidPnSourceId + 956) == -1 )
          {
            v106 = WdLogNewEntry5_WdAssertion(v105);
            *(_QWORD *)(v106 + 24) = 3024LL;
            WdLogEvent5_WdAssertion(v106);
          }
          DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            (const struct DXGALLOCATIONREFERENCE *)v126);
          if ( v115 > -1 )
            DXGDEVICE::SetDisplayedPrimary(
              *((DXGDEVICE **)this + 2),
              VidPnSourceId,
              v126[v115],
              *((_DWORD *)v70 + 34),
              0);
          *(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 2768) = *((_DWORD *)v70 + 30);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v6 != -1073741130 )
        {
          v108 = WdLogNewEntry5_WdAssertion(v107);
          *(_QWORD *)(v108 + 24) = 3046LL;
          WdLogEvent5_WdAssertion(v108);
        }
        if ( *((_QWORD *)this + 36) )
        {
          v109 = WdLogNewEntry5_WdAssertion(v107);
          *(_QWORD *)(v109 + 24) = 3047LL;
          WdLogEvent5_WdAssertion(v109);
        }
      }
      else
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdWarning(v99, v98, v100, v101);
        LODWORD(v6) = -1073741811;
        v103[3] = this;
        v103[4] = *(int *)p_FlipInterval;
        v103[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v103);
      }
    }
    else
    {
      v102 = WdLogNewEntry5_WdEvent(v99, v98, v100, v101);
      *(_QWORD *)(v102 + 24) = v6;
      *(_QWORD *)(v102 + 32) = this;
      WdLogEvent5_WdEvent(v102);
      if ( (_DWORD)v6 == -1071774920 )
      {
        DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
          *((struct _KTHREAD ***)this + 2),
          VidPnSourceId,
          (const struct DXGALLOCATIONREFERENCE *)v126);
        if ( v115 > -1 )
          DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), VidPnSourceId, v126[v115], *((_DWORD *)v70 + 34), 0);
        LODWORD(v6) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 2768) = *((_DWORD *)v70 + 30);
      }
    }
  }
LABEL_123:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v119);
LABEL_124:
  `vector destructor iterator'(
    (char *)v126,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v6;
}

/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304
 * Callers:
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015CF74 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0160150 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0001600 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0017BF4 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAIIPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0022038 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAIIPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 *     ?SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0022124 (-SetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEBVDXGALLOCATIONREFERENCE@@@Z.c)
 *     Template_qqqpqddddddddddddqqqq @ 0x1C00221A0 (Template_qqqpqddddddddddddqqqq.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005AEBC (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CheckHardwareProtectionVisibility@DXGADAPTER@@QEAAXPEAV1@@Z @ 0x1C011E5F4 (-CheckHardwareProtectionVisibility@DXGADAPTER@@QEAAXPEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C015C1E0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 *     InverseXformMPORect @ 0x1C015D258 (InverseXformMPORect.c)
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F7CC (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  struct DXGADAPTER *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  _QWORD *v25; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  D3DKMT_MULTIPLANE_OVERLAY *v28; // rdx
  __int64 right; // rcx
  char v30; // bl
  __int64 DisplayModeInfo; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // r10
  unsigned int v34; // r15d
  D3DKMT_MULTIPLANE_OVERLAY *pPresentPlanes; // rdx
  unsigned __int64 v36; // rsi
  __int64 LayerIndex; // r12
  bool v38; // zf
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v40; // r13
  unsigned int v41; // ecx
  __int64 v42; // r8
  int v43; // edx
  struct _EX_RUNDOWN_REF *v44; // rdx
  struct _EX_RUNDOWN_REF **v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _EX_RUNDOWN_REF *v53; // rbx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  int v56; // eax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // eax
  LONG v62; // r12d
  D3DDDI_ROTATION Rotation; // eax
  D3DKMT_MULTIPLANE_OVERLAY *v64; // rbx
  struct _EX_RUNDOWN_REF **v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r12
  _QWORD *v70; // rax
  D3DDDI_FLIPINTERVAL_TYPE *p_FlipInterval; // r15
  UINT v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v75; // rsi
  __int64 v76; // rax
  int v77; // ecx
  UINT PresentCount; // eax
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  UINT v82; // ecx
  UINT v83; // ecx
  UINT Duration; // eax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rcx
  int v122; // [rsp+B0h] [rbp-90h]
  char v123; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v124; // [rsp+C1h] [rbp-7Fh]
  unsigned __int8 v125; // [rsp+C2h] [rbp-7Eh]
  int v126; // [rsp+C4h] [rbp-7Ch]
  struct _EX_RUNDOWN_REF **v127; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v128; // [rsp+D0h] [rbp-70h]
  signed int Width; // [rsp+D4h] [rbp-6Ch]
  signed int Height; // [rsp+D8h] [rbp-68h]
  unsigned int v131; // [rsp+DCh] [rbp-64h]
  struct _EX_RUNDOWN_REF *v132; // [rsp+E0h] [rbp-60h] BYREF
  COREDEVICEACCESS *v133; // [rsp+E8h] [rbp-58h]
  struct VIDSCH_SUBMIT_DATA_BASE *v134[2]; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v135; // [rsp+100h] [rbp-40h]
  struct DXGCONTEXT **v136; // [rsp+108h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v137; // [rsp+110h] [rbp-30h] BYREF
  RECT v138; // [rsp+140h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v139; // [rsp+150h] [rbp+10h] BYREF
  struct DXGALLOCATION *v140[8]; // [rsp+200h] [rbp+C0h] BYREF

  v4 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v136 = a4;
  v133 = a3;
  v8 = *(_QWORD *)(v4 + 16);
  v131 = VidPnSourceId;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 654LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(_QWORD *)(v14 + 18704) != v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v14, v11, v12);
    *(_QWORD *)(v16 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 2);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  if ( *(_QWORD *)(v17 + 18704) != v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17, v11, v12);
    *(_QWORD *)(v19 + 24) = 656LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = *((_QWORD *)this + 2);
  v21 = *(struct DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL);
  if ( !*((_BYTE *)v21 + 1852) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v21, v11, v12);
    LODWORD(v23) = -1073741811;
    v22[3] = -1073741811LL;
    v22[4] = this;
LABEL_138:
    WdLogEvent5_WdWarning(v22);
    return (unsigned int)v23;
  }
  v24 = *(_DWORD *)(v20 + 4 * VidPnSourceId + 4752) >> 6;
  v135 = VidPnSourceId;
  if ( (v24 & 1) == 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v21, v11, v12);
    v25[3] = -1071775739LL;
    v25[4] = this;
    v25[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v25);
    return 3223191557LL;
  }
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_DWORD *)&Value & 0xB0E7C3) != 0 || (*(_BYTE *)&Value & 4) == 0 || (*(_DWORD *)&Value & 0x60000) != 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v21, v11, v12);
    LODWORD(v23) = -1073741811;
    v22[3] = this;
    v121 = a2->Flags.Value;
    v22[5] = -1073741811LL;
    v22[4] = v121;
    goto LABEL_138;
  }
  DXGADAPTER::CheckHardwareProtectionVisibility(*(DXGADAPTER **)(v20 + 18704), v21);
  `vector constructor iterator'(
    (char *)v140,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v140);
  v126 = -1;
  v30 = 0;
  DisplayModeInfo = 0LL;
  LOBYTE(v32) = 0;
  v33 = 0;
  v125 = 0;
  v34 = 0;
  v124 = 0;
  v123 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_135:
    v120 = WdLogNewEntry5_WdEvent(right, v28, DisplayModeInfo, v32);
    *(_QWORD *)(v120 + 24) = 0LL;
    *(_QWORD *)(v120 + 32) = this;
    WdLogEvent5_WdEvent(v120);
    LODWORD(v23) = 0;
    goto LABEL_136;
  }
  while ( 1 )
  {
    pPresentPlanes = a2->pPresentPlanes;
    v36 = 120LL * v34;
    LayerIndex = pPresentPlanes[v36 / 0x78].LayerIndex;
    if ( (unsigned int)LayerIndex >= 8
      || (right = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)DisplayModeInfo) != 0) )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPresentPlanes, DisplayModeInfo, v32);
      LODWORD(v23) = -1073741811;
      v70[5] = -1073741811LL;
      v70[4] = LayerIndex;
      v70[3] = this;
      goto LABEL_134;
    }
    v38 = !pPresentPlanes[v36 / 0x78].Enabled;
    v128 = (1 << LayerIndex) | DisplayModeInfo;
    if ( v38 )
    {
      v65 = (struct _EX_RUNDOWN_REF **)&v140[LayerIndex];
      if ( *v65 )
        v123 = ++v30;
      v127 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign(v65, (struct _EX_RUNDOWN_REF **)&v127);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v127, v66, v67, v68);
      goto LABEL_84;
    }
    v38 = v140[LayerIndex] == 0LL;
    v127 = (struct _EX_RUNDOWN_REF **)&v140[LayerIndex];
    if ( v38 )
      v124 = v33 + 1;
    else
      v125 = v32 + 1;
    hAllocation = pPresentPlanes[v36 / 0x78].hAllocation;
    v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v40 + 192));
    v41 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v41 < *(_DWORD *)(v40 + 232)
      && (v42 = *(_QWORD *)(v40 + 216),
          v43 = *(_DWORD *)(v42 + 16LL * v41 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v42 + 16LL * v41 + 8) & 0x30))
      && (v43 & 0x1000) == 0
      && (v43 & 0xF) != 0
      && (*(_BYTE *)(v42 + 16LL * v41 + 8) & 0xF) == 5 )
    {
      v44 = *(struct _EX_RUNDOWN_REF **)(v42 + 16LL * v41);
    }
    else
    {
      v44 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v132, v44);
    ExReleasePushLockSharedEx(v40 + 192, 0LL);
    KeLeaveCriticalRegion();
    v45 = v127;
    DXGALLOCATIONREFERENCE::MoveAssign(v127, &v132);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v132, v46, v47, v48);
    v53 = *v45;
    if ( !v53 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
      LODWORD(v23) = -1073741811;
      v70[3] = -1073741811LL;
      v70[4] = this;
      v70[5] = a2->pPresentPlanes[v34].hAllocation;
LABEL_134:
      WdLogEvent5_WdWarning(v70);
      goto LABEL_136;
    }
    _mm_lfence();
    v54 = *(unsigned int *)(v53[6].Count + 4);
    _mm_lfence();
    if ( (v54 & 0x2000) != 0 )
    {
      v54 = (*(_DWORD *)(v53[6].Count + 4) >> 6) & 0xF;
      if ( *(struct _EX_RUNDOWN_REF **)(*((_QWORD *)this + 2)
                                      + 8 * (((LODWORD(v53[9].Count) >> 1) & 0x7F) + 96 * v54)
                                      + 4816) != v53 )
      {
        _mm_lfence();
LABEL_32:
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v54);
        LODWORD(v23) = -1073741811;
        v55[3] = -1073741811LL;
        v55[4] = this;
        v55[5] = v140[LayerIndex];
        v55[6] = *((_QWORD *)v140[LayerIndex] + 6);
        v55[7] = a2->pPresentPlanes[v34].hAllocation;
LABEL_79:
        WdLogEvent5_WdError(v55);
        goto LABEL_136;
      }
    }
    else
    {
      if ( (v54 & 0xB) == 0 )
        goto LABEL_32;
      v56 = v126;
      if ( (*(_BYTE *)(v53[6].Count + 4) & 1) != 0 )
        v56 = LayerIndex;
      v126 = v56;
    }
    _mm_lfence();
    memset(&v137, 0, sizeof(v137));
    v57 = *((_QWORD *)this + 2);
    v137.hAllocation = *(HANDLE *)(v53[6].Count + 16);
    v58 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v57 + 16), &v137, v51);
    v23 = v58;
    if ( v58 < 0 )
    {
      _mm_lfence();
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      v55[3] = v23;
      v55[4] = this;
      v55[5] = *(_QWORD *)(*((_QWORD *)v140[LayerIndex] + 6) + 16LL);
      v55[6] = v140[LayerIndex];
      goto LABEL_79;
    }
    right = (__int64)a2->pPresentPlanes;
    if ( *(_DWORD *)(right + v36 + 20) >= *(_DWORD *)(right + v36 + 28) )
      goto LABEL_78;
    if ( *(_DWORD *)(right + v36 + 24) >= *(_DWORD *)(right + v36 + 32) )
      goto LABEL_78;
    Width = v137.Width;
    Height = v137.Height;
    if ( *(int *)(right + v36 + 20) < 0
      || (int)v137.Width < *(_DWORD *)(right + v36 + 28)
      || *(int *)(right + v36 + 24) < 0
      || (int)v137.Height < *(_DWORD *)(right + v36 + 32) )
    {
      goto LABEL_78;
    }
    LODWORD(VidPnSourceId) = v131;
    DisplayModeInfo = (__int64)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
                                 v131);
    if ( !DisplayModeInfo )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v60);
      v69 = v135;
      LODWORD(v23) = -1073741811;
      v55[3] = -1073741811LL;
      v55[4] = this;
      v55[5] = v69;
      goto LABEL_79;
    }
    v28 = a2->pPresentPlanes;
    right = (unsigned int)v28[v36 / 0x78].PlaneAttributes.ClipRect.right;
    if ( v28[v36 / 0x78].PlaneAttributes.ClipRect.left >= (int)right )
      goto LABEL_78;
    right = (unsigned int)v28[v36 / 0x78].PlaneAttributes.ClipRect.bottom;
    if ( v28[v36 / 0x78].PlaneAttributes.ClipRect.top >= (int)right )
      goto LABEL_78;
    if ( v28[v36 / 0x78].PlaneAttributes.DstRect.left >= v28[v36 / 0x78].PlaneAttributes.DstRect.right )
      goto LABEL_78;
    if ( v28[v36 / 0x78].PlaneAttributes.DstRect.top >= v28[v36 / 0x78].PlaneAttributes.DstRect.bottom )
      goto LABEL_78;
    v61 = *(_DWORD *)(DisplayModeInfo + 4);
    v62 = *(_DWORD *)DisplayModeInfo;
    LODWORD(v127) = v61;
    if ( v28[v36 / 0x78].PlaneAttributes.ClipRect.left < 0
      || v62 < v28[v36 / 0x78].PlaneAttributes.ClipRect.right
      || v28[v36 / 0x78].PlaneAttributes.ClipRect.top < 0
      || v61 < (int)right
      || v28[v36 / 0x78].PlaneAttributes.DstRect.left > v28[v36 / 0x78].PlaneAttributes.ClipRect.left
      || v28[v36 / 0x78].PlaneAttributes.DstRect.right < v28[v36 / 0x78].PlaneAttributes.ClipRect.right
      || v28[v36 / 0x78].PlaneAttributes.DstRect.top > v28[v36 / 0x78].PlaneAttributes.ClipRect.top
      || v28[v36 / 0x78].PlaneAttributes.DstRect.bottom < (int)right )
    {
      goto LABEL_78;
    }
    Rotation = v28[v36 / 0x78].PlaneAttributes.Rotation;
    if ( Rotation )
    {
      if ( (unsigned int)(Rotation - 1) > 3 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(right);
        LODWORD(v23) = -1073741811;
        v55[3] = -1073741811LL;
        v55[4] = this;
        v55[5] = v34;
        v55[6] = a2->pPresentPlanes[v34].PlaneAttributes.Rotation;
        goto LABEL_79;
      }
    }
    else
    {
      v28[v36 / 0x78].PlaneAttributes.Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    right = *(_QWORD *)(*((_QWORD *)this + 2) + 18704LL);
    if ( *(_BYTE *)(right + 1910) )
    {
      v64 = a2->pPresentPlanes;
      DisplayModeInfo = (__int64)&v64[v36 / 0x78].PlaneAttributes.ClipRect;
      if ( v64[v36 / 0x78].PlaneAttributes.DstRect.left != *(_DWORD *)DisplayModeInfo
        || v64[v36 / 0x78].PlaneAttributes.DstRect.right != *(_DWORD *)(DisplayModeInfo + 8)
        || v64[v36 / 0x78].PlaneAttributes.DstRect.top != *(_DWORD *)(DisplayModeInfo + 4)
        || v64[v36 / 0x78].PlaneAttributes.DstRect.bottom != *(_DWORD *)(DisplayModeInfo + 12) )
      {
        InverseXformMPORect(&v138, &v64[v36 / 0x78].PlaneAttributes.Flags, (_DWORD *)DisplayModeInfo);
        v64[v36 / 0x78].PlaneAttributes.SrcRect = v138;
        a2->pPresentPlanes[v36 / 0x78].PlaneAttributes.DstRect = a2->pPresentPlanes[v36 / 0x78].PlaneAttributes.ClipRect;
        right = (__int64)a2->pPresentPlanes;
        if ( *(_DWORD *)(right + v36 + 20) >= *(_DWORD *)(right + v36 + 28)
          || *(_DWORD *)(right + v36 + 24) >= *(_DWORD *)(right + v36 + 32)
          || *(_DWORD *)(right + v36 + 36) >= *(_DWORD *)(right + v36 + 44)
          || *(_DWORD *)(right + v36 + 40) >= *(_DWORD *)(right + v36 + 48)
          || (v28 = 0LL, *(int *)(right + v36 + 20) < 0)
          || Width < *(_DWORD *)(right + v36 + 28)
          || *(int *)(right + v36 + 24) < 0
          || Height < *(_DWORD *)(right + v36 + 32)
          || *(int *)(right + v36 + 36) < 0
          || v62 < *(_DWORD *)(right + v36 + 44)
          || *(int *)(right + v36 + 40) < 0
          || (int)v127 < *(_DWORD *)(right + v36 + 48) )
        {
LABEL_78:
          v55 = (_QWORD *)WdLogNewEntry5_WdError(right);
          LODWORD(v23) = -1073741811;
          v55[3] = -1073741811LL;
          v55[4] = this;
          v55[5] = v34;
          goto LABEL_79;
        }
      }
    }
    v30 = v123;
LABEL_84:
    if ( bTracingEnabled )
    {
      DisplayModeInfo = a2->pPresentPlanes[v36 / 0x78].hAllocation;
      v28 = (_DWORD)DisplayModeInfo
          ? (D3DKMT_MULTIPLANE_OVERLAY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                               + 8LL)
                                                                                   + 320LL))(
                                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                                           (unsigned int)DisplayModeInfo)
          : 0LL;
      right = (__int64)a2->pPresentPlanes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqpqddddddddddddqqqq(
          right,
          (__int64)v28,
          DisplayModeInfo,
          VidPnSourceId,
          *(_DWORD *)(right + 120LL * v34),
          *(_DWORD *)(right + v36 + 4),
          (char)v28,
          *(_DWORD *)(right + v36 + 16),
          *(_DWORD *)(right + v36 + 20),
          *(_DWORD *)(right + v36 + 28),
          *(_DWORD *)(right + v36 + 24),
          *(_DWORD *)(right + v36 + 32),
          *(_DWORD *)(right + v36 + 36),
          *(_DWORD *)(right + v36 + 44),
          *(_DWORD *)(right + v36 + 40),
          *(_DWORD *)(right + v36 + 48),
          *(_DWORD *)(right + v36 + 52),
          *(_DWORD *)(right + v36 + 60),
          *(_DWORD *)(right + v36 + 56),
          *(_DWORD *)(right + v36 + 64),
          *(_DWORD *)(right + v36 + 68),
          *(_DWORD *)(right + v36 + 72),
          v122,
          *(_DWORD *)(right + v36 + 92));
    }
    if ( ++v34 >= a2->PresentPlaneCount )
      break;
    DisplayModeInfo = v128;
    LOBYTE(v32) = v125;
    v33 = v124;
  }
  if ( !v124 && !v125 && !v30 )
    goto LABEL_135;
  memset(&v139, 0, sizeof(v139));
  p_FlipInterval = &a2->FlipInterval;
  v72 = a2->Flags.Value & 0xE0000;
  v134[0] = 0LL;
  v139.FlipInterval = a2->FlipInterval;
  v73 = *((_QWORD *)this + 2);
  v139.Flags.Value = v139.Flags.Value & 0xFFFFF8FF | ((v72 | 0x201800) >> 9);
  v134[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v73 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v134);
  v75 = v134[0];
  if ( !v134[0] )
  {
    v76 = WdLogNewEntry5_WdLowResource(v74);
    *(_QWORD *)(v76 + 24) = 1066LL;
    WdLogEvent5_WdLowResource(v76);
    LODWORD(v23) = -1073741801;
    goto LABEL_132;
  }
  v77 = *(_DWORD *)v134[0] | 0x20040;
  *(_DWORD *)v134[0] = v77;
  *(_DWORD *)v75 = v77 ^ (v77 ^ (a2->Flags.Value << 6)) & 0x40000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    PresentCount = a2->PresentCount;
  else
    PresentCount = 0;
  v79 = *(_DWORD *)v75;
  *((_DWORD *)v75 + 28) = PresentCount;
  v79 |= 0x1000008u;
  *(_DWORD *)v75 = v79;
  v80 = ((unsigned __int8)v79 ^ (unsigned __int8)(2 * a2->Flags.Value)) & 0x10 ^ v79;
  *(_DWORD *)v75 = v80;
  v81 = ((unsigned __int8)v80 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 0x20 ^ v80;
  *(_DWORD *)v75 = v81;
  v82 = (v81 ^ (8 * a2->Flags.Value)) & 0x100000 ^ v81;
  *(_DWORD *)v75 = v82;
  v83 = (v82 ^ (8 * a2->Flags.Value)) & 0x200000 ^ v82;
  *(_DWORD *)v75 = v83;
  *(_DWORD *)v75 = v83 ^ (v83 ^ (8 * a2->Flags.Value)) & 0x400000;
  if ( (a2->Flags.Value & 0x8000000) != 0 )
    Duration = a2->Duration;
  else
    Duration = 0;
  *((_DWORD *)v75 + 36) = Duration;
  *((_DWORD *)v75 + 29) = VidPnSourceId;
  *((D3DDDI_FLIPINTERVAL_TYPE *)v75 + 31) = *p_FlipInterval;
  v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
          (unsigned int)VidPnSourceId,
          &a2->FlipInterval);
  *((_DWORD *)v75 + 30) = v85;
  v89 = *((_QWORD *)this + 2);
  if ( v85 == *(_DWORD *)(v89 + 4LL * (unsigned int)VidPnSourceId + 18640) )
  {
    v97 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v133);
    v23 = v97;
    if ( v97 >= 0 )
      goto LABEL_112;
    v96 = WdLogNewEntry5_WdEvent(v99, v98, v100, v101);
    *(_QWORD *)(v96 + 32) = this;
LABEL_111:
    *(_QWORD *)(v96 + 24) = v23;
    WdLogEvent5_WdEvent(v96);
  }
  else
  {
    v90 = WdLogNewEntry5_WdEvent(v89, v86, v87, v88);
    *(_QWORD *)(v90 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v90);
    COREDEVICEACCESS::Release(v133);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v91 = COREDEVICEACCESS::AcquireShared(v133);
    v23 = v91;
    if ( v91 < 0 )
    {
      v96 = WdLogNewEntry5_WdEvent(v93, v92, v94, v95);
      goto LABEL_111;
    }
LABEL_112:
    v102 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, VidPnSourceId);
    v23 = v102;
    if ( v102 >= 0 )
    {
      if ( *((_DWORD *)v75 + 30) == 5 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v109 = WdLogNewEntry5_WdAssertion(v104, v103, v105, v106);
          *(_QWORD *)(v109 + 24) = 1169LL;
          WdLogEvent5_WdAssertion(v109);
        }
        LODWORD(v23) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays(
                         this,
                         a2,
                         v124,
                         v125,
                         v123,
                         (const struct DXGALLOCATIONREFERENCE *)v140,
                         &v139,
                         v75,
                         v136);
        if ( (int)v23 >= 0 )
        {
          v112 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL) + 112LL);
          if ( *(_DWORD *)(v112 + 1008LL * (unsigned int)VidPnSourceId + 956) == -1 )
          {
            v113 = WdLogNewEntry5_WdAssertion(v112, 1008LL * (unsigned int)VidPnSourceId, v110, v111);
            *(_QWORD *)(v113 + 24) = 1185LL;
            WdLogEvent5_WdAssertion(v113);
          }
          DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            (const struct DXGALLOCATIONREFERENCE *)v140);
          if ( v126 > -1 )
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), VidPnSourceId, v140[v126], *((_DWORD *)v75 + 34));
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 18640) = *((_DWORD *)v75 + 30);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v23 != -1073741130 )
        {
          v118 = WdLogNewEntry5_WdAssertion(v115, v114, v116, v117);
          *(_QWORD *)(v118 + 24) = 1207LL;
          WdLogEvent5_WdAssertion(v118);
        }
        if ( *((_QWORD *)this + 36) )
        {
          v119 = WdLogNewEntry5_WdAssertion(v115, v114, v116, v117);
          *(_QWORD *)(v119 + 24) = 1208LL;
          WdLogEvent5_WdAssertion(v119);
        }
      }
      else
      {
        v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v104, v103, v105, v106);
        LODWORD(v23) = -1073741811;
        v108[3] = this;
        v108[4] = *(int *)p_FlipInterval;
        v108[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v108);
      }
    }
    else
    {
      v107 = WdLogNewEntry5_WdEvent(v104, v103, v105, v106);
      *(_QWORD *)(v107 + 24) = v23;
      *(_QWORD *)(v107 + 32) = this;
      WdLogEvent5_WdEvent(v107);
      if ( (_DWORD)v23 == -1071774920 )
      {
        DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
          *((struct _KTHREAD ***)this + 2),
          VidPnSourceId,
          (const struct DXGALLOCATIONREFERENCE *)v140);
        if ( v126 > -1 )
          DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), VidPnSourceId, v140[v126], *((_DWORD *)v75 + 34));
        LODWORD(v23) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 18640) = *((_DWORD *)v75 + 30);
      }
    }
  }
LABEL_132:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v134);
LABEL_136:
  `vector destructor iterator'(
    (char *)v140,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v23;
}

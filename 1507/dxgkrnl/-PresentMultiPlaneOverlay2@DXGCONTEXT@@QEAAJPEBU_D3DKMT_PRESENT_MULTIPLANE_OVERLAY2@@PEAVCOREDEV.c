/*
 * XREFs of ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0160760 (DxgkPresentMultiPlaneOverlay2.c)
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
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015CF74 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F038 (-SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEP.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay2(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  struct COREDEVICEACCESS *v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 VidPnSourceId; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 DisplayModeInfo; // rdx
  __int64 Rotation; // rcx
  char v31; // bl
  int v32; // r10d
  D3DKMT_MULTIPLANE_OVERLAY2 *v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r15d
  D3DKMT_MULTIPLANE_OVERLAY2 *pPresentPlanes; // rdx
  unsigned __int64 v37; // rsi
  __int64 LayerIndex; // r12
  bool v39; // zf
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v41; // ecx
  ULONG_PTR Count; // r8
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
  unsigned __int64 right; // rcx
  __int64 v61; // rcx
  LONG left; // ecx
  int v63; // r11d
  int v64; // ebx
  unsigned int v65; // r10d
  D3DKMT_MULTIPLANE_OVERLAY2 *v66; // rax
  struct _EX_RUNDOWN_REF **v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  D3DDDI_FLIPINTERVAL_TYPE *p_FlipInterval; // r15
  UINT v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v76; // rsi
  __int64 v77; // rax
  int v78; // ecx
  UINT PresentCount; // eax
  int v80; // ecx
  int v81; // ecx
  UINT v82; // ecx
  UINT v83; // ecx
  UINT v84; // ecx
  UINT Duration; // eax
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // [rsp+B0h] [rbp-90h]
  unsigned __int8 v123; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v124; // [rsp+C1h] [rbp-7Fh]
  char v125; // [rsp+C2h] [rbp-7Eh]
  int v126; // [rsp+C4h] [rbp-7Ch]
  struct _EX_RUNDOWN_REF *v127; // [rsp+C8h] [rbp-78h] BYREF
  int v128; // [rsp+D0h] [rbp-70h]
  COREDEVICEACCESS *v129; // [rsp+D8h] [rbp-68h]
  struct VIDSCH_SUBMIT_DATA_BASE *v130[2]; // [rsp+E0h] [rbp-60h] BYREF
  struct _EX_RUNDOWN_REF *v131; // [rsp+F0h] [rbp-50h] BYREF
  struct DXGCONTEXT **v132; // [rsp+F8h] [rbp-48h]
  struct _EX_RUNDOWN_REF **v133; // [rsp+100h] [rbp-40h]
  struct _EX_RUNDOWN_REF *v134; // [rsp+108h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v135; // [rsp+118h] [rbp-28h] BYREF
  struct _DXGKARG_PRESENT v136; // [rsp+150h] [rbp+10h] BYREF
  struct DXGALLOCATION *v137[8]; // [rsp+200h] [rbp+C0h] BYREF

  v4 = *((_QWORD *)this + 2);
  v6 = a3;
  v132 = a4;
  v129 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 2514LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(_QWORD *)(v14 + 18704) != v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v14, v11, v12);
    *(_QWORD *)(v16 + 24) = 2515LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v19 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  if ( *(_QWORD *)(v17 + 18704) != v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v17, v11, v12);
    *(_QWORD *)(v20 + 24) = 2519LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DXGADAPTER::CheckHardwareProtectionVisibility(
    *(DXGADAPTER **)(*((_QWORD *)this + 2) + 18704LL),
    *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
  v23 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(*(_QWORD *)(v23 + 18704) + 856LL) )
  {
    LODWORD(v6) = DXGCONTEXT::ConvertToPresentMultiPlaneOverlay(this, a2, v6, a4);
    return (unsigned int)v6;
  }
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
  if ( !*(_BYTE *)(v24 + 1852) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v21, v22);
    LODWORD(v6) = -1073741811;
    v25[3] = -1073741811LL;
    v25[4] = this;
LABEL_10:
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v6;
  }
  if ( (*(_DWORD *)(v23 + 4 * VidPnSourceId + 4752) & 0x40) == 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v21, v22);
    v26[3] = -1071775739LL;
    v26[4] = this;
    v26[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v26);
    return 3223191557LL;
  }
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_DWORD *)&Value & 0xB0E7C3) != 0 || (*(_BYTE *)&Value & 4) == 0 || (*(_DWORD *)&Value & 0x60000) != 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v21, v22);
    LODWORD(v6) = -1073741811;
    v25[3] = this;
    v25[4] = a2->Flags.Value;
    v25[5] = -1073741811LL;
    goto LABEL_10;
  }
  `vector constructor iterator'(
    (char *)v137,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v137);
  v126 = -1;
  v31 = 0;
  v32 = 0;
  LOBYTE(v33) = 0;
  LOBYTE(v34) = 0;
  v124 = 0;
  v35 = 0;
  v123 = 0;
  v125 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_127:
    v121 = WdLogNewEntry5_WdEvent(Rotation, DisplayModeInfo, v33, v34);
    *(_QWORD *)(v121 + 24) = 0LL;
    *(_QWORD *)(v121 + 32) = this;
    WdLogEvent5_WdEvent(v121);
    LODWORD(v6) = 0;
    goto LABEL_124;
  }
  while ( 1 )
  {
    pPresentPlanes = a2->pPresentPlanes;
    v37 = v35;
    LayerIndex = pPresentPlanes[v37].LayerIndex;
    if ( (unsigned int)LayerIndex >= 8 || (Rotation = (unsigned int)LayerIndex, ((1 << LayerIndex) & v32) != 0) )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(Rotation, pPresentPlanes, v33, v34);
      LODWORD(v6) = -1073741811;
      v71[5] = -1073741811LL;
      v71[4] = LayerIndex;
      v71[3] = this;
      goto LABEL_126;
    }
    v39 = !pPresentPlanes[v37].Enabled;
    v128 = (1 << LayerIndex) | v32;
    if ( v39 )
    {
      v67 = (struct _EX_RUNDOWN_REF **)&v137[LayerIndex];
      if ( *v67 )
        v125 = ++v31;
      v127 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign(v67, &v127);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v127, v68, v69, v70);
      goto LABEL_74;
    }
    v39 = v137[LayerIndex] == 0LL;
    v133 = (struct _EX_RUNDOWN_REF **)&v137[LayerIndex];
    if ( v39 )
      v123 = v34 + 1;
    else
      v124 = (_BYTE)v33 + 1;
    hAllocation = pPresentPlanes[v37].hAllocation;
    v127 = *(struct _EX_RUNDOWN_REF **)(*((_QWORD *)this + 2) + 40LL);
    v134 = v127 + 24;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v127[24]);
    v41 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v41 < LODWORD(v127[29].Count)
      && (Count = v127[27].Count,
          v43 = *(_DWORD *)(Count + 16LL * v41 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(Count + 16LL * v41 + 8) & 0x30))
      && (v43 & 0x1000) == 0
      && (v43 & 0xF) != 0
      && (*(_BYTE *)(Count + 16LL * v41 + 8) & 0xF) == 5 )
    {
      v44 = *(struct _EX_RUNDOWN_REF **)(Count + 16LL * v41);
    }
    else
    {
      v44 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v131, v44);
    ExReleasePushLockSharedEx(v134, 0LL);
    KeLeaveCriticalRegion();
    v45 = v133;
    DXGALLOCATIONREFERENCE::MoveAssign(v133, &v131);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v131, v46, v47, v48);
    v53 = *v45;
    if ( !v53 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
      LODWORD(v6) = -1073741811;
      v71[3] = -1073741811LL;
      v71[4] = this;
      v71[5] = a2->pPresentPlanes[v35].hAllocation;
LABEL_126:
      WdLogEvent5_WdWarning(v71);
      goto LABEL_124;
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
LABEL_35:
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v54);
        LODWORD(v6) = -1073741811;
        v55[3] = -1073741811LL;
        v55[4] = this;
        v55[5] = v137[LayerIndex];
        v55[6] = *((_QWORD *)v137[LayerIndex] + 6);
        v55[7] = a2->pPresentPlanes[v35].hAllocation;
LABEL_68:
        WdLogEvent5_WdError(v55);
        goto LABEL_124;
      }
    }
    else
    {
      if ( (v54 & 0xB) == 0 )
        goto LABEL_35;
      v56 = v126;
      if ( (*(_BYTE *)(v53[6].Count + 4) & 1) != 0 )
        v56 = LayerIndex;
      v126 = v56;
    }
    _mm_lfence();
    memset(&v135, 0, sizeof(v135));
    v57 = *((_QWORD *)this + 2);
    v135.hAllocation = *(HANDLE *)(v53[6].Count + 16);
    v58 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v57 + 16), &v135, v51);
    v6 = (struct COREDEVICEACCESS *)v58;
    if ( v58 < 0 )
    {
      _mm_lfence();
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      v55[3] = v6;
      v55[4] = this;
      v55[5] = *(_QWORD *)(*((_QWORD *)v137[LayerIndex] + 6) + 16LL);
      v55[6] = v137[LayerIndex];
      goto LABEL_68;
    }
    right = (unsigned __int64)a2->pPresentPlanes;
    if ( *(_DWORD *)(v37 * 120 + right + 20) >= *(_DWORD *)(v37 * 120 + right + 28)
      || *(_DWORD *)(v37 * 120 + right + 24) >= *(_DWORD *)(v37 * 120 + right + 32)
      || *(int *)(v37 * 120 + right + 20) < 0
      || (int)v135.Width < *(_DWORD *)(v37 * 120 + right + 28)
      || *(int *)(v37 * 120 + right + 24) < 0
      || (int)v135.Height < *(_DWORD *)(v37 * 120 + right + 32) )
    {
LABEL_83:
      v55 = (_QWORD *)WdLogNewEntry5_WdError(right);
      LODWORD(v6) = -1073741811;
      v55[3] = -1073741811LL;
      v55[4] = this;
      v55[5] = v35;
      goto LABEL_68;
    }
    DisplayModeInfo = (__int64)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL),
                                 VidPnSourceId);
    if ( !DisplayModeInfo )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v61);
      LODWORD(v6) = -1073741811;
      v55[3] = -1073741811LL;
      v55[4] = this;
      v55[5] = VidPnSourceId;
      goto LABEL_68;
    }
    v33 = a2->pPresentPlanes;
    right = (unsigned int)v33[v37].PlaneAttributes.ClipRect.right;
    if ( v33[v37].PlaneAttributes.ClipRect.left >= (int)right )
      goto LABEL_83;
    right = (unsigned int)v33[v37].PlaneAttributes.ClipRect.bottom;
    if ( v33[v37].PlaneAttributes.ClipRect.top >= (int)right )
      goto LABEL_83;
    if ( v33[v37].PlaneAttributes.DstRect.left >= v33[v37].PlaneAttributes.DstRect.right )
      goto LABEL_83;
    if ( v33[v37].PlaneAttributes.DstRect.top >= v33[v37].PlaneAttributes.DstRect.bottom )
      goto LABEL_83;
    right = *(unsigned int *)(DisplayModeInfo + 4);
    if ( v33[v37].PlaneAttributes.ClipRect.left < 0
      || *(_DWORD *)DisplayModeInfo < v33[v37].PlaneAttributes.ClipRect.right
      || v33[v37].PlaneAttributes.ClipRect.top < 0
      || (int)right < v33[v37].PlaneAttributes.ClipRect.bottom
      || v33[v37].PlaneAttributes.DstRect.left > v33[v37].PlaneAttributes.ClipRect.left
      || v33[v37].PlaneAttributes.DstRect.right < v33[v37].PlaneAttributes.ClipRect.right
      || v33[v37].PlaneAttributes.DstRect.top > v33[v37].PlaneAttributes.ClipRect.top
      || v33[v37].PlaneAttributes.DstRect.bottom < v33[v37].PlaneAttributes.ClipRect.bottom )
    {
      goto LABEL_83;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1910LL) )
    {
      left = v33[v37].PlaneAttributes.SrcRect.left;
      v63 = v33[v37].PlaneAttributes.SrcRect.right - left;
      v64 = v33[v37].PlaneAttributes.SrcRect.bottom - v33[v37].PlaneAttributes.SrcRect.top;
      v34 = (unsigned int)(v33[v37].PlaneAttributes.DstRect.bottom - v33[v37].PlaneAttributes.DstRect.top);
      DisplayModeInfo = (unsigned int)v33[v37].PlaneAttributes.DstRect.left;
      v65 = v33[v37].PlaneAttributes.DstRect.right - DisplayModeInfo;
      if ( v65 && (_DWORD)v34 )
      {
        v33[v37].PlaneAttributes.SrcRect.left = left
                                              + v63
                                              * (v33[v37].PlaneAttributes.ClipRect.left - (int)DisplayModeInfo)
                                              / v65;
        a2->pPresentPlanes[v37].PlaneAttributes.SrcRect.top += v64
                                                             * (a2->pPresentPlanes[v37].PlaneAttributes.ClipRect.top
                                                              - a2->pPresentPlanes[v37].PlaneAttributes.DstRect.top)
                                                             / (unsigned int)v34;
        HIDWORD(DisplayModeInfo) = 0;
        a2->pPresentPlanes[v37].PlaneAttributes.SrcRect.right -= v63
                                                               * (a2->pPresentPlanes[v37].PlaneAttributes.DstRect.right
                                                                - a2->pPresentPlanes[v37].PlaneAttributes.ClipRect.right)
                                                               / v65;
        v33 = a2->pPresentPlanes;
        LODWORD(DisplayModeInfo) = v64
                                 * (v33[v37].PlaneAttributes.DstRect.bottom - v33[v37].PlaneAttributes.ClipRect.bottom)
                                 % (unsigned int)v34;
        v33[v37].PlaneAttributes.SrcRect.bottom -= v64
                                                 * (v33[v37].PlaneAttributes.DstRect.bottom
                                                  - v33[v37].PlaneAttributes.ClipRect.bottom)
                                                 / (unsigned int)v34;
      }
      a2->pPresentPlanes[v37].PlaneAttributes.DstRect = a2->pPresentPlanes[v37].PlaneAttributes.ClipRect;
    }
    v66 = a2->pPresentPlanes;
    Rotation = (unsigned int)v66[v37].PlaneAttributes.Rotation;
    if ( (_DWORD)Rotation )
    {
      if ( (unsigned int)(Rotation - 1) > 3 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(Rotation);
        LODWORD(v6) = -1073741811;
        v55[3] = -1073741811LL;
        v55[4] = this;
        v55[5] = v35;
        v55[6] = a2->pPresentPlanes[v35].PlaneAttributes.Rotation;
        goto LABEL_68;
      }
    }
    else
    {
      v66[v37].PlaneAttributes.Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    v31 = v125;
LABEL_74:
    if ( bTracingEnabled )
    {
      v33 = (D3DKMT_MULTIPLANE_OVERLAY2 *)a2->pPresentPlanes[v37].hAllocation;
      DisplayModeInfo = (_DWORD)v33
                      ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 320LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                          (unsigned int)v33)
                      : 0LL;
      Rotation = (__int64)a2->pPresentPlanes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqpqddddddddddddqqqq(
          Rotation,
          DisplayModeInfo,
          (__int64)v33,
          VidPnSourceId,
          *(_DWORD *)(v37 * 120 + Rotation),
          *(_DWORD *)(v37 * 120 + Rotation + 4),
          DisplayModeInfo,
          *(_DWORD *)(v37 * 120 + Rotation + 16),
          *(_DWORD *)(v37 * 120 + Rotation + 20),
          *(_DWORD *)(v37 * 120 + Rotation + 28),
          *(_DWORD *)(v37 * 120 + Rotation + 24),
          *(_DWORD *)(v37 * 120 + Rotation + 32),
          *(_DWORD *)(v37 * 120 + Rotation + 36),
          *(_DWORD *)(v37 * 120 + Rotation + 44),
          *(_DWORD *)(v37 * 120 + Rotation + 40),
          *(_DWORD *)(v37 * 120 + Rotation + 48),
          *(_DWORD *)(v37 * 120 + Rotation + 52),
          *(_DWORD *)(v37 * 120 + Rotation + 60),
          *(_DWORD *)(v37 * 120 + Rotation + 56),
          *(_DWORD *)(v37 * 120 + Rotation + 64),
          *(_DWORD *)(v37 * 120 + Rotation + 68),
          *(_DWORD *)(v37 * 120 + Rotation + 72),
          v122,
          0);
    }
    if ( ++v35 >= a2->PresentPlaneCount )
      break;
    LOBYTE(v33) = v124;
    LOBYTE(v34) = v123;
    v32 = v128;
  }
  if ( !v123 && !v124 && !v31 )
    goto LABEL_127;
  memset(&v136, 0, sizeof(v136));
  p_FlipInterval = &a2->FlipInterval;
  v73 = a2->Flags.Value & 0xE0000;
  v130[0] = 0LL;
  v136.FlipInterval = a2->FlipInterval;
  v74 = *((_QWORD *)this + 2);
  v136.Flags.Value = v136.Flags.Value & 0xFFFFF8FF | ((v73 | 0x201800) >> 9);
  v130[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v74 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v130);
  v76 = v130[0];
  if ( !v130[0] )
  {
    v77 = WdLogNewEntry5_WdLowResource(v75);
    *(_QWORD *)(v77 + 24) = 2921LL;
    WdLogEvent5_WdLowResource(v77);
    LODWORD(v6) = -1073741801;
    goto LABEL_123;
  }
  v78 = *(_DWORD *)v130[0] | 0x20040;
  *(_DWORD *)v130[0] = v78;
  *(_DWORD *)v76 = v78 ^ (v78 ^ (a2->Flags.Value << 6)) & 0x40000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    PresentCount = a2->PresentCount;
  else
    PresentCount = 0;
  v80 = *(_DWORD *)v76;
  *((_DWORD *)v76 + 28) = PresentCount;
  v80 |= 0x1000008u;
  *(_DWORD *)v76 = v80;
  v81 = ((unsigned __int8)v80 ^ (unsigned __int8)(2 * a2->Flags.Value)) & 0x10 ^ v80;
  *(_DWORD *)v76 = v81;
  v82 = (a2->Flags.Value ^ v81) & 0x20 ^ v81;
  *(_DWORD *)v76 = v82;
  v83 = (v82 ^ (8 * a2->Flags.Value)) & 0x100000 ^ v82;
  *(_DWORD *)v76 = v83;
  v84 = (v83 ^ (8 * a2->Flags.Value)) & 0x200000 ^ v83;
  *(_DWORD *)v76 = v84;
  *(_DWORD *)v76 = v84 ^ (v84 ^ (8 * a2->Flags.Value)) & 0x400000;
  if ( (a2->Flags.Value & 0x8000000) != 0 )
    Duration = a2->Duration;
  else
    Duration = 0;
  *((_DWORD *)v76 + 36) = Duration;
  *((_DWORD *)v76 + 29) = VidPnSourceId;
  *((D3DDDI_FLIPINTERVAL_TYPE *)v76 + 31) = *p_FlipInterval;
  v86 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL)
                                                                                          + 8LL)
                                                                              + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
          (unsigned int)VidPnSourceId,
          &a2->FlipInterval);
  *((_DWORD *)v76 + 30) = v86;
  v90 = *((_QWORD *)this + 2);
  if ( v86 == *(_DWORD *)(v90 + 4 * VidPnSourceId + 18640) )
  {
    v98 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v129);
    v6 = (struct COREDEVICEACCESS *)v98;
    if ( v98 >= 0 )
      goto LABEL_103;
    v97 = WdLogNewEntry5_WdEvent(v100, v99, v101, v102);
    *(_QWORD *)(v97 + 32) = this;
LABEL_102:
    *(_QWORD *)(v97 + 24) = v6;
    WdLogEvent5_WdEvent(v97);
  }
  else
  {
    v91 = WdLogNewEntry5_WdEvent(v90, v87, v88, v89);
    *(_QWORD *)(v91 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v91);
    COREDEVICEACCESS::Release(v129);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v92 = COREDEVICEACCESS::AcquireShared(v129);
    v6 = (struct COREDEVICEACCESS *)v92;
    if ( v92 < 0 )
    {
      v97 = WdLogNewEntry5_WdEvent(v94, v93, v95, v96);
      goto LABEL_102;
    }
LABEL_103:
    v103 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, VidPnSourceId);
    v6 = (struct COREDEVICEACCESS *)v103;
    if ( v103 >= 0 )
    {
      if ( *((_DWORD *)v76 + 30) == 5 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v110 = WdLogNewEntry5_WdAssertion(v105, v104, v106, v107);
          *(_QWORD *)(v110 + 24) = 3023LL;
          WdLogEvent5_WdAssertion(v110);
        }
        LODWORD(v6) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays2(
                        this,
                        a2,
                        v123,
                        v124,
                        v125,
                        (const struct DXGALLOCATIONREFERENCE *)v137,
                        &v136,
                        v76,
                        v132);
        if ( (int)v6 >= 0 )
        {
          v113 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 1976LL) + 112LL);
          if ( *(_DWORD *)(v113 + 1008 * VidPnSourceId + 956) == -1 )
          {
            v114 = WdLogNewEntry5_WdAssertion(v113, 1008 * VidPnSourceId, v111, v112);
            *(_QWORD *)(v114 + 24) = 3039LL;
            WdLogEvent5_WdAssertion(v114);
          }
          DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            (const struct DXGALLOCATIONREFERENCE *)v137);
          if ( v126 > -1 )
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), VidPnSourceId, v137[v126], *((_DWORD *)v76 + 34));
          *(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 18640) = *((_DWORD *)v76 + 30);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v6 != -1073741130 )
        {
          v119 = WdLogNewEntry5_WdAssertion(v116, v115, v117, v118);
          *(_QWORD *)(v119 + 24) = 3061LL;
          WdLogEvent5_WdAssertion(v119);
        }
        if ( *((_QWORD *)this + 36) )
        {
          v120 = WdLogNewEntry5_WdAssertion(v116, v115, v117, v118);
          *(_QWORD *)(v120 + 24) = 3062LL;
          WdLogEvent5_WdAssertion(v120);
        }
      }
      else
      {
        v109 = (_QWORD *)WdLogNewEntry5_WdWarning(v105, v104, v106, v107);
        LODWORD(v6) = -1073741811;
        v109[3] = this;
        v109[4] = *(int *)p_FlipInterval;
        v109[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v109);
      }
    }
    else
    {
      v108 = WdLogNewEntry5_WdEvent(v105, v104, v106, v107);
      *(_QWORD *)(v108 + 24) = v6;
      *(_QWORD *)(v108 + 32) = this;
      WdLogEvent5_WdEvent(v108);
      if ( (_DWORD)v6 == -1071774920 )
      {
        DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
          *((struct _KTHREAD ***)this + 2),
          VidPnSourceId,
          (const struct DXGALLOCATIONREFERENCE *)v137);
        if ( v126 > -1 )
          DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), VidPnSourceId, v137[v126], *((_DWORD *)v76 + 34));
        LODWORD(v6) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 18640) = *((_DWORD *)v76 + 30);
      }
    }
  }
LABEL_123:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v130);
LABEL_124:
  `vector destructor iterator'(
    (char *)v137,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v6;
}

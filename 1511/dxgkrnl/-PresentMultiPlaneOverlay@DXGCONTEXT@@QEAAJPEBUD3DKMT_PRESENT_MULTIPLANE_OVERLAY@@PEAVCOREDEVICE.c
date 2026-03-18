/*
 * XREFs of ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4
 * Callers:
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0161268 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0164410 (DxgkPresentMultiPlaneOverlay.c)
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
 *     sub_1C016154C @ 0x1C016154C (sub_1C016154C.c)
 *     ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0163A78 (-SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBV.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  _QWORD *v24; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  D3DKMT_MULTIPLANE_OVERLAY *v27; // rdx
  __int64 right; // rcx
  char v29; // bl
  __int64 DisplayModeInfo; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // r10
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
  DXGALLOCATIONREFERENCE *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  const struct DXGALLOCATION *v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  LONG v58; // r12d
  D3DDDI_ROTATION Rotation; // eax
  D3DKMT_MULTIPLANE_OVERLAY *v60; // rbx
  struct _EX_RUNDOWN_REF **v61; // rcx
  __int64 v62; // r12
  _QWORD *v63; // rax
  D3DDDI_FLIPINTERVAL_TYPE *p_FlipInterval; // r15
  UINT v65; // ecx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v71; // rsi
  __int64 v72; // rax
  int v73; // ecx
  UINT PresentCount; // eax
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  UINT v78; // ecx
  UINT v79; // ecx
  UINT Duration; // eax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  int v113; // [rsp+B0h] [rbp-90h]
  char v114; // [rsp+C0h] [rbp-80h]
  unsigned __int8 v115; // [rsp+C1h] [rbp-7Fh]
  unsigned __int8 v116; // [rsp+C2h] [rbp-7Eh]
  int v117; // [rsp+C4h] [rbp-7Ch]
  DXGALLOCATIONREFERENCE *v118; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v119; // [rsp+D0h] [rbp-70h]
  signed int Width; // [rsp+D4h] [rbp-6Ch]
  signed int Height; // [rsp+D8h] [rbp-68h]
  unsigned int v122; // [rsp+DCh] [rbp-64h]
  struct DXGALLOCATION *v123; // [rsp+E0h] [rbp-60h] BYREF
  COREDEVICEACCESS *v124; // [rsp+E8h] [rbp-58h]
  struct VIDSCH_SUBMIT_DATA_BASE *v125[2]; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v126; // [rsp+100h] [rbp-40h]
  struct DXGCONTEXT **v127; // [rsp+108h] [rbp-38h]
  struct _DXGKARG_DESCRIBEALLOCATION v128; // [rsp+110h] [rbp-30h] BYREF
  RECT v129; // [rsp+140h] [rbp+0h] BYREF
  struct _DXGKARG_PRESENT v130; // [rsp+150h] [rbp+10h] BYREF
  struct DXGALLOCATION *v131[8]; // [rsp+200h] [rbp+C0h] BYREF

  v4 = *((_QWORD *)this + 2);
  VidPnSourceId = a2->VidPnSourceId;
  v127 = a4;
  v124 = a3;
  v8 = *(_QWORD *)(v4 + 16);
  v122 = VidPnSourceId;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 646LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 2);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( *(_QWORD *)(v13 + 2832) != v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 647LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 2);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
  if ( *(_QWORD *)(v16 + 2832) != v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 648LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)this + 2);
  v20 = *(struct DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( !*((_BYTE *)v20 + 1860) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v20, v10, v11);
    LODWORD(v22) = -1073741811;
    v21[3] = -1073741811LL;
    v21[4] = this;
LABEL_138:
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v22;
  }
  v23 = *(_DWORD *)(v19 + 4 * VidPnSourceId + 976) >> 9;
  v126 = VidPnSourceId;
  if ( (v23 & 1) == 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v20, v10, v11);
    v24[3] = -1071775739LL;
    v24[4] = this;
    v24[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v24);
    return 3223191557LL;
  }
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_DWORD *)&Value & 0xB0E7C3) != 0 || (*(_BYTE *)&Value & 4) == 0 || (*(_DWORD *)&Value & 0x60000) != 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v20, v10, v11);
    LODWORD(v22) = -1073741811;
    v21[3] = this;
    v112 = a2->Flags.Value;
    v21[5] = -1073741811LL;
    v21[4] = v112;
    goto LABEL_138;
  }
  DXGADAPTER::CheckHardwareProtectionVisibility(*(DXGADAPTER **)(v19 + 2832), v20);
  `vector constructor iterator'(
    (char *)v131,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(
    *((struct _KTHREAD ***)this + 2),
    VidPnSourceId,
    (struct DXGALLOCATIONREFERENCE *)v131);
  v117 = -1;
  v29 = 0;
  DisplayModeInfo = 0LL;
  LOBYTE(v31) = 0;
  v32 = 0;
  v116 = 0;
  v33 = 0;
  v115 = 0;
  v114 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_135:
    v111 = WdLogNewEntry5_WdEvent(right, v27, DisplayModeInfo, v31);
    *(_QWORD *)(v111 + 24) = 0LL;
    *(_QWORD *)(v111 + 32) = this;
    WdLogEvent5_WdEvent(v111);
    LODWORD(v22) = 0;
    goto LABEL_136;
  }
  while ( 1 )
  {
    pPresentPlanes = a2->pPresentPlanes;
    v35 = 120LL * v33;
    LayerIndex = pPresentPlanes[v35 / 0x78].LayerIndex;
    if ( (unsigned int)LayerIndex >= 8
      || (right = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)DisplayModeInfo) != 0) )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPresentPlanes, DisplayModeInfo, v31);
      LODWORD(v22) = -1073741811;
      v63[5] = -1073741811LL;
      v63[4] = LayerIndex;
      v63[3] = this;
      goto LABEL_134;
    }
    v37 = !pPresentPlanes[v35 / 0x78].Enabled;
    v119 = (1 << LayerIndex) | DisplayModeInfo;
    if ( v37 )
    {
      v61 = (struct _EX_RUNDOWN_REF **)&v131[LayerIndex];
      if ( *v61 )
        v114 = ++v29;
      v118 = 0LL;
      DXGALLOCATIONREFERENCE::Assign(v61, &v118);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v118);
      goto LABEL_84;
    }
    v37 = v131[LayerIndex] == 0LL;
    v118 = (DXGALLOCATIONREFERENCE *)&v131[LayerIndex];
    if ( v37 )
      v115 = v32 + 1;
    else
      v116 = v31 + 1;
    hAllocation = pPresentPlanes[v35 / 0x78].hAllocation;
    v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v39 + 192));
    v40 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v40 < *(_DWORD *)(v39 + 232)
      && (v41 = *(_QWORD *)(v39 + 216),
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
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v123, v43);
    ExReleasePushLockSharedEx(v39 + 192, 0LL);
    KeLeaveCriticalRegion();
    v44 = v118;
    DXGALLOCATIONREFERENCE::Assign((struct _EX_RUNDOWN_REF **)v118, &v123);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v123);
    v49 = *(const struct DXGALLOCATION **)v44;
    if ( !v49 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      LODWORD(v22) = -1073741811;
      v63[3] = -1073741811LL;
      v63[4] = this;
      v63[5] = a2->pPresentPlanes[v33].hAllocation;
LABEL_134:
      WdLogEvent5_WdWarning(v63);
      goto LABEL_136;
    }
    _mm_lfence();
    v50 = *(unsigned int *)(*((_QWORD *)v49 + 6) + 4LL);
    if ( (v50 & 0x2000) != 0 )
    {
      if ( !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v49) )
      {
        _mm_lfence();
LABEL_32:
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        LODWORD(v22) = -1073741811;
        v51[3] = -1073741811LL;
        v51[4] = this;
        v51[5] = v131[LayerIndex];
        v51[6] = *((_QWORD *)v131[LayerIndex] + 6);
        v51[7] = a2->pPresentPlanes[v33].hAllocation;
LABEL_79:
        WdLogEvent5_WdError(v51);
        goto LABEL_136;
      }
    }
    else
    {
      _mm_lfence();
      if ( (v50 & 0xB) == 0 )
        goto LABEL_32;
      v52 = v117;
      if ( (*(_BYTE *)(*((_QWORD *)v49 + 6) + 4LL) & 1) != 0 )
        v52 = LayerIndex;
      v117 = v52;
    }
    _mm_lfence();
    memset(&v128, 0, sizeof(v128));
    v53 = *((_QWORD *)this + 2);
    v128.hAllocation = *(HANDLE *)(*((_QWORD *)v49 + 6) + 16LL);
    v54 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v53 + 16), &v128, v47);
    v22 = v54;
    if ( v54 < 0 )
    {
      _mm_lfence();
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v51[3] = v22;
      v51[4] = this;
      v51[5] = *(_QWORD *)(*((_QWORD *)v131[LayerIndex] + 6) + 16LL);
      v51[6] = v131[LayerIndex];
      goto LABEL_79;
    }
    right = (__int64)a2->pPresentPlanes;
    if ( *(_DWORD *)(right + v35 + 20) >= *(_DWORD *)(right + v35 + 28) )
      goto LABEL_78;
    if ( *(_DWORD *)(right + v35 + 24) >= *(_DWORD *)(right + v35 + 32) )
      goto LABEL_78;
    Width = v128.Width;
    Height = v128.Height;
    if ( *(int *)(right + v35 + 20) < 0
      || (int)v128.Width < *(_DWORD *)(right + v35 + 28)
      || *(int *)(right + v35 + 24) < 0
      || (int)v128.Height < *(_DWORD *)(right + v35 + 32) )
    {
      goto LABEL_78;
    }
    LODWORD(VidPnSourceId) = v122;
    DisplayModeInfo = (__int64)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL),
                                 v122);
    if ( !DisplayModeInfo )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v62 = v126;
      LODWORD(v22) = -1073741811;
      v51[3] = -1073741811LL;
      v51[4] = this;
      v51[5] = v62;
      goto LABEL_79;
    }
    v27 = a2->pPresentPlanes;
    right = (unsigned int)v27[v35 / 0x78].PlaneAttributes.ClipRect.right;
    if ( v27[v35 / 0x78].PlaneAttributes.ClipRect.left >= (int)right )
      goto LABEL_78;
    right = (unsigned int)v27[v35 / 0x78].PlaneAttributes.ClipRect.bottom;
    if ( v27[v35 / 0x78].PlaneAttributes.ClipRect.top >= (int)right )
      goto LABEL_78;
    if ( v27[v35 / 0x78].PlaneAttributes.DstRect.left >= v27[v35 / 0x78].PlaneAttributes.DstRect.right )
      goto LABEL_78;
    if ( v27[v35 / 0x78].PlaneAttributes.DstRect.top >= v27[v35 / 0x78].PlaneAttributes.DstRect.bottom )
      goto LABEL_78;
    v57 = *(_DWORD *)(DisplayModeInfo + 4);
    v58 = *(_DWORD *)DisplayModeInfo;
    LODWORD(v118) = v57;
    if ( v27[v35 / 0x78].PlaneAttributes.ClipRect.left < 0
      || v58 < v27[v35 / 0x78].PlaneAttributes.ClipRect.right
      || v27[v35 / 0x78].PlaneAttributes.ClipRect.top < 0
      || v57 < (int)right
      || v27[v35 / 0x78].PlaneAttributes.DstRect.left > v27[v35 / 0x78].PlaneAttributes.ClipRect.left
      || v27[v35 / 0x78].PlaneAttributes.DstRect.right < v27[v35 / 0x78].PlaneAttributes.ClipRect.right
      || v27[v35 / 0x78].PlaneAttributes.DstRect.top > v27[v35 / 0x78].PlaneAttributes.ClipRect.top
      || v27[v35 / 0x78].PlaneAttributes.DstRect.bottom < (int)right )
    {
      goto LABEL_78;
    }
    Rotation = v27[v35 / 0x78].PlaneAttributes.Rotation;
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
        goto LABEL_79;
      }
    }
    else
    {
      v27[v35 / 0x78].PlaneAttributes.Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    right = *(_QWORD *)(*((_QWORD *)this + 2) + 2832LL);
    if ( *(_BYTE *)(right + 1918) )
    {
      v60 = a2->pPresentPlanes;
      DisplayModeInfo = (__int64)&v60[v35 / 0x78].PlaneAttributes.ClipRect;
      if ( v60[v35 / 0x78].PlaneAttributes.DstRect.left != *(_DWORD *)DisplayModeInfo
        || v60[v35 / 0x78].PlaneAttributes.DstRect.right != *(_DWORD *)(DisplayModeInfo + 8)
        || v60[v35 / 0x78].PlaneAttributes.DstRect.top != *(_DWORD *)(DisplayModeInfo + 4)
        || v60[v35 / 0x78].PlaneAttributes.DstRect.bottom != *(_DWORD *)(DisplayModeInfo + 12) )
      {
        sub_1C016154C(&v129, &v60[v35 / 0x78].PlaneAttributes.Flags, (_DWORD *)DisplayModeInfo);
        v60[v35 / 0x78].PlaneAttributes.SrcRect = v129;
        a2->pPresentPlanes[v35 / 0x78].PlaneAttributes.DstRect = a2->pPresentPlanes[v35 / 0x78].PlaneAttributes.ClipRect;
        right = (__int64)a2->pPresentPlanes;
        if ( *(_DWORD *)(right + v35 + 20) >= *(_DWORD *)(right + v35 + 28)
          || *(_DWORD *)(right + v35 + 24) >= *(_DWORD *)(right + v35 + 32)
          || *(_DWORD *)(right + v35 + 36) >= *(_DWORD *)(right + v35 + 44)
          || *(_DWORD *)(right + v35 + 40) >= *(_DWORD *)(right + v35 + 48)
          || (v27 = 0LL, *(int *)(right + v35 + 20) < 0)
          || Width < *(_DWORD *)(right + v35 + 28)
          || *(int *)(right + v35 + 24) < 0
          || Height < *(_DWORD *)(right + v35 + 32)
          || *(int *)(right + v35 + 36) < 0
          || v58 < *(_DWORD *)(right + v35 + 44)
          || *(int *)(right + v35 + 40) < 0
          || (int)v118 < *(_DWORD *)(right + v35 + 48) )
        {
LABEL_78:
          v51 = (_QWORD *)WdLogNewEntry5_WdError(right);
          LODWORD(v22) = -1073741811;
          v51[3] = -1073741811LL;
          v51[4] = this;
          v51[5] = v33;
          goto LABEL_79;
        }
      }
    }
    v29 = v114;
LABEL_84:
    if ( bTracingEnabled )
    {
      DisplayModeInfo = a2->pPresentPlanes[v35 / 0x78].hAllocation;
      v27 = (_DWORD)DisplayModeInfo
          ? (D3DKMT_MULTIPLANE_OVERLAY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                                                               + 8LL)
                                                                                   + 320LL))(
                                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                                           (unsigned int)DisplayModeInfo)
          : 0LL;
      right = (__int64)a2->pPresentPlanes;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqpqddddddddddddqqqq(
          right,
          (__int64)v27,
          DisplayModeInfo,
          VidPnSourceId,
          *(_DWORD *)(right + 120LL * v33),
          *(_DWORD *)(right + v35 + 4),
          (char)v27,
          *(_DWORD *)(right + v35 + 16),
          *(_DWORD *)(right + v35 + 20),
          *(_DWORD *)(right + v35 + 28),
          *(_DWORD *)(right + v35 + 24),
          *(_DWORD *)(right + v35 + 32),
          *(_DWORD *)(right + v35 + 36),
          *(_DWORD *)(right + v35 + 44),
          *(_DWORD *)(right + v35 + 40),
          *(_DWORD *)(right + v35 + 48),
          *(_DWORD *)(right + v35 + 52),
          *(_DWORD *)(right + v35 + 60),
          *(_DWORD *)(right + v35 + 56),
          *(_DWORD *)(right + v35 + 64),
          *(_DWORD *)(right + v35 + 68),
          *(_DWORD *)(right + v35 + 72),
          v113,
          *(_DWORD *)(right + v35 + 92));
    }
    if ( ++v33 >= a2->PresentPlaneCount )
      break;
    DisplayModeInfo = v119;
    LOBYTE(v31) = v116;
    v32 = v115;
  }
  if ( !v115 && !v116 && !v29 )
    goto LABEL_135;
  memset(&v130, 0, sizeof(v130));
  p_FlipInterval = &a2->FlipInterval;
  v65 = a2->Flags.Value & 0xE0000;
  v125[0] = 0LL;
  v130.FlipInterval = a2->FlipInterval;
  v66 = *((_QWORD *)this + 2);
  v130.Flags.Value = v130.Flags.Value & 0xFFFFF8FF | ((v65 | 0x201800) >> 9);
  v125[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v66 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v125);
  v71 = v125[0];
  if ( !v125[0] )
  {
    v72 = WdLogNewEntry5_WdLowResource(v68, v67, v69, v70);
    *(_QWORD *)(v72 + 24) = 1058LL;
    WdLogEvent5_WdLowResource(v72);
    LODWORD(v22) = -1073741801;
    goto LABEL_132;
  }
  v73 = *(_DWORD *)v125[0] | 0x10020;
  *(_DWORD *)v125[0] = v73;
  *(_DWORD *)v71 = v73 ^ (v73 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    PresentCount = a2->PresentCount;
  else
    PresentCount = 0;
  v75 = *(_DWORD *)v71;
  *((_DWORD *)v71 + 28) = PresentCount;
  v75 |= 0x800004u;
  *(_DWORD *)v71 = v75;
  v76 = ((unsigned __int8)v75 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 8 ^ v75;
  *(_DWORD *)v71 = v76;
  v77 = ((unsigned __int8)v76 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v76;
  *(_DWORD *)v71 = v77;
  v78 = (v77 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v77;
  *(_DWORD *)v71 = v78;
  v79 = (v78 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v78;
  *(_DWORD *)v71 = v79;
  *(_DWORD *)v71 = v79 ^ (v79 ^ (4 * a2->Flags.Value)) & 0x200000;
  if ( (a2->Flags.Value & 0x8000000) != 0 )
    Duration = a2->Duration;
  else
    Duration = 0;
  *((_DWORD *)v71 + 36) = Duration;
  *((_DWORD *)v71 + 29) = VidPnSourceId;
  *((D3DDDI_FLIPINTERVAL_TYPE *)v71 + 31) = *p_FlipInterval;
  v81 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                                                          + 8LL)
                                                                              + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
          (unsigned int)VidPnSourceId,
          &a2->FlipInterval);
  *((_DWORD *)v71 + 30) = v81;
  v85 = *((_QWORD *)this + 2);
  if ( v81 == *(_DWORD *)(v85 + 4LL * (unsigned int)VidPnSourceId + 2768) )
  {
    v93 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (*(_BYTE *)&a2->Flags.0 & 0x10) == 0, v124);
    v22 = v93;
    if ( v93 >= 0 )
      goto LABEL_112;
    v92 = WdLogNewEntry5_WdEvent(v95, v94, v96, v97);
    *(_QWORD *)(v92 + 32) = this;
LABEL_111:
    *(_QWORD *)(v92 + 24) = v22;
    WdLogEvent5_WdEvent(v92);
  }
  else
  {
    v86 = WdLogNewEntry5_WdEvent(v85, v82, v83, v84);
    *(_QWORD *)(v86 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdEvent(v86);
    COREDEVICEACCESS::Release(v124);
    DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3);
    v87 = COREDEVICEACCESS::AcquireShared(v124);
    v22 = v87;
    if ( v87 < 0 )
    {
      v92 = WdLogNewEntry5_WdEvent(v89, v88, v90, v91);
      goto LABEL_111;
    }
LABEL_112:
    v98 = DXGCONTEXT::CheckDevicePresentSettings(this, (a2->Flags.Value >> 2) & 1, VidPnSourceId);
    v22 = v98;
    if ( v98 >= 0 )
    {
      if ( *((_DWORD *)v71 + 30) == 5 )
      {
        if ( *((_QWORD *)this + 36) )
        {
          v105 = WdLogNewEntry5_WdAssertion(v100);
          *(_QWORD *)(v105 + 24) = 1161LL;
          WdLogEvent5_WdAssertion(v105);
        }
        LODWORD(v22) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays(
                         this,
                         a2,
                         v115,
                         v116,
                         v114,
                         (const struct DXGALLOCATIONREFERENCE *)v131,
                         &v130,
                         v71,
                         v127);
        if ( (int)v22 >= 0 )
        {
          v106 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 1984LL) + 136LL);
          if ( *(_DWORD *)(v106 + 1016LL * (unsigned int)VidPnSourceId + 956) == -1 )
          {
            v107 = WdLogNewEntry5_WdAssertion(v106);
            *(_QWORD *)(v107 + 24) = 1177LL;
            WdLogEvent5_WdAssertion(v107);
          }
          DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
            *((struct _KTHREAD ***)this + 2),
            VidPnSourceId,
            (const struct DXGALLOCATIONREFERENCE *)v131);
          if ( v117 > -1 )
            DXGDEVICE::SetDisplayedPrimary(
              *((DXGDEVICE **)this + 2),
              VidPnSourceId,
              v131[v117],
              *((_DWORD *)v71 + 34),
              0);
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2768) = *((_DWORD *)v71 + 30);
        }
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v22 != -1073741130 )
        {
          v109 = WdLogNewEntry5_WdAssertion(v108);
          *(_QWORD *)(v109 + 24) = 1199LL;
          WdLogEvent5_WdAssertion(v109);
        }
        if ( *((_QWORD *)this + 36) )
        {
          v110 = WdLogNewEntry5_WdAssertion(v108);
          *(_QWORD *)(v110 + 24) = 1200LL;
          WdLogEvent5_WdAssertion(v110);
        }
      }
      else
      {
        v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v100, v99, v101, v102);
        LODWORD(v22) = -1073741811;
        v104[3] = this;
        v104[4] = *(int *)p_FlipInterval;
        v104[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v104);
      }
    }
    else
    {
      v103 = WdLogNewEntry5_WdEvent(v100, v99, v101, v102);
      *(_QWORD *)(v103 + 24) = v22;
      *(_QWORD *)(v103 + 32) = this;
      WdLogEvent5_WdEvent(v103);
      if ( (_DWORD)v22 == -1071774920 )
      {
        DXGDEVICE::SetDisplayedAllMultiPlaneOverlays(
          *((struct _KTHREAD ***)this + 2),
          VidPnSourceId,
          (const struct DXGALLOCATIONREFERENCE *)v131);
        if ( v117 > -1 )
          DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)this + 2), VidPnSourceId, v131[v117], *((_DWORD *)v71 + 34), 0);
        LODWORD(v22) = 0;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 2768) = *((_DWORD *)v71 + 30);
      }
    }
  }
LABEL_132:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v125);
LABEL_136:
  `vector destructor iterator'(
    (char *)v131,
    8LL,
    8,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  return (unsigned int)v22;
}

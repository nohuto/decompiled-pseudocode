/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0163A78
 * Callers:
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0011054 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C0021FC4 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C0161048 (-ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        struct _DXGKARG_PRESENT *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT **a9)
{
  struct DXGCONTEXT **v10; // r13
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 BroadcastContextCount; // rsi
  _QWORD *v20; // rax
  struct DXGCONTEXT *v22; // rax
  unsigned int v23; // r15d
  int v24; // edx
  int v25; // r8d
  struct DXGCONTEXT *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r8d
  char *v34; // rsi
  UINT v35; // edx
  __int64 v36; // r8
  D3DKMT_MULTIPLANE_OVERLAY *pPresentPlanes; // rax
  unsigned __int64 v38; // rax
  D3DKMT_MULTIPLANE_OVERLAY *v39; // rcx
  unsigned __int64 v40; // r12
  __int64 v41; // r15
  __int64 LayerIndex; // r13
  __int64 v43; // rcx
  int v44; // edx
  unsigned int v45; // esi
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  char *v51; // r13
  char *v52; // r13
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rax
  D3DKMT_MULTIPLANE_OVERLAY *v59; // rcx
  __int64 v60; // rax
  DXGCONTEXT *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  struct _DXGKARG_PRESENT *v66; // r8
  unsigned int i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v69; // rax
  struct VIDMM_ALLOC **v70; // r14
  __int64 v71; // r15
  struct VIDMM_ALLOC **v72; // rax
  __int64 v73; // rax
  int v74; // [rsp+30h] [rbp-D0h]
  unsigned int v75; // [rsp+34h] [rbp-CCh]
  int v76; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v77; // [rsp+3Ch] [rbp-C4h]
  unsigned int v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_PRESENT *v81; // [rsp+58h] [rbp-A8h]
  char *v82; // [rsp+60h] [rbp-A0h]
  const struct DXGALLOCATIONREFERENCE *v83; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT **v84; // [rsp+70h] [rbp-90h]
  _DWORD v85[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v86; // [rsp+80h] [rbp-80h]
  _DWORD v87[64]; // [rsp+90h] [rbp-70h] BYREF

  v10 = a9;
  v83 = a6;
  v81 = a7;
  v84 = a9;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 1530LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a4 + a3;
  v77 = v15;
  if ( v15 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 1533LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 1534LL;
    WdLogEvent5_WdAssertion(v18);
  }
  BroadcastContextCount = a2->BroadcastContextCount;
  if ( (unsigned int)BroadcastContextCount > 0x40 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v20[3] = this;
    v20[4] = BroadcastContextCount;
    v20[5] = 64LL;
    v20[6] = -1073741811LL;
LABEL_11:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v22 = *a9;
  v23 = BroadcastContextCount + 1;
  v78 = BroadcastContextCount + 1;
  v24 = *((_DWORD *)v22 + 81);
  if ( (_DWORD)BroadcastContextCount )
  {
    v25 = 1;
    while ( 1 )
    {
      v26 = a9[v25];
      if ( (*((_DWORD *)v26 + 81) & v24) != 0 || v24 )
        break;
      ++v25;
      v24 = *((_DWORD *)v26 + 81);
      if ( v25 - 1 >= (unsigned int)BroadcastContextCount )
        goto LABEL_17;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v20[3] = this;
    v20[4] = -1073741811LL;
    goto LABEL_11;
  }
LABEL_17:
  v27 = *(_DWORD *)a8;
  *((_DWORD *)a8 + 35) = v23;
  *((_DWORD *)a8 + 34) = v24;
  v28 = v27 & 0xFFFFFBFF | (((v23 > 1) | 2) << 10);
  v29 = *((_DWORD *)a8 + 30) == 5;
  *(_DWORD *)a8 = v28;
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v30 + 24) = 1602LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v81->pDmaBuffer )
  {
    v31 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v31 + 24) = 1607LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v15 > 8 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v32 + 24) = 1618LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = 0;
  v34 = (char *)a8 + 360;
  v74 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v34 = (char *)a8 + 352;
  v35 = 0;
  v82 = v34;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v36 = v35;
      pPresentPlanes = a2->pPresentPlanes;
      if ( pPresentPlanes[v36].Enabled )
        *v34 |= 1 << LOBYTE(pPresentPlanes[v36].LayerIndex);
      ++v35;
    }
    while ( v35 < a2->PresentPlaneCount );
    v33 = 0;
  }
  v38 = 0LL;
  v75 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v39 = a2->pPresentPlanes;
      v40 = v38;
      v41 = 8LL * v33;
      LayerIndex = v39[v38].LayerIndex;
      v87[v41] = LayerIndex;
      v87[v41 + 1] = v39[v38].Enabled;
      if ( v39[v38].Enabled )
        break;
      if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(*((struct _KTHREAD ***)this + 2), a2->VidPnSourceId, LayerIndex) )
      {
        v33 = v74;
        v34[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 176LL) + 64LL)
                                   + 40LL)
                       + 28LL) < 0x4002u )
          goto LABEL_59;
        *(_QWORD *)&v87[v41 + 2] = 0LL;
        v87[v41 + 4] &= 0xFFFFFFE0;
        *(_QWORD *)&v87[v41 + 6] = 0LL;
        goto LABEL_55;
      }
      if ( *((_QWORD *)v83 + v75) )
      {
        v63 = WdLogNewEntry5_WdAssertion(v75);
        *(_QWORD *)(v63 + 24) = 1769LL;
        WdLogEvent5_WdAssertion(v63);
      }
      v33 = v74;
LABEL_59:
      v38 = v75 + 1;
      v75 = v38;
      if ( (unsigned int)v38 >= a2->PresentPlaneCount )
      {
        v10 = v84;
        v23 = v78;
        goto LABEL_63;
      }
      v34 = v82;
    }
    v43 = (unsigned int)LayerIndex;
    v44 = (unsigned __int8)*(_DWORD *)v34;
    if ( ((1 << LayerIndex) & v44) != 0 )
    {
      v46 = (v44 & ((1 << LayerIndex) - 1) & 0x55555555)
          + (((v44 & (unsigned int)((1 << LayerIndex) - 1)) >> 1) & 0x55555555);
      v47 = (((v46 & 0x33333333) + ((v46 >> 2) & 0x33333333)) & 0xF0F0F0F)
          + ((((v46 & 0x33333333) + ((v46 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
      v43 = v47 & 0xFF00FF;
      v45 = (unsigned __int16)((unsigned __int8)v47 + BYTE1(v47))
          + (((unsigned int)v43 + ((v47 >> 8) & 0xFF00FF)) >> 16);
    }
    else
    {
      v45 = -1;
    }
    if ( v45 >= v77 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v48 + 24) = 1660LL;
      WdLogEvent5_WdAssertion(v48);
    }
    if ( v45 >= 8 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v49 + 24) = 1667LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v29 = *((_BYTE *)a8 + 348) == 0;
    v50 = *((_QWORD *)v83 + LayerIndex);
    v51 = (char *)a8 + 376;
    v79 = v50;
    if ( v29 )
      v51 = (char *)a8 + 360;
    v52 = &v51[64 * (unsigned __int64)v45];
    if ( !v50 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v83);
      *(_QWORD *)(v53 + 24) = 1680LL;
      WdLogEvent5_WdAssertion(v53);
      v50 = v79;
    }
    *((_QWORD *)v52 + 1) = *(_QWORD *)(*(_QWORD *)(v50 + 48) + 16LL);
    *((_QWORD *)v52 + 7) = *((_QWORD *)this + 21);
    v54 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *(struct _VIDMM_MULTI_ALLOC **)(v50 + 24),
            (struct VIDMM_ALLOC **)v52);
    v56 = v54;
    if ( v54 < 0 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v55);
      v64[4] = v79;
      v64[3] = this;
      v64[5] = v56;
      WdLogEvent5_WdError(v64);
      goto LABEL_69;
    }
    v57 = v79;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 424LL)
                                                                         + 8LL)
                                                             + 208LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
      *(_QWORD *)(*(_QWORD *)(v79 + 48) + 8LL),
      &v76,
      &v80);
    *((_QWORD *)v52 + 2) = v80;
    *((_DWORD *)v52 + 13) ^= (*((_DWORD *)v52 + 13) ^ (v76 << 17)) & 0x3E0000;
    v58 = *(_QWORD *)(v57 + 40);
    if ( v58 )
      LODWORD(v58) = (*(_DWORD *)(v58 + 4) >> 3) & 1;
    *((_DWORD *)v52 + 13) ^= (*((_DWORD *)v52 + 13) ^ ((_DWORD)v58 << 23)) & 0x800000;
    v59 = a2->pPresentPlanes;
    if ( v59[v40].PlaneAttributes.SrcRect.right <= v59[v40].PlaneAttributes.SrcRect.left )
    {
      v60 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v60 + 24) = 1728LL;
      WdLogEvent5_WdAssertion(v60);
    }
    v61 = (DXGCONTEXT *)a2->pPresentPlanes;
    if ( *(_DWORD *)((char *)v61 + v40 * 120 + 32) <= *(_DWORD *)((char *)v61 + v40 * 120 + 24) )
    {
      v62 = WdLogNewEntry5_WdAssertion(v61);
      *(_QWORD *)(v62 + 24) = 1729LL;
      WdLogEvent5_WdAssertion(v62);
    }
    DXGCONTEXT::ConvertThunkOverlayToPackedAttributes(
      v61,
      (struct _VIDSCH_LAYER_ATTRIBUTE *)(v52 + 24),
      &a2->pPresentPlanes[v40].PlaneAttributes);
    v33 = v74;
    *(_QWORD *)&v87[v41 + 2] = *(_QWORD *)(v57 + 32);
    v87[v41 + 4] ^= ((unsigned __int8)v76 ^ (unsigned __int8)v87[v41 + 4]) & 0x1F;
    *(_QWORD *)&v87[v41 + 6] = v80;
LABEL_55:
    v74 = ++v33;
    goto LABEL_59;
  }
LABEL_63:
  v85[0] = a2->VidPnSourceId;
  v86 = v87;
  v85[1] = v33;
  v66 = v81;
  v81->pAllocationList = (DXGK_ALLOCATIONLIST *)v85;
  LODWORD(v56) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v66);
  if ( (int)v56 < 0 )
    goto LABEL_70;
  for ( i = 0; i < v23; ++v10 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v10 + 46) != CurrentThread )
    {
      v69 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v69 + 24) = 1808LL;
      WdLogEvent5_WdAssertion(v69);
    }
    LODWORD(v56) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v10 + 27),
                     a8);
    if ( (int)v56 < 0 )
      goto LABEL_70;
    *(_DWORD *)a8 &= ~0x800u;
    ++i;
  }
LABEL_69:
  if ( (int)v56 < 0 )
  {
LABEL_70:
    if ( v77 )
    {
      v70 = (struct VIDMM_ALLOC **)((char *)a8 + 360);
      v71 = v77;
      do
      {
        v72 = v70 + 2;
        if ( !*((_BYTE *)a8 + 348) )
          v72 = v70;
        if ( *v72 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *((_DWORD *)a8 + 34),
            *v72);
        v70 += 8;
        --v71;
      }
      while ( v71 );
    }
    v73 = WdLogNewEntry5_WdError(v65);
    *(_QWORD *)(v73 + 32) = (int)v56;
    *(_QWORD *)(v73 + 24) = this;
    WdLogEvent5_WdError(v73);
  }
  return (unsigned int)v56;
}

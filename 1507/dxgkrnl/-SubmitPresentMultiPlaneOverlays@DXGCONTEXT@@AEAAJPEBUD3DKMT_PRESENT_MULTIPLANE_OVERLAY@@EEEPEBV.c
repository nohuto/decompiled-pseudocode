/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F7CC
 * Callers:
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015E304 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA0C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C00220D0 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C015CD54 (-ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays(
        DXGCONTEXT *this,
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        struct _DXGKARG_PRESENT *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT **a9)
{
  unsigned __int8 v9; // si
  struct DXGCONTEXT **v10; // r13
  unsigned __int8 v11; // r12
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 BroadcastContextCount; // rsi
  _QWORD *v23; // rax
  struct DXGCONTEXT *v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rdx
  struct DXGCONTEXT *v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  char *v37; // rsi
  UINT v38; // edx
  __int64 v39; // r8
  D3DKMT_MULTIPLANE_OVERLAY *pPresentPlanes; // rax
  unsigned __int64 v41; // rax
  D3DKMT_MULTIPLANE_OVERLAY *v42; // rcx
  unsigned __int64 v43; // r12
  __int64 v44; // r15
  __int64 LayerIndex; // r13
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // esi
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  char *v54; // r13
  __int64 v55; // rcx
  char *v56; // r13
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  D3DKMT_MULTIPLANE_OVERLAY *v66; // rcx
  __int64 v67; // rax
  DXGCONTEXT *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  struct _DXGKARG_PRESENT *v74; // r8
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned int i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v80; // rax
  struct VIDMM_ALLOC **v81; // r14
  __int64 v82; // r15
  struct VIDMM_ALLOC **v83; // rax
  __int64 v84; // rax
  unsigned int v85; // [rsp+30h] [rbp-D0h]
  unsigned int v86; // [rsp+34h] [rbp-CCh]
  int v87; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v88; // [rsp+3Ch] [rbp-C4h]
  unsigned int v89; // [rsp+40h] [rbp-C0h]
  __int64 v90; // [rsp+48h] [rbp-B8h]
  __int64 v91; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_PRESENT *v92; // [rsp+58h] [rbp-A8h]
  char *v93; // [rsp+60h] [rbp-A0h]
  const struct DXGALLOCATIONREFERENCE *v94; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT **v95; // [rsp+70h] [rbp-90h]
  _DWORD v96[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v97; // [rsp+80h] [rbp-80h]
  _DWORD v98[64]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a4;
  v10 = a9;
  v11 = a3;
  v94 = a6;
  v92 = a7;
  v95 = a9;
  if ( !(_BYTE)a3 && !(_BYTE)a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 1538LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v9 + v11;
  v88 = v15;
  if ( v15 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 1541LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 1542LL;
    WdLogEvent5_WdAssertion(v21);
  }
  BroadcastContextCount = a2->BroadcastContextCount;
  if ( (unsigned int)BroadcastContextCount > 0x40 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v23[3] = this;
    v23[4] = BroadcastContextCount;
    v23[5] = 64LL;
    v23[6] = -1073741811LL;
LABEL_11:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  v25 = *a9;
  v26 = BroadcastContextCount + 1;
  v89 = BroadcastContextCount + 1;
  v27 = *((unsigned int *)v25 + 81);
  if ( (_DWORD)BroadcastContextCount )
  {
    LODWORD(v19) = 1;
    while ( 1 )
    {
      v28 = a9[(unsigned int)v19];
      v29 = *((_DWORD *)v28 + 81);
      if ( (v29 & (unsigned int)v27) != 0 || (_DWORD)v27 )
        break;
      v19 = (unsigned int)(v19 + 1);
      v27 = v29;
      if ( (int)v19 - 1 >= (unsigned int)BroadcastContextCount )
        goto LABEL_17;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v23[3] = this;
    v23[4] = -1073741811LL;
    goto LABEL_11;
  }
LABEL_17:
  v30 = *(_DWORD *)a8;
  *((_DWORD *)a8 + 35) = v26;
  *((_DWORD *)a8 + 34) = v27;
  v31 = v30 & 0xFFFFF7FF | (((v26 > 1) | 2) << 11);
  v32 = *((_DWORD *)a8 + 30) == 5;
  *(_DWORD *)a8 = v31;
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v31, v27, v19, v20);
    *(_QWORD *)(v33 + 24) = 1610LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v92->pDmaBuffer )
  {
    v34 = WdLogNewEntry5_WdAssertion(v31, v27, v19, v20);
    *(_QWORD *)(v34 + 24) = 1615LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v15 > 8 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v31, v27, v19, v20);
    *(_QWORD *)(v35 + 24) = 1626LL;
    WdLogEvent5_WdAssertion(v35);
  }
  v36 = 0LL;
  v37 = (char *)a8 + 360;
  v85 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v37 = (char *)a8 + 352;
  v38 = 0;
  v93 = v37;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v39 = v38;
      pPresentPlanes = a2->pPresentPlanes;
      if ( pPresentPlanes[v39].Enabled )
        *v37 |= 1 << LOBYTE(pPresentPlanes[v39].LayerIndex);
      ++v38;
    }
    while ( v38 < a2->PresentPlaneCount );
    v36 = 0LL;
  }
  v41 = 0LL;
  v86 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v42 = a2->pPresentPlanes;
      v43 = v41;
      v44 = 8LL * (unsigned int)v36;
      LayerIndex = v42[v41].LayerIndex;
      v98[v44] = LayerIndex;
      v98[v44 + 1] = v42[v41].Enabled;
      if ( v42[v41].Enabled )
        break;
      if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(*((struct _KTHREAD ***)this + 2), a2->VidPnSourceId, LayerIndex) )
      {
        v36 = v85;
        v37[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 176LL) + 64LL)
                                   + 40LL)
                       + 28LL) < 0x4002u )
          goto LABEL_59;
        *(_QWORD *)&v98[v44 + 2] = 0LL;
        v98[v44 + 4] &= 0xFFFFFFE0;
        *(_QWORD *)&v98[v44 + 6] = 0LL;
        goto LABEL_55;
      }
      if ( *((_QWORD *)v94 + v86) )
      {
        v71 = WdLogNewEntry5_WdAssertion(v86, v94, v70, v20);
        *(_QWORD *)(v71 + 24) = 1776LL;
        WdLogEvent5_WdAssertion(v71);
      }
      v36 = v85;
LABEL_59:
      v41 = v86 + 1;
      v86 = v41;
      if ( (unsigned int)v41 >= a2->PresentPlaneCount )
      {
        v10 = v95;
        v26 = v89;
        goto LABEL_63;
      }
      v37 = v93;
    }
    v46 = (unsigned int)LayerIndex;
    v47 = (unsigned __int8)*(_DWORD *)v37;
    if ( ((1 << LayerIndex) & (unsigned int)v47) != 0 )
    {
      v49 = (v47 & ((1 << LayerIndex) - 1) & 0x55555555)
          + ((((unsigned int)v47 & ((1 << LayerIndex) - 1)) >> 1) & 0x55555555);
      v50 = (((v49 & 0x33333333) + ((v49 >> 2) & 0x33333333)) & 0xF0F0F0F)
          + ((((v49 & 0x33333333) + ((v49 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
      v46 = v50 & 0xFF00FF;
      v48 = (unsigned __int16)((unsigned __int8)v50 + BYTE1(v50))
          + (((unsigned int)v46 + ((v50 >> 8) & 0xFF00FF)) >> 16);
    }
    else
    {
      v48 = -1;
    }
    if ( v48 >= v88 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v46, v47, v36, v20);
      *(_QWORD *)(v51 + 24) = 1668LL;
      WdLogEvent5_WdAssertion(v51);
    }
    if ( v48 >= 8 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v46, v47, v36, v20);
      *(_QWORD *)(v52 + 24) = 1675LL;
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = *((_QWORD *)v94 + LayerIndex);
    v54 = (char *)a8 + 376;
    v55 = 56LL * v48;
    v32 = *((_BYTE *)a8 + 348) == 0;
    v90 = v53;
    if ( v32 )
      v54 = (char *)a8 + 360;
    v56 = &v54[v55];
    if ( !v53 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v55, v47, 0LL, v20);
      *(_QWORD *)(v57 + 24) = 1688LL;
      WdLogEvent5_WdAssertion(v57);
      v53 = v90;
    }
    *((_QWORD *)v56 + 1) = *(_QWORD *)(*(_QWORD *)(v53 + 48) + 16LL);
    v58 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *(struct _VIDMM_MULTI_ALLOC **)(v53 + 24),
            (struct VIDMM_ALLOC **)v56);
    v60 = v58;
    if ( v58 < 0 )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      v72[4] = v90;
      v72[3] = this;
      v72[5] = v60;
      WdLogEvent5_WdError(v72);
      goto LABEL_69;
    }
    v61 = v90;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 400LL)
                                                                         + 8LL)
                                                             + 208LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
      *(_QWORD *)(*(_QWORD *)(v90 + 48) + 8LL),
      &v87,
      &v91);
    *((_QWORD *)v56 + 2) = v91;
    *((_DWORD *)v56 + 13) ^= (*((_DWORD *)v56 + 13) ^ (v87 << 17)) & 0x3E0000;
    v65 = *(_QWORD *)(v61 + 40);
    if ( v65 )
      LODWORD(v65) = (*(_DWORD *)(v65 + 4) >> 3) & 1;
    *((_DWORD *)v56 + 13) ^= (*((_DWORD *)v56 + 13) ^ ((_DWORD)v65 << 23)) & 0x800000;
    v66 = a2->pPresentPlanes;
    if ( v66[v43].PlaneAttributes.SrcRect.right <= v66[v43].PlaneAttributes.SrcRect.left )
    {
      v67 = WdLogNewEntry5_WdAssertion(v66, v62, v63, v64);
      *(_QWORD *)(v67 + 24) = 1735LL;
      WdLogEvent5_WdAssertion(v67);
    }
    v68 = (DXGCONTEXT *)a2->pPresentPlanes;
    if ( *(_DWORD *)((char *)v68 + v43 * 120 + 32) <= *(_DWORD *)((char *)v68 + v43 * 120 + 24) )
    {
      v69 = WdLogNewEntry5_WdAssertion(v68, v62, v63, v64);
      *(_QWORD *)(v69 + 24) = 1736LL;
      WdLogEvent5_WdAssertion(v69);
    }
    DXGCONTEXT::ConvertThunkOverlayToPackedAttributes(
      v68,
      (struct _VIDSCH_LAYER_ATTRIBUTE *)(v56 + 24),
      &a2->pPresentPlanes[v43].PlaneAttributes,
      v64);
    LODWORD(v36) = v85;
    *(_QWORD *)&v98[v44 + 2] = *(_QWORD *)(v61 + 32);
    v98[v44 + 4] ^= (v98[v44 + 4] ^ v87) & 0x1F;
    *(_QWORD *)&v98[v44 + 6] = v91;
LABEL_55:
    v36 = (unsigned int)(v36 + 1);
    v85 = v36;
    goto LABEL_59;
  }
LABEL_63:
  v96[0] = a2->VidPnSourceId;
  v97 = v98;
  v96[1] = v36;
  v74 = v92;
  v92->pAllocationList = (DXGK_ALLOCATIONLIST *)v96;
  LODWORD(v60) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v74);
  if ( (int)v60 < 0 )
    goto LABEL_70;
  for ( i = 0; i < v26; ++v10 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v10 + 46) != CurrentThread )
    {
      v80 = WdLogNewEntry5_WdAssertion(CurrentThread, v75, v76, v77);
      *(_QWORD *)(v80 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v80);
    }
    LODWORD(v60) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v10 + 27),
                     a8);
    if ( (int)v60 < 0 )
      goto LABEL_70;
    *(_DWORD *)a8 &= ~0x1000u;
    ++i;
  }
LABEL_69:
  if ( (int)v60 < 0 )
  {
LABEL_70:
    if ( v88 )
    {
      v81 = (struct VIDMM_ALLOC **)((char *)a8 + 360);
      v82 = v88;
      do
      {
        v83 = v81 + 2;
        if ( !*((_BYTE *)a8 + 348) )
          v83 = v81;
        if ( *v83 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *((_DWORD *)a8 + 34),
            *v83);
        v81 += 7;
        --v82;
      }
      while ( v82 );
    }
    v84 = WdLogNewEntry5_WdError(v73);
    *(_QWORD *)(v84 + 32) = (int)v60;
    *(_QWORD *)(v84 + 24) = this;
    WdLogEvent5_WdError(v84);
  }
  return (unsigned int)v60;
}

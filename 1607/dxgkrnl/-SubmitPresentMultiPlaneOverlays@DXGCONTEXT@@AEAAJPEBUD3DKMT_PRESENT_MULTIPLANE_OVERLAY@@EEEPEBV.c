/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays@DXGCONTEXT@@AEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018AE80
 * Callers:
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188EE4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00114E8 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C0028AD4 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C0186C20 (-ConvertThunkOverlayToPackedAttributes@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBUD3DKMT_.c)
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
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 BroadcastContextCount; // rdi
  _QWORD *v19; // rax
  struct DXGCONTEXT **v21; // r12
  unsigned int v22; // r9d
  int v23; // edx
  unsigned int v24; // r8d
  struct DXGCONTEXT *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // r13
  unsigned int v33; // r8d
  UINT v34; // edx
  __int64 v35; // r8
  D3DKMT_MULTIPLANE_OVERLAY *pPresentPlanes; // rax
  UINT v37; // eax
  D3DKMT_MULTIPLANE_OVERLAY *v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 LayerIndex; // rdi
  __int64 v43; // rcx
  int v44; // edx
  __int64 v45; // rsi
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rdi
  char *v53; // rdx
  char *v54; // rdx
  __int64 v55; // r9
  char *v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rsi
  char *v60; // rdx
  __int64 v61; // rax
  int v62; // ecx
  struct _VIDSCH_LAYER_ATTRIBUTE *v63; // rdi
  D3DKMT_MULTIPLANE_OVERLAY *v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rax
  DXGCONTEXT *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rax
  struct VIDMM_ALLOC **v72; // rcx
  struct _DXGKARG_PRESENT *v73; // r8
  unsigned int v74; // r15d
  unsigned int i; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v77; // rax
  __int64 v78; // r12
  struct VIDMM_ALLOC **v79; // r15
  __int64 v80; // r13
  __int64 v81; // rax
  int v82; // [rsp+30h] [rbp-D0h]
  int v83; // [rsp+34h] [rbp-CCh] BYREF
  int v84; // [rsp+38h] [rbp-C8h]
  UINT v85; // [rsp+3Ch] [rbp-C4h]
  unsigned int v86; // [rsp+40h] [rbp-C0h]
  unsigned int v87; // [rsp+44h] [rbp-BCh]
  __int64 v88; // [rsp+48h] [rbp-B8h] BYREF
  const struct DXGALLOCATIONREFERENCE *v89; // [rsp+50h] [rbp-B0h]
  char *v90; // [rsp+58h] [rbp-A8h]
  struct DXGCONTEXT **v91; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_PRESENT *v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h]
  _DWORD v94[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v95; // [rsp+80h] [rbp-80h]
  _DWORD v96[64]; // [rsp+90h] [rbp-70h] BYREF

  v89 = a6;
  v92 = a7;
  v91 = a9;
  if ( !a3 && !a4 && !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 1606LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a4 + a3;
  v86 = v14;
  if ( v14 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v15 + 24) = 1609LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 1610LL;
    WdLogEvent5_WdAssertion(v17);
  }
  BroadcastContextCount = a2->BroadcastContextCount;
  if ( (unsigned int)BroadcastContextCount > 0x40 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v19[3] = this;
    v19[4] = BroadcastContextCount;
    v19[5] = 64LL;
    v19[6] = -1073741811LL;
LABEL_11:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v21 = v91;
  v22 = BroadcastContextCount + 1;
  v87 = BroadcastContextCount + 1;
  v23 = *((_DWORD *)*v91 + 81);
  if ( (_DWORD)BroadcastContextCount )
  {
    v24 = 1;
    while ( 1 )
    {
      v25 = v91[v24];
      if ( (*((_DWORD *)v25 + 81) & v23) != 0 || v23 )
        break;
      ++v24;
      v23 = *((_DWORD *)v25 + 81);
      if ( v24 - 1 >= (unsigned int)BroadcastContextCount )
        goto LABEL_17;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v19[3] = this;
    v19[4] = -1073741811LL;
    goto LABEL_11;
  }
LABEL_17:
  v26 = *(_DWORD *)a8;
  *((_DWORD *)a8 + 35) = v22;
  *((_DWORD *)a8 + 34) = v23;
  v27 = v26 & 0xFFFFFBFF | (((v22 > 1) | 2) << 10);
  v28 = *((_DWORD *)a8 + 30) == 5;
  *(_DWORD *)a8 = v27;
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v29 + 24) = 1678LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( v92->pDmaBuffer )
  {
    v30 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v30 + 24) = 1683LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v14 > 8 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v31 + 24) = 1694LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v32 = (char *)a8 + 424;
  v33 = 0;
  v82 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v32 = (char *)a8 + 416;
  v34 = 0;
  v90 = v32;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v35 = v34;
      pPresentPlanes = a2->pPresentPlanes;
      if ( pPresentPlanes[v35].Enabled )
        *v32 |= 1 << LOBYTE(pPresentPlanes[v35].LayerIndex);
      ++v34;
    }
    while ( v34 < a2->PresentPlaneCount );
    v33 = 0;
  }
  v37 = 0;
  v85 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v38 = a2->pPresentPlanes;
      v39 = v37;
      v40 = v37;
      v41 = 8LL * v33;
      v93 = v40 * 120;
      LayerIndex = v38[v40].LayerIndex;
      v96[v41] = LayerIndex;
      v96[v41 + 1] = v38[v40].Enabled;
      if ( v38[v40].Enabled )
        break;
      if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(*((struct _KTHREAD ***)this + 2), a2->VidPnSourceId, LayerIndex) )
      {
        v33 = v82;
        v32[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) < 0x4002u )
          goto LABEL_79;
        v96[v41 + 4] &= 0xFFFFFFE0;
        *(_QWORD *)&v96[v41 + 2] = 0LL;
        *(_QWORD *)&v96[v41 + 6] = 0LL;
        goto LABEL_75;
      }
      if ( *((_QWORD *)v89 + v39) )
      {
        v70 = WdLogNewEntry5_WdAssertion(v69);
        *(_QWORD *)(v70 + 24) = 1848LL;
        WdLogEvent5_WdAssertion(v70);
      }
      v33 = v82;
LABEL_79:
      v37 = v85 + 1;
      v85 = v37;
      if ( v37 >= a2->PresentPlaneCount )
      {
        v21 = v91;
        goto LABEL_83;
      }
      v32 = v90;
    }
    v43 = (unsigned int)LayerIndex;
    v44 = (unsigned __int8)*(_DWORD *)v32;
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
      v45 = 0xFFFFFFFFLL;
    }
    v84 = v45;
    if ( (unsigned int)v45 >= v86 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v48 + 24) = 1736LL;
      WdLogEvent5_WdAssertion(v48);
    }
    if ( (unsigned int)v45 >= 8 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v49 + 24) = 1743LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v50 = *((_QWORD *)v89 + LayerIndex);
    if ( !v50 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v89);
      *(_QWORD *)(v51 + 24) = 1754LL;
      WdLogEvent5_WdAssertion(v51);
    }
    v52 = (unsigned int)v45;
    if ( *((_BYTE *)a8 + 348) )
      v53 = (char *)a8 + 48 * v45 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 448;
    else
      v53 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v45 + 432;
    *(_QWORD *)v53 = *(_QWORD *)(*(_QWORD *)(v50 + 48) + 16LL);
    if ( *((_BYTE *)a8 + 348) )
      v54 = (char *)a8
          + 48 * (unsigned int)v45
          + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
          + 440;
    else
      v54 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v45 + 480;
    *(_QWORD *)v54 = *((_QWORD *)this + 21);
    if ( *((_BYTE *)a8 + 348) )
    {
      v55 = 48 * ((unsigned int)v45 + 1LL);
      v56 = (char *)a8 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 424;
    }
    else
    {
      v55 = (__int64)a8 + 424;
      v56 = (char *)((unsigned __int64)(unsigned int)v45 << 6);
    }
    v57 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
            *(struct _VIDMM_MULTI_ALLOC **)(v50 + 24),
            (struct VIDMM_ALLOC **)&v56[v55]);
    v59 = v57;
    if ( v57 < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v58);
      v71[3] = this;
      v71[4] = v50;
      v71[5] = v59;
      WdLogEvent5_WdError(v71);
      goto LABEL_89;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 400LL)
                                                                         + 8LL)
                                                             + 216LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
      *(_QWORD *)(*(_QWORD *)(v50 + 48) + 8LL),
      &v83,
      &v88);
    if ( *((_BYTE *)a8 + 348) )
      v60 = (char *)a8 + 48 * v52 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 464;
    else
      v60 = (char *)a8 + 64 * v52 + 440;
    *(_QWORD *)v60 = v88;
    if ( *((_BYTE *)a8 + 348) )
      *(_WORD *)((char *)a8 + 48 * v52 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 456) = v83;
    else
      *((_DWORD *)a8 + 16 * v52 + 119) ^= (*((_DWORD *)a8 + 16 * v52 + 119) ^ (v83 << 17)) & 0x3E0000;
    v61 = *(_QWORD *)(v50 + 40);
    if ( v61 )
      v62 = (*(_DWORD *)(v61 + 4) >> 3) & 1;
    else
      v62 = 0;
    if ( *((_BYTE *)a8 + 348) )
      *((_BYTE *)a8 + 48 * v52 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 480) = v62 != 0;
    else
      *((_DWORD *)a8 + 16 * v52 + 119) ^= (*((_DWORD *)a8 + 16 * v52 + 119) ^ (v62 << 23)) & 0x800000;
    if ( *((_BYTE *)a8 + 348) )
      v63 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8 + v84 * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 568);
    else
      v63 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8 + 64 * v52 + 448);
    v64 = a2->pPresentPlanes;
    v65 = v93;
    if ( *(LONG *)((char *)&v64->PlaneAttributes.SrcRect.right + v93) <= *(LONG *)((char *)&v64->PlaneAttributes.SrcRect.left
                                                                                 + v93) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v64);
      *(_QWORD *)(v66 + 24) = 1807LL;
      WdLogEvent5_WdAssertion(v66);
    }
    v67 = (DXGCONTEXT *)a2->pPresentPlanes;
    if ( *(_DWORD *)((char *)v67 + v65 + 32) <= *(_DWORD *)((char *)v67 + v65 + 24) )
    {
      v68 = WdLogNewEntry5_WdAssertion(v67);
      *(_QWORD *)(v68 + 24) = 1808LL;
      WdLogEvent5_WdAssertion(v68);
    }
    DXGCONTEXT::ConvertThunkOverlayToPackedAttributes(
      v67,
      v63,
      (const struct D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES *)((char *)&a2->pPresentPlanes->PlaneAttributes + v65));
    v33 = v82;
    *(_QWORD *)&v96[v41 + 2] = *(_QWORD *)(v50 + 32);
    v96[v41 + 4] ^= (v96[v41 + 4] ^ v83) & 0x1F;
    *(_QWORD *)&v96[v41 + 6] = v88;
LABEL_75:
    v82 = ++v33;
    goto LABEL_79;
  }
LABEL_83:
  v94[0] = a2->VidPnSourceId;
  v95 = v96;
  v94[1] = v33;
  v73 = v92;
  v92->pAllocationList = (DXGK_ALLOCATIONLIST *)v94;
  LODWORD(v59) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v73);
  if ( (int)v59 < 0 )
    goto LABEL_90;
  v74 = v87;
  for ( i = 0; i < v74; ++v21 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v21 + 46) != CurrentThread )
    {
      v77 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v77 + 24) = 1887LL;
      WdLogEvent5_WdAssertion(v77);
    }
    LODWORD(v59) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v21 + 27),
                     a8);
    if ( (int)v59 < 0 )
      goto LABEL_90;
    *(_DWORD *)a8 &= ~0x800u;
    ++i;
  }
LABEL_89:
  if ( (int)v59 < 0 )
  {
LABEL_90:
    if ( v86 )
    {
      v78 = 0LL;
      v79 = (struct VIDMM_ALLOC **)((char *)a8 + 424);
      v80 = v86;
      do
      {
        if ( *((_BYTE *)a8 + 348) )
          v72 = (struct VIDMM_ALLOC **)((char *)a8
                                      + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
                                      + v78
                                      + 472);
        else
          v72 = v79;
        if ( *v72 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
            *((_DWORD *)a8 + 34),
            *v72);
        v78 += 48LL;
        v79 += 8;
        --v80;
      }
      while ( v80 );
    }
    v81 = WdLogNewEntry5_WdError(v72);
    *(_QWORD *)(v81 + 32) = (int)v59;
    *(_QWORD *)(v81 + 24) = this;
    WdLogEvent5_WdError(v81);
  }
  return (unsigned int)v59;
}

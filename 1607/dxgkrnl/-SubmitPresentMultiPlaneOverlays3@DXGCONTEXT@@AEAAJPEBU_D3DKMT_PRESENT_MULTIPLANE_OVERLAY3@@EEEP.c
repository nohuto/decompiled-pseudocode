/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C018A568
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0188084 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00114E8 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C0028AD4 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C0186AC8 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        struct _DXGKARG_PRESENT *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT **a9)
{
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 ContextCount; // r12
  _QWORD *v19; // rax
  struct DXGCONTEXT **v21; // r15
  unsigned int v22; // r8d
  int v23; // edx
  struct DXGCONTEXT **v24; // rcx
  int v25; // r9d
  char v26; // cl
  int v27; // eax
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE *v33; // r9
  unsigned int v34; // r8d
  UINT v35; // edx
  D3DKMT_MULTIPLANE_OVERLAY3 *v36; // r8
  UINT v37; // eax
  __int64 v38; // rsi
  __int64 v39; // r15
  D3DKMT_MULTIPLANE_OVERLAY3 *v40; // rcx
  __int64 LayerIndex; // rdi
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rsi
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdi
  char *v52; // rdx
  char *v53; // rdx
  __int64 v54; // r9
  char *v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rsi
  char *v60; // rdx
  __int64 v61; // rax
  int v62; // ecx
  struct _VIDSCH_LAYER_ATTRIBUTE *v63; // rdi
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  __int64 v65; // rax
  DXGCONTEXT *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  char *v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rax
  struct VIDMM_ALLOC **v72; // rcx
  struct _DXGKARG_PRESENT *v73; // r8
  unsigned int i; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v76; // rax
  __int64 v77; // r12
  struct VIDMM_ALLOC **v78; // r15
  __int64 v79; // r13
  __int64 v80; // rax
  int v81; // [rsp+30h] [rbp-D0h]
  int v82; // [rsp+34h] [rbp-CCh] BYREF
  int v83; // [rsp+38h] [rbp-C8h]
  UINT v84; // [rsp+3Ch] [rbp-C4h]
  unsigned int v85; // [rsp+40h] [rbp-C0h]
  D3DKMT_MULTIPLANE_OVERLAY3 *v86; // [rsp+48h] [rbp-B8h]
  __int64 v87; // [rsp+50h] [rbp-B0h]
  __int64 v88; // [rsp+58h] [rbp-A8h] BYREF
  const struct DXGALLOCATIONREFERENCE *v89; // [rsp+60h] [rbp-A0h]
  _BYTE *v90; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT **v91; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_PRESENT *v92; // [rsp+78h] [rbp-88h]
  _DWORD v93[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v94; // [rsp+88h] [rbp-78h]
  _DWORD v95[64]; // [rsp+90h] [rbp-70h] BYREF

  v89 = a6;
  v92 = a7;
  v91 = a9;
  if ( !a3 && !a4 && !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 3470LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a3 + a4;
  v85 = v14;
  if ( v14 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v15 = WdLogNewEntry5_WdAssertion(a3);
    *(_QWORD *)(v15 + 24) = 3473LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 3474LL;
    WdLogEvent5_WdAssertion(v17);
  }
  ContextCount = a2->ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v19[4] = ContextCount;
    v19[5] = 64LL;
    v19[6] = -1073741811LL;
LABEL_11:
    v19[3] = this;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v21 = v91;
  v22 = 1;
  v23 = *((_DWORD *)*v91 + 81);
  if ( (unsigned int)ContextCount > 1 )
  {
    v24 = v91 + 1;
    while ( 1 )
    {
      v25 = *((_DWORD *)*v24 + 81);
      if ( (v25 & v23) != 0 )
        break;
      v23 |= v25;
      ++v22;
      ++v24;
      if ( v22 >= (unsigned int)ContextCount )
      {
        v26 = 1;
        goto LABEL_19;
      }
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v19[4] = -1073741811LL;
    goto LABEL_11;
  }
  v26 = 0;
LABEL_19:
  v27 = *(_DWORD *)a8;
  *((_DWORD *)a8 + 34) = v23;
  v28 = v27 & 0xFFFFFBFF | ((v26 & 1 | 2) << 10);
  v29 = *((_DWORD *)a8 + 30) == 5;
  *((_DWORD *)a8 + 35) = ContextCount - 1;
  *(_DWORD *)a8 = v28;
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v30 + 24) = 3523LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v92->pDmaBuffer )
  {
    v31 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v31 + 24) = 3528LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v14 > 8 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v32 + 24) = 3539LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = (char *)a8 + 424;
  v34 = 0;
  v81 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v33 = (char *)a8 + 416;
  v35 = 0;
  v90 = v33;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v36 = a2->ppPresentPlanes[v35];
      if ( (v36->InputFlags.Value & 1) != 0 )
        *v33 |= 1 << LOBYTE(v36->LayerIndex);
      ++v35;
    }
    while ( v35 < a2->PresentPlaneCount );
    v34 = 0;
  }
  v37 = 0;
  v84 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v38 = v37;
      v39 = 8LL * v34;
      v40 = a2->ppPresentPlanes[v37];
      v86 = v40;
      LayerIndex = v40->LayerIndex;
      v95[v39] = LayerIndex;
      v95[v39 + 1] = v40->InputFlags.Value & 1;
      if ( (v40->InputFlags.Value & 1) != 0 )
        break;
      if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(*((struct _KTHREAD ***)this + 2), a2->VidPnSourceId, LayerIndex) )
      {
        v69 = (char *)a8 + 424;
        if ( !*((_BYTE *)a8 + 348) )
          v69 = (char *)a8 + 416;
        v34 = v81;
        v69[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4002u )
        {
          v95[v39 + 4] &= 0xFFFFFFE0;
          *(_QWORD *)&v95[v39 + 2] = 0LL;
          *(_QWORD *)&v95[v39 + 6] = 0LL;
LABEL_78:
          v81 = ++v34;
        }
      }
      else
      {
        if ( *((_QWORD *)v89 + v38) )
        {
          v70 = WdLogNewEntry5_WdAssertion(v68);
          *(_QWORD *)(v70 + 24) = 3695LL;
          WdLogEvent5_WdAssertion(v70);
        }
        v34 = v81;
      }
      v37 = v84 + 1;
      v84 = v37;
      if ( v37 >= a2->PresentPlaneCount )
      {
        v21 = v91;
        goto LABEL_86;
      }
      v33 = v90;
    }
    v42 = (unsigned int)LayerIndex;
    v43 = (unsigned __int8)*(_DWORD *)v33;
    if ( ((1 << LayerIndex) & v43) != 0 )
    {
      v45 = (v43 & ((1 << LayerIndex) - 1) & 0x55555555)
          + (((v43 & (unsigned int)((1 << LayerIndex) - 1)) >> 1) & 0x55555555);
      v46 = (((v45 & 0x33333333) + ((v45 >> 2) & 0x33333333)) & 0xF0F0F0F)
          + ((((v45 & 0x33333333) + ((v45 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
      v42 = v46 & 0xFF00FF;
      v44 = (unsigned __int16)((unsigned __int8)v46 + BYTE1(v46))
          + (((unsigned int)v42 + ((v46 >> 8) & 0xFF00FF)) >> 16);
    }
    else
    {
      v44 = 0xFFFFFFFFLL;
    }
    v83 = v44;
    if ( (unsigned int)v44 >= v85 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v47 + 24) = 3583LL;
      WdLogEvent5_WdAssertion(v47);
    }
    if ( (unsigned int)v44 >= 8 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v48 + 24) = 3590LL;
      WdLogEvent5_WdAssertion(v48);
    }
    v49 = *((_QWORD *)v89 + LayerIndex);
    v87 = v49;
    if ( !v49 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v89);
      *(_QWORD *)(v50 + 24) = 3601LL;
      WdLogEvent5_WdAssertion(v50);
      v49 = v87;
    }
    v51 = (unsigned int)v44;
    if ( *((_BYTE *)a8 + 348) )
      v52 = (char *)a8 + 48 * v44 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 448;
    else
      v52 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v44 + 432;
    *(_QWORD *)v52 = *(_QWORD *)(*(_QWORD *)(v49 + 48) + 16LL);
    if ( *((_BYTE *)a8 + 348) )
      v53 = (char *)a8
          + 48 * (unsigned int)v44
          + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
          + 440;
    else
      v53 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v44 + 480;
    *(_QWORD *)v53 = *((_QWORD *)this + 21);
    if ( *((_BYTE *)a8 + 348) )
    {
      v54 = 48 * ((unsigned int)v44 + 1LL);
      v55 = (char *)a8 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 424;
    }
    else
    {
      v54 = (__int64)a8 + 424;
      v55 = (char *)((unsigned __int64)(unsigned int)v44 << 6);
    }
    v56 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
            *(struct _VIDMM_MULTI_ALLOC **)(v49 + 24),
            (struct VIDMM_ALLOC **)&v55[v54]);
    v58 = v56;
    if ( v56 < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v57);
      v71[4] = v87;
      v71[3] = this;
      v71[5] = v58;
      WdLogEvent5_WdError(v71);
      goto LABEL_92;
    }
    v59 = v87;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 400LL)
                                                                         + 8LL)
                                                             + 216LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
      *(_QWORD *)(*(_QWORD *)(v87 + 48) + 8LL),
      &v82,
      &v88);
    if ( *((_BYTE *)a8 + 348) )
      v60 = (char *)a8 + 48 * v51 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 464;
    else
      v60 = (char *)a8 + 64 * v51 + 440;
    *(_QWORD *)v60 = v88;
    if ( *((_BYTE *)a8 + 348) )
      *(_WORD *)((char *)a8 + 48 * v51 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 456) = v82;
    else
      *((_DWORD *)a8 + 16 * v51 + 119) ^= (*((_DWORD *)a8 + 16 * v51 + 119) ^ (v82 << 17)) & 0x3E0000;
    v61 = *(_QWORD *)(v59 + 40);
    if ( v61 )
      v62 = (*(_DWORD *)(v61 + 4) >> 3) & 1;
    else
      v62 = 0;
    if ( *((_BYTE *)a8 + 348) )
      *((_BYTE *)a8 + 48 * v51 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 480) = v62 != 0;
    else
      *((_DWORD *)a8 + 16 * v51 + 119) ^= (*((_DWORD *)a8 + 16 * v51 + 119) ^ (v62 << 23)) & 0x800000;
    if ( *((_BYTE *)a8 + 348) )
      v63 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8 + v83 * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 568);
    else
      v63 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8 + 64 * v51 + 448);
    pPlaneAttributes = v86->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.right <= pPlaneAttributes->SrcRect.left )
    {
      v65 = WdLogNewEntry5_WdAssertion(pPlaneAttributes);
      *(_QWORD *)(v65 + 24) = 3654LL;
      WdLogEvent5_WdAssertion(v65);
    }
    v66 = (DXGCONTEXT *)v86->pPlaneAttributes;
    if ( *((_DWORD *)v66 + 4) <= *((_DWORD *)v66 + 2) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v66);
      *(_QWORD *)(v67 + 24) = 3655LL;
      WdLogEvent5_WdAssertion(v67);
    }
    DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(v66, v63, v86->pPlaneAttributes);
    v34 = v81;
    *(_QWORD *)&v95[v39 + 2] = *(_QWORD *)(v59 + 32);
    v95[v39 + 4] ^= ((unsigned __int8)v82 ^ (unsigned __int8)v95[v39 + 4]) & 0x1F;
    *(_QWORD *)&v95[v39 + 6] = v88;
    goto LABEL_78;
  }
LABEL_86:
  v93[0] = a2->VidPnSourceId;
  v94 = v95;
  v93[1] = v34;
  v73 = v92;
  v92->pAllocationList = (DXGK_ALLOCATIONLIST *)v93;
  LODWORD(v58) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v73);
  if ( (int)v58 < 0 )
    goto LABEL_93;
  for ( i = 0; i < (unsigned int)ContextCount; ++v21 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v21 + 46) != CurrentThread )
    {
      v76 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v76 + 24) = 3734LL;
      WdLogEvent5_WdAssertion(v76);
    }
    LODWORD(v58) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v21 + 27),
                     a8);
    if ( (int)v58 < 0 )
      goto LABEL_93;
    *(_DWORD *)a8 &= ~0x800u;
    ++i;
  }
LABEL_92:
  if ( (int)v58 < 0 )
  {
LABEL_93:
    if ( v85 )
    {
      v77 = 0LL;
      v78 = (struct VIDMM_ALLOC **)((char *)a8 + 424);
      v79 = v85;
      do
      {
        if ( *((_BYTE *)a8 + 348) )
          v72 = (struct VIDMM_ALLOC **)((char *)a8
                                      + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
                                      + v77
                                      + 472);
        else
          v72 = v78;
        if ( *v72 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
            *((_DWORD *)a8 + 34),
            *v72);
        v77 += 48LL;
        v78 += 8;
        --v79;
      }
      while ( v79 );
    }
    v80 = WdLogNewEntry5_WdError(v72);
    *(_QWORD *)(v80 + 32) = (int)v58;
    *(_QWORD *)(v80 + 24) = this;
    WdLogEvent5_WdError(v80);
  }
  return (unsigned int)v58;
}

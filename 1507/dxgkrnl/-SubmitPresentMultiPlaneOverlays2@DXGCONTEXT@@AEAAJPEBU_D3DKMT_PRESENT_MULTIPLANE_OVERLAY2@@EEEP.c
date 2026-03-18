/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C015F038
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015D5A8 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA0C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C00220D0 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2@@@Z @ 0x1C015CB70 (-ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays2(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
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
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // r9
  __int64 v39; // r8
  UINT v40; // edx
  __int64 v41; // r8
  D3DKMT_MULTIPLANE_OVERLAY2 *pPresentPlanes; // rax
  UINT v43; // eax
  D3DKMT_MULTIPLANE_OVERLAY2 *v44; // rcx
  __int64 v45; // rsi
  unsigned __int64 v46; // r12
  __int64 v47; // r15
  __int64 LayerIndex; // r13
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned int v51; // esi
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  char *v58; // r13
  char *v59; // r13
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  D3DKMT_MULTIPLANE_OVERLAY2 *v68; // rcx
  __int64 v69; // rax
  DXGCONTEXT *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char *v76; // rcx
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rcx
  struct _DXGKARG_PRESENT *v80; // r8
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v86; // rax
  struct VIDMM_ALLOC **v87; // r14
  __int64 v88; // r15
  struct VIDMM_ALLOC **v89; // rax
  __int64 v90; // rax
  unsigned int v91; // [rsp+30h] [rbp-D0h]
  UINT v92; // [rsp+34h] [rbp-CCh]
  unsigned int v93; // [rsp+38h] [rbp-C8h]
  int v94; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v95; // [rsp+40h] [rbp-C0h]
  __int64 v96; // [rsp+48h] [rbp-B8h]
  __int64 v97; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_PRESENT *v98; // [rsp+58h] [rbp-A8h]
  _BYTE *v99; // [rsp+60h] [rbp-A0h]
  const struct DXGALLOCATIONREFERENCE *v100; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT **v101; // [rsp+70h] [rbp-90h]
  _DWORD v102[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v103; // [rsp+80h] [rbp-80h]
  _DWORD v104[64]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a4;
  v10 = a9;
  v11 = a3;
  v100 = a6;
  v98 = a7;
  v101 = a9;
  if ( !(_BYTE)a3 && !(_BYTE)a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 3098LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v9 + v11;
  v93 = v15;
  if ( v15 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 3101LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 3102LL;
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
  v95 = BroadcastContextCount + 1;
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
    *(_QWORD *)(v33 + 24) = 3170LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v98->pDmaBuffer )
  {
    v34 = WdLogNewEntry5_WdAssertion(v31, v27, v19, v20);
    *(_QWORD *)(v34 + 24) = 3175LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v35 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1380LL);
  if ( (v35 & 0x20) != 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v27, v19, v20);
    *(_QWORD *)(v36 + 24) = 3180LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( v15 > 8 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v35, v27, v19, v20);
    *(_QWORD *)(v37 + 24) = 3191LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v38 = (char *)a8 + 360;
  v39 = 0LL;
  v91 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v38 = (char *)a8 + 352;
  v40 = 0;
  v99 = v38;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v41 = v40;
      pPresentPlanes = a2->pPresentPlanes;
      if ( pPresentPlanes[v41].Enabled )
        *v38 |= 1 << LOBYTE(pPresentPlanes[v41].LayerIndex);
      ++v40;
    }
    while ( v40 < a2->PresentPlaneCount );
    v39 = 0LL;
  }
  v43 = 0;
  v92 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v44 = a2->pPresentPlanes;
      v45 = v43;
      v46 = v43;
      v47 = 8LL * (unsigned int)v39;
      LayerIndex = v44[v46].LayerIndex;
      v104[v47] = LayerIndex;
      v104[v47 + 1] = v44[v46].Enabled;
      if ( v44[v46].Enabled )
      {
        v49 = (unsigned int)LayerIndex;
        v50 = (unsigned __int8)*(_DWORD *)v38;
        if ( ((1 << LayerIndex) & (unsigned int)v50) != 0 )
        {
          v52 = (v50 & ((1 << LayerIndex) - 1) & 0x55555555)
              + ((((unsigned int)v50 & ((1 << LayerIndex) - 1)) >> 1) & 0x55555555);
          v53 = (((v52 & 0x33333333) + ((v52 >> 2) & 0x33333333)) & 0xF0F0F0F)
              + ((((v52 & 0x33333333) + ((v52 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
          v49 = v53 & 0xFF00FF;
          v51 = (unsigned __int16)((unsigned __int8)v53 + BYTE1(v53))
              + (((unsigned int)v49 + ((v53 >> 8) & 0xFF00FF)) >> 16);
        }
        else
        {
          v51 = -1;
        }
        if ( v51 >= v93 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v49, v50, v39, v38);
          *(_QWORD *)(v54 + 24) = 3233LL;
          WdLogEvent5_WdAssertion(v54);
        }
        if ( v51 >= 8 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v49, v50, v39, v38);
          *(_QWORD *)(v55 + 24) = 3240LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v56 = *((_QWORD *)v100 + LayerIndex);
        v96 = v56;
        if ( !v56 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v100, v50, 0LL, v38);
          *(_QWORD *)(v57 + 24) = 3251LL;
          WdLogEvent5_WdAssertion(v57);
          v56 = v96;
        }
        v58 = (char *)a8 + 376;
        if ( !*((_BYTE *)a8 + 348) )
          v58 = (char *)a8 + 360;
        v59 = &v58[56 * v51];
        *((_QWORD *)v59 + 1) = *(_QWORD *)(*(_QWORD *)(v56 + 48) + 16LL);
        v60 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
                *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
                *(struct _VIDMM_MULTI_ALLOC **)(v56 + 24),
                (struct VIDMM_ALLOC **)v59);
        v62 = v60;
        if ( v60 < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v61);
          v78[4] = v96;
          v78[3] = this;
          v78[5] = v62;
          WdLogEvent5_WdError(v78);
          goto LABEL_72;
        }
        v63 = v96;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 208LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
          *(_QWORD *)(*(_QWORD *)(v96 + 48) + 8LL),
          &v94,
          &v97);
        *((_QWORD *)v59 + 2) = v97;
        *((_DWORD *)v59 + 13) ^= (*((_DWORD *)v59 + 13) ^ (v94 << 17)) & 0x3E0000;
        v67 = *(_QWORD *)(v63 + 40);
        if ( v67 )
          LODWORD(v67) = (*(_DWORD *)(v67 + 4) >> 3) & 1;
        *((_DWORD *)v59 + 13) ^= (*((_DWORD *)v59 + 13) ^ ((_DWORD)v67 << 23)) & 0x800000;
        v68 = a2->pPresentPlanes;
        if ( v68[v46].PlaneAttributes.SrcRect.right <= v68[v46].PlaneAttributes.SrcRect.left )
        {
          v69 = WdLogNewEntry5_WdAssertion(v68, v64, v65, v66);
          *(_QWORD *)(v69 + 24) = 3300LL;
          WdLogEvent5_WdAssertion(v69);
        }
        v70 = (DXGCONTEXT *)a2->pPresentPlanes;
        if ( *(_DWORD *)((char *)v70 + v46 * 120 + 32) <= *(_DWORD *)((char *)v70 + v46 * 120 + 24) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v70, v64, v65, v66);
          *(_QWORD *)(v71 + 24) = 3301LL;
          WdLogEvent5_WdAssertion(v71);
        }
        DXGCONTEXT::ConvertThunkOverlayToPackedAttributes2(
          v70,
          (struct _VIDSCH_LAYER_ATTRIBUTE *)(v59 + 24),
          &a2->pPresentPlanes[v46].PlaneAttributes,
          v66);
        *(_QWORD *)&v104[v47 + 2] = *(_QWORD *)(v63 + 32);
        v39 = ++v91;
        v104[v47 + 4] ^= ((unsigned __int8)v94 ^ (unsigned __int8)v104[v47 + 4]) & 0x1F;
        *(_QWORD *)&v104[v47 + 6] = v97;
      }
      else if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(
                  *((struct _KTHREAD ***)this + 2),
                  a2->VidPnSourceId,
                  LayerIndex) )
      {
        v76 = (char *)a8 + 360;
        if ( !*((_BYTE *)a8 + 348) )
          v76 = (char *)a8 + 352;
        v39 = v91;
        v76[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 18704LL) + 176LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4002u )
        {
          v104[v47 + 4] &= 0xFFFFFFE0;
          v39 = v91 + 1;
          *(_QWORD *)&v104[v47 + 2] = 0LL;
          ++v91;
          *(_QWORD *)&v104[v47 + 6] = 0LL;
        }
      }
      else
      {
        if ( *((_QWORD *)v100 + v45) )
        {
          v77 = WdLogNewEntry5_WdAssertion(v73, v72, v74, v75);
          *(_QWORD *)(v77 + 24) = 3341LL;
          WdLogEvent5_WdAssertion(v77);
        }
        v39 = v91;
      }
      v43 = v92 + 1;
      v92 = v43;
      if ( v43 >= a2->PresentPlaneCount )
        break;
      v38 = v99;
    }
    v10 = v101;
    v26 = v95;
  }
  v102[0] = a2->VidPnSourceId;
  v103 = v104;
  v102[1] = v39;
  v80 = v98;
  v98->pAllocationList = (DXGK_ALLOCATIONLIST *)v102;
  LODWORD(v62) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v80);
  if ( (int)v62 < 0 )
    goto LABEL_73;
  for ( i = 0; i < v26; ++v10 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v10 + 46) != CurrentThread )
    {
      v86 = WdLogNewEntry5_WdAssertion(CurrentThread, v81, v82, v83);
      *(_QWORD *)(v86 + 24) = 3380LL;
      WdLogEvent5_WdAssertion(v86);
    }
    LODWORD(v62) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v10 + 27),
                     a8);
    if ( (int)v62 < 0 )
      goto LABEL_73;
    *(_DWORD *)a8 &= ~0x1000u;
    ++i;
  }
LABEL_72:
  if ( (int)v62 < 0 )
  {
LABEL_73:
    if ( v93 )
    {
      v87 = (struct VIDMM_ALLOC **)((char *)a8 + 360);
      v88 = v93;
      do
      {
        v89 = v87 + 2;
        if ( !*((_BYTE *)a8 + 348) )
          v89 = v87;
        if ( *v89 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *((_DWORD *)a8 + 34),
            *v89);
        v87 += 7;
        --v88;
      }
      while ( v88 );
    }
    v90 = WdLogNewEntry5_WdError(v79);
    *(_QWORD *)(v90 + 32) = (int)v62;
    *(_QWORD *)(v90 + 24) = this;
    WdLogEvent5_WdError(v90);
  }
  return (unsigned int)v62;
}

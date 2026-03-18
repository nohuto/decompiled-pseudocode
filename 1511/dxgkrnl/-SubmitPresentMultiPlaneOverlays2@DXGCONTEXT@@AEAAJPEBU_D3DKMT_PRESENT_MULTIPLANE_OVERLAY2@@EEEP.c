/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0163308
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0011054 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C0021FC4 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2@@@Z @ 0x1C0160E64 (-ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays2(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
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
  _BYTE *v33; // r9
  unsigned int v34; // r8d
  UINT v35; // edx
  __int64 v36; // r8
  D3DKMT_MULTIPLANE_OVERLAY2 *pPresentPlanes; // rax
  UINT v38; // eax
  D3DKMT_MULTIPLANE_OVERLAY2 *v39; // rcx
  __int64 v40; // rsi
  unsigned __int64 v41; // r12
  __int64 v42; // r15
  __int64 LayerIndex; // r13
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // esi
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  char *v53; // r13
  char *v54; // r13
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rsi
  __int64 v59; // rax
  D3DKMT_MULTIPLANE_OVERLAY2 *v60; // rcx
  __int64 v61; // rax
  DXGCONTEXT *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  char *v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  struct _DXGKARG_PRESENT *v69; // r8
  unsigned int i; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v72; // rax
  struct VIDMM_ALLOC **v73; // r14
  __int64 v74; // r15
  struct VIDMM_ALLOC **v75; // rax
  __int64 v76; // rax
  unsigned int v77; // [rsp+30h] [rbp-D0h]
  UINT v78; // [rsp+34h] [rbp-CCh]
  unsigned int v79; // [rsp+38h] [rbp-C8h]
  int v80; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v81; // [rsp+40h] [rbp-C0h]
  __int64 v82; // [rsp+48h] [rbp-B8h]
  __int64 v83; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_PRESENT *v84; // [rsp+58h] [rbp-A8h]
  _BYTE *v85; // [rsp+60h] [rbp-A0h]
  const struct DXGALLOCATIONREFERENCE *v86; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT **v87; // [rsp+70h] [rbp-90h]
  _DWORD v88[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v89; // [rsp+80h] [rbp-80h]
  _DWORD v90[64]; // [rsp+90h] [rbp-70h] BYREF

  v10 = a9;
  v86 = a6;
  v84 = a7;
  v87 = a9;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 3083LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a4 + a3;
  v79 = v15;
  if ( v15 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 3086LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 3087LL;
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
  v81 = BroadcastContextCount + 1;
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
    *(_QWORD *)(v30 + 24) = 3155LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v84->pDmaBuffer )
  {
    v31 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v31 + 24) = 3160LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v15 > 8 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v32 + 24) = 3171LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = (char *)a8 + 360;
  v34 = 0;
  v77 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v33 = (char *)a8 + 352;
  v35 = 0;
  v85 = v33;
  if ( a2->PresentPlaneCount )
  {
    do
    {
      v36 = v35;
      pPresentPlanes = a2->pPresentPlanes;
      if ( pPresentPlanes[v36].Enabled )
        *v33 |= 1 << LOBYTE(pPresentPlanes[v36].LayerIndex);
      ++v35;
    }
    while ( v35 < a2->PresentPlaneCount );
    v34 = 0;
  }
  v38 = 0;
  v78 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v39 = a2->pPresentPlanes;
      v40 = v38;
      v41 = v38;
      v42 = 8LL * v34;
      LayerIndex = v39[v41].LayerIndex;
      v90[v42] = LayerIndex;
      v90[v42 + 1] = v39[v41].Enabled;
      if ( v39[v41].Enabled )
      {
        v44 = (unsigned int)LayerIndex;
        v45 = (unsigned __int8)*(_DWORD *)v33;
        if ( ((1 << LayerIndex) & v45) != 0 )
        {
          v47 = (v45 & ((1 << LayerIndex) - 1) & 0x55555555)
              + (((v45 & (unsigned int)((1 << LayerIndex) - 1)) >> 1) & 0x55555555);
          v48 = (((v47 & 0x33333333) + ((v47 >> 2) & 0x33333333)) & 0xF0F0F0F)
              + ((((v47 & 0x33333333) + ((v47 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
          v44 = v48 & 0xFF00FF;
          v46 = (unsigned __int16)((unsigned __int8)v48 + BYTE1(v48))
              + (((unsigned int)v44 + ((v48 >> 8) & 0xFF00FF)) >> 16);
        }
        else
        {
          v46 = -1;
        }
        if ( v46 >= v79 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v44);
          *(_QWORD *)(v49 + 24) = 3213LL;
          WdLogEvent5_WdAssertion(v49);
        }
        if ( v46 >= 8 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v44);
          *(_QWORD *)(v50 + 24) = 3220LL;
          WdLogEvent5_WdAssertion(v50);
        }
        v51 = *((_QWORD *)v86 + LayerIndex);
        v82 = v51;
        if ( !v51 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v86);
          *(_QWORD *)(v52 + 24) = 3231LL;
          WdLogEvent5_WdAssertion(v52);
          v51 = v82;
        }
        v53 = (char *)a8 + 376;
        if ( !*((_BYTE *)a8 + 348) )
          v53 = (char *)a8 + 360;
        v54 = &v53[64 * (unsigned __int64)v46];
        *((_QWORD *)v54 + 1) = *(_QWORD *)(*(_QWORD *)(v51 + 48) + 16LL);
        *((_QWORD *)v54 + 7) = *((_QWORD *)this + 21);
        v55 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
                *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
                *(struct _VIDMM_MULTI_ALLOC **)(v51 + 24),
                (struct VIDMM_ALLOC **)v54);
        v57 = v55;
        if ( v55 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdError(v56);
          v67[4] = v82;
          v67[3] = this;
          v67[5] = v57;
          WdLogEvent5_WdError(v67);
          goto LABEL_70;
        }
        v58 = v82;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 424LL)
                                                                             + 8LL)
                                                                 + 208LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
          *(_QWORD *)(*(_QWORD *)(v82 + 48) + 8LL),
          &v80,
          &v83);
        *((_QWORD *)v54 + 2) = v83;
        *((_DWORD *)v54 + 13) ^= (*((_DWORD *)v54 + 13) ^ (v80 << 17)) & 0x3E0000;
        v59 = *(_QWORD *)(v58 + 40);
        if ( v59 )
          LODWORD(v59) = (*(_DWORD *)(v59 + 4) >> 3) & 1;
        *((_DWORD *)v54 + 13) ^= (*((_DWORD *)v54 + 13) ^ ((_DWORD)v59 << 23)) & 0x800000;
        v60 = a2->pPresentPlanes;
        if ( v60[v41].PlaneAttributes.SrcRect.right <= v60[v41].PlaneAttributes.SrcRect.left )
        {
          v61 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v61 + 24) = 3281LL;
          WdLogEvent5_WdAssertion(v61);
        }
        v62 = (DXGCONTEXT *)a2->pPresentPlanes;
        if ( *(_DWORD *)((char *)v62 + v41 * 120 + 32) <= *(_DWORD *)((char *)v62 + v41 * 120 + 24) )
        {
          v63 = WdLogNewEntry5_WdAssertion(v62);
          *(_QWORD *)(v63 + 24) = 3282LL;
          WdLogEvent5_WdAssertion(v63);
        }
        DXGCONTEXT::ConvertThunkOverlayToPackedAttributes2(
          v62,
          (struct _VIDSCH_LAYER_ATTRIBUTE *)(v54 + 24),
          &a2->pPresentPlanes[v41].PlaneAttributes);
        *(_QWORD *)&v90[v42 + 2] = *(_QWORD *)(v58 + 32);
        v34 = ++v77;
        v90[v42 + 4] ^= ((unsigned __int8)v80 ^ (unsigned __int8)v90[v42 + 4]) & 0x1F;
        *(_QWORD *)&v90[v42 + 6] = v83;
      }
      else if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(
                  *((struct _KTHREAD ***)this + 2),
                  a2->VidPnSourceId,
                  LayerIndex) )
      {
        v65 = (char *)a8 + 360;
        if ( !*((_BYTE *)a8 + 348) )
          v65 = (char *)a8 + 352;
        v34 = v77;
        v65[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2832LL) + 176LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4002u )
        {
          v90[v42 + 4] &= 0xFFFFFFE0;
          v34 = v77 + 1;
          *(_QWORD *)&v90[v42 + 2] = 0LL;
          ++v77;
          *(_QWORD *)&v90[v42 + 6] = 0LL;
        }
      }
      else
      {
        if ( *((_QWORD *)v86 + v40) )
        {
          v66 = WdLogNewEntry5_WdAssertion(v64);
          *(_QWORD *)(v66 + 24) = 3322LL;
          WdLogEvent5_WdAssertion(v66);
        }
        v34 = v77;
      }
      v38 = v78 + 1;
      v78 = v38;
      if ( v38 >= a2->PresentPlaneCount )
        break;
      v33 = v85;
    }
    v10 = v87;
    v23 = v81;
  }
  v88[0] = a2->VidPnSourceId;
  v89 = v90;
  v88[1] = v34;
  v69 = v84;
  v84->pAllocationList = (DXGK_ALLOCATIONLIST *)v88;
  LODWORD(v57) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v69);
  if ( (int)v57 < 0 )
    goto LABEL_71;
  for ( i = 0; i < v23; ++v10 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v10 + 46) != CurrentThread )
    {
      v72 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v72 + 24) = 3361LL;
      WdLogEvent5_WdAssertion(v72);
    }
    LODWORD(v57) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v10 + 27),
                     a8);
    if ( (int)v57 < 0 )
      goto LABEL_71;
    *(_DWORD *)a8 &= ~0x800u;
    ++i;
  }
LABEL_70:
  if ( (int)v57 < 0 )
  {
LABEL_71:
    if ( v79 )
    {
      v73 = (struct VIDMM_ALLOC **)((char *)a8 + 360);
      v74 = v79;
      do
      {
        v75 = v73 + 2;
        if ( !*((_BYTE *)a8 + 348) )
          v75 = v73;
        if ( *v75 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 536LL),
            *((_DWORD *)a8 + 34),
            *v75);
        v73 += 8;
        --v74;
      }
      while ( v74 );
    }
    v76 = WdLogNewEntry5_WdError(v68);
    *(_QWORD *)(v76 + 32) = (int)v57;
    *(_QWORD *)(v76 + 24) = this;
    WdLogEvent5_WdError(v76);
  }
  return (unsigned int)v57;
}

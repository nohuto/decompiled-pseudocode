/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays2@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0189C14
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0187350 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00114E8 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C0028AD4 (-GetDisplayedMultiPlaneOverlay@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2@@@Z @ 0x1C01868E4 (-ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
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
  __int64 BroadcastContextCount; // rdi
  _QWORD *v20; // rax
  struct DXGCONTEXT *v22; // rax
  unsigned int v23; // r9d
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
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 LayerIndex; // rdi
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rsi
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rdi
  char *v54; // rdx
  char *v55; // rdx
  __int64 v56; // r9
  char *v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rsi
  char *v61; // rdx
  __int64 v62; // rax
  int v63; // ecx
  struct _VIDSCH_LAYER_ATTRIBUTE *v64; // rdi
  D3DKMT_MULTIPLANE_OVERLAY2 *v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rax
  DXGCONTEXT *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  char *v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rax
  struct VIDMM_ALLOC **v74; // rcx
  struct _DXGKARG_PRESENT *v75; // r8
  unsigned int v76; // r15d
  unsigned int i; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v79; // rax
  __int64 v80; // r12
  struct VIDMM_ALLOC **v81; // r15
  __int64 v82; // r13
  __int64 v83; // rax
  unsigned int v84; // [rsp+30h] [rbp-D0h]
  int v85; // [rsp+34h] [rbp-CCh] BYREF
  int v86; // [rsp+38h] [rbp-C8h]
  UINT v87; // [rsp+3Ch] [rbp-C4h]
  unsigned int v88; // [rsp+40h] [rbp-C0h]
  unsigned int v89; // [rsp+44h] [rbp-BCh]
  __int64 v90; // [rsp+48h] [rbp-B8h] BYREF
  const struct DXGALLOCATIONREFERENCE *v91; // [rsp+50h] [rbp-B0h]
  _BYTE *v92; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_PRESENT *v93; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT **v95; // [rsp+70h] [rbp-90h]
  _DWORD v96[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v97; // [rsp+80h] [rbp-80h]
  _DWORD v98[64]; // [rsp+90h] [rbp-70h] BYREF

  v10 = a9;
  v91 = a6;
  v93 = a7;
  v95 = a9;
  if ( !a3 && !a4 && !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 3116LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a4 + a3;
  v88 = v15;
  if ( v15 + (unsigned int)a5 > a2->PresentPlaneCount )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 3119LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 3120LL;
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
  v89 = BroadcastContextCount + 1;
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
    *(_QWORD *)(v30 + 24) = 3188LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v93->pDmaBuffer )
  {
    v31 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v31 + 24) = 3193LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v15 > 8 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v32 + 24) = 3204LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = (char *)a8 + 424;
  v34 = 0;
  v84 = 0;
  if ( !*((_BYTE *)a8 + 348) )
    v33 = (char *)a8 + 416;
  v35 = 0;
  v92 = v33;
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
  v87 = 0;
  if ( a2->PresentPlaneCount )
  {
    while ( 1 )
    {
      v39 = a2->pPresentPlanes;
      v40 = v38;
      v41 = v38;
      v42 = 8LL * v34;
      v94 = v41 * 120;
      LayerIndex = v39[v41].LayerIndex;
      v98[v42] = LayerIndex;
      v98[v42 + 1] = v39[v41].Enabled;
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
          v46 = 0xFFFFFFFFLL;
        }
        v86 = v46;
        if ( (unsigned int)v46 >= v88 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v44);
          *(_QWORD *)(v49 + 24) = 3246LL;
          WdLogEvent5_WdAssertion(v49);
        }
        if ( (unsigned int)v46 >= 8 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v44);
          *(_QWORD *)(v50 + 24) = 3253LL;
          WdLogEvent5_WdAssertion(v50);
        }
        v51 = *((_QWORD *)v91 + LayerIndex);
        if ( !v51 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v91);
          *(_QWORD *)(v52 + 24) = 3264LL;
          WdLogEvent5_WdAssertion(v52);
        }
        v53 = (unsigned int)v46;
        if ( *((_BYTE *)a8 + 348) )
          v54 = (char *)a8 + 48 * v46 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 448;
        else
          v54 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v46 + 432;
        *(_QWORD *)v54 = *(_QWORD *)(*(_QWORD *)(v51 + 48) + 16LL);
        if ( *((_BYTE *)a8 + 348) )
          v55 = (char *)a8
              + 48 * (unsigned int)v46
              + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
              + 440;
        else
          v55 = (char *)a8 + 64 * (unsigned __int64)(unsigned int)v46 + 480;
        *(_QWORD *)v55 = *((_QWORD *)this + 21);
        if ( *((_BYTE *)a8 + 348) )
        {
          v56 = 48 * ((unsigned int)v46 + 1LL);
          v57 = (char *)a8 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 424;
        }
        else
        {
          v56 = (__int64)a8 + 424;
          v57 = (char *)((unsigned __int64)(unsigned int)v46 << 6);
        }
        v58 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
                *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
                *(struct _VIDMM_MULTI_ALLOC **)(v51 + 24),
                (struct VIDMM_ALLOC **)&v57[v56]);
        v60 = v58;
        if ( v58 < 0 )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdError(v59);
          v73[3] = this;
          v73[4] = v51;
          v73[5] = v60;
          WdLogEvent5_WdError(v73);
          goto LABEL_90;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 400LL)
                                                                             + 8LL)
                                                                 + 216LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
          *(_QWORD *)(*(_QWORD *)(v51 + 48) + 8LL),
          &v85,
          &v90);
        if ( *((_BYTE *)a8 + 348) )
          v61 = (char *)a8 + 48 * v53 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 464;
        else
          v61 = (char *)a8 + 64 * v53 + 440;
        *(_QWORD *)v61 = v90;
        if ( *((_BYTE *)a8 + 348) )
          *(_WORD *)((char *)a8
                   + 48 * v53
                   + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
                   + 456) = v85;
        else
          *((_DWORD *)a8 + 16 * v53 + 119) ^= (*((_DWORD *)a8 + 16 * v53 + 119) ^ (v85 << 17)) & 0x3E0000;
        v62 = *(_QWORD *)(v51 + 40);
        if ( v62 )
          v63 = (*(_DWORD *)(v62 + 4) >> 3) & 1;
        else
          v63 = 0;
        if ( *((_BYTE *)a8 + 348) )
          *((_BYTE *)a8 + 48 * v53 + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8) + 480) = v63 != 0;
        else
          *((_DWORD *)a8 + 16 * v53 + 119) ^= (*((_DWORD *)a8 + 16 * v53 + 119) ^ (v63 << 23)) & 0x800000;
        if ( *((_BYTE *)a8 + 348) )
          v64 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8
                                                 + v86 * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
                                                 + 568);
        else
          v64 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a8 + 64 * v53 + 448);
        v65 = a2->pPresentPlanes;
        v66 = v94;
        if ( *(LONG *)((char *)&v65->PlaneAttributes.SrcRect.right + v94) <= *(LONG *)((char *)&v65->PlaneAttributes.SrcRect.left
                                                                                     + v94) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v65);
          *(_QWORD *)(v67 + 24) = 3317LL;
          WdLogEvent5_WdAssertion(v67);
        }
        v68 = (DXGCONTEXT *)a2->pPresentPlanes;
        if ( *(_DWORD *)((char *)v68 + v66 + 32) <= *(_DWORD *)((char *)v68 + v66 + 24) )
        {
          v69 = WdLogNewEntry5_WdAssertion(v68);
          *(_QWORD *)(v69 + 24) = 3318LL;
          WdLogEvent5_WdAssertion(v69);
        }
        DXGCONTEXT::ConvertThunkOverlayToPackedAttributes2(
          v68,
          v64,
          (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2 *)((char *)&a2->pPresentPlanes->PlaneAttributes + v66));
        *(_QWORD *)&v98[v42 + 2] = *(_QWORD *)(v51 + 32);
        v34 = ++v84;
        v98[v42 + 4] ^= (v98[v42 + 4] ^ v85) & 0x1F;
        *(_QWORD *)&v98[v42 + 6] = v90;
      }
      else if ( DXGDEVICE::GetDisplayedMultiPlaneOverlay(
                  *((struct _KTHREAD ***)this + 2),
                  a2->VidPnSourceId,
                  LayerIndex) )
      {
        v71 = (char *)a8 + 424;
        if ( !*((_BYTE *)a8 + 348) )
          v71 = (char *)a8 + 416;
        v34 = v84;
        v71[1] |= 1 << LayerIndex;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2856LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4002u )
        {
          v98[v42 + 4] &= 0xFFFFFFE0;
          v34 = v84 + 1;
          *(_QWORD *)&v98[v42 + 2] = 0LL;
          ++v84;
          *(_QWORD *)&v98[v42 + 6] = 0LL;
        }
      }
      else
      {
        if ( *((_QWORD *)v91 + v40) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v70);
          *(_QWORD *)(v72 + 24) = 3358LL;
          WdLogEvent5_WdAssertion(v72);
        }
        v34 = v84;
      }
      v38 = v87 + 1;
      v87 = v38;
      if ( v38 >= a2->PresentPlaneCount )
        break;
      v33 = v92;
    }
    v10 = v95;
  }
  v96[0] = a2->VidPnSourceId;
  v97 = v98;
  v96[1] = v34;
  v75 = v93;
  v93->pAllocationList = (DXGK_ALLOCATIONLIST *)v96;
  LODWORD(v60) = ADAPTER_RENDER::DdiPresent(
                   *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((void **)this + 21),
                   v75);
  if ( (int)v60 < 0 )
    goto LABEL_91;
  v76 = v89;
  for ( i = 0; i < v76; ++v10 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)*v10 + 46) != CurrentThread )
    {
      v79 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v79 + 24) = 3397LL;
      WdLogEvent5_WdAssertion(v79);
    }
    LODWORD(v60) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL)
                                                                                       + 344LL))(
                     *((_QWORD *)*v10 + 27),
                     a8);
    if ( (int)v60 < 0 )
      goto LABEL_91;
    *(_DWORD *)a8 &= ~0x800u;
    ++i;
  }
LABEL_90:
  if ( (int)v60 < 0 )
  {
LABEL_91:
    if ( v88 )
    {
      v80 = 0LL;
      v81 = (struct VIDMM_ALLOC **)((char *)a8 + 424);
      v82 = v88;
      do
      {
        if ( *((_BYTE *)a8 + 348) )
          v74 = (struct VIDMM_ALLOC **)((char *)a8
                                      + *((_DWORD *)a8 + 107) * ((8 * *((_DWORD *)a8 + 108) + 167) & 0xFFFFFFF8)
                                      + v80
                                      + 472);
        else
          v74 = v81;
        if ( *v74 )
          VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 560LL),
            *((_DWORD *)a8 + 34),
            *v74);
        v80 += 48LL;
        v81 += 8;
        --v82;
      }
      while ( v82 );
    }
    v83 = WdLogNewEntry5_WdError(v74);
    *(_QWORD *)(v83 + 32) = (int)v60;
    *(_QWORD *)(v83 + 24) = this;
    WdLogEvent5_WdError(v83);
  }
  return (unsigned int)v60;
}

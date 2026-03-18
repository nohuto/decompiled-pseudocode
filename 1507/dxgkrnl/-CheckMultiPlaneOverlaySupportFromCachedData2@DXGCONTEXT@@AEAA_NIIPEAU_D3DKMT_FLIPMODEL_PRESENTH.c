/*
 * XREFs of ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015C2E0
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01334F0 (-CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURC.c)
 *     ?ConvertPackedAttributesToDDI2@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2@@@Z @ 0x1C015C8FC (-ConvertPackedAttributesToDDI2@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATT.c)
 *     ?OverlayAttributesEqual2@@YA_NAEBU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2@@0_N@Z @ 0x1C015D3E4 (-OverlayAttributesEqual2@@YA_NAEBU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2@@0_N@Z.c)
 */

bool __fastcall DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData2(
        DXGCONTEXT *this,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        int a3,
        struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a4)
{
  __int64 v4; // rax
  DXGCONTEXT *v6; // r15
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  SIZE_T v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v16; // r14
  __int64 v17; // rax
  SIZE_T v19; // rax
  char *v20; // r13
  unsigned int v21; // r10d
  unsigned int v22; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v23; // r15d
  struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v24; // rdi
  void *v25; // rcx
  char v26; // r11
  __int64 v27; // rcx
  const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *v28; // rbx
  unsigned int v29; // r12d
  unsigned int v30; // edi
  const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *p_PlaneAttributes; // rdx
  bool v32; // al
  char v33; // r11
  __int64 v34; // rdx
  __int64 v35; // rax
  bool v36; // bl
  unsigned int v37; // edi
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v40; // [rsp+50h] [rbp-B0h]
  int v41[2]; // [rsp+58h] [rbp-A8h] BYREF
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v44[23]; // [rsp+78h] [rbp-88h] BYREF

  v4 = *((_QWORD *)this + 2);
  v39 = a3;
  v6 = this;
  v40 = a2;
  *(_QWORD *)&v42[0].0 = this;
  v7 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)v41 = a4;
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 16) + 1856LL);
  v9 = 112 * v8;
  v10 = (unsigned int)v8;
  if ( !is_mul_ok(v8, 0x70uLL) )
    v9 = -1LL;
  v11 = 0;
  v16 = (struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)operator new[](v9, 0x4B677844u, PagedPool);
  if ( !v16 )
    goto LABEL_4;
  v19 = 32 * v10;
  if ( !is_mul_ok(v10, 0x20uLL) )
    v19 = -1LL;
  v20 = (char *)operator new[](v19, 0x4B677844u, PagedPool);
  if ( !v20 )
  {
    operator delete(v16);
LABEL_4:
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v10;
    WdLogEvent5_WdWarning(v17);
    return 0;
  }
  v38 = 0;
  v43 = 0LL;
  memset(v44, 0, sizeof(v44));
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int64 *, unsigned int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 376LL)
                                                                                               + 8LL)
                                                                                   + 328LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 384LL),
    a2,
    v20,
    &v43,
    &v38,
    &v39);
  v21 = v38;
  v22 = 0;
  if ( v38 )
  {
    v23 = a2;
    do
    {
      v24 = &v16[v22];
      memset(v24, 0, 0x68uLL);
      ConvertPackedAttributesToDDI2((const struct _VIDSCH_LAYER_ATTRIBUTE *)&v20[32 * v22], &v24->PlaneAttributes);
      v24->VidPnSourceId = v23;
      v25 = (void *)v44[3 * v22++];
      v24->hAllocation = v25;
      v21 = v38;
    }
    while ( v22 < v38 );
    v6 = *(DXGCONTEXT **)&v42[0].0;
  }
  v26 = 0;
  v27 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
  v28 = *(const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 **)(v27 + 800);
  v29 = *(_DWORD *)(v27 + 796);
  if ( v28 && *(_DWORD *)(v27 + 792) == v21 )
  {
    v30 = 0;
    if ( !v21 )
    {
LABEL_21:
      v36 = 0;
      goto LABEL_22;
    }
    p_PlaneAttributes = &v16->PlaneAttributes;
    do
    {
      v32 = OverlayAttributesEqual2(v28, p_PlaneAttributes, v29 == v30++);
      v26 = v32 ? v33 : 0;
      p_PlaneAttributes = (const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 *)(v34 + 112);
      ++v28;
    }
    while ( v30 < v21 );
  }
  if ( !v21 || !v26 )
    goto LABEL_21;
  v35 = *(_QWORD *)v41;
  v41[0] = 0;
  v16[v39].PlaneAttributes.SrcRect = *(RECT *)(v35 + 724);
  DXGDEVICE::CheckMultiPlaneOverlayInternal2(*((DXGDEVICE **)v6 + 2), v29, v38, v16, 1, v41, v42);
  v21 = v38;
  v36 = v41[0] != 0;
LABEL_22:
  if ( v21 )
  {
    v37 = v40;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                       + 376LL)
                                                                           + 8LL)
                                                               + 808LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 384LL),
        *((unsigned int *)v6 + 81),
        &v44[3 * v11++ - 1],
        v37);
    while ( v11 < v38 );
  }
  operator delete(v16);
  operator delete(v20);
  return v36;
}

/*
 * XREFs of ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015C5CC
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@HPEAH@Z @ 0x1C01339BC (-CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLA.c)
 *     ?ConvertPackedAttributesToDDI@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1C015CA14 (-ConvertPackedAttributesToDDI@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_DXGK_MULTIPLANE_OVERLAY_ATTR.c)
 *     ?OverlayAttributesEqual@@YA_NAEBU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES@@0_N@Z @ 0x1C015D4CC (-OverlayAttributesEqual@@YA_NAEBU_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES@@0_N@Z.c)
 */

bool __fastcall DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData(
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
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v16; // r14
  __int64 v17; // rax
  SIZE_T v19; // rax
  char *v20; // r13
  unsigned int v21; // r10d
  unsigned int v22; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v23; // r15d
  struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v24; // rdi
  void *v25; // rcx
  char v26; // r11
  __int64 v27; // rcx
  const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES *v28; // rbx
  unsigned int v29; // r12d
  unsigned int v30; // edi
  const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES *p_PlaneAttributes; // rdx
  bool v32; // al
  char v33; // r11
  __int64 v34; // rdx
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v35; // rax
  char v36; // dl
  int v37; // r8d
  bool v38; // di
  unsigned int v39; // ebx
  unsigned int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v42; // [rsp+50h] [rbp-B0h]
  int v43[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v46[23]; // [rsp+78h] [rbp-88h] BYREF

  v4 = *((_QWORD *)this + 2);
  v41 = a3;
  v6 = this;
  v42 = a2;
  *(_QWORD *)v43 = this;
  v7 = *(_QWORD *)(v4 + 16);
  v44 = a4;
  v8 = *(unsigned int *)(*(_QWORD *)(v7 + 16) + 1856LL);
  v9 = 104 * v8;
  v10 = (unsigned int)v8;
  if ( !is_mul_ok(v8, 0x68uLL) )
    v9 = -1LL;
  v11 = 0;
  v16 = (struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)operator new[](v9, 0x4B677844u, PagedPool);
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
  v40 = 0;
  v45 = 0LL;
  memset(v46, 0, sizeof(v46));
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, __int64 *, unsigned int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 376LL)
                                                                                               + 8LL)
                                                                                   + 328LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 384LL),
    a2,
    v20,
    &v45,
    &v40,
    &v41);
  v21 = v40;
  v22 = 0;
  if ( v40 )
  {
    v23 = a2;
    do
    {
      v24 = &v16[v22];
      memset(v24, 0, sizeof(struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE));
      ConvertPackedAttributesToDDI((const struct _VIDSCH_LAYER_ATTRIBUTE *)&v20[32 * v22], &v24->PlaneAttributes);
      v24->VidPnSourceId = v23;
      v25 = (void *)v46[3 * v22++];
      v24->hAllocation = v25;
      v21 = v40;
    }
    while ( v22 < v40 );
    v6 = *(DXGCONTEXT **)v43;
  }
  v26 = 0;
  v27 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
  v28 = *(const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES **)(v27 + 800);
  v29 = *(_DWORD *)(v27 + 796);
  if ( v28 && *(_DWORD *)(v27 + 792) == v21 )
  {
    v30 = 0;
    if ( !v21 )
    {
LABEL_21:
      v38 = 0;
      goto LABEL_22;
    }
    p_PlaneAttributes = &v16->PlaneAttributes;
    do
    {
      v32 = OverlayAttributesEqual(v28, p_PlaneAttributes, v29 == v30++);
      v26 = v32 ? v33 : 0;
      p_PlaneAttributes = (const struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v34 + 104);
      ++v28;
    }
    while ( v30 < v21 );
  }
  if ( !v21 || !v26 )
    goto LABEL_21;
  v35 = v44;
  v43[0] = 0;
  v16[v41].PlaneAttributes.SrcRect = v44->SourceRect;
  v36 = (v35->Flags.Value >> 10) & 7;
  v37 = v36 & 1 ^ (v36 & 1 ^ (unsigned __int8)(2 * (((v35->Flags.Value >> 10) & 2) >> 1))) & 2;
  v16[v41].PlaneAttributes.YCbCrFlags.Value = v37 ^ ((unsigned __int8)v37 ^ (v35->Flags.Value >> 10) & 4) & 4;
  DXGDEVICE::CheckMultiPlaneOverlayInternal(*((DXGDEVICE **)v6 + 2), v29, v40, v16, 1, v43);
  v21 = v40;
  v38 = v43[0] != 0;
LABEL_22:
  if ( v21 )
  {
    v39 = v42;
    do
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL)
                                                                                       + 376LL)
                                                                           + 8LL)
                                                               + 808LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 384LL),
        *((unsigned int *)v6 + 81),
        &v46[3 * v11++ - 1],
        v39);
    while ( v11 < v40 );
  }
  operator delete(v16);
  operator delete(v20);
  return v38;
}

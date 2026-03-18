/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00BC8C8
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1C00BC83C (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0004248 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C0004278 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000ADD4 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00BCA68 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00BEB88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  DMMVIDPNSOURCEMODE *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v15; // r14d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // r15d
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v17; // ebp
  const struct _D3DDDI_RATIONAL *v18; // r9
  unsigned int v19; // eax
  UINT cy; // edi
  unsigned int v21; // ebx
  unsigned int BitsPerPixel; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v42; // [rsp+80h] [rbp+8h] BYREF
  __int64 v43; // [rsp+88h] [rbp+10h] BYREF
  __int64 v44; // [rsp+90h] [rbp+18h]

  if ( !a1 )
  {
    v29 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v30);
  }
  v4 = *((_QWORD *)a1 + 11);
  if ( !v4 )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v31);
  }
  v42 = 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v4 + 104);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0LL;
  }
  v32 = WdLogNewEntry5_WdAssertion(a1);
  WdLogEvent5_WdAssertion(v32);
LABEL_9:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v42, v6);
  v8 = *(DMMVIDPNSOURCEMODE **)&v42[4].Stride;
  if ( !v8 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v33);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v42, 0LL);
  v10 = *((_QWORD *)a1 + 12);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
    if ( v12 )
      goto LABEL_13;
  }
  else
  {
    v12 = 0LL;
  }
  v34 = WdLogNewEntry5_WdAssertion(v9);
  WdLogEvent5_WdAssertion(v34);
LABEL_13:
  v43 = v12;
  v13 = *(_QWORD *)(v12 + 144);
  v44 = v13;
  if ( !v13 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v35);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v43, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v8);
  v42 = GraphicsInfo;
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v13 + 92);
  v43 = v13 + 72;
  DmmCalculatePresentationVSync(
    (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v13 + 72),
    (struct _D3DDDI_RATIONAL *)((char *)a2 + 220));
  v15 = *((_DWORD *)a1 + 28);
  Rotation = *((_DWORD *)a1 + 29);
  v17 = (int)(*(_DWORD *)(v13 + 120) << 29) >> 29;
  v19 = DmmMapVSyncFromRationalToInteger(v18, v17, 0LL);
  cy = GraphicsInfo->PrimSurfSize.cy;
  LODWORD(GraphicsInfo) = GraphicsInfo->PrimSurfSize.cx;
  v21 = v19;
  BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel((enum _D3DDDIFORMAT *)v8);
  v25 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          BitsPerPixel,
          (unsigned int)GraphicsInfo,
          cy,
          v21,
          v17,
          Rotation,
          v15,
          (struct _devicemodeW *const)a2);
  if ( v25 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v26, v27);
    v37 = v42;
    v36[3] = v42->PrimSurfSize.cx;
    v36[4] = v37->PrimSurfSize.cy;
    v38 = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel((enum _D3DDDIFORMAT *)v8);
    v39 = v43;
    v36[5] = v38;
    v40 = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v39 + 20), *(unsigned int *)(v39 + 24));
    v41 = v44;
    v36[6] = v40;
    v36[7] = (int)(*(_DWORD *)(v41 + 120) << 29) >> 29;
    WdLogEvent5_WdWarning(v36);
    return (unsigned int)v25;
  }
  else
  {
    *((_DWORD *)a2 + 57) = *((_DWORD *)v8 + 24);
    return 0LL;
  }
}

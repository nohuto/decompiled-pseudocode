/*
 * XREFs of ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D280
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007C698 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillShape(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  unsigned int v10; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+3Ch] [rbp-4Ch]
  struct D2D_MATRIX_3X2_F v23; // [rsp+40h] [rbp-48h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = 0;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v12);
  }
  CD2DContext::SetCommonState((CD2DContext *)this, a2, a6, &a5, &v23);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v14 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, int *))(*(_QWORD *)a3 + 32LL))(
            a3,
            &v23,
            &v20);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x77Eu);
      return v10;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v15, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v16, v17, v21, v22);
  }
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct ID2D1Geometry *, struct ID2D1Brush *, _QWORD))(*(_QWORD *)this[5] + 184LL))(
    this[5],
    a3,
    a4,
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v19, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v18);
  }
  return v10;
}

/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D560
 * Callers:
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006F15C (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180064060 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1800809F4 (-scRGBTosRGB@@YAMM@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  void (__fastcall *v10)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  float v11; // xmm6_4
  float b; // xmm0_4
  float a; // xmm0_4
  struct ID2D1PrivateCompositorRenderer *v14; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  D3DVALUE g; // xmm1_4
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // [rsp+38h] [rbp-89h] BYREF
  int v26; // [rsp+40h] [rbp-81h]
  int v27; // [rsp+44h] [rbp-7Dh]
  __int64 v28; // [rsp+48h] [rbp-79h]
  __int64 v29; // [rsp+50h] [rbp-71h]
  __int64 v30; // [rsp+58h] [rbp-69h]
  int v31; // [rsp+60h] [rbp-61h]
  int v32; // [rsp+64h] [rbp-5Dh]
  __int64 v33; // [rsp+68h] [rbp-59h]
  int v34; // [rsp+70h] [rbp-51h]
  __int64 v35; // [rsp+74h] [rbp-4Dh]
  struct D2D_MATRIX_3X2_F v36; // [rsp+88h] [rbp-39h] BYREF
  D3DVALUE r; // [rsp+A0h] [rbp-21h] BYREF
  float v38; // [rsp+A4h] [rbp-1Dh]
  float v39; // [rsp+A8h] [rbp-19h]
  float v40; // [rsp+ACh] [rbp-15h]
  __int128 v41; // [rsp+B0h] [rbp-11h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v16 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, v16);
  }
  v10 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 8LL);
  if ( v10 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v36);
  else
    v10(a2, &v36);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this[5] + 240LL))(
    this[5],
    &v36);
  if ( a6 != *((_DWORD *)this + 65) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 624LL))(
      this[5],
      (unsigned int)a6);
    *((_DWORD *)this + 65) = a6;
  }
  if ( a5 != *((_DWORD *)this + 64) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 256LL))(
      this[5],
      (unsigned int)a5);
    *((_DWORD *)this + 64) = a5;
  }
  v11 = FLOAT_1_0;
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v26 = 0;
    v27 = 0;
    v32 = 0;
    v34 = 0;
    v28 = *(_QWORD *)&v36.m[1][0];
    v25 = *(_QWORD *)&v36.m11;
    v33 = *(_QWORD *)&v36.m[2][0];
    v18 = (__int128)*a3;
    v35 = 1065353216LL;
    v41 = v18;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 1065353216;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v25, (__int64)&v41, &v36.m11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v19, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v20, v21, SLOBYTE(v36.m[1][0]), SLOBYTE(v36.m[1][1]));
  }
  if ( CCommonRegistryData::m_fEnableHighColor )
  {
    g = a4->g;
    r = a4->r;
    b = a4->b;
    v38 = g;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v38 = scRGBTosRGB(a4->g);
    b = scRGBTosRGB(a4->b);
  }
  v39 = b;
  a = a4->a;
  if ( a <= 1.0 )
    v11 = fmaxf(a, 0.0);
  v14 = this[23];
  v40 = v11;
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, D3DVALUE *))(*(_QWORD *)v14 + 64LL))(v14, &r);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct D2D_RECT_F *, struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)this[5] + 136LL))(
    this[5],
    a3,
    this[23]);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v24, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, v23);
  }
  return 0LL;
}

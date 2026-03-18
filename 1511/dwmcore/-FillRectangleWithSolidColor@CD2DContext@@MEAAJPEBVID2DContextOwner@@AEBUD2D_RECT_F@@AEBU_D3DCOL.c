/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800210D0
 * Callers:
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180046F78 (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036FF0 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180059A30 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     Template_ffff @ 0x18010EC0C (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  void (__fastcall *v10)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rbx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rcx
  struct D2D_MATRIX_3X2_F v19; // [rsp+30h] [rbp-79h] BYREF
  struct D2D_MATRIX_3X2_F v20; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v21[64]; // [rsp+60h] [rbp-49h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, v12);
  }
  v10 = *(void (__fastcall **)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 8LL);
  if ( v10 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v19);
  else
    v10(a2, &v19);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this[5] + 240LL))(
    this[5],
    &v19);
  if ( a6 != *((_DWORD *)this + 59) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 624LL))(
      this[5],
      (unsigned int)a6);
    *((_DWORD *)this + 59) = a6;
  }
  if ( a5 != *((_DWORD *)this + 58) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 256LL))(
      this[5],
      (unsigned int)a5);
    *((_DWORD *)this + 58) = a5;
  }
  v20 = v19;
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v21, &v20);
    *(struct D2D_RECT_F *)&v20.m11 = *a3;
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v21, (const struct MilRectF *)&v20, (struct MilRectF *)&v19);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v14, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v15, v16, SLOBYTE(v19.m[1][0]), SLOBYTE(v19.m[1][1]));
  }
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct _D3DCOLORVALUE *))(*(_QWORD *)this[20]
                                                                                                 + 64LL))(
    this[20],
    a4);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct D2D_RECT_F *, struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)this[5] + 136LL))(
    this[5],
    a3,
    this[20]);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, v17);
  }
  return 0LL;
}

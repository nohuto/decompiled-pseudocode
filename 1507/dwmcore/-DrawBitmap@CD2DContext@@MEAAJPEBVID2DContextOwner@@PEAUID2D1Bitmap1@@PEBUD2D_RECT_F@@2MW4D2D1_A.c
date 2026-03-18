/*
 * XREFs of ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800721B0
 * Callers:
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18002C874 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180022CA0 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::DrawBitmap(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  void (__fastcall *v12)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rbx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rcx
  struct D2D_MATRIX_3X2_F v21; // [rsp+48h] [rbp-89h] BYREF
  struct D2D_MATRIX_3X2_F v22; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v23[64]; // [rsp+80h] [rbp-51h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v14 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v15, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v14);
  }
  v12 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 8LL);
  if ( v12 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v21);
  else
    v12(a2, &v21);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 5) + 240LL))(
    *((_QWORD *)this + 5),
    &v21);
  if ( a9 != *((_DWORD *)this + 60) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 624LL))(*((_QWORD *)this + 5), (unsigned int)a9);
    *((_DWORD *)this + 60) = a9;
  }
  if ( a7 != *((_DWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), (unsigned int)a7);
    *((_DWORD *)this + 59) = a7;
  }
  v22 = v21;
  if ( a5 )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v23, &v22);
      *(struct D2D_RECT_F *)&v22.m11 = *a5;
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v23, (const struct MilRectF *)&v22, (struct MilRectF *)&v21);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(
          v16,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v17,
          v18,
          SLOBYTE(v21.m[1][0]),
          SLOBYTE(v21.m[1][1]));
    }
  }
  (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *))(**((_QWORD **)this + 5) + 680LL))(
    *((_QWORD *)this + 5),
    a3,
    a5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v19 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v20, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v19);
  }
  return 0LL;
}

/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071CB0
 * Callers:
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800311D8 (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180071408 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-69h] BYREF
  struct D2D_MATRIX_3X2_F v19; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v20[64]; // [rsp+60h] [rbp-39h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, v11);
  }
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v19);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v20, &v19);
    v18 = (__int128)*a3;
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v20, (const struct MilRectF *)&v18, (struct MilRectF *)&v19);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v13, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v14, v15, SLOBYTE(v19.m[1][0]), SLOBYTE(v19.m[1][1]));
  }
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 20) + 64LL))(
    *((_QWORD *)this + 20),
    a4);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 5) + 136LL))(
    *((_QWORD *)this + 5),
    a3,
    *((_QWORD *)this + 20));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v16 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, v16);
  }
  return 0LL;
}

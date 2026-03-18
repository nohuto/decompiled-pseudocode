/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x18015CD50
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015CE20 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18015CF40 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x18014DC8C (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x18015D0F0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(CD2DBitmap **this)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  _QWORD *v5; // rbx
  int SubResourceD2DBitmap; // eax
  __int64 v7; // r14

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)this);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = this + 59;
    if ( !this[59] )
    {
      SubResourceD2DBitmap = CD2DBitmap::CreateSubResourceD2DBitmap(this[57], v3, this + 59);
      v4 = SubResourceD2DBitmap;
      if ( SubResourceD2DBitmap >= 0 )
      {
        if ( *v5 )
          v7 = *v5 + 112LL;
        else
          v7 = 0LL;
        (*((void (__fastcall **)(char *, __int64))this[62] + 3))((char *)this + 496, v7);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SubResourceD2DBitmap, 0xC7u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xBFu);
  }
  if ( v4 < 0 )
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)this);
  return (unsigned int)v4;
}

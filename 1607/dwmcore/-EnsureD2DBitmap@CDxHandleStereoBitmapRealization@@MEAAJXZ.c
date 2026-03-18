/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801901E0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180190290 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180190390 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x180178B54 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180190500 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(CD2DBitmap **this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  _QWORD *v5; // rsi
  int SubResourceD2DBitmap; // eax
  __int64 v7; // rdx

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xC0u);
  }
  else
  {
    v5 = this + 54;
    if ( !this[54] )
    {
      SubResourceD2DBitmap = CD2DBitmap::CreateSubResourceD2DBitmap(this[52], v3, this + 54);
      v4 = SubResourceD2DBitmap;
      if ( SubResourceD2DBitmap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SubResourceD2DBitmap, 0xC8u);
      }
      else
      {
        if ( *v5 )
          v7 = *v5 + 112LL;
        else
          v7 = 0LL;
        (*((void (__fastcall **)(char *, __int64))this[57] + 3))((char *)this + 456, v7);
      }
    }
  }
  if ( v4 < 0 )
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)this);
  return (unsigned int)v4;
}

/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180190CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801914C4 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax

  *a8 = 0LL;
  v10 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)(a1 - 112));
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xFEu);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, char, char, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 112LL) + 104LL))(
            *(_QWORD *)(a1 + 248) + 112LL,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x106u);
  }
  return v11;
}

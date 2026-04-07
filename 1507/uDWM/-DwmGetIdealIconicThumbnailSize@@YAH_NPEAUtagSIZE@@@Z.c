/*
 * XREFs of ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003B70C
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A270 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18006DDD4 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall DwmGetIdealIconicThumbnailSize(char a1, struct tagSIZE *a2)
{
  unsigned int v4; // ebx
  HDC DC; // rax
  HDC v6; // rsi
  int DeviceCaps; // r14d
  int v8; // r15d
  LONG v9; // eax
  LONG cy; // edx
  int v11; // r9d
  int v12; // edx
  int v13; // r10d
  int v14; // eax
  LONG v16; // eax
  LONG v17; // edx
  int pvParam; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-34h]
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+2Ch] [rbp-2Ch]

  a2->cy = 200;
  a2->cx = 200;
  v4 = 0;
  DC = GetDC(0LL);
  v6 = DC;
  if ( DC )
  {
    DeviceCaps = GetDeviceCaps(DC, 88);
    v8 = GetDeviceCaps(v6, 90);
    ReleaseDC(0LL, v6);
    v9 = MulDiv(DeviceCaps, a2->cx, 96);
    cy = a2->cy;
    a2->cx = v9;
    a2->cy = MulDiv(v8, cy, 96);
    if ( SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
    {
      v11 = v21 - v19;
      v12 = v21 - v19;
      if ( v21 - v19 < 0 )
        v12 = 0;
      v13 = v20 - pvParam;
      v14 = v20 - pvParam;
      if ( v20 - pvParam < 0 )
        v14 = 0;
      if ( v12 * a2->cx >= v14 * a2->cy )
      {
        if ( v11 < 0 )
          v11 = 0;
        if ( v13 < 0 )
          v13 = 0;
        a2->cx = MulDiv(v13, a2->cy, v11);
      }
      else
      {
        if ( v13 < 0 )
          v13 = 0;
        if ( v11 < 0 )
          v11 = 0;
        a2->cy = MulDiv(v11, a2->cx, v13);
      }
      if ( !a1 )
      {
        v16 = MulDiv(96, a2->cx, DeviceCaps);
        v17 = a2->cy;
        a2->cx = v16;
        a2->cy = MulDiv(96, v17, v8);
      }
      return 1;
    }
  }
  return v4;
}

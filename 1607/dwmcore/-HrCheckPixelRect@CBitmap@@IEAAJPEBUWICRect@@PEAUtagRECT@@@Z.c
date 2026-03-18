/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180085554
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180084A40 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A15D0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180179AC0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(CBitmap *this, const struct WICRect *a2, struct tagRECT *a3)
{
  unsigned int v5; // ebx
  INT X; // eax
  INT Y; // ecx
  INT Width; // edx
  unsigned int v9; // edx
  INT Height; // eax
  unsigned int v11; // eax
  unsigned int yBottom; // [rsp+20h] [rbp-48h]
  RECT rcSrc1; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  SetRect(a3, 0, 0, *((_DWORD *)this + 46), *((_DWORD *)this + 47));
  if ( !a2 )
    return v5;
  X = a2->X;
  Y = a2->Y;
  rcSrc1.left = X;
  rcSrc1.top = Y;
  if ( X < 0 )
  {
    yBottom = 656;
LABEL_22:
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, yBottom);
    return v5;
  }
  Width = a2->Width;
  if ( Width < 0 )
  {
    yBottom = 657;
    goto LABEL_22;
  }
  v9 = X + Width;
  if ( v9 < X )
  {
    yBottom = 658;
    goto LABEL_22;
  }
  if ( v9 > 0x7FFFFFFF )
  {
    rcSrc1.right = -1;
    yBottom = 659;
    goto LABEL_22;
  }
  rcSrc1.right = v9;
  if ( Y < 0 )
  {
    yBottom = 661;
    goto LABEL_22;
  }
  Height = a2->Height;
  if ( Height < 0 )
  {
    yBottom = 662;
    goto LABEL_22;
  }
  v11 = Y + Height;
  if ( v11 < Y )
  {
    yBottom = 663;
    goto LABEL_22;
  }
  if ( v11 > 0x7FFFFFFF )
  {
    rcSrc1.bottom = -1;
    yBottom = 664;
    goto LABEL_22;
  }
  rcSrc1.bottom = v11;
  IntersectRect(a3, &rcSrc1, a3);
  if ( !IsRectEmpty(&rcSrc1) && EqualRect(a3, &rcSrc1) )
    return v5;
  return 2147942487LL;
}

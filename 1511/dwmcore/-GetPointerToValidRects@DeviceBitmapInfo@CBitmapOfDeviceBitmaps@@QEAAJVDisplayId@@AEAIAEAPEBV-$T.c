/*
 * XREFs of ?GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148E90
 * Callers:
 *     ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148F3C (-GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV-$TMil.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180070DC8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x180148B10 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::GetPointerToValidRects(
        CBitmapOfDeviceBitmaps::DeviceBitmapInfo *this,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  unsigned int *v10; // r8
  _QWORD *v11; // r9
  int v12; // eax

  v7 = 0;
  if ( !DisplayId::IsSpecific((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)((char *)this + 4)) || *v9 == (_DWORD)v8 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v12 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::EnsureRgnData(this, v8, v10);
      v7 = v12;
      if ( v12 >= 0 )
      {
        *a4 = *((_QWORD *)this + 6) + 32LL;
        *a3 = *(_DWORD *)(*((_QWORD *)this + 6) + 8LL);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x8C3u);
      }
    }
    else
    {
      *v11 = (char *)this + 24;
      *v10 = 1;
    }
  }
  else
  {
    *v10 = 0;
    *v11 = 0LL;
  }
  return v7;
}

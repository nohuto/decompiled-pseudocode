/*
 * XREFs of ?AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180093F80
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z @ 0x18002B440 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z.c)
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18010BB5C (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::AddResourceNotifier(
        CBitmapOfDeviceBitmaps *this,
        struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct IDeviceResourceNotify *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 72);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 > *((_DWORD *)this + 71) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 264, 8LL, 1LL, &v7);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * v2) = v7;
      *((_DWORD *)this + 72) = v3;
    }
  }
  return v4;
}

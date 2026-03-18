/*
 * XREFs of ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180093F40
 * Callers:
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x1801422F4 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z @ 0x18009E3D0 (-Remove@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
        CBitmapOfDeviceBitmaps *this,
        const struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // ebx
  const struct IDeviceResourceNotify *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v2 = 0;
  if ( !(unsigned int)DynArray<IDeviceResourceNotify *,0>::Remove((char *)this + 264, &v4) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x159u);
  }
  return v2;
}

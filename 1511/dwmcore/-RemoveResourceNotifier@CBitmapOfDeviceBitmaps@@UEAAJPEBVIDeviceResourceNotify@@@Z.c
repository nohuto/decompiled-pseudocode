/*
 * XREFs of ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18008B1F0
 * Callers:
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x180086760 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180125C10 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z @ 0x1800279AC (-Remove@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
        CBitmapOfDeviceBitmaps *this,
        const struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // ebx
  const struct IDeviceResourceNotify *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v2 = 0;
  if ( !(unsigned int)DynArray<IDeviceResourceNotify *,0>::Remove((__int64 *)this + 33, (__int64 *)&v4) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x159u);
  }
  return v2;
}

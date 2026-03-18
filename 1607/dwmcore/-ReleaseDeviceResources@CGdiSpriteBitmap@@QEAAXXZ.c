/*
 * XREFs of ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z @ 0x18002B440 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18002BBB4 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z @ 0x18014180C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180141A10 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180093F40 (-RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::ReleaseDeviceResources(CGdiSpriteBitmap *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  CMILCOMBase *v4; // rcx

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
      (CBitmapOfDeviceBitmaps *)(v2 + 256),
      (CGdiSpriteBitmap *)((char *)this + 152));
    v4 = (CMILCOMBase *)*((_QWORD *)this + 30);
    if ( v4 )
    {
      CMILCOMBase::InternalRelease(v4);
      *((_QWORD *)this + 30) = 0LL;
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_BYTE *)this + 516) &= ~1u;
  *((_BYTE *)this + 516) |= 0x20u;
  v3 = (void *)*((_QWORD *)this + 76);
  *((_BYTE *)this + 248) = 0;
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 76) = 0LL;
  }
  *((_DWORD *)this + 154) = 0;
  *((_DWORD *)this + 155) = 0;
  *((_DWORD *)this + 156) = 0;
  *((_DWORD *)this + 157) = 0;
}

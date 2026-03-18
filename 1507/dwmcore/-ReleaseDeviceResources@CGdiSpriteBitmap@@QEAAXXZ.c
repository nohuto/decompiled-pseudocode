/*
 * XREFs of ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18007E14C
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z @ 0x18007F2F8 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18007F930 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x1801080CC (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180108300 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180048FF0 (-RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CGdiSpriteBitmap::ReleaseDeviceResources(CGdiSpriteBitmap *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  CMILCOMBase *v4; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
      (CBitmapOfDeviceBitmaps *)(v2 + 256),
      (CGdiSpriteBitmap *)((char *)this + 80));
    v4 = (CMILCOMBase *)*((_QWORD *)this + 21);
    if ( v4 )
    {
      CMILCOMBase::InternalRelease(v4);
      *((_QWORD *)this + 21) = 0LL;
    }
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_BYTE *)this + 444) &= ~1u;
  *((_BYTE *)this + 444) |= 0x20u;
  v3 = (void *)*((_QWORD *)this + 67);
  *((_BYTE *)this + 176) = 0;
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 67) = 0LL;
  }
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 139) = 0;
}

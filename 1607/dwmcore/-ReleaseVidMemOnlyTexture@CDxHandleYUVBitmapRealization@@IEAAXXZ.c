/*
 * XREFs of ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180191394
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18019069C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180191360 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009EFE0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  __int64 v2; // rcx
  CMILPoolResource *v3; // rcx

  v2 = *((_QWORD *)this + 53);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(
      (CD3DResource *)(v2 + 24),
      (CDxHandleYUVBitmapRealization *)((char *)this + 24));
    v3 = (CMILPoolResource *)*((_QWORD *)this + 53);
    if ( v3 )
    {
      CMILPoolResource::Release(v3);
      *((_QWORD *)this + 53) = 0LL;
    }
  }
}

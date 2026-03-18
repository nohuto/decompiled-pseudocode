/*
 * XREFs of ?ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ @ 0x1801529B4
 * Callers:
 *     ??1CDxHandleDecodeBitmapRealization@@MEAA@XZ @ 0x18014F950 (--1CDxHandleDecodeBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180152910 (-NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180015E70 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::ReleaseVidMemOnlyTexture(CDxHandleDecodeBitmapRealization *this)
{
  __int64 v2; // rcx
  CMILPoolResource *v3; // rcx

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(
      (CD3DResource *)(v2 + 24),
      (CDxHandleDecodeBitmapRealization *)((char *)this + 24));
    v3 = (CMILPoolResource *)*((_QWORD *)this + 57);
    if ( v3 )
    {
      CMILPoolResource::Release(v3);
      *((_QWORD *)this + 57) = 0LL;
    }
  }
}

/*
 * XREFs of ?ReleaseVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAXXZ @ 0x18015FEE4
 * Callers:
 *     ??1CDxHandleDecodeBitmapRealization@@MEAA@XZ @ 0x18015E414 (--1CDxHandleDecodeBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015FE40 (-NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027D70 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
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

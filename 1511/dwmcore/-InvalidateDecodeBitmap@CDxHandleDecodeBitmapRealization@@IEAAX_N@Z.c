/*
 * XREFs of ?InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z @ 0x18015FDD4
 * Callers:
 *     ?MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ @ 0x18015FE10 (-MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ.c)
 *     ?NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015FE40 (-NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18015FF30 (-UpdateAttributes@CDxHandleDecodeBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ @ 0x18015FE8C (-ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::InvalidateDecodeBitmap(
        CDxHandleDecodeBitmapRealization *this,
        char a2)
{
  CDecodedBitmap *v3; // rcx

  v3 = (CDecodedBitmap *)*((_QWORD *)this + 59);
  if ( v3 )
  {
    if ( *((_DWORD *)v3 + 14) == *((_DWORD *)this + 81) )
      *((_DWORD *)v3 + 14) = -1;
    if ( a2 )
      CDecodedBitmap::ReleaseRenderTargetBitmap(v3);
  }
}

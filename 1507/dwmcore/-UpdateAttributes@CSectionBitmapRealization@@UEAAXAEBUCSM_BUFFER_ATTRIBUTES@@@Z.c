/*
 * XREFs of ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18014DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?ReleaseBitmapCacheSource@CSectionBitmapRealization@@AEAAXXZ @ 0x18014DDE0 (-ReleaseBitmapCacheSource@CSectionBitmapRealization@@AEAAXXZ.c)
 */

void __fastcall CSectionBitmapRealization::UpdateAttributes(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  _DWORD *v4; // rdx

  if ( *((_BYTE *)this + 512) && HasAlphaChannel(*((_DWORD *)this + 122)) )
  {
    if ( *v4 != *((_DWORD *)this + 32) )
      CSectionBitmapRealization::ReleaseBitmapCacheSource(this);
    *((_BYTE *)this + 512) = 0;
  }
  CBitmapRealization::UpdateAttributes(this, a2);
}

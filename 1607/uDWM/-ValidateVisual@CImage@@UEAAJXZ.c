/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180039AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800399D8 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateViewPort@CImage@@QEAAJXZ @ 0x18007A5E4 (-UpdateViewPort@CImage@@QEAAJXZ.c)
 */

__int64 __fastcall CImage::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  int updated; // eax
  int v6; // eax

  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x57u);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  if ( ((_DWORD)this[10] & 0x2000) != 0 )
  {
    v6 = CImage::UpdateViewPort((CImage *)this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5Du);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  v2 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x61u);
  return v3;
}

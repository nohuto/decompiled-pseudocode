/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800126A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800125C0 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateViewPort@CImage@@QEAAJXZ @ 0x1800712BC (-UpdateViewPort@CImage@@QEAAJXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x95u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x9Cu);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  v2 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xA1u);
  return v3;
}

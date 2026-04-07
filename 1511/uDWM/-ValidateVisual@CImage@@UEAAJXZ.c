/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x18003C830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18003C750 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?UpdateViewPort@CImage@@QEAAJXZ @ 0x18007949C (-UpdateViewPort@CImage@@QEAAJXZ.c)
 */

__int64 __fastcall CImage::ValidateVisual(struct CResource **this, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int updated; // eax
  int v7; // eax

  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x95u);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  if ( ((_DWORD)this[10] & 0x2000) != 0 )
  {
    v7 = CImage::UpdateViewPort((CImage *)this);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x9Cu);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  v3 = CVisual::ValidateVisual((CVisual *)this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xA1u);
  return v4;
}

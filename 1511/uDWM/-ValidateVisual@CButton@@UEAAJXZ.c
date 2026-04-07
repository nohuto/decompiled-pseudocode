/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001F330
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180010788 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001ED00 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax

  if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
  {
    if ( (*((_DWORD *)this + 20) & 0x8000) == 0 )
      CButton::UpdateCrossfade(this);
    *((_DWORD *)this + 20) &= ~0x10000u;
  }
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    v5 = CButton::RedrawVisual(this);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xF0u);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xF4u);
  return v3;
}

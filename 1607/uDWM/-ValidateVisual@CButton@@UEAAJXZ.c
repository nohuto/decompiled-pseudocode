/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001C130
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001BB64 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180075EAC (-UpdateCrossfade@CButton@@AEAAXXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB3u);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB7u);
  return v3;
}

/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800733F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLivePreview::ValidateVisualPostSubgraph(CLivePreview *this)
{
  unsigned int v1; // edi
  int updated; // eax

  v1 = 0;
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    updated = CVisual::UpdateRenderData(this);
    v1 = updated;
    if ( updated >= 0 )
      *((_DWORD *)this + 20) &= ~4u;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x6E5u);
  }
  return v1;
}

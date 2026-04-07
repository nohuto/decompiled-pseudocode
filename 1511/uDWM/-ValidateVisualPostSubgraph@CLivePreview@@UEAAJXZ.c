/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180071630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180022E20 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x6C0u);
  }
  return v1;
}

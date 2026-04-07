/*
 * XREFs of ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x180089600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180089110 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800891B8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::UpdateTransition(CTextTetherVisual *this)
{
  int updated; // eax
  int v3; // edi
  __int64 v4; // rax

  updated = CTextTetherVisual::UpdateInstructions(this);
  v3 = updated;
  if ( updated >= 0 )
  {
    v4 = *((_QWORD *)this + 35);
    if ( v4 && *(_BYTE *)(v4 + 72) )
      CTextTetherVisual::Stop(this);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1CCu);
  }
  if ( v3 < 0 )
    CTextTetherVisual::Stop(this);
  return (unsigned int)v3;
}

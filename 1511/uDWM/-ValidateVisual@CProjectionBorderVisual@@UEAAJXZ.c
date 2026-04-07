/*
 * XREFs of ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007C770
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18007CA38 (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CProjectionBorderVisual::ValidateVisual(CProjectionBorderVisual *this, __int64 a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  int v5; // eax

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    updated = CProjectionBorderVisual::_UpdateInstructions(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1Au);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v5 = CVisual::ValidateVisual(this, a2);
  v4 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x1Eu);
  return v4;
}

/*
 * XREFs of ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180083CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x180083AC4 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::ValidateVisual(CAnimatedGlassSheet *this, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CAnimatedGlassSheet::UpdateTransition(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v3 = CVisual::ValidateVisual(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x268u);
  return v4;
}

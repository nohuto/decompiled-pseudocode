/*
 * XREFs of ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x18007C270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007C094 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::ValidateVisual(CAnimatedGlassSheet *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CAnimatedGlassSheet::UpdateTransition(this);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x268u);
  return v3;
}

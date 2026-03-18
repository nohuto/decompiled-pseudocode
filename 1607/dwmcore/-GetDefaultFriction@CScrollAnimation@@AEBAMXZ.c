/*
 * XREFs of ?GetDefaultFriction@CScrollAnimation@@AEBAMXZ @ 0x18015DE80
 * Callers:
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015D508 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Reset@CScrollAnimation@@AEAAXM@Z @ 0x18015E310 (-Reset@CScrollAnimation@@AEAAXM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CScrollAnimation::GetDefaultFriction(CScrollAnimation *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 72);
  if ( !v1 )
    return FLOAT_0_050000012;
  v2 = v1 - 1;
  if ( !v2 )
    return FLOAT_0_050000012;
  if ( v2 == 1 )
    return FLOAT_0_60000002;
  return 0.0;
}

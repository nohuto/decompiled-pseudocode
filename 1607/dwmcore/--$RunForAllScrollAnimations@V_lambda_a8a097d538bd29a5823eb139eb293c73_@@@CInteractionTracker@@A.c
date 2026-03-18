/*
 * XREFs of ??$RunForAllScrollAnimations@V_lambda_a8a097d538bd29a5823eb139eb293c73_@@@CInteractionTracker@@AEAAXAEBV_lambda_a8a097d538bd29a5823eb139eb293c73_@@@Z @ 0x18014972C
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 * Callees:
 *     ?IsInMotion@CScrollAnimation@@QEBA_NXZ @ 0x18015E234 (-IsInMotion@CScrollAnimation@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::RunForAllScrollAnimations<_lambda_a8a097d538bd29a5823eb139eb293c73_>(
        __int64 a1,
        _BYTE **a2)
{
  CScrollAnimation **v3; // rdi
  __int64 v4; // rsi
  _BYTE *v5; // rbx

  v3 = (CScrollAnimation **)(a1 + 416);
  v4 = 3LL;
  do
  {
    if ( *v3 )
    {
      v5 = *a2;
      *v5 |= CScrollAnimation::IsInMotion(*v3);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
}

/*
 * XREFs of ?CalculateCoordinatedNaturalRestPositions@CScrollAnimation@@SA?AUD2DVector3@@AEBU2@PEBV1@110@Z @ 0x18015D858
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z @ 0x180149FD8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAAXPEAUInertiaCallbackValues@@@Z.c)
 * Callees:
 *     ?CalculateCoordinatedNaturalRestPosition@CScrollAnimation@@CAMMPEBV1@0M@Z @ 0x18015D6D8 (-CalculateCoordinatedNaturalRestPosition@CScrollAnimation@@CAMMPEBV1@0M@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateCoordinatedNaturalRestPositions(
        __int64 a1,
        float *a2,
        const struct CScrollAnimation *a3,
        const struct CScrollAnimation *a4,
        struct CScrollAnimation *a5,
        _DWORD *a6)
{
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  __int64 result; // rax

  v9 = CScrollAnimation::CalculateCoordinatedNaturalRestPosition(*a2, a3, a5, COERCE_FLOAT(*a6 ^ _xmm));
  LODWORD(v10) = a6[1] ^ _xmm;
  *(float *)a1 = v9;
  v11 = CScrollAnimation::CalculateCoordinatedNaturalRestPosition(a2[1], a4, a5, v10);
  *(_DWORD *)(a1 + 8) = 0;
  result = a1;
  *(float *)(a1 + 4) = v11;
  return result;
}

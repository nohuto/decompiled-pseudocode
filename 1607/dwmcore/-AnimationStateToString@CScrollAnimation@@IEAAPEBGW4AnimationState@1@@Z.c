/*
 * XREFs of ?AnimationStateToString@CScrollAnimation@@IEAAPEBGW4AnimationState@1@@Z @ 0x18015D694
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall CScrollAnimation::AnimationStateToString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( !a2 )
    return L"Idle";
  v2 = a2 - 1;
  if ( !v2 )
    return L"InContact";
  v3 = v2 - 1;
  if ( !v3 )
    return L"Inertia";
  if ( v3 == 1 )
    return L"BoundaryInertia";
  return L"Unsupported State";
}

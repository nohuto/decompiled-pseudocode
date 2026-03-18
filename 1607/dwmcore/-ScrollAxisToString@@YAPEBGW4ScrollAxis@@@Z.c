/*
 * XREFs of ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18015E3B0
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x18015E3E4 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 *     ?PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ @ 0x18015F4E0 (-PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ.c)
 *     ?PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ @ 0x18015FC20 (-PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ScrollAxisToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"X";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Y";
  if ( v1 == 1 )
    return L"Scale";
  return L"Unsupported Axis";
}

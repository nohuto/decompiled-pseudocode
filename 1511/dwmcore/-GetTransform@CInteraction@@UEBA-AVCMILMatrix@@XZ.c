/*
 * XREFs of ?GetTransform@CInteraction@@UEBA?AVCMILMatrix@@XZ @ 0x1800BD680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CInteraction::GetTransform(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 104);
  *a2 = *(_OWORD *)(a1 + 88);
  v4 = *(_OWORD *)(a1 + 120);
  a2[1] = v3;
  v5 = *(_OWORD *)(a1 + 136);
  a2[2] = v4;
  a2[3] = v5;
  return result;
}

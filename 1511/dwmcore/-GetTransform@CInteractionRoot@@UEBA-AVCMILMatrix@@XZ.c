/*
 * XREFs of ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ @ 0x1800BDAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CInteractionRoot::GetTransform(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = a2;
  v3 = *(&IdentityMatrix + 1);
  *a2 = IdentityMatrix;
  v4 = *(_OWORD *)ymmword_18019E9D0.m256_f32;
  a2[1] = v3;
  v5 = *(_OWORD *)&ymmword_18019E9D0.m256_f32[4];
  a2[2] = v4;
  a2[3] = v5;
  return result;
}

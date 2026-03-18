/*
 * XREFs of ?GetRawOutput@CInteractionContextWrapper@@UEAA?AUInteractionOutput@@XZ @ 0x1800BDAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CInteractionContextWrapper::GetRawOutput(_OWORD *a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  result = a2;
  v3 = a1[3];
  *a2 = a1[2];
  v4 = a1[4];
  a2[1] = v3;
  a2[2] = v4;
  return result;
}

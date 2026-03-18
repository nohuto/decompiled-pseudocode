/*
 * XREFs of DrvGetHdevName @ 0x1C0058320
 * Callers:
 *     GetHDevName @ 0x1C0058200 (GetHDevName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetHdevName(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int64 result; // rax

  v2 = *(_OWORD **)(a1 + 2600);
  *a2 = v2[4];
  a2[1] = v2[5];
  a2[2] = v2[6];
  v3 = v2[7];
  result = 1LL;
  a2[3] = v3;
  return result;
}

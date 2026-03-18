/*
 * XREFs of fsg_QueryTwilightElement @ 0x1C00C516C
 * Callers:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall fsg_QueryTwilightElement(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8
  __int64 i; // rcx
  _QWORD *result; // rax

  v2 = a1 + a2[8];
  v3 = (_QWORD *)(a1 + a2[7]);
  for ( i = 0LL; i < 6; ++i )
    v3[i] = v2 + a2[i + 9];
  v3[7] = v2 + a2[16];
  result = v3;
  v3[8] = v2 + a2[17];
  v3[6] = v2 + a2[15];
  v3[9] = v2 + a2[18];
  v3[11] = v2 + a2[19];
  v3[13] = v2 + a2[20];
  return result;
}

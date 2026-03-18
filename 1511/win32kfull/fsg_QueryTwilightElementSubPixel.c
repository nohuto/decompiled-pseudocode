/*
 * XREFs of fsg_QueryTwilightElementSubPixel @ 0x1C00A37A0
 * Callers:
 *     fs__NewTransformation @ 0x1C00A26A4 (fs__NewTransformation.c)
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall fsg_QueryTwilightElementSubPixel(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8
  __int64 i; // rcx
  _QWORD *result; // rax

  v2 = a1 + a2[27];
  v3 = (_QWORD *)(a1 + a2[26]);
  for ( i = 0LL; i < 6; ++i )
    v3[i] = v2 + a2[i + 9];
  result = v3;
  v3[7] = v2 + a2[16];
  v3[8] = v2 + a2[17];
  v3[6] = v2 + a2[15];
  v3[9] = v2 + a2[18];
  v3[13] = v2 + a2[20];
  return result;
}

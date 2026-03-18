/*
 * XREFs of ConvertPointCoordinates @ 0x140198E98
 * Callers:
 *     TransformForInputMagnification @ 0x140198CB0 (TransformForInputMagnification.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x140198F34 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  int v5; // edx
  unsigned int v8; // ecx
  int v10; // [rsp+44h] [rbp+Ch]
  __int64 plResult; // [rsp+48h] [rbp+10h] BYREF

  v10 = HIDWORD(a1);
  plResult = 0LL;
  v5 = a2[2];
  *a4 = 0LL;
  v8 = ConvertCoordinatesWithRounding(*a2, v5, *a3, a3[2], a1, (LONG *)&plResult);
  if ( v8 )
  {
    v8 = ConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v10, (LONG *)&plResult + 1);
    if ( v8 )
      *a4 = plResult;
  }
  return v8;
}

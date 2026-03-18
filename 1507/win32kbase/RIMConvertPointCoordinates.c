/*
 * XREFs of RIMConvertPointCoordinates @ 0x1C00CE190
 * Callers:
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CE690 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00CE840 (RIMTransformPointerDevicePointToPhysical.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C00CEA74 (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMConvertPointCoordinates(__int64 a1, _DWORD *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v7; // ecx
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  v7 = rimConvertCoordinatesWithRounding(*a2, a2[2], *a3, a3[2], a1, (__int64)&v10);
  if ( v7 )
  {
    v7 = rimConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v9, (__int64)&v10 + 4);
    if ( v7 )
      *a4 = v10;
  }
  return v7;
}

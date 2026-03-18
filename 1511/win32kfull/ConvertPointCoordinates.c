/*
 * XREFs of ConvertPointCoordinates @ 0x1C01C3BD8
 * Callers:
 *     TransformForInputMagnification @ 0x1C01C43D0 (TransformForInputMagnification.c)
 *     TransformPhysicalPointToScreen @ 0x1C01C4558 (TransformPhysicalPointToScreen.c)
 *     TransformPointerDevicePointToPhysical @ 0x1C01C46A0 (TransformPointerDevicePointToPhysical.c)
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01D0448 (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01C31A0 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  unsigned int v7; // ecx
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 plResult; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  v7 = ConvertCoordinatesWithRounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  if ( v7 )
  {
    v7 = ConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
    if ( v7 )
      *a4 = plResult;
  }
  return v7;
}

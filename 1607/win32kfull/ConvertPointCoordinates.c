/*
 * XREFs of ConvertPointCoordinates @ 0x1C01C32DC
 * Callers:
 *     TransformForInputMagnification @ 0x1C01C3680 (TransformForInputMagnification.c)
 *     TransformPhysicalPointToScreen @ 0x1C01C37E4 (TransformPhysicalPointToScreen.c)
 *     TransformPointerDevicePointToPhysical @ 0x1C01C390C (TransformPointerDevicePointToPhysical.c)
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01C8FD8 (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01C29C8 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
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

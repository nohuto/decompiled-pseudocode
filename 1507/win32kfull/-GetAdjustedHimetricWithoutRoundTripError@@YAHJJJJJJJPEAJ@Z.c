/*
 * XREFs of ?GetAdjustedHimetricWithoutRoundTripError@@YAHJJJJJJJPEAJ@Z @ 0x1C01F7CE8
 * Callers:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F7BB8 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ConvertCoordinates @ 0x1C01FB7C0 (ConvertCoordinates.c)
 */

__int64 __fastcall GetAdjustedHimetricWithoutRoundTripError(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        LONG plResult,
        int a7,
        int *a8)
{
  int v9; // r10d
  LONG v11; // ebx
  int *v15; // r11
  int v16; // ebx
  int v17; // r10d
  _DWORD *v18; // r11
  int v19; // eax

  v9 = a7;
  v11 = plResult;
  *a8 = plResult;
  if ( !v9 )
    return 1LL;
  if ( !(unsigned int)ConvertCoordinates(0, a2 - a1, 0, a4 - a3, v9, &plResult) )
    return 0LL;
  v16 = plResult + v11;
  *v15 = v16;
  if ( !(unsigned int)ConvertCoordinates(a3, a4, a1, a2, v16, &plResult) )
    return 0LL;
  if ( plResult != v17 + a5 )
  {
    v19 = -1;
    if ( v17 > 0 )
      v19 = 1;
    *v18 = v16 + v19;
  }
  return 1LL;
}

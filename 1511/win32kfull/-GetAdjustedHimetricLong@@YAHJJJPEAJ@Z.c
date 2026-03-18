/*
 * XREFs of ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01F8144
 * Callers:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F8068 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C01C3C60 (LongLongToLong.c)
 */

__int64 __fastcall GetAdjustedHimetricLong(int a1, int a2, int a3, int *a4)
{
  LONG *v4; // r9
  int v5; // r10d
  __int64 v6; // r11

  if ( a3 && a1 && a2 )
  {
    if ( LongLongToLong(a2 * (__int64)a3, a4) < 0 || LongLongToLong(v6 + *v4 / v5, v4) < 0 )
      return 0LL;
  }
  else
  {
    *a4 = a2;
  }
  return 1LL;
}

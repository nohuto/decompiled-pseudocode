/*
 * XREFs of ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00FFF10
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     CacheRotationInfo @ 0x1C00FFEA0 (CacheRotationInfo.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01D0470 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     RotationRequired @ 0x1C01D0AD0 (RotationRequired.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00FFFC4 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall GetCurrentOrientation(unsigned int *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v6[128]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v7[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+C8h] [rbp-38h]
  unsigned int v9; // [rsp+E8h] [rbp-18h]

  v3 = 0;
  v4 = 1;
  v5 = 2;
  result = DrvQueryDisplayConfig(3221225474LL, &v4, v7, &v5, v6, 0LL);
  if ( (int)result >= 0 )
  {
    result = DrvIsSourceInHardwareClone(v7, v8, &v3);
    if ( (int)result >= 0 )
    {
      if ( v3 )
      {
        return 3223192321LL;
      }
      else
      {
        *a1 = ConvertDisplayConfigRotationToDMDO(v9);
        return 0LL;
      }
    }
  }
  return result;
}

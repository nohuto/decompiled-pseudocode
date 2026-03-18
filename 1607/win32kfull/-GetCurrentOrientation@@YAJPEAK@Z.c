/*
 * XREFs of ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00EC148
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     CacheRotationInfo @ 0x1C00EBFA0 (CacheRotationInfo.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01C9974 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     RotationRequired @ 0x1C01CA188 (RotationRequired.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00EC1FC (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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

  v5 = 1;
  result = DrvQueryDisplayConfig(3221225474LL, &v5, v7, &v4, v6, 0LL, 0x200000000LL);
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

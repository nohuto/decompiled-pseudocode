/*
 * XREFs of ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C010CC40
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C0096AC8 (xxxApplyOrientationPreference.c)
 *     CacheRotationInfo @ 0x1C010CBD0 (CacheRotationInfo.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01D20C8 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     RotationRequired @ 0x1C01D26CC (RotationRequired.c)
 * Callees:
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C010CCF4 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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

  v5 = 2;
  result = DrvQueryDisplayConfig(3221225474LL, &v4, v7, &v5, v6, 0LL, 0x100000000LL);
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

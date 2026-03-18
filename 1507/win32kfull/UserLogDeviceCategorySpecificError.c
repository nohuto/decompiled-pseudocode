/*
 * XREFs of UserLogDeviceCategorySpecificError @ 0x1C01CD244
 * Callers:
 *     ValidateDeviceSignature @ 0x1C0150A80 (ValidateDeviceSignature.c)
 *     ?GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@E@Z @ 0x1C01C4EF8 (-GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HI.c)
 *     AssignTouchType @ 0x1C01C74C0 (AssignTouchType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserLogDeviceCategorySpecificError(int a1, __int16 a2)
{
  __int64 v2; // rcx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax

  if ( a2 != 5 )
  {
    if ( a1 )
    {
      if ( a1 != 1 )
        return result;
      v2 = 2147483894LL;
    }
    else
    {
      v2 = 3221225738LL;
    }
    return UserLogError(v2);
  }
  if ( !a1 )
  {
    v2 = 3221225743LL;
    return UserLogError(v2);
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v2 = 3221225741LL;
    return UserLogError(v2);
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      v2 = 2147483920LL;
      return UserLogError(v2);
    }
    if ( v5 != 1 )
      return result;
  }
  v2 = 3221225742LL;
  return UserLogError(v2);
}

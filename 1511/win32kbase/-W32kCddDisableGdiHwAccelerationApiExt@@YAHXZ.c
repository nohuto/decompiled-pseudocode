/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C0079A80
 * Callers:
 *     <none>
 * Callees:
 *     IsW32kCddDisableGdiHwAccelerationSupported_0 @ 0x1C00015A8 (IsW32kCddDisableGdiHwAccelerationSupported_0.c)
 *     W32kCddDisableGdiHwAcceleration_0 @ 0x1C00015B0 (W32kCddDisableGdiHwAcceleration_0.c)
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = IsW32kCddDisableGdiHwAccelerationSupported_0();
  v1 = 0;
  if ( v0 >= 0 )
    return (unsigned int)W32kCddDisableGdiHwAcceleration_0();
  return v1;
}

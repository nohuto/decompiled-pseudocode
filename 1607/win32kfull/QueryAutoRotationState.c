/*
 * XREFs of QueryAutoRotationState @ 0x1C0098B04
 * Callers:
 *     NtUserGetAutoRotationState @ 0x1C000E420 (NtUserGetAutoRotationState.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01C9B00 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     RotationRequired @ 0x1C01CA188 (RotationRequired.c)
 *     xxxAutoRotateScreen @ 0x1C01CA304 (xxxAutoRotateScreen.c)
 * Callees:
 *     CacheRotationInfo @ 0x1C00EBFA0 (CacheRotationInfo.c)
 */

__int64 QueryAutoRotationState()
{
  int v0; // edx
  unsigned int v1; // ecx

  v0 = dword_1C032947C;
  if ( dword_1C032947C )
  {
    CacheRotationInfo();
    v0 = dword_1C032947C;
  }
  v1 = 0;
  if ( gProtocolType )
    v1 = 4;
  if ( !dword_1C0329468 )
    v1 |= 1u;
  if ( dword_1C0329484 || dword_1C0329480 )
    v1 |= 8u;
  if ( !dword_1C032946C )
    v1 |= 0x10u;
  if ( dword_1C0329470 )
    v1 |= 0x40u;
  if ( dword_1C0329474 )
    v1 |= 0x80u;
  if ( v0 )
    v1 |= 0x20u;
  return v1;
}

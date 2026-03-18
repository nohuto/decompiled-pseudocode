/*
 * XREFs of QueryAutoRotationState @ 0x1C007D804
 * Callers:
 *     NtUserGetAutoRotationState @ 0x1C00097B0 (NtUserGetAutoRotationState.c)
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C0132F4C (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D06B0 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D06F4 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     RotationRequired @ 0x1C01D0AD0 (RotationRequired.c)
 *     xxxAutoRotateScreen @ 0x1C01D0C4C (xxxAutoRotateScreen.c)
 * Callees:
 *     CacheRotationInfo @ 0x1C00FFEA0 (CacheRotationInfo.c)
 */

__int64 QueryAutoRotationState()
{
  int v0; // edx
  unsigned int v1; // ecx

  v0 = dword_1C032304C;
  if ( dword_1C032304C )
  {
    CacheRotationInfo();
    v0 = dword_1C032304C;
  }
  v1 = 0;
  if ( gProtocolType )
    v1 = 4;
  if ( !dword_1C0323038 )
    v1 |= 1u;
  if ( dword_1C0323054 || dword_1C0323050 )
    v1 |= 8u;
  if ( !dword_1C032303C )
    v1 |= 0x10u;
  if ( dword_1C0323040 )
    v1 |= 0x40u;
  if ( dword_1C0323044 )
    v1 |= 0x80u;
  if ( v0 )
    v1 |= 0x20u;
  return v1;
}

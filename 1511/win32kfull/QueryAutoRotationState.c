/*
 * XREFs of QueryAutoRotationState @ 0x1C0096AE4
 * Callers:
 *     NtUserGetAutoRotationState @ 0x1C000CD90 (NtUserGetAutoRotationState.c)
 *     xxxApplyOrientationPreference @ 0x1C0096AC8 (xxxApplyOrientationPreference.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C01137CC (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D2260 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     RotationRequired @ 0x1C01D26CC (RotationRequired.c)
 *     xxxAutoRotateScreen @ 0x1C01D2848 (xxxAutoRotateScreen.c)
 * Callees:
 *     CacheRotationInfo @ 0x1C010CBD0 (CacheRotationInfo.c)
 */

__int64 QueryAutoRotationState()
{
  int v0; // edx
  unsigned int v1; // ecx

  v0 = dword_1C0323D7C;
  if ( dword_1C0323D7C )
  {
    CacheRotationInfo();
    v0 = dword_1C0323D7C;
  }
  v1 = 0;
  if ( gProtocolType )
    v1 = 4;
  if ( !dword_1C0323D68 )
    v1 |= 1u;
  if ( dword_1C0323D84 || dword_1C0323D80 )
    v1 |= 8u;
  if ( !dword_1C0323D6C )
    v1 |= 0x10u;
  if ( dword_1C0323D70 )
    v1 |= 0x40u;
  if ( dword_1C0323D74 )
    v1 |= 0x80u;
  if ( v0 )
    v1 |= 0x20u;
  return v1;
}

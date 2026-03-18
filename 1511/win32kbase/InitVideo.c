/*
 * XREFs of InitVideo @ 0x1C0061E88
 * Callers:
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     CacheRotationInfo_0 @ 0x1C00023D0 (CacheRotationInfo_0.c)
 *     IsCacheRotationInfoSupported_0 @ 0x1C0002958 (IsCacheRotationInfoSupported_0.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C005FF10 (DrvCloseLocalGraphicsDevices.c)
 *     GreUpdateSharedDevCaps @ 0x1C0061FE4 (GreUpdateSharedDevCaps.c)
 *     DrvInitConsole @ 0x1C0062180 (DrvInitConsole.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 */

__int64 InitVideo()
{
  __int16 v0; // si
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v7; // [rsp+90h] [rbp+8h] BYREF

  v0 = gProtocolType;
  v7 = 0LL;
  v1 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbRemoteSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v1 = 1;
  }
  if ( (int)DrvSetDisplayConfig(0LL, 0LL, 0, 0LL, 2447, 2u, 0LL, 0, 0LL, 0LL, (struct _MDEV **)&v7, 0LL, 0LL, 0LL, 0LL) < 0 )
    return 0LL;
  v5 = v7;
  gbBaseVideo = 0;
  *(_QWORD *)gpDispInfo = *(_QWORD *)v7;
  *(_QWORD *)(gpDispInfo + 8) = v5;
  GreUpdateSharedDevCaps(*(_QWORD *)gpDispInfo, v2, v3, v4);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v1 )
  {
    if ( !v0 && !gServiceSessionId )
      MEMORY[0xFFFFF780000002D8] = -1;
    DrvCloseLocalGraphicsDevices();
  }
  else if ( (int)IsCacheRotationInfoSupported_0() >= 0 )
  {
    CacheRotationInfo_0();
  }
  gdwHydraHint |= 4u;
  return v5;
}

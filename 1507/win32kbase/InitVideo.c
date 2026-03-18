/*
 * XREFs of InitVideo @ 0x1C007D7D8
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     CacheRotationInfo_0 @ 0x1C00023A0 (CacheRotationInfo_0.c)
 *     IsCacheRotationInfoSupported_0 @ 0x1C0002938 (IsCacheRotationInfoSupported_0.c)
 *     GreUpdateSharedDevCaps @ 0x1C0015B88 (GreUpdateSharedDevCaps.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 *     DrvInitConsole @ 0x1C007E24C (DrvInitConsole.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C007E4C0 (DrvCloseLocalGraphicsDevices.c)
 */

__int64 InitVideo()
{
  __int16 v0; // si
  int v1; // ebx
  __int64 v2; // rdi
  __int64 v4; // [rsp+90h] [rbp+8h] BYREF

  v0 = gProtocolType;
  v4 = 0LL;
  v1 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbRemoteSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v1 = 1;
  }
  if ( (int)DrvSetDisplayConfig(0, 0LL, 0, 0LL, 2447, 2, 0LL, 0, 0LL, 0LL, (struct _MDEV **)&v4, 0LL, 0LL, 0LL, 0LL) < 0 )
    return 0LL;
  v2 = v4;
  gbBaseVideo = 0;
  *(_QWORD *)gpDispInfo = *(_QWORD *)v4;
  *(_QWORD *)(gpDispInfo + 8) = v2;
  GreUpdateSharedDevCaps(*(_QWORD *)gpDispInfo);
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
  return v2;
}

/*
 * XREFs of InitVideo @ 0x1C0089318
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     CacheRotationInfo_0 @ 0x1C0001F28 (CacheRotationInfo_0.c)
 *     IsCacheRotationInfoSupported_0 @ 0x1C0002968 (IsCacheRotationInfoSupported_0.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C005D8D0 (DrvCloseLocalGraphicsDevices.c)
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     GreUpdateSharedDevCaps @ 0x1C007C8D8 (GreUpdateSharedDevCaps.c)
 *     DrvInitConsole @ 0x1C0089470 (DrvInitConsole.c)
 */

__int64 __fastcall InitVideo(__int64 a1)
{
  __int16 v1; // si
  int v2; // ebx
  __int64 v4; // rdi
  __int64 v6; // [rsp+98h] [rbp+10h] BYREF

  v1 = gProtocolType;
  v6 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbRemoteSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v2 = 1;
  }
  if ( (int)DrvSetDisplayConfig(
              0,
              0LL,
              0,
              0LL,
              2447,
              2u,
              0LL,
              0,
              0LL,
              0LL,
              (struct _MDEV **)&v6,
              0LL,
              0LL,
              0LL,
              0LL,
              a1) < 0 )
    return 0LL;
  v4 = v6;
  gbBaseVideo = 0;
  *(_QWORD *)gpDispInfo = *(_QWORD *)v6;
  *(_QWORD *)(gpDispInfo + 8) = v4;
  GreUpdateSharedDevCaps(*(_QWORD *)gpDispInfo);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseLocalGraphicsDevices();
  }
  else if ( (int)IsCacheRotationInfoSupported_0() >= 0 )
  {
    CacheRotationInfo_0();
  }
  gdwHydraHint |= 4u;
  return v4;
}

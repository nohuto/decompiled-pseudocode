/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF6EC
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860 (xxxUpdatePerUserAccessPackSettings.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE480 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EF020 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01EF908 (-xxxUpdateModifierState@@YAXHH@Z.c)
 */

void xxxTurnOffStickyKeys(void)
{
  int v0; // edx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rcx
  __int64 v2; // rcx

  v0 = 0;
  for ( i = off_1C02EA260; *i != xxxStickyKeys; ++i )
  {
    if ( (unsigned __int64)++v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0 + 1);
  dword_1C03222C4 &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v2, *(_QWORD *)(v2 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
}

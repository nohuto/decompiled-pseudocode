/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF1CC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDF60 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EEB00 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01EF3E8 (-xxxUpdateModifierState@@YAXHH@Z.c)
 */

void xxxTurnOffStickyKeys(void)
{
  int v0; // edx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rcx
  __int64 v2; // rcx

  v0 = 0;
  for ( i = off_1C02EB2B0; *i != xxxStickyKeys; ++i )
  {
    if ( (unsigned __int64)++v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0 + 1);
  dword_1C032392C &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v2, *(_QWORD *)(v2 + 392), 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, (LARGE_INTEGER)1LL, 0LL);
}

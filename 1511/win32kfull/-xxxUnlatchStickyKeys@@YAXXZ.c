/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01EF868
 * Callers:
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01EF908 (-xxxUpdateModifierState@@YAXHH@Z.c)
 */

void xxxUnlatchStickyKeys(void)
{
  int v0; // edx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rcx
  bool v2; // zf
  __int64 v3; // rcx

  if ( gLatchBits )
  {
    v0 = 0;
    for ( i = off_1C02EA260; *i != xxxStickyKeys; ++i )
    {
      if ( (unsigned __int64)++v0 >= 5 )
        return;
    }
    xxxUpdateModifierState((unsigned __int8)gLockBits, v0 + 1);
    v2 = gLatchBits == 0;
    gLatchBits = 0;
    if ( !v2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
      PostEventMessageEx(v3, *(_QWORD *)(v3 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
    }
  }
}

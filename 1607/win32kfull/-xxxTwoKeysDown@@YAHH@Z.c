/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01E54C4
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8950 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E5648 (-xxxUpdateModifierState@@YAXHH@Z.c)
 */

__int64 __fastcall xxxTwoKeysDown(int a1)
{
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL);
  v3 = dword_1C0326F2C;
  if ( (dword_1C0326F2C & 0x100) != 0 )
  {
    dword_1C0326F2C &= ~1u;
    if ( (v3 & 0x10) != 0 )
      PostEventMessageEx(*(_QWORD *)(v2 + 16), *(_QWORD *)(*(_QWORD *)(v2 + 16) + 384LL), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, a1);
  gLatchBits = 0;
  gLockBits = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v4, *(_QWORD *)(v4 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
  return dword_1C0326F2C & 1;
}

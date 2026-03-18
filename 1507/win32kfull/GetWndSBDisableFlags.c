/*
 * XREFs of GetWndSBDisableFlags @ 0x1C011A15C
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0119440 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02319B4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0231DF8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C023352C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C02339E0 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, int a2)
{
  int *v2; // rax
  int v3; // eax

  v2 = *(int **)(a1 + 176);
  if ( v2 )
  {
    v3 = *v2;
    if ( a2 )
      v3 >>= 2;
    return v3 & 3;
  }
  else
  {
    UserSetLastError(1447);
    return 0LL;
  }
}

/*
 * XREFs of GetWndSBDisableFlags @ 0x1C014513C
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0144A20 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0231DE4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0232228 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0233E10 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
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

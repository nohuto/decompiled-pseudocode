/*
 * XREFs of SBCtlSetup @ 0x1C023389C
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0231D44 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C0077B08 (CalcSBStuff2.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 */

__int64 __fastcall SBCtlSetup(__int64 a1)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  GetRect(a1, (__int64)v3, 17);
  return CalcSBStuff2((int *)(a1 + 384), v3, (int *)(a1 + 384), *(_DWORD *)(a1 + 376));
}

/*
 * XREFs of SBCtlSetup @ 0x1C022C40C
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C022AB00 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C00AFB0C (CalcSBStuff2.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 */

__int64 __fastcall SBCtlSetup(__int64 a1)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  GetRect(a1, (__int64)v3, 17);
  return CalcSBStuff2((int *)(a1 + 368), v3, (int *)(a1 + 368), *(unsigned int *)(a1 + 360));
}

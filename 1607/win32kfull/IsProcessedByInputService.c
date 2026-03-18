/*
 * XREFs of IsProcessedByInputService @ 0x1C00DB84C
 * Callers:
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsProcessedByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x8000) != 0 || (v1 & 0x10000) != 0;
}

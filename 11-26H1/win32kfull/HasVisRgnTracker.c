/*
 * XREFs of HasVisRgnTracker @ 0x14001975C
 * Callers:
 *     OffsetWindow @ 0x140018874 (OffsetWindow.c)
 * Callees:
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1400197C8 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HasVisRgnTracker(__int64 a1)
{
  const struct tagTHREADINFO *v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v2 = PtiCurrent();
  if ( !(unsigned int)IsThreadDesktopComposed(v2) )
    return 0LL;
  v4 = 0LL;
  return CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v4);
}

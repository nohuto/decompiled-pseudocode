/*
 * XREFs of DSW_GetTopLevelCreatorWindow @ 0x1C01123E8
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200428 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DSW_GetTopLevelCreatorWindow(__int64 a1)
{
  __int64 i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 104); i; i = *(_QWORD *)(i + 104) )
      a1 = i;
  }
  return a1;
}

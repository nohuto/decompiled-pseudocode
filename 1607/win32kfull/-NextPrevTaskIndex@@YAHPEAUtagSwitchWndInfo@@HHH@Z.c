/*
 * XREFs of ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F75C8
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NextPrevTaskIndex(struct tagSwitchWndInfo *a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx

  if ( a4 )
  {
    v4 = *((_DWORD *)a1 + 10);
    v5 = a3 + a2;
    if ( v5 >= v4 )
      v5 -= v4;
  }
  else
  {
    v5 = a2 - a3;
    if ( v5 < 0 )
      v5 += *((_DWORD *)a1 + 10);
  }
  return (unsigned int)v5;
}

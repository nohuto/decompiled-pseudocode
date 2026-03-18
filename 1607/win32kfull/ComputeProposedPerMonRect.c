/*
 * XREFs of ComputeProposedPerMonRect @ 0x1C00ABCDC
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     FindOldMonitor @ 0x1C00AC84C (FindOldMonitor.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CDFF0 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ComputeProposedPerMonRect(
        struct tagRECT *a1,
        struct tagMONITORRECTS *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  int OldMonitor; // eax
  int ShouldMaximizeWindow; // eax
  int v11; // r10d

  *a4 = a1[7];
  OldMonitor = FindOldMonitor(a3, a2, (unsigned int)a1[22].left);
  if ( OldMonitor == -1 || LOWORD(a1[22].top) == *((_WORD *)a2 + 56 * OldMonitor + 52) )
    return 0LL;
  ShouldMaximizeWindow = _ShouldMaximizeWindow((struct tagWND *)a1);
  NormalizeRect((struct tagWND *)a1, a4, a3, a2, v11, ShouldMaximizeWindow != 0, 1);
  return 1LL;
}

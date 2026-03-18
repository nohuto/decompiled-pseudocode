/*
 * XREFs of ComputeProposedPerMonRect @ 0x1C0090C88
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     HasMaximizedState @ 0x1C006E670 (HasMaximizedState.c)
 *     FindOldMonitor @ 0x1C00912EC (FindOldMonitor.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00913BC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 */

__int64 __fastcall ComputeProposedPerMonRect(
        __int64 a1,
        struct tagMONITORRECTS *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  int OldMonitor; // eax
  struct tagWND *v10; // rcx
  int v11; // r10d

  *a4 = *(struct tagRECT *)(a1 + 112);
  OldMonitor = FindOldMonitor(a3, a2, *(unsigned int *)(a1 + 344));
  if ( OldMonitor == -1 || *(_WORD *)(a1 + 360) == *((_WORD *)a2 + 56 * OldMonitor + 52) )
    return 0LL;
  if ( !(unsigned int)HasMaximizedState((_BYTE *)a1) )
    NormalizeRect(v10, a4, a3, a2, v11, 0, 1);
  return 1LL;
}

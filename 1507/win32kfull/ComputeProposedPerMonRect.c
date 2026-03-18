/*
 * XREFs of ComputeProposedPerMonRect @ 0x1C0045040
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 * Callees:
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C004444C (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     FindOldMonitor @ 0x1C0045C6C (FindOldMonitor.c)
 *     HasMaximizedState @ 0x1C005C9DC (HasMaximizedState.c)
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
  if ( !(unsigned int)HasMaximizedState(a1) )
    NormalizeRect(v10, a4, a3, a2, v11, 0, 1);
  return 1LL;
}

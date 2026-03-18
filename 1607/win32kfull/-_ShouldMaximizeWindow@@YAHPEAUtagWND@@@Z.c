/*
 * XREFs of ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CDFF0
 * Callers:
 *     ComputeProposedPerMonRect @ 0x1C00ABCDC (ComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ShouldMaximizeWindow(struct tagWND *a1)
{
  unsigned int v1; // r8d

  v1 = 1;
  if ( (*((_BYTE *)a1 + 55) & 1) == 0
    || (*((_BYTE *)a1 + 54) & ((*((_BYTE *)a1 + 54) & 0xC0) == 0xC0)) == 0
    || (*((_DWORD *)a1 + 72) & 0x80u) != 0 )
  {
    return 0;
  }
  return v1;
}

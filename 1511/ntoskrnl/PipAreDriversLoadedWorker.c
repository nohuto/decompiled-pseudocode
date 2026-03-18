/*
 * XREFs of PipAreDriversLoadedWorker @ 0x1400998E4
 * Callers:
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PipAreDriversLoaded @ 0x1400998D0 (PipAreDriversLoaded.c)
 *     PipRestoreDevNodeState @ 0x1400DA400 (PipRestoreDevNodeState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  while ( a1 <= 785 )
  {
    if ( a1 >= 783 )
      return 1LL;
    if ( a1 <= 770 )
      return 0LL;
    if ( a1 <= 781 )
      return 1LL;
    a1 = a2;
    a2 = 768;
  }
  return a1 == 787;
}

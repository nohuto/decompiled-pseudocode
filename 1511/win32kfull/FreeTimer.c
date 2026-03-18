/*
 * XREFs of FreeTimer @ 0x1C004AC90
 * Callers:
 *     NtUserKillTimer @ 0x1C004A440 (NtUserKillTimer.c)
 *     DestroyWindowsTimers @ 0x1C0068948 (DestroyWindowsTimers.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyThreadsTimers @ 0x1C00E1170 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00FB184 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

__int64 __fastcall FreeTimer(struct tagTIMER *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  struct tagTIMER **v4; // rcx
  __int64 v5; // rdx
  struct tagTIMER **v6; // rax

  result = HMMarkObjectDestroy();
  if ( (_DWORD)result )
  {
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v3 = *((_QWORD *)a1 + 9);
    v4 = (struct tagTIMER **)*((_QWORD *)a1 + 10);
    if ( *(struct tagTIMER **)(v3 + 8) != (struct tagTIMER *)((char *)a1 + 72)
      || *v4 != (struct tagTIMER *)((char *)a1 + 72) )
    {
      __fastfail(3u);
    }
    *v4 = (struct tagTIMER *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = *((_QWORD *)a1 + 14);
    v6 = (struct tagTIMER **)*((_QWORD *)a1 + 15);
    if ( *(struct tagTIMER **)(v5 + 8) != (struct tagTIMER *)((char *)a1 + 112)
      || *v6 != (struct tagTIMER *)((char *)a1 + 112) )
    {
      __fastfail(3u);
    }
    *v6 = (struct tagTIMER *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    return HMFreeObject(a1);
  }
  return result;
}

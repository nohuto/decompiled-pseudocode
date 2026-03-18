/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C0100900
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagWND *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(gpqForeground + 80LL);
      if ( v7 )
      {
        if ( GetNextQueueWindow(v7, 0LL, 1LL) && (*(_BYTE *)(v7 + 48) & 8) == 0 && (*(_BYTE *)(v7 + 44) & 0x20) == 0 )
        {
          v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v10;
          v10[1] = v7;
          ++*(_DWORD *)(v7 + 8);
          xxxSetWindowPosAndBand((struct tagWND *)v7, 1LL, 0, 0, 0, 0, 16403, 0);
          ThreadUnlock1(v9, v8);
        }
      }
    }
  }
  xxxSetForegroundWindow(a1, 1LL, a3, a4);
  if ( a2 && (*((_BYTE *)a1 + 55) & 0x20) != 0 && !(unsigned int)IsThreadHung(*((_QWORD **)a1 + 2), 0) )
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL),
      7u,
      (LARGE_INTEGER *)a1,
      0x112u,
      (LARGE_INTEGER)61728LL,
      0LL,
      0LL);
  return 1LL;
}

/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C000D420
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagWND *a1, int a2)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v5 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v5 )
      {
        if ( GetNextQueueWindow(v5, 0LL, 1LL) && (*(_BYTE *)(v5 + 48) & 8) == 0 && (*(_BYTE *)(v5 + 44) & 0x20) == 0 )
        {
          v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v8;
          v8[1] = v5;
          ++*(_DWORD *)(v5 + 8);
          xxxSetWindowPosAndBand((struct tagWND *)v5, 0, 0, 19, 0);
          ThreadUnlock1(v7, v6);
        }
      }
    }
  }
  xxxSetForegroundWindow(a1);
  if ( a2 && (*((_BYTE *)a1 + 55) & 0x20) != 0 && !(unsigned int)IsThreadHung(*((_QWORD *)a1 + 2), 0LL) )
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      7,
      (_DWORD)a1,
      274,
      61728LL,
      0LL,
      0LL);
  return 1LL;
}

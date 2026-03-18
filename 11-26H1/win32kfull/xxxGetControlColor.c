/*
 * XREFs of xxxGetControlColor @ 0x140125958
 * Callers:
 *     xxxGetControlBrush @ 0x140124EB4 (xxxGetControlBrush.c)
 *     xxxPaintRect @ 0x140127520 (xxxPaintRect.c)
 *     NtUserGetControlColor @ 0x14023AAF0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  __int64 v8; // rsi

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) )
    return xxxDefWindowProc(a1);
  v7 = xxxSendMessage(a1, a4);
  v8 = v7;
  if ( !v7 || !(unsigned int)GreValidateServerHandle(v7, 16LL) )
    return xxxDefWindowProc(a1);
  return v8;
}

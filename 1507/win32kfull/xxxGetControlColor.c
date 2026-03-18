/*
 * XREFs of xxxGetControlColor @ 0x1C0086354
 * Callers:
 *     xxxPaintRect @ 0x1C00863E8 (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x1C00F34C4 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1C021A1E0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 */

__int64 __fastcall xxxGetControlColor(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) )
  {
    v9 = 0LL;
    if ( a2 )
      v9 = *a2;
    v10 = xxxSendMessage((struct tagWND *)a1, a4, a3, v9);
    v11 = v10;
    if ( !v10 || !(unsigned int)GreValidateServerHandle(v10, 16LL) )
      return xxxDefWindowProc((struct tagWND *)a1, a4, a3, (__int64)a2);
    return v11;
  }
  else
  {
    if ( a2 )
      v8 = *a2;
    return xxxDefWindowProc((struct tagWND *)a1, a4, a3, v8);
  }
}

/*
 * XREFs of xxxGetControlColor @ 0x1C00E7BB4
 * Callers:
 *     xxxGetControlBrush @ 0x1C00E7834 (xxxGetControlBrush.c)
 *     xxxPaintRect @ 0x1C00E7A28 (xxxPaintRect.c)
 *     NtUserGetControlColor @ 0x1C0219F50 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi

  v8 = 0LL;
  if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
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

/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x140138CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x140137EB0 (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  int v4; // ebx
  struct tagTHREADINFO *v5; // rcx
  int v6; // ecx
  _DWORD *v8; // rax

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) )
  {
    v6 = 87;
    goto LABEL_8;
  }
  v3 = PtiCurrent(v2);
  v4 = 1;
  v5 = v3;
  if ( (unsigned __int16)a1 != 1 )
  {
    if ( (*((_QWORD *)v3 + 170) & 0x1000000100LL) == 0 && *(struct tagTHREADINFO **)(*((_QWORD *)v3 + 58) + 72LL) == v3 )
    {
      v4 = xxxDiscardPointerFrameMessagesInternal((unsigned __int16)a1);
      goto LABEL_9;
    }
    goto LABEL_6;
  }
  v8 = (_DWORD *)*((_QWORD *)v3 + 189);
  if ( !v8 || (*v8 & 1) == 0 )
  {
LABEL_6:
    v6 = 5;
LABEL_8:
    v4 = 0;
    UserSetLastError(v6);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}

/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x140137EB0
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x140138CA0 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140136348 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1401387F4 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(__int64 a1)
{
  unsigned __int16 v1; // bx
  struct tagTHREADINFO *v2; // rdi
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v4; // rdx
  int v5; // ecx

  v1 = a1;
  v2 = PtiCurrent(a1);
  ThreadPointerData = (struct tagTHREADPOINTERDATA *)*((_QWORD *)v2 + 154);
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 8) != v1 )
      ThreadPointerData = 0LL;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)((char *)v2 + 1208), v1);
  }
  if ( !ThreadPointerData )
    goto LABEL_8;
  if ( (*((_DWORD *)ThreadPointerData + 12) & 8) != 0 )
    goto LABEL_8;
  v4 = *((_QWORD *)ThreadPointerData + 3);
  if ( !v4 )
    goto LABEL_8;
  if ( (*((_DWORD *)ThreadPointerData + 12) & 1) == 0 )
  {
    v5 = 5;
    goto LABEL_9;
  }
  if ( !(unsigned int)xxxDiscardPointerWindowFrameMessages(v2, v4) )
  {
LABEL_8:
    v5 = 87;
LABEL_9:
    UserSetLastError(v5);
    return 0LL;
  }
  return 1LL;
}

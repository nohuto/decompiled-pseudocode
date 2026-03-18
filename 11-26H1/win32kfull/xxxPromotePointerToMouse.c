/*
 * XREFs of xxxPromotePointerToMouse @ 0x140135AFC
 * Callers:
 *     xxxDefPointerProc @ 0x140053A6C (xxxDefPointerProc.c)
 *     NtUserPromotePointer @ 0x140134170 (NtUserPromotePointer.c)
 *     NtUserConvertPrimaryPointerToMouseDrag @ 0x1402B03B0 (NtUserConvertPrimaryPointerToMouseDrag.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402C60C4 (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140136348 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(__int64 a1, unsigned int a2)
{
  unsigned __int16 v3; // bx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct _LIST_ENTRY *v6; // rcx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 UserSessionState; // rax

  v3 = a1;
  v4 = PtiCurrent(a1);
  v6 = (struct _LIST_ENTRY *)((char *)v4 + 1208);
  ThreadPointerData = (struct tagTHREADPOINTERDATA *)*((_QWORD *)v4 + 154);
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 8) != v3 )
      ThreadPointerData = 0LL;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(v6, v3);
  }
  if ( ThreadPointerData
    && (v8 = *((unsigned int *)ThreadPointerData + 12), (v8 & 8) == 0)
    && (v9 = *((_QWORD *)ThreadPointerData + 3)) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v8, v5);
    return CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(UserSessionState + 3256), v9, a2);
  }
  else
  {
    UserSetLastError(87);
    return 0;
  }
}

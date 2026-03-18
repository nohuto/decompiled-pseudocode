/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C0041278
 * Callers:
 *     zzzSetCursorPosByType @ 0x1C003A608 (zzzSetCursorPosByType.c)
 *     NtUserGetAsyncKeyState @ 0x1C0041050 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C00417D0 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C00419D0 (NtUserGetKeyState.c)
 *     xxxInternalKeyEventDirect @ 0x1C0048038 (xxxInternalKeyEventDirect.c)
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D8FD8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DCB84 (xxxInjectTouchInput.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F77F4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 384)) )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 392);
  if ( gpqForeground != v2 || (*(_DWORD *)(v2 + 332) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 72LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 384) == *(_QWORD *)(a1 + 384);
}

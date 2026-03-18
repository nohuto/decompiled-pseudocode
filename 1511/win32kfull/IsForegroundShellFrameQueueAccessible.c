/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C0003224
 * Callers:
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxInternalKeyEventDirect @ 0x1C0082B5C (xxxInternalKeyEventDirect.c)
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     ?xxxMouseEventDirect@@YAHKKKKK_K0@Z @ 0x1C0084AE8 (-xxxMouseEventDirect@@YAHKKKKK_K0@Z.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     NtUserGetKeyboardState @ 0x1C00932A0 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C00934A0 (NtUserGetKeyState.c)
 *     zzzSetCursorPosByType @ 0x1C009A758 (zzzSetCursorPosByType.c)
 *     NtUserGetAsyncKeyState @ 0x1C00EB4B0 (NtUserGetAsyncKeyState.c)
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F7CA4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 376)) )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 384);
  if ( gpqForeground != v2 || (*(_DWORD *)(v2 + 332) & 0x2000000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(gpqForeground + 72LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  return v3 && *(_QWORD *)(v3 + 376) == *(_QWORD *)(a1 + 376);
}

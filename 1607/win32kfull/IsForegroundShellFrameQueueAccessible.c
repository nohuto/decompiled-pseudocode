/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C00A9964
 * Callers:
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     NtUserGetKeyboardState @ 0x1C0095470 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C0095670 (NtUserGetKeyState.c)
 *     zzzSetCursorPosByType @ 0x1C0097338 (zzzSetCursorPosByType.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxInternalKeyEventDirect @ 0x1C00A21FC (xxxInternalKeyEventDirect.c)
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     NtUserGetAsyncKeyState @ 0x1C00A9750 (NtUserGetAsyncKeyState.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     xxxInjectTouchInput @ 0x1C01D4AF4 (xxxInjectTouchInput.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 376)) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 384);
  if ( gpqForeground != v3 || (*(_DWORD *)(v3 + 340) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 80LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 376) == *(_QWORD *)(a1 + 376);
}

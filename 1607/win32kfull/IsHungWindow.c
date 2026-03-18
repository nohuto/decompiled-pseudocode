/*
 * XREFs of IsHungWindow @ 0x1C0059680
 * Callers:
 *     xxxHungAppDemon @ 0x1C0059550 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     ProcessHungWindow @ 0x1C00D5348 (ProcessHungWindow.c)
 *     NtUserQueryWindow @ 0x1C00D53A0 (NtUserQueryWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00D5530 (ShouldProcessHungWindow.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     xxxRegisterGhostWindow @ 0x1C0148380 (xxxRegisterGhostWindow.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     NtUserSetWindowArrangement @ 0x1C021A8E0 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     IsPumpingInputMsgs @ 0x1C0059750 (IsPumpingInputMsgs.c)
 */

_BOOL8 __fastcall IsHungWindow(__int64 a1)
{
  return (unsigned int)IsThreadHung(*(_QWORD *)(a1 + 16), 0LL) || IsPumpingInputMsgs(a1) == 0;
}

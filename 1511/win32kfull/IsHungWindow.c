/*
 * XREFs of IsHungWindow @ 0x1C008C360
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     NtUserQueryWindow @ 0x1C008C050 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C008C230 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     ShouldProcessHungWindow @ 0x1C010BFEC (ShouldProcessHungWindow.c)
 *     ProcessHungWindow @ 0x1C014260C (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0142840 (xxxRegisterGhostWindow.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F7CA4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     NtUserSetWindowArrangement @ 0x1C0220980 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     IsPumpingInputMsgs @ 0x1C008C434 (IsPumpingInputMsgs.c)
 */

_BOOL8 __fastcall IsHungWindow(__int64 a1)
{
  return (unsigned int)IsThreadHung(*(_QWORD *)(a1 + 16), 0LL) || IsPumpingInputMsgs(a1) == 0;
}

/*
 * XREFs of IsHungWindow @ 0x1C008CD50
 * Callers:
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C007CE24 (xxxSimpleDoSyncPaint.c)
 *     NtUserQueryWindow @ 0x1C0085DC0 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C008CC20 (xxxHungAppDemon.c)
 *     ShouldProcessHungWindow @ 0x1C00FF760 (ShouldProcessHungWindow.c)
 *     ProcessHungWindow @ 0x1C01176A8 (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F77F4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     NtUserSetWindowArrangement @ 0x1C0220B40 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     IsPumpingInputMsgs @ 0x1C008CE24 (IsPumpingInputMsgs.c)
 */

_BOOL8 __fastcall IsHungWindow(__int64 a1)
{
  return (unsigned int)IsThreadHung(*(_QWORD *)(a1 + 16), 0LL) || IsPumpingInputMsgs(a1) == 0;
}

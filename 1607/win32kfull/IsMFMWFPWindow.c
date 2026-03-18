/*
 * XREFs of IsMFMWFPWindow @ 0x1C0142218
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     UnlockMFMWFPWindow @ 0x1C01413F4 (UnlockMFMWFPWindow.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 *     LockMFMWFPWindow @ 0x1C020F004 (LockMFMWFPWindow.c)
 *     xxxMNDragOver @ 0x1C0233278 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02333A4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0233768 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}

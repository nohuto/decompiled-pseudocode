/*
 * XREFs of IsMFMWFPWindow @ 0x1C0138064
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     UnlockMFMWFPWindow @ 0x1C0137970 (UnlockMFMWFPWindow.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0138358 (xxxMNMouseMove.c)
 *     LockMFMWFPWindow @ 0x1C0216468 (LockMFMWFPWindow.c)
 *     xxxMNDragOver @ 0x1C023B7B8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C023B8E4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BD30 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}

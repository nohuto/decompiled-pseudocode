/*
 * XREFs of IsMFMWFPWindow @ 0x1C010BDAC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     UnlockMFMWFPWindow @ 0x1C010B474 (UnlockMFMWFPWindow.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C010BB60 (xxxMNMouseMove.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     LockMFMWFPWindow @ 0x1C0216604 (LockMFMWFPWindow.c)
 *     xxxMNDragOver @ 0x1C023B5E8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C023B714 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BB60 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}

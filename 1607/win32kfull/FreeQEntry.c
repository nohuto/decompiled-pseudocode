/*
 * XREFs of FreeQEntry @ 0x1C0135788
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00FDE00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00FDEB0 (FreeMessageList.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01D74CC (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(unsigned int *a1)
{
  if ( (a1[25] & 8) != 0 && !a1[24] && IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}

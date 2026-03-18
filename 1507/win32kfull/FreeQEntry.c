/*
 * XREFs of FreeQEntry @ 0x1C01D1558
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01E0B64 (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(int *a1)
{
  if ( (a1[23] & 8) != 0 && !a1[22] && (unsigned int)IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}

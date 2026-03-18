/*
 * XREFs of FreeQEntry @ 0x1C0064D1C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C01007F8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01E1174 (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(unsigned int *a1)
{
  if ( (a1[23] & 8) != 0 && !a1[22] && (unsigned int)IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}

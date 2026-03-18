/*
 * XREFs of BcpSetCursorPosition @ 0x14026F8CC
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x14026EE94 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14026EF50 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14026F254 (BcpDisplayErrorInformation.c)
 *     BcpGetMessageOffsets @ 0x14026F668 (BcpGetMessageOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14026F8E8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14026FAA0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSetCursorPosition(int a1, int a2, int *a3)
{
  __int64 result; // rax

  LODWORD(BcpCursor) = a1;
  HIDWORD(BcpCursor) = a2;
  if ( a3 )
  {
    result = (unsigned int)*a3;
    dword_140386298 = *a3;
  }
  return result;
}

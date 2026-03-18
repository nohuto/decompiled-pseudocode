/*
 * XREFs of BcpSetCursorPosition @ 0x1402204A4
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x14021FA6C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14021FB28 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14021FE2C (BcpDisplayErrorInformation.c)
 *     BcpGetMessageOffsets @ 0x140220240 (BcpGetMessageOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402204C0 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140220678 (BgpFwDisplayBugCheckScreen.c)
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
    dword_1403352A0 = *a3;
  }
  return result;
}

/*
 * XREFs of BcpSetCursorPosition @ 0x14023A4FC
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x140239920 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1402399E4 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x140239D28 (BcpDisplayErrorInformation.c)
 *     BcpGetComponentOffsets @ 0x14023A1F4 (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14023A518 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
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
    dword_140358298 = *a3;
  }
  return result;
}

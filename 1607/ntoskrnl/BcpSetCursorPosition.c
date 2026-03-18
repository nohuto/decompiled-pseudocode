/*
 * XREFs of BcpSetCursorPosition @ 0x14023A618
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x140239A3C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140239B00 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x140239E44 (BcpDisplayErrorInformation.c)
 *     BcpGetComponentOffsets @ 0x14023A310 (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14023A634 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A7EC (BgpFwDisplayBugCheckScreen.c)
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

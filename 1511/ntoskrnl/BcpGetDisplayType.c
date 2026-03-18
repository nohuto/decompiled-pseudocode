/*
 * XREFs of BcpGetDisplayType @ 0x140220210
 * Callers:
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402204C0 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140220678 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax

  v1 = &unk_1402CF76C;
  result = 0LL;
  do
  {
    if ( *a1 < *(v1 - 1) )
      break;
    if ( a1[1] < *v1 )
      break;
    result = (unsigned int)(result + 1);
    v1 += 14;
  }
  while ( (__int64)v1 < (__int64)(&CmpClfsLogPrefix.MaximumLength + 1) );
  return result;
}

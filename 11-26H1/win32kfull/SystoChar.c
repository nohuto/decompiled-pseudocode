/*
 * XREFs of SystoChar @ 0x1401BAD70
 * Callers:
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystoChar(unsigned int a1, int a2)
{
  if ( a1 - 260 <= 3 && (a2 & 0x20000000) == 0 )
    a1 -= 4;
  return a1;
}

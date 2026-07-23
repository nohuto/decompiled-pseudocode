/*
 * XREFs of BgpGxIsRectangleValid @ 0x140239708
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 */

bool __fastcall BgpGxIsRectangleValid(__int64 a1)
{
  bool result; // al
  unsigned int BitsPerPixel; // eax
  __int64 v3; // r8

  result = 0;
  if ( a1 )
  {
    BitsPerPixel = BgpGetBitsPerPixel();
    if ( *(_DWORD *)(v3 + 8) >= BitsPerPixel || (dword_1402F9F90 & 0xC00) == 0 )
      return 1;
  }
  return result;
}

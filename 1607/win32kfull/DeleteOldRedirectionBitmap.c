/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00D7C3C
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x1C00D7C8C (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C00D8A64 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  __int64 OldRedirectionBitmap; // rdi
  unsigned int v3; // r11d

  OldRedirectionBitmap = GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
    return 1;
  }
  return v3;
}

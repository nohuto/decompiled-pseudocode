/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C000BC28
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetOldRedirectionBitmap @ 0x1C000A8A8 (SetOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C000BC64 (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 */

__int64 DeleteOldRedirectionBitmap()
{
  __int64 v0; // rcx
  __int64 OldRedirectionBitmap; // rbx
  unsigned int v2; // r11d
  __int64 v4; // rcx

  OldRedirectionBitmap = GetOldRedirectionBitmap();
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(v0);
    DeleteOrSetRedirectionBitmap(v4, OldRedirectionBitmap, 1LL);
    return 1;
  }
  return v2;
}

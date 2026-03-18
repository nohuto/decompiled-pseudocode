/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C007FFA4
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C007FFF4 (GetOldRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C0109ECC (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  __int64 OldRedirectionBitmap; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // r11d

  OldRedirectionBitmap = GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL, v3, v4);
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1);
    return 1;
  }
  return v5;
}

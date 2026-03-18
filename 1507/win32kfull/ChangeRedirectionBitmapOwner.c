/*
 * XREFs of ChangeRedirectionBitmapOwner @ 0x1C01E75FC
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0238F50 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     GreSetRedirectionBitmapOwner @ 0x1C000C124 (GreSetRedirectionBitmapOwner.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 */

__int64 __fastcall ChangeRedirectionBitmapOwner(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  HSURF RedirectionBitmap; // rax

  v2 = 0;
  if ( (*(_BYTE *)(a1 + 51) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 50) & 0x20) != 0 )
    {
      return 1;
    }
    else
    {
      RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1);
      if ( RedirectionBitmap )
        return (unsigned int)GreSetRedirectionBitmapOwner(RedirectionBitmap, -1LL, a2);
    }
  }
  return v2;
}

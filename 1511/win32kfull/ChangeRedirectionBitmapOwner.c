/*
 * XREFs of ChangeRedirectionBitmapOwner @ 0x1C01E7A6C
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0239364 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C007F5C8 (GreSetRedirectionBitmapOwner.c)
 */

__int64 __fastcall ChangeRedirectionBitmapOwner(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 RedirectionBitmap; // rax

  v2 = 0;
  if ( (*(_BYTE *)(a1 + 51) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 50) & 0x20) != 0 )
    {
      return 1;
    }
    else
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      if ( RedirectionBitmap )
        return (unsigned int)GreSetRedirectionBitmapOwner(RedirectionBitmap, -1LL, a2);
    }
  }
  return v2;
}

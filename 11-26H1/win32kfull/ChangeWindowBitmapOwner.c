/*
 * XREFs of ChangeWindowBitmapOwner @ 0x1402A4358
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1402F0210 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GreSetBitmapContentOwner @ 0x14014BC6C (GreSetBitmapContentOwner.c)
 *     GreSetLWContentOwner @ 0x140333598 (GreSetLWContentOwner.c)
 */

__int64 __fastcall ChangeWindowBitmapOwner(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int v4; // edi
  char v5; // r9
  HSURF RedirectionBitmap; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = a2;
  v5 = *(_BYTE *)(v2 + 26);
  if ( (*(_BYTE *)(v2 + 27) & 0x20) == 0 )
  {
    if ( (v5 & 8) == 0 )
      return v3;
    return (unsigned int)GreSetLWContentOwner(*(HWND *)a1);
  }
  if ( (v5 & 0x20) == 0 )
  {
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1, a2);
    if ( !RedirectionBitmap )
      return v3;
    return (unsigned int)GreSetBitmapContentOwner(RedirectionBitmap, -1LL, v4);
  }
  return 1;
}

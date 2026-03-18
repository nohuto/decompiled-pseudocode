/*
 * XREFs of _GetLayeredWindowAttributes @ 0x1C01E7D50
 * Callers:
 *     NtUserGetLayeredWindowAttributes @ 0x1C021AEC0 (NtUserGetLayeredWindowAttributes.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C006BF30 (GetRedirectionFlags.c)
 *     GreGetSpriteAttributes @ 0x1C007F8F0 (GreGetSpriteAttributes.c)
 */

__int64 __fastcall GetLayeredWindowAttributes(__int64 a1, unsigned int *a2, BYTE *a3, unsigned int *a4)
{
  unsigned int SpriteAttributes; // edi
  int v9; // eax
  _DWORD *v10; // r8
  struct _BLENDFUNCTION v12; // [rsp+60h] [rbp+8h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(a1 + 50) & 8) != 0 )
  {
    if ( (GetRedirectionFlags(a1) & 1) != 0 )
    {
      v9 = IsWindowDesktopComposed(a1);
      SpriteAttributes = GreGetSpriteAttributes((HDEV)*gpDispInfo, *(struct PDEVOBJ **)a1, v10, a2, &v12, a4, v9);
      if ( SpriteAttributes )
        *a3 = v12.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return SpriteAttributes;
}

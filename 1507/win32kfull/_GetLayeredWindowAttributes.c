/*
 * XREFs of _GetLayeredWindowAttributes @ 0x1C01E78E0
 * Callers:
 *     NtUserGetLayeredWindowAttributes @ 0x1C021B130 (NtUserGetLayeredWindowAttributes.c)
 * Callees:
 *     GreGetSpriteAttributes @ 0x1C000BC90 (GreGetSpriteAttributes.c)
 *     GetRedirectionFlags @ 0x1C005945C (GetRedirectionFlags.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall GetLayeredWindowAttributes(__int64 a1, unsigned int *a2, BYTE *a3, unsigned int *a4)
{
  unsigned int SpriteAttributes; // edi
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // r8
  struct _BLENDFUNCTION v13; // [rsp+60h] [rbp+8h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(a1 + 50) & 8) != 0 )
  {
    if ( (GetRedirectionFlags(a1) & 1) != 0 )
    {
      v10 = IsWindowDesktopComposed(v9);
      SpriteAttributes = GreGetSpriteAttributes((HDEV)*gpDispInfo, *(struct PDEVOBJ **)a1, v11, a2, &v13, a4, v10);
      if ( SpriteAttributes )
        *a3 = v13.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return SpriteAttributes;
}

/*
 * XREFs of _GetLayeredWindowAttributes @ 0x1400420F0
 * Callers:
 *     NtUserGetLayeredWindowAttributes @ 0x1402B3F60 (NtUserGetLayeredWindowAttributes.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GreGetSpriteAttributes @ 0x140041B20 (GreGetSpriteAttributes.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 */

__int64 __fastcall GetLayeredWindowAttributes(__int64 a1, unsigned int *a2, BYTE *a3, unsigned int *a4)
{
  unsigned int SpriteAttributes; // ebx
  int v10; // eax
  Gre::Base *v11; // rdi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // r8
  struct _BLENDFUNCTION v17; // [rsp+60h] [rbp+8h] BYREF

  SpriteAttributes = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
  {
    if ( (GetRedirectionFlags(a1) & 1) != 0 )
    {
      v17 = 0;
      v10 = IsWindowDesktopComposed(a1);
      v11 = *(Gre::Base **)a1;
      v12 = v10;
      UserSessionState = W32GetUserSessionState(v14, v13);
      SpriteAttributes = GreGetSpriteAttributes(
                           *(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                           v11,
                           v16,
                           a2,
                           &v17,
                           a4,
                           v12);
      if ( SpriteAttributes )
        *a3 = v17.SourceConstantAlpha;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return SpriteAttributes;
}

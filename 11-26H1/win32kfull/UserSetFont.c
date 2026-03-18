/*
 * XREFs of UserSetFont @ 0x1401249BC
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1400CE68C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x14010FAD4 (GreMarkDeletableFont.c)
 *     CreateFontFromUserProfile @ 0x140123A40 (CreateFontFromUserProfile.c)
 *     Get96DpiServerInfo @ 0x140302324 (Get96DpiServerInfo.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
 */

struct HLFONT__ *__fastcall UserSetFont(struct _UNICODE_STRING *a1, _OWORD *a2, unsigned int a3, struct HLFONT__ **a4)
{
  struct HLFONT__ *result; // rax
  __int64 v6; // rcx
  struct HLFONT__ *v7; // rsi
  __int64 SessionDpiServerInfo; // rax
  struct HLFONT__ *v9; // rdi

  result = CreateFontFromUserProfile(a1, a2, a3);
  v7 = result;
  if ( result )
  {
    if ( *a4 )
    {
      SessionDpiServerInfo = GetSessionDpiServerInfo(v6);
      v9 = *a4;
      if ( *a4 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24)
        && v9 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 24) )
      {
        GreMarkDeletableFont(v9);
        GreDeleteObject(*a4);
      }
    }
    *a4 = v7;
    return (struct HLFONT__ *)1;
  }
  return result;
}

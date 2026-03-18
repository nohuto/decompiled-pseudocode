/*
 * XREFs of UserSetAltScaleFont @ 0x14012478C
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1400CE68C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(Gre::Base *a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  INT v10; // eax
  __int64 FontIndirectW; // rax
  INT a[23]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = 0;
  v14 = 0;
  if ( !(unsigned int)GreExtGetObjectW(a1, 96, a) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  a[0] = EngMulDiv(a[0], 96, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6998LL));
  v9 = W32GetUserSessionState(v8, v7);
  v10 = EngMulDiv(a[1], 96, *(unsigned __int16 *)(*(_QWORD *)(v9 + 19904) + 6998LL));
  v14 = 257;
  a[1] = v10;
  FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
  *a2 = FontIndirectW;
  LOBYTE(v2) = FontIndirectW != 0;
  return v2;
}

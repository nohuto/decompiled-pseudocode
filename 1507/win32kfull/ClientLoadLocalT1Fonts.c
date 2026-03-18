/*
 * XREFs of ClientLoadLocalT1Fonts @ 0x1C013BAEC
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C013B4F0 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientLoadLocalT1Fonts(__int64 a1, __int64 a2)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(76LL);
  KeUserModeCallback(76LL, 0LL, 0LL, &v4, &v3);
  EtwTraceEndCallback(76LL);
  return EnterCrit(1LL);
}

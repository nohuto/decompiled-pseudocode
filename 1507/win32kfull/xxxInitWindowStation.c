/*
 * XREFs of xxxInitWindowStation @ 0x1C0138550
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 * Callees:
 *     xxxSetWindowNCMetrics @ 0x1C00FC280 (xxxSetWindowNCMetrics.c)
 *     SetMinMetrics @ 0x1C01335D4 (SetMinMetrics.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0136F20 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C01372AC (SetIconMetrics.c)
 *     FinalUserInit @ 0x1C0138628 (FinalUserInit.c)
 *     NlsKbdInitializePerSystem @ 0x1C0138854 (NlsKbdInitializePerSystem.c)
 *     SetKeyboardRate @ 0x1C0138A40 (SetKeyboardRate.c)
 */

__int64 __fastcall xxxInitWindowStation(__int64 a1, __int64 a2, __int64 a3)
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF

  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v13, a2, a3);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL);
  SetKeyboardRate(v5, v4, v6);
  if ( (_BYTE)gKeyboardInfo == 3 )
    gapulCvt_VK = &gapulCvt_VK_84;
  if ( (_WORD)gKeyboardInfo == 775 )
    gapulCvt_VK = &gapulCvt_VK_IBM02;
  NlsKbdInitializePerSystem(v8, v7);
  xxxLoadSomeStrings();
  v9 = xxxSetWindowNCMetrics((__int64)ProfileUserName, 0LL, 1, -1);
  if ( v9 )
  {
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    v9 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v9 )
    {
      v9 = FinalUserInit(v11, v10);
      if ( v9 )
        *(_DWORD *)(gpsi + 4248LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v13);
  return v9;
}

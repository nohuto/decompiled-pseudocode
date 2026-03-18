/*
 * XREFs of xxxInitWindowStation @ 0x1C00BC2F0
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 * Callees:
 *     SetMinMetrics @ 0x1C008E908 (SetMinMetrics.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0090730 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x1C00B9BDC (SetIconMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00B9EA0 (xxxSetWindowNCMetrics.c)
 *     FinalUserInit @ 0x1C00BC3C8 (FinalUserInit.c)
 *     NlsKbdInitializePerSystem @ 0x1C00BC5F4 (NlsKbdInitializePerSystem.c)
 *     SetKeyboardRate @ 0x1C00BC7DC (SetKeyboardRate.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v9);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL);
  SetKeyboardRate(v2, v1);
  if ( (_BYTE)gKeyboardInfo == 3 )
    gapulCvt_VK = &gapulCvt_VK_84;
  if ( (_WORD)gKeyboardInfo == 775 )
    gapulCvt_VK = &gapulCvt_VK_IBM02;
  NlsKbdInitializePerSystem(v4, v3);
  xxxLoadSomeStrings();
  v5 = xxxSetWindowNCMetrics((__int64)ProfileUserName, 0LL, 1, -1);
  if ( v5 )
  {
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    v5 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v5 )
    {
      v5 = FinalUserInit(v7, v6);
      if ( v5 )
        *(_DWORD *)(gpsi + 5640LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v9);
  return v5;
}

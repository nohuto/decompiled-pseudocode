/*
 * XREFs of xxxInitWindowStation @ 0x1C00D7374
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 * Callees:
 *     SetIconMetrics @ 0x1C00D0E24 (SetIconMetrics.c)
 *     FinalUserInit @ 0x1C00D744C (FinalUserInit.c)
 *     SetMinMetrics @ 0x1C00D7844 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00D7C00 (xxxSetWindowNCMetrics.c)
 *     NlsKbdInitializePerSystem @ 0x1C00D8C64 (NlsKbdInitializePerSystem.c)
 *     SetKeyboardRate @ 0x1C00D8E4C (SetKeyboardRate.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0123214 (-xxxLoadSomeStrings@@YAXXZ.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *ProfileUserName; // rdi
  unsigned int v1; // ebx
  _BYTE v3[40]; // [rsp+30h] [rbp-28h] BYREF

  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v3);
  FastGetProfileIntFromID(ProfileUserName, 2LL, 606LL, 0LL, &guDdeSendTimeout, 0);
  SetKeyboardRate();
  if ( (_BYTE)gKeyboardInfo == 3 )
    gapulCvt_VK = &gapulCvt_VK_84;
  if ( (_WORD)gKeyboardInfo == 775 )
    gapulCvt_VK = &gapulCvt_VK_IBM02;
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  v1 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, 1LL);
  if ( v1 )
  {
    SetMinMetrics(ProfileUserName, 0LL);
    v1 = SetIconMetrics(ProfileUserName, 0LL);
    if ( v1 )
    {
      v1 = FinalUserInit();
      if ( v1 )
        *(_DWORD *)(gpsi + 4248LL) = 1;
    }
  }
  FreeProfileUserName(ProfileUserName, v3);
  return v1;
}

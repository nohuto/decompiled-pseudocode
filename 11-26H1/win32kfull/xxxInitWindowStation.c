/*
 * XREFs of xxxInitWindowStation @ 0x1400CC898
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetKeyboardRate @ 0x1400CC780 (SetKeyboardRate.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1400CC9A8 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1400CE144 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1400CE450 (SetMinMetrics.c)
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]

  v10 = -1LL;
  v9 = 0LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v9);
  FastGetProfileIntFromID(v0, 2LL, 606LL);
  UserSessionState = W32GetUserSessionState(v2, v1);
  SetKeyboardRate(*(unsigned int *)(UserSessionState + 12868), v4);
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized() || (v5 = xxxSetWindowNCMetrics(v0, 0LL)) != 0 )
  {
    SetMinMetrics(v0);
    v5 = SetIconMetrics(v0);
    if ( v5 )
    {
      v5 = FinalUserInit();
      if ( v5 )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 6984LL) = 1;
    }
  }
  if ( v10 != -1 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v9);
  return v5;
}

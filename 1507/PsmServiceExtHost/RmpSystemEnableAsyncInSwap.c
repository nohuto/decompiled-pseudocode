/*
 * XREFs of RmpSystemEnableAsyncInSwap @ 0x1800426F4
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

char RmpSystemEnableAsyncInSwap()
{
  int v0; // ebx
  int v1; // eax
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v7; // [rsp+38h] [rbp-29h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v9[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  _QWORD SystemInformation[3]; // [rsp+58h] [rbp-9h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+1Fh] BYREF
  int *v14; // [rsp+A0h] [rbp+3Fh]
  __int64 v15; // [rsp+A8h] [rbp+47h]

  TokenHandle = 0LL;
  v0 = 0;
  v1 = ImpersonateSelf(SecurityImpersonation);
  if ( v1 )
  {
    v0 = 1;
    v1 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, &TokenHandle);
    v7 = v1;
    if ( v1 >= 0 )
    {
      v10 = 13LL;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v1 = NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL);
      v7 = v1;
      if ( !v1 )
      {
        v9[0] = 16777218;
        SystemInformation[0] = 0x1300000001LL;
        SystemInformation[1] = v9;
        SystemInformation[2] = 8LL;
        v9[1] = 1;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
        v7 = v1;
      }
    }
  }
  else
  {
    v7 = -1073741555;
  }
  v2 = (const struct _TlgProvider_t *)TokenHandle;
  if ( TokenHandle )
    LOBYTE(v1) = NtClose(TokenHandle);
  if ( v0 )
    LOBYTE(v1) = RevertToSelf();
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    LOBYTE(v1) = TlgKeywordOn(v2, 1uLL);
    if ( (_BYTE)v1 )
    {
      v15 = 4LL;
      v14 = &v7;
      LOBYTE(v1) = TlgWrite(v3, &unk_18005CF82, v4, v5, 3u, &pData);
    }
  }
  return v1;
}

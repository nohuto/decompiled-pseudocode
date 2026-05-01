/*
 * XREFs of RmpSystemEnableAsyncInSwap @ 0x180037828
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001E19C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
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
  __int64 v8; // [rsp+40h] [rbp-21h] BYREF
  void *TokenHandle[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD SystemInformation[3]; // [rsp+58h] [rbp-9h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+1Fh] BYREF
  int *v13; // [rsp+A0h] [rbp+3Fh]
  __int64 v14; // [rsp+A8h] [rbp+47h]

  TokenHandle[0] = 0LL;
  v0 = 0;
  v1 = ImpersonateSelf(SecurityImpersonation);
  if ( v1 )
  {
    v0 = 1;
    v1 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, TokenHandle);
    v7 = v1;
    if ( v1 >= 0 )
    {
      TokenHandle[1] = (void *)13;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v1 = NtAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, 0LL, 0LL);
      v7 = v1;
      if ( !v1 )
      {
        SystemInformation[1] = &v8;
        SystemInformation[0] = 0x1300000001LL;
        v8 = 0x101000002LL;
        SystemInformation[2] = 8LL;
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
  v2 = (const struct _TlgProvider_t *)TokenHandle[0];
  if ( TokenHandle[0] )
    LOBYTE(v1) = NtClose(TokenHandle[0]);
  if ( v0 )
    LOBYTE(v1) = RevertToSelf();
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    LOBYTE(v1) = TlgKeywordOn(v2, 1uLL);
    if ( (_BYTE)v1 )
    {
      v14 = 4LL;
      v13 = &v7;
      LOBYTE(v1) = TlgWrite(v3, &unk_180043542, v4, v5, 3u, &pData);
    }
  }
  return v1;
}

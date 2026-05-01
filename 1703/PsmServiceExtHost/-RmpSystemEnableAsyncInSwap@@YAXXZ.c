/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x180037A40
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001F898 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // ebx
  NTSTATUS v1; // eax
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  NTSTATUS v6; // [rsp+38h] [rbp-39h] BYREF
  __int64 v7; // [rsp+40h] [rbp-31h] BYREF
  void *TokenHandle[2]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD SystemInformation[3]; // [rsp+58h] [rbp-19h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+Fh] BYREF
  NTSTATUS *v12; // [rsp+A0h] [rbp+2Fh]
  __int64 v13; // [rsp+A8h] [rbp+37h]

  TokenHandle[0] = 0LL;
  v0 = 0;
  if ( ImpersonateSelf(SecurityImpersonation) )
  {
    v0 = 1;
    v6 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, TokenHandle);
    if ( v6 >= 0 )
    {
      TokenHandle[1] = (void *)13;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v6 = NtAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, 0LL, 0LL);
      if ( !v6 )
      {
        SystemInformation[1] = &v7;
        SystemInformation[0] = 0x1300000001LL;
        v7 = 0x101000003LL;
        SystemInformation[2] = 8LL;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
        v6 = v1;
      }
    }
  }
  else
  {
    v6 = -1073741555;
  }
  v2 = (const struct _TlgProvider_t *)TokenHandle[0];
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( v0 )
    RevertToSelf();
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v2, 1uLL) )
    {
      v13 = 4LL;
      v12 = &v6;
      TlgWrite(v3, &unk_180044570, v4, v5, 3u, &pData);
    }
  }
}

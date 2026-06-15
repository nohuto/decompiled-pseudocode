/*
 * XREFs of ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000A340
 * Callers:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z @ 0x18006A94C (-RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenInformation(
        HANDLE TokenHandle,
        HLOCAL *a2,
        unsigned int *a3,
        HLOCAL *a4,
        unsigned int *TokenInformation)
{
  PSID *v9; // r12
  _QWORD *v10; // r15
  DWORD LastError; // edi
  void *v13; // rcx
  BOOL v14; // edi
  HLOCAL v15; // [rsp+30h] [rbp-20h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp-18h] BYREF
  PSID Sid[2]; // [rsp+40h] [rbp-10h] BYREF
  DWORD TokenInformationLength; // [rsp+98h] [rbp+48h] BYREF
  int v19; // [rsp+A8h] [rbp+58h] BYREF

  hMem = 0LL;
  v15 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 )
  {
    TokenInformationLength = 0;
    if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
      goto LABEL_33;
    LastError = GetLastError();
    if ( LastError != 122 )
      goto LABEL_15;
    v9 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
    if ( !v9 )
      goto LABEL_34;
    if ( !GetTokenInformation(TokenHandle, TokenUser, v9, TokenInformationLength, &TokenInformationLength)
      || !ConvertSidToStringSidW(*v9, (LPWSTR *)&hMem) )
    {
      goto LABEL_23;
    }
  }
  if ( a3 )
  {
    TokenInformationLength = 4;
    if ( !GetTokenInformation(TokenHandle, TokenIsAppContainer, a3, 4u, &TokenInformationLength) )
      goto LABEL_23;
  }
  if ( TokenInformation )
  {
    TokenInformationLength = 4;
    if ( !GetTokenInformation(TokenHandle, TokenSessionId, TokenInformation, 4u, &TokenInformationLength) )
      goto LABEL_23;
  }
  if ( a4 )
  {
    TokenInformationLength = 0;
    if ( !GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, &TokenInformationLength) )
    {
      LastError = GetLastError();
      if ( LastError != 122 )
        goto LABEL_15;
      v10 = LocalAlloc(0x40u, TokenInformationLength);
      if ( v10 )
      {
        if ( GetTokenInformation(
               TokenHandle,
               (TOKEN_INFORMATION_CLASS)(LastError - 91),
               v10,
               TokenInformationLength,
               &TokenInformationLength) )
        {
          if ( !*v10 )
            goto LABEL_10;
          if ( (int)RtlGetAppContainerSidType(*v10, &v19) >= 0 )
          {
            v13 = (void *)*v10;
            if ( v19 == 1 )
            {
              Sid[0] = 0LL;
              if ( (int)RtlGetAppContainerParent(v13, Sid) >= 0 )
              {
                v14 = ConvertSidToStringSidW(Sid[0], (LPWSTR *)&v15);
                RtlFreeSid(Sid[0]);
                if ( v14 )
                  goto LABEL_10;
              }
            }
            else if ( ConvertSidToStringSidW(v13, (LPWSTR *)&v15) )
            {
              goto LABEL_10;
            }
          }
        }
LABEL_23:
        LastError = GetLastError();
        goto LABEL_15;
      }
LABEL_34:
      LastError = 14;
      goto LABEL_15;
    }
LABEL_33:
    LastError = 1337;
    goto LABEL_15;
  }
LABEL_10:
  LastError = 0;
  if ( a2 )
    *a2 = hMem;
  if ( a4 )
    *a4 = v15;
  hMem = 0LL;
  v15 = 0LL;
LABEL_15:
  LocalFree(hMem);
  LocalFree(v15);
  LocalFree(v9);
  LocalFree(v10);
  return LastError;
}

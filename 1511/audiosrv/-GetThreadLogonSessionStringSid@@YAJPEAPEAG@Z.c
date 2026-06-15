/*
 * XREFs of ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18002BAB0
 * Callers:
 *     AudioServerCreateStream @ 0x18002B8A0 (AudioServerCreateStream.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall GetThreadLogonSessionStringSid(unsigned __int16 **a1)
{
  unsigned int *v2; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+10h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+18h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  v2 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
LABEL_20:
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError <= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( GetTokenInformation(TokenHandle, TokenGroups, 0LL, 0, &TokenInformationLength) )
    goto LABEL_36;
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError != 122 )
  {
    if ( LastError <= 0 )
      goto LABEL_27;
LABEL_26:
    v5 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_27;
  }
  v2 = (unsigned int *)CoTaskMemAlloc(TokenInformationLength);
  if ( v2 )
  {
LABEL_36:
    if ( GetTokenInformation(TokenHandle, TokenGroups, v2, TokenInformationLength, &TokenInformationLength) )
    {
      v6 = *v2;
      v7 = 0;
      if ( *v2 )
      {
        v8 = v2 + 4;
        do
        {
          if ( (*v8 & 0xC0000000) == 0xC0000000 )
            break;
          ++v7;
          v8 += 4;
        }
        while ( v7 < v6 );
      }
      if ( v7 >= v6 )
      {
        v5 = 1365;
        goto LABEL_13;
      }
      if ( ConvertSidToStringSidW(*(PSID *)&v2[4 * v7 + 2], &StringSid) )
      {
        v5 = 0;
        *a1 = StringSid;
        goto LABEL_13;
      }
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        goto LABEL_26;
LABEL_27:
      if ( v5 >= 0 )
        goto LABEL_13;
      goto LABEL_28;
    }
    goto LABEL_20;
  }
  v5 = -2147024882;
LABEL_28:
  if ( StringSid )
  {
    LocalFree(StringSid);
    StringSid = 0LL;
  }
LABEL_13:
  if ( v2 )
    CoTaskMemFree(v2);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}

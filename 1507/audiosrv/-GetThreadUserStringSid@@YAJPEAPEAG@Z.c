/*
 * XREFs of ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180036C4C
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x1800358E0 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall GetThreadUserStringSid(unsigned __int16 **a1)
{
  PSID *v1; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF

  TokenHandle = 0LL;
  v1 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
LABEL_15:
    LastError = GetLastError();
    v5 = LastError;
LABEL_19:
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
LABEL_8:
    if ( v5 >= 0 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
    goto LABEL_27;
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError != 122 )
    goto LABEL_19;
  v1 = (PSID *)CoTaskMemAlloc(TokenInformationLength);
  if ( v1 )
  {
LABEL_27:
    if ( GetTokenInformation(TokenHandle, TokenUser, v1, TokenInformationLength, &TokenInformationLength)
      && ConvertSidToStringSidW(*v1, &StringSid) )
    {
      v5 = 0;
      *a1 = StringSid;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  v5 = -2147024882;
LABEL_17:
  if ( StringSid )
  {
    LocalFree(StringSid);
    StringSid = 0LL;
  }
LABEL_9:
  if ( v1 )
    CoTaskMemFree(v1);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}

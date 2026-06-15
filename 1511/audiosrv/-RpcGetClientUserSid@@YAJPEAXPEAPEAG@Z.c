/*
 * XREFs of ?RpcGetClientUserSid@@YAJPEAXPEAPEAG@Z @ 0x18006948C
 * Callers:
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x18007C858 (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18002C800 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 */

__int64 __fastcall RpcGetClientUserSid(void *a1, HLOCAL *a2)
{
  unsigned int v3; // ebx
  HANDLE CurrentThread; // rax
  unsigned int TokenInformation; // eax
  void *TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  v3 = RpcImpersonateClient(a1);
  if ( !v3 )
  {
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      TokenInformation = GetTokenInformation(TokenHandle, a2, 0LL, 0LL, 0LL);
    else
      TokenInformation = GetLastError();
    v3 = TokenInformation;
    RpcRevertToSelf();
  }
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  return v3;
}

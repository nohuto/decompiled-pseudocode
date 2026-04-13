/*
 * XREFs of sub_180020568 @ 0x180020568
 * Callers:
 *     sub_180020504 @ 0x180020504 (sub_180020504.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180020568(HANDLE ProcessHandle, bool *a2)
{
  signed int LastError; // eax
  signed int v5; // ebx
  signed int v6; // eax
  char *v7; // rcx
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  DWORD ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  *a2 = 0;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (HANDLE)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    goto LABEL_6;
  }
  LastError = 0;
LABEL_6:
  v5 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v5 = LastError;
  if ( v5 >= 0 )
  {
    TokenInformation = 0;
    if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
    {
      v5 = 0;
      *a2 = TokenInformation != 0;
    }
    else
    {
      v6 = GetLastError();
      v5 = (unsigned __int16)v6 | 0x80070000;
      if ( v6 <= 0 )
        v5 = v6;
      if ( v5 >= 0 )
        v5 = -2147467259;
    }
  }
  v7 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)v5;
}

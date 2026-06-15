/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18001B9BC
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001CE08 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionRefreshSessionInformation(struct TSSession *a1)
{
  DWORD v1; // edx
  DWORD v2; // ebx
  DWORD LastError; // eax
  WCHAR *v5; // rcx
  DWORD v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v8 = 0LL;
  if ( WTSQuerySessionInformationW(0LL, v1, WTSSessionInfo, (LPWSTR *)&v8, &v7) )
  {
    v5 = (WCHAR *)_InterlockedExchange64((volatile __int64 *)a1 + 5, v8);
    v8 = (__int64)v5;
  }
  else
  {
    LastError = GetLastError();
    v5 = (WCHAR *)v8;
    v2 = LastError;
  }
  if ( v5 )
    WTSFreeMemory(v5);
  return v2;
}

/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003EEF4
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003E6B0 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionRefreshSessionInformation(struct TSSession *a1)
{
  DWORD v1; // edx
  DWORD v2; // ebx
  WCHAR *v4; // rcx
  DWORD LastError; // eax
  DWORD v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v8 = 0LL;
  if ( WTSQuerySessionInformationW(0LL, v1, WTSSessionInfo, (LPWSTR *)&v8, &v7) )
  {
    v4 = (WCHAR *)_InterlockedExchange64((volatile __int64 *)a1 + 5, v8);
    v8 = (__int64)v4;
  }
  else
  {
    LastError = GetLastError();
    v4 = (WCHAR *)v8;
    v2 = LastError;
  }
  if ( v4 )
    WTSFreeMemory(v4);
  return v2;
}

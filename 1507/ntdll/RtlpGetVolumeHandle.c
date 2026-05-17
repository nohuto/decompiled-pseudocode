/*
 * XREFs of RtlpGetVolumeHandle @ 0x180081340
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180081220 (RtlpDiskSpeedInitialize.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000392C (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 */

__int64 __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  wchar_t *v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+60h] [rbp-29h] BYREF
  wchar_t *v8; // [rsp+68h] [rbp-21h]
  __int64 v9; // [rsp+70h] [rbp-19h] BYREF
  int v10; // [rsp+78h] [rbp-11h] BYREF
  __int64 v11; // [rsp+80h] [rbp-9h]
  int *v12; // [rsp+88h] [rbp-1h]
  int v13; // [rsp+90h] [rbp+7h]
  __int128 v14; // [rsp+98h] [rbp+Fh]
  _BYTE v15[16]; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  v9 = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v7 = 0;
  v4 = 0x7FFFLL;
  v8 = 0LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    LOWORD(v7) = 2 * (0x7FFF - v4);
    HIWORD(v7) = v7 + 2;
    v8 = pszDest;
  }
  v10 = 48;
  v11 = 0LL;
  v13 = 64;
  v12 = &v7;
  v14 = 0LL;
  result = ZwCreateFile(&v9, 1048704LL, &v10, v15, 0LL, 0, 7, 1, 32, 0LL, 0);
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}

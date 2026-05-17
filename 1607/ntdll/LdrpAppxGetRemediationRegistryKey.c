/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800CF3B0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A8630 (NtOpenKeyEx.c)
 *     RtlStringCbPrintfW @ 0x1800CF660 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  wchar_t *v3; // rdx
  int *v4; // rax
  int v5; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t *v6; // [rsp+28h] [rbp-D8h]
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-C8h]
  int v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+48h] [rbp-B8h]
  int *v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+60h] [rbp-A0h]
  wchar_t Buffer[264]; // [rsp+70h] [rbp-90h] BYREF

  v7 = 10616992;
  v8 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange";
  if ( a1 == -1073740702 )
  {
    result = RtlStringCbPrintfW(Buffer);
    if ( (int)result < 0 )
      return result;
    v5 = 0;
    v2 = 0x7FFFLL;
    v6 = 0LL;
    v3 = Buffer;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    if ( !v2 )
      return 3221225485LL;
    LOWORD(v5) = 2 * (0x7FFF - v2);
    HIWORD(v5) = v5 + 2;
    v6 = Buffer;
    v4 = &v5;
  }
  else
  {
    v4 = &v7;
  }
  v10 = 0LL;
  v9 = 48;
  v12 = 64;
  v11 = v4;
  v13 = 0LL;
  return NtOpenKeyEx();
}

/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800BB2B0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800BADC0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800949C0 (NtOpenKeyEx.c)
 *     RtlStringCbPrintfW @ 0x1800BB560 (RtlStringCbPrintfW.c)
 */

NTSTATUS __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  wchar_t *v6; // rdx
  ACCESS_MASK v7; // edx
  _UNICODE_STRING *v8; // rax
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t *v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-C8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[264]; // [rsp+70h] [rbp-90h] BYREF

  v11 = 10616992;
  v12 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange";
  if ( a1 == -1073740702 )
  {
    result = RtlStringCbPrintfW(Buffer);
    if ( result < 0 )
      return result;
    v9 = 0;
    v5 = 0x7FFFLL;
    v10 = 0LL;
    v6 = Buffer;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    if ( !v5 )
      return -1073741811;
    v7 = 131353;
    LOWORD(v9) = 2 * (0x7FFF - v5);
    HIWORD(v9) = v9 + 2;
    v10 = Buffer;
    v8 = (_UNICODE_STRING *)&v9;
  }
  else
  {
    v8 = (_UNICODE_STRING *)&v11;
    v7 = 131097;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return NtOpenKeyEx(a3, v7, &ObjectAttributes, 0);
}

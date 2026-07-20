/*
 * XREFs of sub_140010B58 @ 0x140010B58
 * Callers:
 *     sub_1400099C4 @ 0x1400099C4 (sub_1400099C4.c)
 *     sub_140010720 @ 0x140010720 (sub_140010720.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140010B58(__int64 a1, struct _UNICODE_STRING *a2, const WCHAR *a3, struct _UNICODE_STRING *a4)
{
  NTSTATUS result; // eax
  const WCHAR *Buffer; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING Source; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+64h] [rbp-9Ch]
  _BYTE v13[516]; // [rsp+6Ch] [rbp-94h] BYREF
  char v14; // [rsp+270h] [rbp+170h] BYREF

  ResultLength = 528;
  result = NtQueryValueKey(Handle, a2, KeyValuePartialInformation, KeyValueInformation, 0x210u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v12 == 2 )
    {
      *(_DWORD *)&Destination.Length = 33816576;
      Source.Length = ResultLength - 12;
      Source.MaximumLength = ResultLength - 12;
      Source.Buffer = (PWSTR)v13;
      Destination.Buffer = (PWSTR)&v14;
      result = RtlExpandEnvironmentStrings_U(0LL, &Source, &Destination, 0LL);
      if ( result >= 0 )
      {
        Buffer = Destination.Buffer;
        goto LABEL_7;
      }
    }
    else if ( v12 == 1 )
    {
      Buffer = (const WCHAR *)v13;
LABEL_7:
      if ( Buffer )
        return RtlDosPathNameToNtPathName_U(Buffer, a4, 0LL, 0LL) == 0 ? 0xC0000001 : 0;
    }
  }
  if ( !a3 )
    return result;
  Buffer = a3;
  return RtlDosPathNameToNtPathName_U(Buffer, a4, 0LL, 0LL) == 0 ? 0xC0000001 : 0;
}

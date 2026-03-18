/*
 * XREFs of LocalConvertSidToStringSidW @ 0x1406CB414
 * Callers:
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x1406CB818 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140123470 (RtlStringCbCopyNW.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     SddlpAlloc @ 0x1404D7574 (SddlpAlloc.c)
 */

NTSTATUS __fastcall LocalConvertSidToStringSidW(PSID Sid, wchar_t **a2)
{
  NTSTATUS result; // eax
  size_t Length; // rdi
  wchar_t *v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    Length = UnicodeString.Length;
    v5 = (wchar_t *)SddlpAlloc(UnicodeString.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = RtlStringCbCopyNW(v5, Length + 2, UnicodeString.Buffer, Length);
      if ( result >= 0 )
      {
        RtlFreeAnsiString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}

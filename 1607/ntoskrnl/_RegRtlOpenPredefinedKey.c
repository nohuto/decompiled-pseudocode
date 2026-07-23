/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x14057C0D4
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x1404DD8A0 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x1403F68E0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, HANDLE *a2)
{
  UNICODE_STRING *p_UnicodeString; // rdx
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  UnicodeString.Length = 0;
  switch ( a1 )
  {
    case 2147483650LL:
      p_UnicodeString = (UNICODE_STRING *)L"\"$";
LABEL_3:
      v4 = RegRtlOpenKeyTransacted(0LL, p_UnicodeString->Buffer, 0, 0x2000000u, a2, 0LL);
      goto LABEL_4;
    case 2147483648LL:
      p_UnicodeString = (UNICODE_STRING *)L"DF";
      goto LABEL_3;
    case 2147483651LL:
      p_UnicodeString = (UNICODE_STRING *)&unk_14025AFD8;
      goto LABEL_3;
    case 2147483653LL:
      p_UnicodeString = (UNICODE_STRING *)&unk_14025D778;
      goto LABEL_3;
  }
  if ( a1 != 2147483649LL )
  {
    v4 = -1073741816;
    goto LABEL_4;
  }
  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    p_UnicodeString = &UnicodeString;
    goto LABEL_3;
  }
LABEL_4:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v4;
}

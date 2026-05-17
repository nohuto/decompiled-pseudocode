/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x18001FB60
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x180049B90 (RtlOpenCurrentUser.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x18001FC70 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001FD80 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  unsigned __int16 *StringRoutine; // rax
  unsigned __int16 *Buffer; // rax
  unsigned __int64 v8; // rdx
  NTSTATUS v9; // edi
  int v10; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-90h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = NtQueryInformationToken(-6LL, 1LL, Sid);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v10);
    if ( (int)result >= 0 )
    {
      v4 = v10;
      UnicodeString->Length = 0;
      v5 = (unsigned __int16)(v4 + 34);
      UnicodeString->MaximumLength = v5;
      StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v5, v3);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(&UnicodeString->Length, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v8 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v4;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v8];
        v9 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v9 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v9;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}

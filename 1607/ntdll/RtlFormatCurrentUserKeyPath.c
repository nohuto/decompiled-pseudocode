/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x180015290
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x180071890 (RtlOpenCurrentUser.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013D30 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  SIZE_T v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi
  ULONG StringLength; // [rsp+30h] [rbp-98h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Sid, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &StringLength);
    if ( result >= 0 )
    {
      v3 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      CurrentUserKeyPath->MaximumLength = v4;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
      CurrentUserKeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v7 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v3;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v8;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}

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

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  unsigned __int16 *StringRoutine; // rax
  unsigned __int16 *Buffer; // rax
  unsigned __int64 v8; // rdx
  int v9; // edi
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
      v4 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v5 = (unsigned __int16)(v4 + 34);
      CurrentUserKeyPath->MaximumLength = v5;
      StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v5, v3);
      CurrentUserKeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v8 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v4;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v8];
        v9 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v9 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v9;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}

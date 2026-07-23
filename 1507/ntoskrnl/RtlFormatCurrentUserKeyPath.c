/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x1404FF914
 * Callers:
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x14056CE38 (RtlOpenCurrentUser.c)
 *     _RegRtlOpenPredefinedKey @ 0x1405BEBB8 (_RegRtlOpenPredefinedKey.c)
 *     AslRegistryBuildUserPath @ 0x1405C5300 (AslRegistryBuildUserPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x14017F410 (ZwQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1405009D4 (RtlLengthSidAsUnicodeString.c)
 */

NTSTATUS __stdcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING KeyPath)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi
  ULONG StringLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Sid, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &StringLength);
    if ( result >= 0 )
    {
      v3 = StringLength;
      KeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      KeyPath->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      KeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(KeyPath, L"\\REGISTRY\\USER\\");
        Buffer = KeyPath->Buffer;
        v7 = (unsigned __int64)KeyPath->Length >> 1;
        UnicodeString.MaximumLength = v3;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(KeyPath);
        else
          KeyPath->Length += UnicodeString.Length;
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

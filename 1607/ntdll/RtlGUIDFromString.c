/*
 * XREFs of RtlGUIDFromString @ 0x18005E520
 * Callers:
 *     RtlQueryPackageClaims @ 0x18005E0C0 (RtlQueryPackageClaims.c)
 * Callees:
 *     ScanHexFormat @ 0x18005E72C (ScanHexFormat.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlGUIDFromString(PUNICODE_STRING GuidString, PGUID Guid)
{
  unsigned __int16 *p_Data2; // r8
  int v4; // ebx
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned __int8 *Data4; // rcx
  unsigned __int8 *v9; // rdx
  __int16 v11; // [rsp+78h] [rbp+37h] BYREF
  __int64 v12; // [rsp+7Ah] [rbp+39h] BYREF
  int v13; // [rsp+82h] [rbp+41h] BYREF
  __int16 v14; // [rsp+86h] [rbp+45h] BYREF

  p_Data2 = &Guid->Data2;
  v12 = 0LL;
  v13 = 0;
  v4 = 0;
  v14 = 0;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v11 = 0;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v11,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       &v13,
                       (char *)&v13 + 2,
                       &v14) == -1 )
    return -1073741811;
  Data4 = Guid->Data4;
  v9 = (unsigned __int8 *)&v11;
  do
  {
    ++v4;
    *Data4 = *v9;
    v9 += 2;
    ++Data4;
  }
  while ( (unsigned __int64)v4 < 8 );
  return 0;
}

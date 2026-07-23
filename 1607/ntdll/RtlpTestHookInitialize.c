/*
 * XREFs of RtlpTestHookInitialize @ 0x18002AE00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlpTestHookInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  __int64 KeyValueInformation; // [rsp+70h] [rbp+37h] BYREF
  __int128 v11; // [rsp+78h] [rbp+3Fh]

  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  KeyValueInformation = 0LL;
  v11 = 0uLL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180108270;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&ValueName,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    v4 = DWORD1(v11);
    RtlpUserPolicies = *(_QWORD *)((char *)&v11 + 4);
    v5 = 1049601;
    if ( BYTE4(v11) > 0x14u || !_bittest(&v5, BYTE4(v11)) )
      LOBYTE(RtlpUserPolicies) = 0;
    if ( BYTE1(RtlpUserPolicies) > 0x14u || (v4 = BYTE1(RtlpUserPolicies), !_bittest(&v5, BYTE1(RtlpUserPolicies))) )
      BYTE1(RtlpUserPolicies) = 0;
    LOBYTE(v4) = BYTE2(RtlpUserPolicies);
    if ( BYTE2(RtlpUserPolicies) > 0x14u || (v6 = 1082401, !_bittest(&v6, v4)) )
      BYTE2(RtlpUserPolicies) = 0;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return 0LL;
}

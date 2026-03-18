/*
 * XREFs of RtlCapabilityCheck @ 0x1406836A4
 * Callers:
 *     PopCapabilityCheck @ 0x140201FB0 (PopCapabilityCheck.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D6F8 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlCheckTokenMembership @ 0x1400852A4 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140136740 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x140479578 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x1405037BC (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, _BYTE *a3)
{
  HANDLE v4; // rcx
  int v7; // ebx
  PULONG v8; // r15
  int v9; // eax
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-CFh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  int KeyValueInformation; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+94h] [rbp-6Ch]
  int v20; // [rsp+9Ch] [rbp-64h]
  _BYTE Sid[16]; // [rsp+A0h] [rbp-60h] BYREF
  char Owner[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v23[48]; // [rsp+E0h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v4 = 0LL;
  KeyHandle = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  KeyValueInformation = 0;
  v19 = 0LL;
  v20 = 0;
  v12[0] = 0;
  v11 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( SourceString && a3 )
  {
    *a3 = 0;
    v7 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v23);
    if ( v7 < 0 )
      goto LABEL_19;
    if ( RtlIsMultiSessionSku()
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          ObjectAttributes.Length = 48,
          ObjectAttributes.ObjectName = &DestinationString,
          ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.Attributes = 576,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
      && ZwQueryValueKey(
           KeyHandle,
           SourceString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = RtlSubAuthoritySid(Sid, 0);
      *v8 = 18;
      v9 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 1, &v11);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_17;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = RtlSubAuthoritySid(Sid, 0);
      *v8 = 18;
      v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_17;
      *v8 = 4;
      v9 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 1, &v11);
    }
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( v11
        || (RtlInitializeSid(Sid, &IdentifierAuthority, 2u),
            *v8 = 32,
            *RtlSubAuthoritySid(Sid, 1u) = 544,
            v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid),
            v7 >= 0)
        && v11 )
      {
LABEL_17:
        v7 = RtlCheckTokenCapability(ExistingTokenHandle, v23, v12);
        if ( v7 >= 0 )
          *a3 = v12[0];
      }
    }
LABEL_19:
    v4 = KeyHandle;
    goto LABEL_21;
  }
  v7 = -1073741811;
LABEL_21:
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v7;
}

/*
 * XREFs of RtlCapabilityCheck @ 0x140646790
 * Callers:
 *     PopCapabilityCheck @ 0x1401E9448 (PopCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140003E6C (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x140003E78 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1401345C4 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  HANDLE v4; // rcx
  int v7; // ebx
  PULONG v8; // r15
  NTSTATUS v9; // eax
  BOOLEAN IsMember; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN HasCapabilitya[3]; // [rsp+31h] [rbp-CFh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  int KeyValueInformation; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+94h] [rbp-6Ch]
  int v20; // [rsp+9Ch] [rbp-64h]
  _BYTE Sid[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+E0h] [rbp-20h] BYREF

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
  HasCapabilitya[0] = 0;
  IsMember = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( CapabilityName && HasCapability )
  {
    *HasCapability = 0;
    v7 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
    if ( v7 < 0 )
      goto LABEL_19;
    if ( (MEMORY[0xFFFFF780000002F0] & 0x100) != 0
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
           CapabilityName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = RtlSubAuthoritySid(Sid, 0);
      *v8 = 18;
      v9 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 1u, &IsMember);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( IsMember )
        goto LABEL_17;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = RtlSubAuthoritySid(Sid, 0);
      *v8 = 18;
      v7 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( IsMember )
        goto LABEL_17;
      *v8 = 4;
      v9 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 1u, &IsMember);
    }
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( IsMember
        || (RtlInitializeSid(Sid, &IdentifierAuthority, 2u),
            *v8 = 32,
            *RtlSubAuthoritySid(Sid, 1u) = 544,
            v7 = RtlCheckTokenMembership(TokenHandle, Sid, &IsMember),
            v7 >= 0)
        && IsMember )
      {
LABEL_17:
        v7 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, HasCapabilitya);
        if ( v7 >= 0 )
          *HasCapability = HasCapabilitya[0];
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
  return v7;
}

/*
 * XREFs of RtlCapabilityCheck @ 0x18005DE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800628B0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  HANDLE v4; // rcx
  int v7; // ebx
  ULONG v8; // r8d
  BOOLEAN IsMember; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN HasCapabilitya[3]; // [rsp+31h] [rbp-CFh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  int KeyValueInformation; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+94h] [rbp-6Ch]
  int v19; // [rsp+9Ch] [rbp-64h]
  _BYTE Sid[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
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
  v18 = 0LL;
  v19 = 0;
  HasCapabilitya[0] = 0;
  IsMember = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( CapabilityName && HasCapability )
  {
    *HasCapability = 0;
    v7 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
    if ( v7 < 0 )
      goto LABEL_16;
    if ( (MEMORY[0x7FFE02F0] & 0x100) != 0
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          ObjectAttributes.Length = 48,
          ObjectAttributes.ObjectName = &DestinationString,
          ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.Attributes = 64,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
      && NtQueryValueKey(
           KeyHandle,
           CapabilityName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v8 = 0;
      v21 = 18;
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 1u, &IsMember);
      if ( v7 < 0 )
        goto LABEL_16;
      if ( IsMember )
        goto LABEL_14;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v21 = 18;
      v7 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &IsMember);
      if ( v7 < 0 )
        goto LABEL_16;
      if ( IsMember )
        goto LABEL_14;
      v21 = 4;
      v8 = 1;
    }
    v7 = RtlCheckTokenMembershipEx(TokenHandle, Sid, v8, &IsMember);
    if ( v7 >= 0 )
    {
      if ( IsMember
        || (RtlInitializeSid(Sid, &IdentifierAuthority, 2u),
            v21 = 32,
            v22 = 544,
            v7 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &IsMember),
            v7 >= 0)
        && IsMember )
      {
LABEL_14:
        v7 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, HasCapabilitya);
        if ( v7 >= 0 )
          *HasCapability = HasCapabilitya[0];
      }
    }
LABEL_16:
    v4 = KeyHandle;
    goto LABEL_17;
  }
  v7 = -1073741811;
LABEL_17:
  if ( v4 )
    NtClose(v4);
  return v7;
}

/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x180010F60
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDE0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011030 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x18008C7F0 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Group,
        BOOLEAN GroupDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  *((_QWORD *)SecurityDescriptor + 2) = 0LL;
  v5 = (PSID)*((_QWORD *)SecurityDescriptor + 2);
  if ( Group )
    v5 = Group;
  *((_QWORD *)SecurityDescriptor + 2) = v5;
  v6 = v4 & 0xFFFD;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( GroupDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 2;
  return 0;
}

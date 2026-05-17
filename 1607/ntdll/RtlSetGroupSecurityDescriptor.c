/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x180010F70
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x18008C800 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetGroupSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 < 0 )
    return 3221225593LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    v5 = a2;
  *(_QWORD *)(a1 + 16) = v5;
  v6 = v4 & 0xFFFD;
  *(_WORD *)(a1 + 2) = v6;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v6 | 2;
  return 0LL;
}

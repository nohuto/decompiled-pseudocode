/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x180061DD0
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 *     RtlpSysVolTakeOwnership @ 0x1800878F4 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetOwnerSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 < 0 )
    return 3221225593LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    v5 = a2;
  *(_QWORD *)(a1 + 8) = v5;
  v6 = v4 & 0xFFFE;
  *(_WORD *)(a1 + 2) = v6;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v6 | 1;
  return 0LL;
}

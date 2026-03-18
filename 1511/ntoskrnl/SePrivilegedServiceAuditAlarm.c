/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x140472A30
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     SeCheckAuditPrivilege @ 0x14046E588 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1404A95A0 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1404B0000 (SepFilterPrivilegeAudits.c)
 */

BOOLEAN __fastcall SePrivilegedServiceAuditAlarm(int a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  BOOLEAN result; // al
  PSE_EXPORTS v12; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  result = RtlEqualSid(SeLocalSystemSid, v10);
  if ( !result )
  {
    v12 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v10) && !RtlEqualSid(v12->SeLocalServiceSid, v10) )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
    result = SepFilterPrivilegeAudits(1LL, a3);
    if ( result )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
  }
  return result;
}

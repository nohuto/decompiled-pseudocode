/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x1404359A8
 * Callers:
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     SeCheckAuditPrivilege @ 0x140526BA8 (SeCheckAuditPrivilege.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1405416C0 (SepFilterPrivilegeAudits.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(unsigned __int16 *a1, __int64 *a2, unsigned int *a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  PSE_EXPORTS v11; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  if ( !RtlEqualSid(SeLocalSystemSid, v10) )
  {
    if ( (v11 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v10))
      && !RtlEqualSid(v11->SeLocalServiceSid, v10)
      || (unsigned __int8)SepFilterPrivilegeAudits(1LL, a3) )
    {
      SepAdtPrivilegedServiceAuditAlarm((struct _SECURITY_SUBJECT_CONTEXT *)a2, SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}

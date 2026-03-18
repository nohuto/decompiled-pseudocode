/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14041537C
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140404050 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     SeCheckAuditPrivilege @ 0x1404B7FD0 (SeCheckAuditPrivilege.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140414C0C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1404D24A8 (SepFilterPrivilegeAudits.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(unsigned __int16 *a1, __int64 *a2, int *a3, char a4)
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
      SepAdtPrivilegedServiceAuditAlarm((int)a2, &SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}

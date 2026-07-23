/*
 * XREFs of SeReleaseSid @ 0x140478424
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x140406F90 (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404613A4 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCreateTokenEx @ 0x140476AAC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}

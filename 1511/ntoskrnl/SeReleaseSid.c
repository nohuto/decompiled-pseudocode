/*
 * XREFs of SeReleaseSid @ 0x14046C40C
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     NtCreateTokenEx @ 0x1403C35AC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1403E51C8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}

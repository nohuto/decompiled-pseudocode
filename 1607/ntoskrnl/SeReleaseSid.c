/*
 * XREFs of SeReleaseSid @ 0x140479554
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x1404080D0 (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404624D4 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCreateTokenEx @ 0x140477BDC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}

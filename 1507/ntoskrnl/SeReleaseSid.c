/*
 * XREFs of SeReleaseSid @ 0x140470E00
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 *     AlpcpConnectPort @ 0x140472880 (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140502BAC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}

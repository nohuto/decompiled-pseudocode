/*
 * XREFs of ObFastDereferenceObject @ 0x14000F690
 * Callers:
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     PfSnCheckModernApp @ 0x1403E7318 (PfSnCheckModernApp.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FFB14 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404007A0 (AlpcpCheckConnectionSecurity.c)
 *     CmpIsVirtEnabled @ 0x14040F1C8 (CmpIsVirtEnabled.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     EtwpBuildProcessEvent @ 0x14045D860 (EtwpBuildProcessEvent.c)
 *     PspMapSystemDll @ 0x14046BED8 (PspMapSystemDll.c)
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 *     PsQueryProcessAttributes @ 0x140471DC0 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x1404722F8 (PspInitializeProcessSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140476504 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14047666C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1404766F4 (SepIsSiblingTokenByPointer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404E26A8 (ExpWnfQueryCurrentUserSID.c)
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D22C (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x14067D288 (PspSetRedirectionTrustPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069F938 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7D94 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8B50 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1407BCFB8 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  }
  return result;
}

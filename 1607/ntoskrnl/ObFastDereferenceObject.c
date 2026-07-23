/*
 * XREFs of ObFastDereferenceObject @ 0x14000F210
 * Callers:
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     PfSnCheckModernApp @ 0x1403E8948 (PfSnCheckModernApp.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FE9D4 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x1403FF660 (AlpcpCheckConnectionSecurity.c)
 *     CmpIsVirtEnabled @ 0x14040E088 (CmpIsVirtEnabled.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     EtwpBuildProcessEvent @ 0x14045C730 (EtwpBuildProcessEvent.c)
 *     PspMapSystemDll @ 0x14046ADA8 (PspMapSystemDll.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     PsQueryProcessAttributes @ 0x140470C90 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1404753D4 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14047553C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1404755C4 (SepIsSiblingTokenByPointer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404C560C (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D310 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x14067D36C (PspSetRedirectionTrustPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069FA70 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7ECC (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1407BCFB8 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
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

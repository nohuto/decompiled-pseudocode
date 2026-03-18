/*
 * XREFs of ObFastDereferenceObject @ 0x14004E3E0
 * Callers:
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404376A8 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140438A58 (EtwpGetSidExtendedHeaderItem.c)
 *     PfSnCheckModernApp @ 0x140444420 (PfSnCheckModernApp.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     CmpIsVirtEnabled @ 0x140481D80 (CmpIsVirtEnabled.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1405456D0 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140545758 (SepIsSiblingTokenByPointer.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406BF750 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1406BF7AC (PspSetRedirectionTrustPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1406E24E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406E94E0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1406E9DF0 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1407CFE98 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
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

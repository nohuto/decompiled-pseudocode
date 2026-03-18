/*
 * XREFs of ObFastDereferenceObject @ 0x140043280
 * Callers:
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1403C3438 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1403C34C0 (SepIsSiblingTokenByPointer.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1403E5EDC (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     CmpIsVirtEnabled @ 0x1403FBDC0 (CmpIsVirtEnabled.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     PspMapSystemDll @ 0x1404643E4 (PspMapSystemDll.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x14046DFC4 (PsQueryProcessAttributes.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404795EC (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckModernApp @ 0x1404D71B4 (PfSnCheckModernApp.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14065FC3C (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x1407628DC (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObject((PVOID)a2);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObject((PVOID)a2);
  }
  return result;
}

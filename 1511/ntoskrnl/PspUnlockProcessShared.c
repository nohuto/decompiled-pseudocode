/*
 * XREFs of PspUnlockProcessShared @ 0x14002E340
 * Callers:
 *     PsCaptureExceptionPort @ 0x1403F1E5C (PsCaptureExceptionPort.c)
 *     PspGetPreviousProcessThread @ 0x1403F29CC (PspGetPreviousProcessThread.c)
 *     CmpIsVirtEnabled @ 0x1403FBDC0 (CmpIsVirtEnabled.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     PsGetProcessDeepFreezeStats @ 0x14044B91C (PsGetProcessDeepFreezeStats.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14063F054 (PspAdjustKeepAliveCountProcess.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockProcessShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a1 + 728;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KeLeaveCriticalRegionThread(a2);
}

/*
 * XREFs of PspUnlockProcessShared @ 0x1400C9C44
 * Callers:
 *     SeCreateClientSecurityEx @ 0x14040F250 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     NtOpenProcessTokenEx @ 0x140420240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PsGetProcessDeepFreezeStats @ 0x1405095EC (PsGetProcessDeepFreezeStats.c)
 *     PsCaptureExceptionPort @ 0x140509690 (PsCaptureExceptionPort.c)
 *     PspGetPreviousProcessThread @ 0x140509940 (PspGetPreviousProcessThread.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14067D6BC (PspAdjustKeepAliveCountProcess.c)
 *     PspAssignPrimaryToken @ 0x14067EFDC (PspAssignPrimaryToken.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 728);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}

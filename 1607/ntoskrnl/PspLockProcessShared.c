/*
 * XREFs of PspLockProcessShared @ 0x1400C9C88
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
 *     PsSwapProcessWorkingSet @ 0x14067D48C (PsSwapProcessWorkingSet.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14067D6BC (PspAdjustKeepAliveCountProcess.c)
 *     PspAssignPrimaryToken @ 0x14067EFDC (PspAssignPrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 728);
  v3 = KeAbPreAcquire(a1 + 728, 0LL, 0);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)v2, v3, (ULONG_PTR)v2);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}

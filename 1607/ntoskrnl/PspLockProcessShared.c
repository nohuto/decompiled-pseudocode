/*
 * XREFs of PspLockProcessShared @ 0x1400C7B28
 * Callers:
 *     SeCreateClientSecurityEx @ 0x14040E110 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     NtOpenProcessTokenEx @ 0x14041F100 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     PsGetProcessDeepFreezeStats @ 0x1404EC57C (PsGetProcessDeepFreezeStats.c)
 *     PsCaptureExceptionPort @ 0x1404EC620 (PsCaptureExceptionPort.c)
 *     PspGetPreviousProcessThread @ 0x1404EC8D0 (PspGetPreviousProcessThread.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 *     PsSwapProcessWorkingSet @ 0x14067D570 (PsSwapProcessWorkingSet.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14067D7A0 (PspAdjustKeepAliveCountProcess.c)
 *     PspAssignPrimaryToken @ 0x14067F0C0 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
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

/*
 * XREFs of PspRevertContainerImpersonation @ 0x1400D1BC0
 * Callers:
 *     IopProcessWorkItem @ 0x140086970 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x1400CF4D0 (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x14020F5B0 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D0900 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1404F3840 (EtwTraceThreadWorkOnBehalfUpdate.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(__int64 a1)
{
  void *v1; // rsi
  KIRQL v4; // al
  unsigned __int64 v5; // rbx

  v1 = *(void **)(a1 + 1904);
  if ( !v1 )
    return 3221225473LL;
  KeSetThreadChargeOnlySchedulingGroup(a1, 0LL);
  v4 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  *(_QWORD *)(a1 + 1904) = 0LL;
  v5 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  __writecr8(v5);
  EtwTraceThreadWorkOnBehalfUpdate(v1, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}

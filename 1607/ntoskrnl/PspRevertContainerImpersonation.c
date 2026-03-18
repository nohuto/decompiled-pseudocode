/*
 * XREFs of PspRevertContainerImpersonation @ 0x1400D3D20
 * Callers:
 *     IopProcessWorkItem @ 0x1400749F0 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x1400D1630 (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x14020F784 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2A60 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D3F30 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1405108B0 (EtwTraceThreadWorkOnBehalfUpdate.c)
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

/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1400D1630
 * Callers:
 *     IopProcessWorkItem @ 0x1400749F0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     ObpIncrPointerCount @ 0x1400D16D0 (ObpIncrPointerCount.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2A60 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x1400D3D20 (PspRevertContainerImpersonation.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)a1 - 48);
  ObpIncrPointerCount(a1 - 6);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation(CurrentThread);
  v3 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  CurrentThread[1].WaitBlock[1].Object = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  __writecr8(v3);
  v4 = *(_QWORD *)(a1[68] + 944LL);
  if ( v4 && *(_QWORD *)(v4 + 1000) )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread);
  return EtwTraceThreadWorkOnBehalfUpdate(0LL, a1);
}

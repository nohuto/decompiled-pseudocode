/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1400CF4D0
 * Callers:
 *     IopProcessWorkItem @ 0x140086970 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140655800 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ObpIncrPointerCount @ 0x1400CF570 (ObpIncrPointerCount.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D0900 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x1400D1BC0 (PspRevertContainerImpersonation.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
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

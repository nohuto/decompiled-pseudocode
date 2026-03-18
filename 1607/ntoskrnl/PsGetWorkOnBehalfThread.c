/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x14005E874
 * Callers:
 *     IoReferenceIoAttributionFromThread @ 0x14006ED10 (IoReferenceIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x1400A76B8 (PsGetEffectiveContainerId.c)
 *     IopQueueWorkItemProlog @ 0x1400D1408 (IopQueueWorkItemProlog.c)
 *     AlpcpCaptureAttributes @ 0x14044C7D0 (AlpcpCaptureAttributes.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1404D23D8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 */

PVOID __fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  PVOID Object; // rbx
  KIRQL v6; // al
  KIRQL v7; // bp

  Object = a1[1].WaitBlock[1].Object;
  *a2 = 0;
  if ( Object && a1 != KeGetCurrentThread() )
  {
    v6 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a1[1].WaitBlock[1].Object;
    v7 = v6;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a1[1].WaitBlock[1].Object, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v7);
  }
  return Object;
}

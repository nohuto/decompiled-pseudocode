/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x14005E3F4
 * Callers:
 *     IoReferenceIoAttributionFromThread @ 0x14006E890 (IoReferenceIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x1400A5C30 (PsGetEffectiveContainerId.c)
 *     IopQueueWorkItemProlog @ 0x1400CF2A8 (IopQueueWorkItemProlog.c)
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1404B5E78 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140655800 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
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

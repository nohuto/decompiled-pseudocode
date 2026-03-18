/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x1400EBF60
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400A4594 (IopBuildAsynchronousFsdRequest.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     IoSetIoAttributionIrp @ 0x1401C923C (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14006ECD4 (IopSetDiskIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x14008E608 (IopSetDiskIoAttributionExtension.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  int v4; // edi
  __int64 Process; // rdx
  _KPROCESS *v7; // rbx
  __int64 v8; // rbp
  int v9; // ebx
  KIRQL v11; // al
  __int64 v12; // rbx
  KIRQL v13; // al
  KIRQL v14; // bp

  Object = a2[1].WaitBlock[1].Object;
  v4 = 0;
  if ( !Object )
    goto LABEL_16;
  if ( a2 != KeGetCurrentThread() )
  {
    v13 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a2[1].WaitBlock[1].Object;
    v14 = v13;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
      v4 = 1;
    }
    ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v14);
  }
  if ( Object )
  {
    v7 = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_16:
    if ( a2 == KeGetCurrentThread() )
    {
      Process = (__int64)a2->ApcState.Process;
      if ( (_KPROCESS *)Process != a2->Process && (int)IopSetDiskIoAttributionFromProcess(a1, Process) >= 0 )
      {
LABEL_17:
        v9 = 0;
        goto LABEL_8;
      }
    }
    v7 = a2->Process;
  }
  v8 = 0LL;
  if ( *(_QWORD *)&v7[2].ThreadSeed[12] )
  {
    v11 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v12 = *(_QWORD *)&v7[2].ThreadSeed[12];
    if ( v12 )
      v8 = *(_QWORD *)(v12 + 24);
    ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v11);
    if ( v12 )
    {
      v9 = IopSetDiskIoAttributionExtension(a1, v8);
      if ( v9 >= 0 )
        v9 = 0;
    }
    else
    {
      v9 = -1073741275;
    }
  }
  else
  {
    v9 = -1073741275;
  }
  if ( v9 >= 0 )
    goto LABEL_17;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Object);
  return (unsigned int)v9;
}

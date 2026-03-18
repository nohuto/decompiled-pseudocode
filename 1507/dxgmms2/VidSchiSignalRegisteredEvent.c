/*
 * XREFs of VidSchiSignalRegisteredEvent @ 0x1C0002BD0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00178CC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0017BD4 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSignalFlipEvents @ 0x1C001A3FC (VidSchiSignalFlipEvents.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C0079B4C (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalRegisteredEvent(__int64 a1, struct _KEVENT **a2)
{
  KIRQL v4; // bl
  struct _KEVENT *v5; // rdi
  int Flink; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  v5 = *a2;
  if ( *a2 != (struct _KEVENT *)a2 )
  {
    while ( LODWORD(v5->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v5[1].Header.Lock + 4LL * LODWORD(v5[1].Header.WaitListHead.Blink) + 872) < *(_DWORD *)(*(_QWORD *)&v5[1].Header.Lock + 212LL) )
        goto LABEL_8;
LABEL_9:
      v5 = *(struct _KEVENT **)&v5->Header.Lock;
      if ( v5 == (struct _KEVENT *)a2 )
        goto LABEL_2;
    }
    if ( ((__int64)v5[1].Header.WaitListHead.Flink & 8) != 0 )
    {
      Flink = (int)v5[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v5[5].Header.WaitListHead.Blink) = Flink;
      if ( Flink )
        goto LABEL_9;
    }
LABEL_8:
    ++v5[5].Header.LockNV;
    KeSetEvent(v5 + 4, 0, 0);
    goto LABEL_9;
  }
LABEL_2:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v4);
}

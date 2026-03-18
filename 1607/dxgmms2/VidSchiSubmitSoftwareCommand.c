/*
 * XREFs of VidSchiSubmitSoftwareCommand @ 0x1C0001A3C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001AB0 (VidSchiProcessCompletedQueuePacket.c)
 */

void __fastcall VidSchiSubmitSoftwareCommand(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 1856LL), &LockHandle);
  if ( *(_QWORD *)(a1 + 40) == v1 + 664 )
    v3 = 1;
  else
    *(_DWORD *)(a1 + 80) |= 1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
    VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
}

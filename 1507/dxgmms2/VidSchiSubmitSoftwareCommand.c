/*
 * XREFs of VidSchiSubmitSoftwareCommand @ 0x1C00011E4
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001858 (VidSchiProcessCompletedQueuePacket.c)
 */

void __fastcall VidSchiSubmitSoftwareCommand(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 1872LL), &LockHandle);
  if ( *(_QWORD *)(a1 + 40) == v1 + 664 )
    v3 = 1;
  else
    *(_DWORD *)(a1 + 76) |= 1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
    VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
}

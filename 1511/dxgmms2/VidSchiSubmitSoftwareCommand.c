/*
 * XREFs of VidSchiSubmitSoftwareCommand @ 0x1C0012E38
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C008AAD0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0012EAC (VidSchiProcessCompletedQueuePacket.c)
 */

void __fastcall VidSchiSubmitSoftwareCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL) + 1824LL), &LockHandle);
  if ( *((_QWORD *)a1 + 5) == v1 + 664 )
    v3 = 1;
  else
    *((_DWORD *)a1 + 19) |= 1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
    VidSchiProcessCompletedQueuePacket(a1);
}

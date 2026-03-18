/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x1C0003470
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001858 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C00019A0 (VidSchiCompleteSignalCommmand.c)
 */

void __fastcall VidSchiSubmitSignalCommand(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1872), &LockHandle);
  if ( *(_QWORD *)(a1 + 40) == v1 + 664 )
  {
    v3 = 1;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 1) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 76) & 4) == 0 )
    {
      LOBYTE(v5) = 1;
      VidSchiCompleteSignalCommmand(a1, v5, v6, v7);
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 976));
    }
    *(_DWORD *)(a1 + 76) |= 9u;
  }
  else
  {
    *(_DWORD *)(a1 + 76) |= 1u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
    VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
}

/*
 * XREFs of VidSchiSubmitSignalCommand @ 0x1C000E1C0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000E044 (VidSchiCompleteSignalCommmand.c)
 */

void __fastcall VidSchiSubmitSignalCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1856), &LockHandle);
  if ( *((_QWORD *)v2 + 5) == v1 + 664 )
  {
    v3 = 1;
  }
  else if ( (*((_DWORD *)v2 + 66) & 1) != 0 )
  {
    if ( (*((_DWORD *)v2 + 20) & 4) == 0 )
    {
      LOBYTE(v5) = 1;
      VidSchiCompleteSignalCommmand((__int64)v2, v5, v6, v7);
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 1016));
    }
    *((_DWORD *)v2 + 20) |= 9u;
  }
  else
  {
    *((_DWORD *)v2 + 20) |= 1u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v8, v9);
    while ( v2 );
  }
}

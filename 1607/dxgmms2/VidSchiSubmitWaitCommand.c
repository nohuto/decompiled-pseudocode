/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C000D568
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000CF4C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D28C (VidSchiCompleteRewindPacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0010B94 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r14
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r9
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1856), &LockHandle);
  if ( (*(_BYTE *)(v5 + 2828) & 1) != 0
    || *(_DWORD *)(v5 + 2800)
    || *(_BYTE *)(v4 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 160), 0, 0) )
  {
    v16 = *((_DWORD *)v2 + 66);
    if ( (v16 & 1) == 0 )
    {
      if ( (v16 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v2, 1u);
      else
        VidSchiUnwaitWaitQueuePacket((__int64)v2, 1u, v8);
    }
  }
  if ( (*((_DWORD *)v2 + 66) & 1) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v12 = *((_QWORD *)v2 + 11);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 96) + 24LL);
    if ( (*(_DWORD *)(v12 + 176) & 4) == 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      v14[3] = v13;
      v14[4] = v12;
      v14[5] = *((unsigned int *)v2 + 26);
      WdLogEvent5_WdEvent(v14);
      *(_DWORD *)(v12 + 176) |= 4u;
      *(_QWORD *)(v12 + 656) = v2;
    }
    VidSchiCompleteRewindPacket(v12, 1);
    VidSchiUpdateContextStatus(v1, (_QWORD *)4, 21216LL, v15);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2, v10, v11);
    while ( v2 );
  }
}

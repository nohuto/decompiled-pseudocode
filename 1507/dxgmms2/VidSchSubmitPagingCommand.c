/*
 * XREFs of VidSchSubmitPagingCommand @ 0x1C00794D0
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSetPriorityContext @ 0x1C0006880 (VidSchiSetPriorityContext.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0010318 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitPagingCommand(__int64 a1, __int128 *a2)
{
  VIDMM_DMA_POOL *v4; // rcx
  __int64 v5; // rbp
  __int64 *QueuePacket; // rax
  __int128 v7; // xmm0
  __int64 *v8; // rdi
  __int128 v9; // xmm1
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v11; // xmm0
  KPRIORITY PriorityThread; // eax

  if ( VidSchIsTDRPending(a1) )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
      VIDMM_DMA_POOL::ReleaseBuffer(v4, *((struct _VIDMM_DMA_BUFFER **)a2 + 1), 1);
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 192)
                   + 8LL * (unsigned int)VidSchiSchedulerNodeToDriverEngine(a1, *((_DWORD *)a2 + 13)));
    QueuePacket = VidSchiAllocateQueuePacket(v5, 1);
    v7 = *a2;
    v8 = QueuePacket;
    v9 = a2[1];
    *(_DWORD *)QueuePacket = 1953189969;
    *((_DWORD *)QueuePacket + 12) = 8;
    QueuePacket[7] = MEMORY[0xFFFFF78000000320];
    LODWORD(QueuePacket) = *(_DWORD *)a2;
    *((_DWORD *)v8 + 13) = 2;
    v8[10] = v5;
    CurrentThread = KeGetCurrentThread();
    *((_OWORD *)v8 + 16) = v7;
    v8[11] = (__int64)CurrentThread;
    v11 = a2[2];
    *((_DWORD *)v8 + 18) = (_DWORD)QueuePacket;
    *((_OWORD *)v8 + 17) = v9;
    *(_QWORD *)&v9 = *((_QWORD *)a2 + 6);
    *((_OWORD *)v8 + 18) = v11;
    v8[38] = v9;
    if ( (*(_DWORD *)(a1 + 2144) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(v5, PriorityThread);
    }
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)v8);
  }
}

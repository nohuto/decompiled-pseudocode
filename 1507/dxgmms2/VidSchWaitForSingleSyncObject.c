/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C001D890
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C005613C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C007A020 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiFreeQueuePacket @ 0x1C0006730 (VidSchiFreeQueuePacket.c)
 *     VidSchiAcquireSyncObject @ 0x1C00153DC (VidSchiAcquireSyncObject.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C0044E50 (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  VIDMM_PAGING_QUEUE *v8; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 QueuePacket; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v27; // eax
  _QWORD *v28; // rax
  int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  _QWORD *v33; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v25[3] = -1073741811LL;
LABEL_28:
    WdLogEvent5_WdAssertion(v25);
    return 3221225485LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(a2 + 40) == 4 && !*(_BYTE *)(a2 + 28) )
  {
    v8 = *(VIDMM_PAGING_QUEUE **)(a2 + 72);
    if ( v8 )
    {
      CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v8);
      v12 = CurrentPagingFenceId;
      if ( *(_BYTE *)(v11 + 29) )
      {
        if ( v10 <= CurrentPagingFenceId )
          goto LABEL_8;
        goto LABEL_11;
      }
      if ( (int)v10 - (int)CurrentPagingFenceId > 0 )
      {
LABEL_11:
        if ( !KdRefreshDebuggerNotPresent() )
        {
          DbgPrintEx(
            0x65u,
            0,
            "\n"
            "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
            "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
            "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
            "queue's most recently generated fence value is 0x%I64x\n",
            a3,
            *(const void **)(a2 + 72),
            v12);
          __debugbreak();
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        v25[3] = a3;
        v25[4] = *(_QWORD *)(a2 + 72);
        v25[5] = v12;
        goto LABEL_28;
      }
    }
  }
LABEL_8:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 772) == 0);
  v18 = QueuePacket;
  if ( QueuePacket )
  {
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 4;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 80) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v18 + 72) = 0;
    *(_DWORD *)(v18 + 256) &= ~1u;
    *(_QWORD *)(v18 + 88) = CurrentThread;
    v27 = *(_DWORD *)(a2 + 40);
    if ( v27 == 2 )
    {
      *(_QWORD *)(v18 + 288) = a3;
    }
    else if ( v27 == 4 )
    {
      *(_QWORD *)(v18 + 288) = a3;
      v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
      v28[3] = a2;
      v28[4] = a3;
      v28[5] = a1;
      WdLogEvent5_WdEvent(v28);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1872), &LockHandle);
    *(_QWORD *)(v18 + 264) = a2;
    v29 = VidSchiAcquireSyncObject(a1, a2, v18);
    if ( v29 < 0 || (*(_DWORD *)(v18 + 256) & 1) != 0 )
    {
      VidSchiFreeQueuePacket(a1, v18);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v29;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 26) )
      {
        v30 = MEMORY[0xFFFFF78000000320];
        v31 = *(_QWORD *)(v18 + 80);
        *(_DWORD *)(v18 + 64) |= 0x10u;
        *(_QWORD *)(v18 + 56) = v30;
        *(_DWORD *)(v18 + 52) = 17;
        v32 = (_QWORD *)(v18 + 32);
        v33 = *(_QWORD **)(v31 + 704);
        *v32 = v31 + 696;
        v32[1] = v33;
        if ( *v33 != v31 + 696 )
          __fastfail(3u);
        *v33 = v32;
        *(_QWORD *)(v31 + 704) = v32;
        ++*(_DWORD *)(v31 + 780);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)v18);
      }
      return 0LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = -1073741801LL;
    *(_QWORD *)(v19 + 32) = 8183LL;
    WdLogEvent5_WdAssertion(v19);
    return 3221225495LL;
  }
}

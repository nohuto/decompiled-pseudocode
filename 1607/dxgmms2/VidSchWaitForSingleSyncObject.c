/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0006320
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C008CCF4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C00A1DA4 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C00066C0 (VidSchiAcquireSyncObject.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C0045B44 (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 QueuePacket; // rax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  int v11; // r12d
  __int64 v12; // r15
  KSPIN_LOCK *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 **v18; // rbx
  __int64 *v19; // rsi
  VIDMM_PAGING_QUEUE *v21; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  _QWORD *v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+78h] [rbp-40h] BYREF

  if ( !a1 || !a2 )
  {
    v35 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v35);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(a2 + 40) == 4 && !*(_BYTE *)(a2 + 28) )
  {
    v21 = *(VIDMM_PAGING_QUEUE **)(a2 + 72);
    if ( v21 )
    {
      CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v21);
      v25 = CurrentPagingFenceId;
      if ( *(_BYTE *)(v24 + 29) )
      {
        if ( v23 > CurrentPagingFenceId )
        {
LABEL_42:
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
              v25);
            JUMPOUT(0x1C0017934LL);
          }
          v32 = (_QWORD *)WdLogNewEntry5_WdAssertion();
          v32[3] = a3;
          v32[4] = *(_QWORD *)(a2 + 72);
          v32[5] = v25;
          WdLogEvent5_WdAssertion(v32);
          return 3221225485LL;
        }
      }
      else if ( (int)v23 - (int)CurrentPagingFenceId > 0 )
      {
        goto LABEL_42;
      }
    }
  }
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 796) == 0);
  v8 = QueuePacket;
  if ( QueuePacket )
  {
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 4;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 88) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v8 + 264) &= ~1u;
    *(_QWORD *)(v8 + 96) = CurrentThread;
    *(_DWORD *)(v8 + 72) = 0;
    v10 = *(_DWORD *)(a2 + 40);
    if ( v10 == 2 )
    {
      *(_QWORD *)(v8 + 296) = a3;
    }
    else if ( v10 == 4 )
    {
      *(_QWORD *)(v8 + 296) = a3;
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v26[3] = a2;
      v26[4] = a3;
      v26[5] = a1;
      WdLogEvent5_WdEvent(v26);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1856), &LockHandle);
    *(_QWORD *)(v8 + 272) = a2;
    v11 = VidSchiAcquireSyncObject(a1, a2, v8);
    if ( v11 < 0 || (*(_DWORD *)(v8 + 264) & 1) != 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      if ( !*(_DWORD *)(v8 + 48) && (*(_QWORD *)(v8 + 600) || *(_QWORD *)(v8 + 256)) )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v34[3] = 281LL;
        v34[4] = 2560LL;
        v34[5] = v8;
        v34[6] = *(_QWORD *)(v8 + 600);
        v34[7] = *(_QWORD *)(v8 + 256);
        WdLogEvent5_WdCriticalError(v34);
        JUMPOUT(0x1C00179DFLL);
      }
      *(_QWORD *)(v8 + 56) = MEMORY[0xFFFFF78000000320];
      v13 = (KSPIN_LOCK *)(v12 + 1864);
      *(_DWORD *)(v8 + 52) = 0;
      v14 = v8 + 8;
      KeAcquireInStackQueuedSpinLock(v13, &v37);
      v15 = *(_QWORD *)(v8 + 8);
      v16 = *(_QWORD **)(v8 + 16);
      if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( a1 != -776 )
        --*(_DWORD *)(a1 + 776);
      KeReleaseInStackQueuedSpinLock(&v37);
      if ( (*(_DWORD *)(v8 + 64) & 0x40) != 0 )
      {
        VidSchiInterlockedInsertTailList(v13, a1 + 736, v8 + 8, a1 + 752);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v13, &v38);
        v17 = *(__int64 **)(a1 + 720);
        if ( *v17 != a1 + 712 )
          __fastfail(3u);
        *(_QWORD *)v14 = a1 + 712;
        *(_QWORD *)(v8 + 16) = v17;
        *v17 = v14;
        *(_QWORD *)(a1 + 720) = v14;
        if ( a1 != -728 )
          ++*(_DWORD *)(a1 + 728);
        KeReleaseInStackQueuedSpinLock(&v38);
      }
      if ( (*(_DWORD *)(v8 + 64) & 0x40) == 0 )
      {
        v18 = (__int64 **)(a1 + 712);
        while ( 1 )
        {
          v19 = 0LL;
          KeAcquireInStackQueuedSpinLock(v13, &v39);
          if ( *v18 != (__int64 *)v18 && *(_DWORD *)(a1 + 728) > 0x10u )
          {
            v19 = *v18;
            v31 = **v18;
            if ( (__int64 **)(*v18)[1] != v18 || *(__int64 **)(v31 + 8) != v19 )
              __fastfail(3u);
            *v18 = (__int64 *)v31;
            *(_QWORD *)(v31 + 8) = v18;
            --*(_DWORD *)(a1 + 728);
          }
          KeReleaseInStackQueuedSpinLock(&v39);
          if ( !v19 )
            break;
          ExFreePoolWithTag(v19 - 1, 0);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v11;
    }
    else if ( *(_BYTE *)(a2 + 26) )
    {
      v27 = MEMORY[0xFFFFF78000000320];
      v28 = *(_QWORD *)(v8 + 88);
      *(_DWORD *)(v8 + 64) |= 0x10u;
      *(_QWORD *)(v8 + 56) = v27;
      *(_DWORD *)(v8 + 52) = 17;
      v29 = (_QWORD *)(v8 + 32);
      v30 = *(_QWORD **)(v28 + 704);
      if ( *v30 != v28 + 696 )
        __fastfail(3u);
      *v29 = v28 + 696;
      v29[1] = v30;
      *v30 = v29;
      *(_QWORD *)(v28 + 704) = v29;
      ++*(_DWORD *)(v28 + 804);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)v8);
      return 0LL;
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v33 + 24) = -1073741801LL;
    *(_QWORD *)(v33 + 32) = 8443LL;
    WdLogEvent5_WdAssertion(v33);
    return 3221225495LL;
  }
}

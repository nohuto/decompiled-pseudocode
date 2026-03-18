/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0006F20
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C007D870 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C008C400 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C0007280 (VidSchiAcquireSyncObject.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C003AFEC (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 QueuePacket; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  int v16; // r14d
  __int64 v17; // rbp
  KSPIN_LOCK *v18; // rbp
  __int64 *v19; // rbx
  __int64 *v20; // rcx
  __int64 **v21; // rax
  _DWORD *v22; // rsi
  __int64 **v23; // rdi
  __int64 ***v24; // rax
  __int64 *v25; // rbx
  VIDMM_PAGING_QUEUE *v27; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  _QWORD *v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+60h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+78h] [rbp-30h] BYREF

  if ( !a1 || !a2 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v45 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v45);
    return 3221225485LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(a2 + 40) == 4 && !*(_BYTE *)(a2 + 28) )
  {
    v27 = *(VIDMM_PAGING_QUEUE **)(a2 + 72);
    if ( v27 )
    {
      CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v27);
      v31 = CurrentPagingFenceId;
      if ( *(_BYTE *)(v30 + 29) )
      {
        if ( v29 > CurrentPagingFenceId )
        {
LABEL_39:
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
              v31);
            JUMPOUT(0x1C0017F6ELL);
          }
          v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
          v42[3] = a3;
          v42[4] = *(_QWORD *)(a2 + 72);
          v42[5] = v31;
          WdLogEvent5_WdAssertion(v42);
          return 3221225485LL;
        }
      }
      else if ( (int)v29 - (int)CurrentPagingFenceId > 0 )
      {
        goto LABEL_39;
      }
    }
  }
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 772) == 0);
  v13 = QueuePacket;
  if ( QueuePacket )
  {
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 4;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 80) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v13 + 256) &= ~1u;
    *(_QWORD *)(v13 + 88) = CurrentThread;
    *(_DWORD *)(v13 + 72) = 0;
    v15 = *(_DWORD *)(a2 + 40);
    if ( v15 == 2 )
    {
      *(_QWORD *)(v13 + 288) = a3;
    }
    else if ( v15 == 4 )
    {
      *(_QWORD *)(v13 + 288) = a3;
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v32[3] = a2;
      v32[4] = a3;
      v32[5] = a1;
      WdLogEvent5_WdEvent(v32);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1824), &LockHandle);
    *(_QWORD *)(v13 + 264) = a2;
    v16 = VidSchiAcquireSyncObject(a1, a2, v13);
    if ( v16 < 0 || (*(_DWORD *)(v13 + 256) & 1) != 0 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      if ( !*(_DWORD *)(v13 + 48) && (*(_QWORD *)(v13 + 592) || *(_QWORD *)(v13 + 248)) )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v44[3] = 281LL;
        v44[4] = 2560LL;
        v44[5] = v13;
        v44[6] = *(_QWORD *)(v13 + 592);
        v44[7] = *(_QWORD *)(v13 + 248);
        WdLogEvent5_WdCriticalError(v44);
        JUMPOUT(0x1C0018019LL);
      }
      *(_QWORD *)(v13 + 56) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v13 + 52) = 0;
      v18 = (KSPIN_LOCK *)(v17 + 1832);
      v19 = (__int64 *)(v13 + 8);
      KeAcquireInStackQueuedSpinLock(v18, &v47);
      v20 = (__int64 *)*v19;
      v21 = (__int64 **)v19[1];
      if ( *(__int64 **)(*v19 + 8) != v19 || *v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (__int64)v21;
      if ( a1 != -752 )
        --*(_DWORD *)(a1 + 752);
      KeReleaseInStackQueuedSpinLock(&v47);
      v22 = (_DWORD *)(a1 + 728);
      v23 = (__int64 **)(a1 + 712);
      KeAcquireInStackQueuedSpinLock(v18, &v48);
      v24 = (__int64 ***)v23[1];
      *v19 = (__int64)v23;
      v19[1] = (__int64)v24;
      if ( *v24 != v23 )
        __fastfail(3u);
      *v24 = (__int64 **)v19;
      v23[1] = v19;
      if ( v22 )
        ++*v22;
      KeReleaseInStackQueuedSpinLock(&v48);
      while ( 1 )
      {
        v25 = 0LL;
        KeAcquireInStackQueuedSpinLock(v18, &v49);
        if ( *v23 != (__int64 *)v23 && *v22 > 0x10u )
        {
          v25 = *v23;
          v37 = (__int64 *)**v23;
          if ( (__int64 **)(*v23)[1] != v23 || (__int64 *)v37[1] != v25 )
            __fastfail(3u);
          *v23 = v37;
          v37[1] = (__int64)v23;
          --*v22;
        }
        KeReleaseInStackQueuedSpinLock(&v49);
        if ( !v25 )
          break;
        ExFreePoolWithTag(v25 - 1, 0);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v16;
    }
    else if ( *(_BYTE *)(a2 + 26) )
    {
      v33 = MEMORY[0xFFFFF78000000320];
      v34 = *(_QWORD *)(v13 + 80);
      *(_DWORD *)(v13 + 64) |= 0x10u;
      *(_QWORD *)(v13 + 56) = v33;
      *(_DWORD *)(v13 + 52) = 17;
      v35 = (_QWORD *)(v13 + 32);
      v36 = *(_QWORD **)(v34 + 704);
      *v35 = v34 + 696;
      v35[1] = v36;
      if ( *v36 != v34 + 696 )
        __fastfail(3u);
      *v36 = v35;
      *(_QWORD *)(v34 + 704) = v35;
      ++*(_DWORD *)(v34 + 780);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)v13);
      return 0LL;
    }
  }
  else
  {
    v43 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v43 + 24) = -1073741801LL;
    *(_QWORD *)(v43 + 32) = 8152LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225495LL;
  }
}

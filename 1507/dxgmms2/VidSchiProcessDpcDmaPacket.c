/*
 * XREFs of VidSchiProcessDpcDmaPacket @ 0x1C00021E0
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x1C000211C (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00178CC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0017BD4 (VidSchiProcessDpcSystemRequest.c)
 */

void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  void (__fastcall *v13)(_QWORD); // rax
  void (__fastcall *v14)(_QWORD); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 6);
  v6 = *(_QWORD *)(v4 + 96);
  v7 = *(unsigned int *)(v6 + 1336);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 32LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v6 + 8 * v7 + 1344),
                                            0LL,
                                            (signed __int64)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = v8;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdAssertion(v12);
  }
  _InterlockedExchange((volatile __int32 *)(v6 + 1336), ((_BYTE)v7 + 1) & 0xF);
  *(_DWORD *)(v6 + 424) = ((unsigned __int8)*(_DWORD *)(v6 + 424) + 1) & 0xF;
  v9 = *((_DWORD *)a1 + 23);
  if ( (v9 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 23) = v9 & 0xFFFFFBFF;
    if ( *(_DWORD *)(v6 + 3080) != -1 )
    {
      v13 = *(void (__fastcall **)(_QWORD))(v8 + 2528);
      if ( v13 )
        v13(*(_QWORD *)(v8 + 2560));
    }
  }
  if ( (*((_DWORD *)a1 + 23) & 0x800) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 7) + 372LL) + 2640) + 14736LL) != -1 )
    {
      v14 = *(void (__fastcall **)(_QWORD))(v8 + 2528);
      if ( v14 )
        v14(*(_QWORD *)(v8 + 2560));
    }
    *((_DWORD *)a1 + 23) &= ~0x800u;
  }
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket(a1);
  }
  v10 = (_QWORD *)((char *)a1 + 16);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v6 + 24) + 1880LL), &LockHandle);
  v11 = *(_QWORD **)(v6 + 3096);
  *v10 = v6 + 3088;
  v10[1] = v11;
  if ( *v11 != v6 + 3088 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v6 + 3096) = v10;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

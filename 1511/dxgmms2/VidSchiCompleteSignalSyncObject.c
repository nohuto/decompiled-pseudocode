/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C000BE90
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000E84C (VidSchiCompleteSignalCommmand.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00130A0 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0021180 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  int v9; // ecx
  int v10; // ecx
  _QWORD *v11; // rsi
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v6 == 4 )
  {
    if ( !*(_BYTE *)(a1 + 28) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2);
      v14[3] = a1;
      v14[4] = **(_QWORD **)(a1 + 56);
      v14[5] = *a3;
      WdLogEvent5_WdEvent(v14);
      v15 = *a3;
      v16 = *(_QWORD **)(a1 + 56);
      if ( *(_BYTE *)(a1 + 29) )
        *v16 = v15;
      else
        *(_DWORD *)v16 = v15;
      VidSchiUnwaitMonitoredFences(v4, v15);
    }
  }
  else if ( (_DWORD)v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          KeSetEvent(*(PRKEVENT *)(a1 + 48), 0, 0);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 27) )
        {
          v19 = *(_QWORD *)(a1 + 168);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 8), &LockHandle);
          if ( *(_QWORD *)(v19 + 32) < *a3 )
            *(_QWORD *)(v19 + 32) = *a3;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else if ( *(_QWORD *)(a1 + 64) < *a3 )
        {
          *(_QWORD *)(a1 + 64) = *a3;
        }
        if ( *(_DWORD *)(a1 + 36) )
          VidSchiUnblockUnorderedWaiter(a1, 0LL);
        v11 = *(_QWORD **)(a1 + 88);
        while ( v11 != (_QWORD *)(a1 + 88) )
        {
          v12 = v11 - 34;
          v11 = (_QWORD *)*v11;
          if ( *(_BYTE *)(a1 + 27) )
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 32LL);
          else
            v13 = *(_QWORD *)(a1 + 64);
          if ( v12[36] <= v13 )
            VidSchiUnwaitWaitQueuePacket(v12, 0LL);
        }
      }
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 48);
      if ( v20 < *(_DWORD *)(a1 + 52) )
      {
        v21 = v20 + 1;
        v22 = (_QWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 48) = v21;
        if ( (_QWORD *)*v22 != v22 )
        {
          v23 = *v22 - 272LL;
          *(_DWORD *)(a1 + 48) = v21 - 1;
          VidSchiUnwaitWaitQueuePacket(v23, 0LL);
        }
      }
    }
  }
  else
  {
    v17 = (_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( (_QWORD *)*v17 != v17 )
    {
      v18 = *v17 - 272LL;
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(v18 + 80);
      VidSchiUnwaitWaitQueuePacket(v18, 0LL);
    }
  }
  if ( *(_BYTE *)(a1 + 27) && a4 && ((*(_DWORD *)(a1 + 40) - 2) & 0xFFFFFFFD) == 0 )
    VidSchiPropagateCrossAdapterSignal(a1);
}

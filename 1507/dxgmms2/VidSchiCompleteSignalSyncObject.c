/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C0005914
 * Callers:
 *     VidSchiCompleteSignalCommmand @ 0x1C00019A0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0019518 (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C001B0A8 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rdi
  int v6; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 40);
  if ( !v6 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    v24 = (_QWORD *)(a1 + 88);
    if ( (_QWORD *)*v24 == v24 )
      goto LABEL_10;
    v23 = *v24 - 272LL;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(v23 + 80);
    goto LABEL_35;
  }
  v9 = v6 - 1;
  if ( !v9 )
  {
    v19 = *(_DWORD *)(a1 + 48);
    if ( v19 >= *(_DWORD *)(a1 + 52) )
      goto LABEL_10;
    v20 = v19 + 1;
    v21 = (_QWORD *)(a1 + 88);
    *(_DWORD *)(a1 + 48) = v20;
    if ( (_QWORD *)*v21 == v21 )
      goto LABEL_10;
    v22 = (_QWORD *)*v21;
    *(_DWORD *)(a1 + 48) = v20 - 1;
    v23 = (__int64)(v22 - 34);
LABEL_35:
    VidSchiUnwaitWaitQueuePacket(v23, 0LL);
    goto LABEL_10;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 && !*(_BYTE *)(a1 + 28) )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v12[3] = a1;
        v12[4] = **(_QWORD **)(a1 + 56);
        v12[5] = *a3;
        WdLogEvent5_WdEvent(v12);
        v13 = *a3;
        v14 = *(_QWORD **)(a1 + 56);
        if ( *(_BYTE *)(a1 + 29) )
          *v14 = v13;
        else
          *(_DWORD *)v14 = v13;
        VidSchiUnwaitMonitoredFences(v4);
      }
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(a1 + 48), 0, 0);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 27) )
    {
      v15 = *(_QWORD *)(a1 + 168);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 8), &LockHandle);
      if ( *(_QWORD *)(v15 + 32) < *a3 )
        *(_QWORD *)(v15 + 32) = *a3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    else if ( *(_QWORD *)(a1 + 64) < *a3 )
    {
      *(_QWORD *)(a1 + 64) = *a3;
    }
    if ( *(_DWORD *)(a1 + 36) )
      VidSchiUnblockUnorderedWaiter(a1, 0LL);
    v16 = *(_QWORD **)(a1 + 88);
    while ( v16 != (_QWORD *)(a1 + 88) )
    {
      v17 = v16 - 34;
      v16 = (_QWORD *)*v16;
      if ( *(_BYTE *)(a1 + 27) )
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 32LL);
      else
        v18 = *(_QWORD *)(a1 + 64);
      if ( v17[36] <= v18 )
        VidSchiUnwaitWaitQueuePacket(v17, 0LL);
    }
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 27) && a4 && ((*(_DWORD *)(a1 + 40) - 2) & 0xFFFFFFFD) == 0 )
    VidSchiPropagateCrossAdapterSignal(a1);
}

/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x14067A210
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x140677528 (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140678E54 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x140678ED4 (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpAcquireQueueLock @ 0x14067A364 (TtmpAcquireQueueLock.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // xmm1
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  TtmpAcquireQueueLock();
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v4 = -1073740032;
    v5 = 412;
LABEL_3:
    TtmiLogError("TtmiWriteEventToSingleQueue", v5, -1, v4);
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x716D7454u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    v5 = 425;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x230uLL);
  v8 = 4LL;
  v9 = v7 + 2;
  do
  {
    *(_OWORD *)v9 = *(_OWORD *)a2;
    *((_OWORD *)v9 + 1) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v9 + 2) = *(_OWORD *)(a2 + 32);
    *((_OWORD *)v9 + 3) = *(_OWORD *)(a2 + 48);
    *((_OWORD *)v9 + 4) = *(_OWORD *)(a2 + 64);
    *((_OWORD *)v9 + 5) = *(_OWORD *)(a2 + 80);
    *((_OWORD *)v9 + 6) = *(_OWORD *)(a2 + 96);
    v9 += 16;
    v10 = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    *((_OWORD *)v9 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v9 = *(_OWORD *)a2;
  v9[2] = *(_QWORD *)(a2 + 16);
  *((_DWORD *)v9 + 6) = *(_DWORD *)(a2 + 24);
  v11 = *(_QWORD **)(a1 + 160);
  if ( *v11 != a1 + 152 )
    __fastfail(3u);
  v7[1] = v11;
  *v7 = a1 + 152;
  *v11 = v7;
  *(_QWORD *)(a1 + 160) = v7;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v4;
}

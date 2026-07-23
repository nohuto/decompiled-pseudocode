/*
 * XREFs of IopDeviceEjectComplete @ 0x1401D0F20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

__int64 __fastcall IopDeviceEjectComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int32 v4; // ebx

  v4 = _InterlockedExchange((volatile __int32 *)(a3 + 80), 3);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = PnpProcessCompletedEject;
  *(_QWORD *)(a3 + 40) = a3;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 16), DelayedWorkQueue);
  if ( v4 != 1 )
    pIoFreeIrp(a2);
  return 3221225494LL;
}

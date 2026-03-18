/*
 * XREFs of ?QueuePStateRequestWorkItem@DXGADAPTER@@QEAAXII@Z @ 0x1C001A4D4
 * Callers:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C001F020 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::QueuePStateRequestWorkItem(DXGADAPTER *this, unsigned int a2, __int32 a3)
{
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(520LL * a2 + *((_QWORD *)this + 251) + 512) + 244LL), a3);
  if ( !(unsigned __int8)_InterlockedExchange((volatile __int32 *)this + 777, 1) )
  {
    DXGADAPTER::AcquireReference(this);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 2928), CriticalWorkQueue);
  }
}

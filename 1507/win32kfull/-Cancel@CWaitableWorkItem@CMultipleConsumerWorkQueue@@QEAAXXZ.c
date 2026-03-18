/*
 * XREFs of ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D7E00
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9A60 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9B90 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z @ 0x1C02D5710 (-UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(
        CMultipleConsumerWorkQueue::CWaitableWorkItem *this)
{
  *((_DWORD *)this + 10) = 2;
  KeSetEvent(**((PRKEVENT **)this + 4), 1, 0);
}

/*
 * XREFs of ?Clear@?$Queue@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAAXXZ @ 0x1C002B760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::Clear(__int64 a1)
{
  DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Clear(a1 + 8);
}

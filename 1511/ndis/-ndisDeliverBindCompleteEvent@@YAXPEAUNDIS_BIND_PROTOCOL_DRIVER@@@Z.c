/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A6D04
 * Callers:
 *     _lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_ @ 0x1C00A5940 (_lambda_b71825de59a79cfcba83505e6bc2fe25_--_helper_func_cdecl_.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v3, (struct KPushLockBase *)(qword_1C00837F0 + 24));
  RunningDriver = a1->RunningDriver;
  if ( RunningDriver && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler) )
  {
    if ( ndisReferenceProtocol((__int64)RunningDriver, 0xCu) )
    {
      KLockHolder::ReleaseExclusive(&v3);
      if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
        ndisDereferenceProtocol(RunningDriver, 1LL, 0xCu);
      else
        ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
    }
  }
  KLockHolder::~KLockHolder(&v3);
}

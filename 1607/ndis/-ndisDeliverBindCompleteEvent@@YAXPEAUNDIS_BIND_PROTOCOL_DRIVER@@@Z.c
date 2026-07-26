/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7204
 * Callers:
 *     _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C00A4450 (_lambda_544ec5177f50874f26890ac2c9d93654_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  KLockThisExclusive v3; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v3, (struct KPushLockBase *)(qword_1C0089678 + 24));
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

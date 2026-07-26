/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A6AFC
 * Callers:
 *     _lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_ @ 0x1C00A6CB0 (_lambda_b71825de59a79cfcba83505e6bc2fe25_--_helper_func_cdecl_.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdi
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  __int64 v4; // rdx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = qword_1C0085818 + 24;
  v5.m_Lock = (KPushLockBase *)(qword_1C0085818 + 24);
  KeEnterCriticalRegion();
  v5.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  RunningDriver = a1->RunningDriver;
  v5.m_State = Exclusive;
  if ( RunningDriver && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler) )
  {
    if ( ndisReferenceProtocol((__int64)RunningDriver, 0xCu) )
    {
      ExReleasePushLockExclusiveEx(v2, 0LL);
      v5.m_State = Unlocked;
      v5.m_Region.m_Entered = 0;
      KeLeaveCriticalRegion();
      if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
        ndisDereferenceProtocol(RunningDriver, v4, 0xCu);
      else
        ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
    }
  }
  KLockHolder::~KLockHolder(&v5);
}

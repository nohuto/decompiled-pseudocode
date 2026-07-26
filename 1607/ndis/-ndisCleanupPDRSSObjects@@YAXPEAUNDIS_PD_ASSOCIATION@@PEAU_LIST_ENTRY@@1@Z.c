/*
 * XREFs of ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00DFF68
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DE710 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00DF5F0 (-NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E94 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00DFE30 (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00DFEB8 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisCleanupPDRSSObjects(struct NDIS_PD_ASSOCIATION *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  _LIST_ENTRY **v6; // rdi
  _LIST_ENTRY *v7; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY **v10; // rdi
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // rax
  KLockHolder v14; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v14, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v6 = (_LIST_ENTRY **)((char *)a1 + 152);
  while ( *v6 != (_LIST_ENTRY *)v6 )
  {
    v7 = *v6;
    Flink = (*v6)->Flink;
    if ( (_LIST_ENTRY **)(*v6)->Blink != v6 || Flink->Blink != v7 )
      __fastfail(3u);
    *v6 = Flink;
    Flink->Blink = (_LIST_ENTRY *)v6;
    v7->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v14);
    ndisCleanupPDQTracker((struct NDIS_PD_COUNTER **)&v7[-2].Blink);
    Blink = a2->Blink;
    if ( Blink->Flink != a2 )
      __fastfail(3u);
    v7->Flink = a2;
    v7->Blink = Blink;
    Blink->Flink = v7;
    a2->Blink = v7;
    KLockHolder::AcquireExclusive(&v14);
  }
  v10 = (_LIST_ENTRY **)((char *)a1 + 120);
  while ( *v10 != (_LIST_ENTRY *)v10 )
  {
    v11 = *v10;
    v12 = (*v10)->Flink;
    if ( (_LIST_ENTRY **)(*v10)->Blink != v10 || v12->Blink != v11 )
      __fastfail(3u);
    *v10 = v12;
    v12->Blink = (_LIST_ENTRY *)v10;
    v11->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v14);
    ndisCleanupPDCounter((struct NDIS_PD_COUNTER *)&v11[-2].Blink);
    v13 = a3->Blink;
    if ( v13->Flink != a3 )
      __fastfail(3u);
    v11->Flink = a3;
    v11->Blink = v13;
    v13->Flink = v11;
    a3->Blink = v11;
    KLockHolder::AcquireExclusive(&v14);
  }
  KLockHolder::~KLockHolder(&v14);
}

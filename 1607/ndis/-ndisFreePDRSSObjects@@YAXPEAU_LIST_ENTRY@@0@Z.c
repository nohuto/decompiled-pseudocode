/*
 * XREFs of ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00E00FC
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DE710 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00DF5F0 (-NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 * Callees:
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00DD6AC (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C00DD7A4 (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z @ 0x1C00DFE90 (-ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z.c)
 */

void __fastcall ndisFreePDRSSObjects(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx
  _UNICODE_STRING *p_Blink; // rsi
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *v8; // rcx

  while ( 1 )
  {
    Flink = a1->Flink;
    if ( a1->Flink == a1 )
      break;
    v5 = Flink->Flink;
    if ( Flink->Blink != a1 || v5->Blink != Flink )
      __fastfail(3u);
    a1->Flink = v5;
    p_Blink = (_UNICODE_STRING *)&Flink[-2].Blink;
    v5->Blink = a1;
    Flink->Flink = 0LL;
    ndisCleanupPDQAWM((struct NDIS_PD_QUEUE_AWM_STATE *)&Flink[2].Blink);
    if ( p_Blink )
      NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'(p_Blink);
  }
  while ( 1 )
  {
    v7 = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    v8 = v7->Flink;
    if ( v7->Blink != a2 || v8->Blink != v7 )
      __fastfail(3u);
    a2->Flink = v8;
    v8->Blink = a2;
    v7->Flink = 0LL;
    if ( v7 != (_LIST_ENTRY *)24 )
      NDIS_PD_COUNTER::`scalar deleting destructor'((char *)&v7[-2].Blink);
  }
}

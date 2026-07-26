/*
 * XREFs of ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DF3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C00DDFBC (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z @ 0x1C00E0550 (-ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E0578 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall NdisPDPIFreeQueue(struct _NDIS_PD_QUEUE *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rsi

  v1 = (_QWORD *)*((_QWORD *)a1 + 3);
  v3 = v1[5];
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x24u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
  ndisCleanupPDQTracker((struct NDIS_PD_QUEUE_TRACKER *)v1);
  (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 88) + 16LL))(a1);
  ndisCleanupPDQAWM((struct NDIS_PD_QUEUE_AWM_STATE *)(v1 + 8));
  NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'((NDIS_PD_QUEUE_TRACKER *)v1);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x25u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
}

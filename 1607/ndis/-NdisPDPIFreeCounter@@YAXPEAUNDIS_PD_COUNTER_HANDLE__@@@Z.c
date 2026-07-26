/*
 * XREFs of ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00DF0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00DD6AC (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00DFE30 (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall NdisPDPIFreeCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)a1 + 5);
  v3 = *((_QWORD *)a1 + 7);
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
  ndisCleanupPDCounter(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 88) + 48LL))(v3);
  NDIS_PD_COUNTER::`scalar deleting destructor'((char *)a1);
  if ( (unsigned __int8)byte_1C00895E4 >= 4u )
    WPP_SF_q(0x2Du, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
}

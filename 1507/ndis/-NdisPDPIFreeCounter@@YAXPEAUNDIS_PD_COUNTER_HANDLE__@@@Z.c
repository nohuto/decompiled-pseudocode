/*
 * XREFs of ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00DF340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00DDECC (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00E04F0 (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall NdisPDPIFreeCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)a1 + 5);
  v3 = *((_QWORD *)a1 + 7);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
  ndisCleanupPDCounter(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 88) + 48LL))(v3);
  NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)a1);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x2Du, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
}

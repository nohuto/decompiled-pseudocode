/*
 * XREFs of ?NdisPDPIFlushQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C006B590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall NdisPDPIFlushQueue(struct _NDIS_PD_QUEUE *a1)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)a1 + 2);
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x69u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(v1 + 24))(a1);
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_q(0x6Au, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)a1);
}

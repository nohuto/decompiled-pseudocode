/*
 * XREFs of ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00D9810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDPIRequestDrainNotification(struct _NDIS_PD_QUEUE *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_QWORD *)(v1 + 40);
  if ( !*(_QWORD *)(v1 + 72) )
    ndisBugCheckEx(0x23uLL, 2uLL, *((_QWORD *)a1 + 3), *(_QWORD *)(*(_QWORD *)(v3 + 64) + 88LL));
  *(_BYTE *)(v1 + 69) = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 64), 1, 0) )
  {
    if ( (unsigned __int8)byte_1C0083724 >= 5u )
      WPP_SF_q(0x3Eu, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)a1);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083724 >= 5u )
      WPP_SF_q(0x3Du, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, (__int64)a1);
    (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 88) + 80LL))(a1);
  }
}

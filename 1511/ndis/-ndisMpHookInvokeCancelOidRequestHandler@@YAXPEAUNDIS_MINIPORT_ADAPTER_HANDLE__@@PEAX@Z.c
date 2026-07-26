/*
 * XREFs of ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C006ECD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisMpHookInvokeCancelOidRequestHandler(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, void *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 477);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0xEDu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)(v2 + 352) + 128LL))(*((_QWORD *)a1 + 3), a2);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0xEEu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)a1);
}

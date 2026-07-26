/*
 * XREFs of ?ndisMpHookInvokeCancelDirectOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C0073B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisMpHookInvokeCancelDirectOidRequestHandler(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, void *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 477);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0xF1u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, void *))(v2 + 256))(*((_QWORD *)a1 + 3), a2);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0xF2u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)a1);
}

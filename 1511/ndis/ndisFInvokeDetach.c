/*
 * XREFs of ndisFInvokeDetach @ 0x1C00C86BC
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeDetach(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x72u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 184))(*(_QWORD *)(a1 + 24));
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x73u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
}

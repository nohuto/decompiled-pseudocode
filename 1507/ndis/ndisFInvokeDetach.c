/*
 * XREFs of ndisFInvokeDetach @ 0x1C00CF2AC
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeDetach(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x72u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 184))(*(_QWORD *)(a1 + 24));
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x73u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
}

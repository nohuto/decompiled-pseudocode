/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C00966E4
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C000F390 (ndisQueuedCheckForHang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di

  v1 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C0083718 >= 4u )
    WPP_SF_q(0xD8u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( (unsigned __int8)byte_1C0083718 >= 4u )
    WPP_SF_qD(0xD9u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v3);
  return v4;
}

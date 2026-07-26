/*
 * XREFs of ndisInvokeOpenAdapterComplete @ 0x1C00C9A48
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisInvokeOpenAdapterComplete(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qqd(0x5Du, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v2, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 112))(*(_QWORD *)(a1 + 32), a2);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qq(0x5Eu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v2, a1);
}

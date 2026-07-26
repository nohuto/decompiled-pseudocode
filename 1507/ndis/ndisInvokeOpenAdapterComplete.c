/*
 * XREFs of ndisInvokeOpenAdapterComplete @ 0x1C00D0638
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

void __fastcall ndisInvokeOpenAdapterComplete(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qqd(0x5Du, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v2, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 112))(*(_QWORD *)(a1 + 32), a2);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x5Eu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v2, a1);
}

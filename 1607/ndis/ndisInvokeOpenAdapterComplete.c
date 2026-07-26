/*
 * XREFs of ndisInvokeOpenAdapterComplete @ 0x1C00CF468
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisInvokeOpenAdapterComplete(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qqd(0x5Du, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, v2, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 112))(*(_QWORD *)(a1 + 32), a2);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qq(0x5Eu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, v2, a1);
}

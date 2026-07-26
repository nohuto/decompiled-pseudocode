/*
 * XREFs of ndisInvokeDirectOidRequestComplete @ 0x1C005AEE4
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qLqL @ 0x1C0058224 (WPP_SF_qLqL.c)
 */

void __fastcall ndisInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qLqL(0x69u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, *(_DWORD *)(a2 + 32));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 872))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x6Au, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, a2);
}

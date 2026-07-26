/*
 * XREFs of ndisInvokeDirectOidRequestComplete @ 0x1C0056880
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLqL @ 0x1C0053274 (WPP_SF_qLqL.c)
 */

void __fastcall ndisInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qLqL(0x69u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, *(_DWORD *)(a2 + 32));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 872))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x6Au, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2);
}

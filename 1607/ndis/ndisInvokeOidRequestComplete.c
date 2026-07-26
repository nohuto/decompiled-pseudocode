/*
 * XREFs of ndisInvokeOidRequestComplete @ 0x1C000CC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qLqL @ 0x1C0058224 (WPP_SF_qLqL.c)
 */

__int64 __fastcall ndisInvokeOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qLqL(101LL, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, *(unsigned int *)(a2 + 32), a2, a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 320))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    return WPP_SF_qq(102LL, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, a2);
  return result;
}

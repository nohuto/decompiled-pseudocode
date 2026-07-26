/*
 * XREFs of ndisFInvokeDirectOidRequestComplete @ 0x1C005891C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLq @ 0x1C004EBD8 (WPP_SF_qLq.c)
 *     WPP_SF_qLqL @ 0x1C0058224 (WPP_SF_qLqL.c)
 */

void __fastcall ndisFInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v5; // esi

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qLqL(0x88u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v5);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 304))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qLq(0x89u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v5);
}

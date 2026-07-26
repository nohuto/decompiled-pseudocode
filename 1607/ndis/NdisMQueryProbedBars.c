/*
 * XREFs of NdisMQueryProbedBars @ 0x1C00D89A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMQueryProbedBars(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rcx
  unsigned int v6; // edi

  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x77u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 4872);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 4880)) != 0 )
    v6 = v4(v5, a2);
  else
    v6 = -1073741637;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x78u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1, v6);
  return v6;
}

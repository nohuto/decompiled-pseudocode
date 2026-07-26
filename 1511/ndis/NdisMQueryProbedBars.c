/*
 * XREFs of NdisMQueryProbedBars @ 0x1C00D2A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMQueryProbedBars(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rcx
  unsigned int v6; // edi

  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x77u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 4872);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 4880)) != 0 )
    v6 = v4(v5, a2);
  else
    v6 = -1073741637;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qD(0x78u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1, v6);
  return v6;
}

/*
 * XREFs of NdisMGetVirtualFunctionLocation @ 0x1C00D29C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall NdisMGetVirtualFunctionLocation(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void (__fastcall *v9)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v10; // rcx

  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x75u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1);
  v9 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 4864);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 4880);
    if ( v10 )
      v9(v10, a2, a3, a4, a5);
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x76u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, a1);
}

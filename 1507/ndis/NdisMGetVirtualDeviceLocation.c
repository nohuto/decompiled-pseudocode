/*
 * XREFs of NdisMGetVirtualDeviceLocation @ 0x1C00D91F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisMGetVirtualDeviceLocation(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  void (__fastcall *v10)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0x70u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 4864);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4880);
    if ( v11 )
      v10(v11, a2, a3, a4, a6);
  }
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0x71u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
}

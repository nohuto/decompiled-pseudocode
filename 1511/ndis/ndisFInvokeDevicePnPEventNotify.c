/*
 * XREFs of ndisFInvokeDevicePnPEventNotify @ 0x1C0098348
 * Callers:
 *     ndisFForwardNetDevicePnPEvent @ 0x1C0098330 (ndisFForwardNetDevicePnPEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisFInvokeDevicePnPEventNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x7Fu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v4);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 272))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x80u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v4);
}

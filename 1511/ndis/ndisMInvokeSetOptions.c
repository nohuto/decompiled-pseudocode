/*
 * XREFs of ndisMInvokeSetOptions @ 0x1C00AA0A8
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021D94 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC8u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128))(a1, *(_QWORD *)(a1 + 64));
    v1 = v3;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xC9u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v3);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xCAu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  }
  return v1;
}

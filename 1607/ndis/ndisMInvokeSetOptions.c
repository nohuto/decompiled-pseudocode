/*
 * XREFs of ndisMInvokeSetOptions @ 0x1C009E658
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0012EAC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(__int64 a1)
{
  unsigned int v1; // edi
  int v4; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC8u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128))(a1, *(_QWORD *)(a1 + 64));
    v1 = v4;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xC9u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v4);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xCAu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  }
  return v1;
}

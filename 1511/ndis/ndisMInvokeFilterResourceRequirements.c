/*
 * XREFs of ndisMInvokeFilterResourceRequirements @ 0x1C00A9640
 * Callers:
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00A93DC (ndisPnPIrpFilterResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 800LL) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xC2u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 3816) + 800LL))(*(_QWORD *)(a1 + 4168), a2);
    v2 = v5;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xC3u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v5);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xC4u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  }
  return v2;
}

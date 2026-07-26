/*
 * XREFs of ndisMInvokeShutdown @ 0x1C0059E60
 * Callers:
 *     ndisBugcheckHandler @ 0x1C005BA30 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C00EF14C (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE2u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE3u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, a2);
}

/*
 * XREFs of ndisMInvokeShutdown @ 0x1C005E27C
 * Callers:
 *     ndisBugcheckHandler @ 0x1C005F830 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C00F5DDC (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE2u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE3u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
}

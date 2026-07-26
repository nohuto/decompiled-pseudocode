/*
 * XREFs of ndisMInvokeShutdown @ 0x1C0059EC0
 * Callers:
 *     ndisBugcheckHandler @ 0x1C005BCC0 (ndisBugcheckHandler.c)
 *     ndisMShutdownMiniport @ 0x1C00F4FCC (ndisMShutdownMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeShutdown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xDFu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), a2);
  if ( a2 != 1 && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xE0u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2);
}

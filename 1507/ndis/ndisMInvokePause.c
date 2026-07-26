/*
 * XREFs of ndisMInvokePause @ 0x1C00B0A60
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokePause(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xCEu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 160))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0xCFu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v5);
  return v6;
}

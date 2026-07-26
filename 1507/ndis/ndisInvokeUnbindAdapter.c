/*
 * XREFs of ndisInvokeUnbindAdapter @ 0x1C009C09C
 * Callers:
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E72A4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisInvokeUnbindAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v9; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qq(0x5Bu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 104))(a3, *(_QWORD *)(a2 + 32));
  v7 = v6;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
  {
    v9 = v6;
    WPP_SF_qqd(0x5Cu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2, v9);
  }
  return v7;
}

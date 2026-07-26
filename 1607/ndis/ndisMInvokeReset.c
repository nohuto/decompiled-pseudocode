/*
 * XREFs of ndisMInvokeReset @ 0x1C0023D2C
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeReset(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 3816);
  if ( (unsigned __int8)byte_1C00895D8 >= 4u )
    WPP_SF_q(222LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 216))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C00895D8 >= 4u )
    WPP_SF_qD(223LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v5);
  return v6;
}

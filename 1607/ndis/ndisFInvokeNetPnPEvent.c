/*
 * XREFs of ndisFInvokeNetPnPEvent @ 0x1C009CE98
 * Callers:
 *     ndisFForwardNetPnPEventToFilter @ 0x1C009CE00 (ndisFForwardNetPnPEventToFilter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisFInvokeNetPnPEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // esi
  unsigned int v6; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x81u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 280))(*(_QWORD *)(a1 + 24), a2);
  v7 = v6;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    v9 = v6;
    WPP_SF_qdD(0x82u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v4, v9);
  }
  return v7;
}

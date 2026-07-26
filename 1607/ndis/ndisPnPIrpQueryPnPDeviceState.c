/*
 * XREFs of ndisPnPIrpQueryPnPDeviceState @ 0x1C009DE48
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
    *(_QWORD *)(a3 + 56) |= 2uLL;
  if ( (*(_DWORD *)(a2 + 124) & 0x100) != 0 && (*(_DWORD *)(a2 + 4484) & 4) == 0 )
  {
    if ( (unsigned __int8)byte_1C00895D4 >= 2u )
      WPP_SF_q(0x31u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200000) != 0 )
      Template_jqxq(
        a1,
        &QueryPnPDeviceStateFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        235);
    *(_QWORD *)(a3 + 56) |= 4uLL;
  }
  if ( *(_DWORD *)(a2 + 3504) )
    *(_QWORD *)(a3 + 56) |= 0x20uLL;
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}

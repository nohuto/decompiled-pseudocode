/*
 * XREFs of ndisMRestoreOpenHandlers @ 0x1C001F608
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisMResetCompleteStage2 @ 0x1C0023B9C (ndisMResetCompleteStage2.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMiniportXStateClearFlag @ 0x1C001F85C (ndisMiniportXStateClearFlag.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMRestoreOpenHandlers(__int64 a1, __int64 a2)
{
  char v2; // di
  int v4; // ecx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 result; // rax

  v2 = a2;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(88LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1, a2) )
  {
    v5 = *(_QWORD *)(a1 + 2056);
    if ( v5 && !*(_BYTE *)(v5 + 376) )
      *(_QWORD *)(v5 + 632) = ndisFilterIndicateReceiveNetBufferLists;
    v6 = *(_QWORD **)(a1 + 56);
    *(_DWORD *)(a1 + 2676) = *(_DWORD *)(a1 + 2680);
    *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
    result = (__int64)ndisOpenCancelSendNetBufferLists;
    for ( *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists; v6; v6 = (_QWORD *)v6[49] )
    {
      v6[12] = v6[72];
      v6[21] = v6[70];
      v6[37] = v6[71];
      result = (__int64)ndisMReset;
      v6[22] = ndisMReset;
      v6[23] = ndisLegacyRequest;
      v6[24] = ndisMOidRequest;
      v6[103] = ndisMDirectOidRequest;
    }
  }
  else
  {
    result = (unsigned int)Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
      result = Template_jqxq(
                 v4,
                 (unsigned int)&KeptMiniportFakeHandlers,
                 (int)a1 + 4064,
                 (int)a1 + 4064,
                 *(_DWORD *)(a1 + 4112),
                 *(_QWORD *)(a1 + 4080),
                 *(_BYTE *)(a1 + 930));
    if ( (*(_BYTE *)(a1 + 930) & 2) != 0 )
    {
      for ( result = *(_QWORD *)(a1 + 56); result; result = *(_QWORD *)(result + 392) )
      {
        *(_QWORD *)(result + 184) = ndisLegacyRequest;
        *(_QWORD *)(result + 192) = ndisMOidRequest;
        *(_QWORD *)(result + 824) = ndisMDirectOidRequest;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    return WPP_SF_q(89LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  return result;
}

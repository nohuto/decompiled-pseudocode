/*
 * XREFs of ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001F710
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisMiniportXStateClearFlag @ 0x1C001F85C (ndisMiniportXStateClearFlag.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C00256BC (ndisUpdateFilterFakeStatus.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

char __fastcall ndisRestoreFilterHandlersForMediaDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v6; // ecx
  _QWORD *v7; // rcx
  void (__fastcall *v8)(_QWORD *, struct _NET_BUFFER_LIST *, int, unsigned int, int); // rax
  bool v9; // zf

  v4 = a2;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qqq(79LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, a2, a3);
  if ( a3 )
  {
    v9 = (*(_BYTE *)(a3 + 376) & 0xFE) == 0;
    *(_BYTE *)(a3 + 376) &= ~1u;
    if ( v9 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        WPP_SF_q(78LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a3);
      *(_QWORD *)(a3 + 624) = ndisFilterSendNetBufferLists;
      *(_QWORD *)(a3 + 640) = ndisFilterCancelSendNetBufferLists;
LABEL_7:
      if ( v4 )
      {
        v8 = ndisFilterIndicateReceiveNetBufferLists;
        *(_QWORD *)(v4 + 632) = ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_9;
      }
      goto LABEL_16;
    }
    ndisUpdateFilterFakeStatus(a3);
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_qD(80LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a3, *(unsigned __int8 *)(a3 + 376));
    LOBYTE(v8) = Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
      LOBYTE(v8) = Template_jqxq(
                     *(_QWORD *)(a3 + 832),
                     (unsigned int)&KeptFilterFakeHandlers,
                     (int)a3 + 808,
                     (int)a3 + 808,
                     *(_DWORD *)(a3 + 824),
                     *(_QWORD *)(*(_QWORD *)(a3 + 832) + 1312LL),
                     *(_BYTE *)(a3 + 376));
  }
  else
  {
    LOBYTE(a2) = 2;
    if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1, a2) )
    {
      v7 = *(_QWORD **)(a1 + 56);
      *(_DWORD *)(a1 + 2676) = *(_DWORD *)(a1 + 2680);
      *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
      *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists;
      while ( v7 )
      {
        v7[12] = v7[72];
        v7[21] = v7[70];
        v7[37] = v7[71];
        v7[22] = ndisMReset;
        v7 = (_QWORD *)v7[49];
      }
      goto LABEL_7;
    }
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_qD(81LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, *(unsigned __int8 *)(a1 + 930));
    LOBYTE(v8) = Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
      LOBYTE(v8) = Template_jqxq(
                     v6,
                     (unsigned int)&KeptMiniportFakeHandlers,
                     (int)a1 + 4064,
                     (int)a1 + 4064,
                     *(_DWORD *)(a1 + 4112),
                     *(_QWORD *)(a1 + 4080),
                     *(_BYTE *)(a1 + 930));
    if ( !v4 )
    {
LABEL_16:
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 1896);
      LOBYTE(v8) = *(_BYTE *)(a1 + 2684);
      *(_BYTE *)(a1 + 2672) = (_BYTE)v8;
    }
  }
LABEL_9:
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    LOBYTE(v8) = WPP_SF_qqq(82LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v4, a3);
  return (char)v8;
}

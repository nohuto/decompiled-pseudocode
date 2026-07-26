/*
 * XREFs of ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C0023F44
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 * Callees:
 *     ndisUpdateFilterFakeStatus @ 0x1C00188F8 (ndisUpdateFilterFakeStatus.c)
 *     ndisMiniportXStateClearFlag @ 0x1C0024090 (ndisMiniportXStateClearFlag.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 */

char __fastcall ndisRestoreFilterHandlersForMediaDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  bool v6; // zf
  void (__fastcall *v7)(_QWORD *, struct _NET_BUFFER_LIST *, int, unsigned int, int); // rax
  int v8; // ecx
  _QWORD *v9; // rcx

  v4 = a2;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qqq(79LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, a2, a3);
  if ( a3 )
  {
    v6 = (*(_BYTE *)(a3 + 376) & 0xFE) == 0;
    *(_BYTE *)(a3 + 376) &= ~1u;
    if ( v6 )
    {
      if ( (unsigned __int8)byte_1C0083714 >= 4u )
        WPP_SF_q(78LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a3);
      *(_QWORD *)(a3 + 624) = ndisFilterSendNetBufferLists;
      *(_QWORD *)(a3 + 640) = ndisFilterCancelSendNetBufferLists;
LABEL_8:
      if ( v4 )
      {
        v7 = ndisFilterIndicateReceiveNetBufferLists;
        *(_QWORD *)(v4 + 632) = ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_10;
      }
      goto LABEL_17;
    }
    ndisUpdateFilterFakeStatus(a3);
    if ( (unsigned __int8)byte_1C0083714 >= 4u )
      WPP_SF_qD(80LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a3, *(unsigned __int8 *)(a3 + 376));
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
      LOBYTE(v7) = Template_jqxq(
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
      v9 = *(_QWORD **)(a1 + 56);
      *(_DWORD *)(a1 + 2676) = *(_DWORD *)(a1 + 2680);
      *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
      *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists;
      while ( v9 )
      {
        v9[12] = v9[72];
        v9[21] = v9[70];
        v9[37] = v9[71];
        v9[22] = ndisMReset;
        v9 = (_QWORD *)v9[49];
      }
      goto LABEL_8;
    }
    if ( (unsigned __int8)byte_1C0083714 >= 4u )
      WPP_SF_qD(81LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, *(unsigned __int8 *)(a1 + 930));
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
      LOBYTE(v7) = Template_jqxq(
                     v8,
                     (unsigned int)&KeptMiniportFakeHandlers,
                     (int)a1 + 4064,
                     (int)a1 + 4064,
                     *(_DWORD *)(a1 + 4112),
                     *(_QWORD *)(a1 + 4080),
                     *(_BYTE *)(a1 + 930));
    if ( !v4 )
    {
LABEL_17:
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 1896);
      LOBYTE(v7) = *(_BYTE *)(a1 + 2684);
      *(_BYTE *)(a1 + 2672) = (_BYTE)v7;
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    LOBYTE(v7) = WPP_SF_qqq(82LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v4, a3);
  return (char)v7;
}

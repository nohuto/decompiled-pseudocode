/*
 * XREFs of ndisMValidatePMWakeReason @ 0x1C0046040
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_xq @ 0x1C004535C (Template_xq.c)
 *     WPP_SF_DqZ @ 0x1C00453D0 (WPP_SF_DqZ.c)
 *     WPP_SF_LqZ @ 0x1C0045484 (WPP_SF_LqZ.c)
 *     ndisMValidatePMWakePacket @ 0x1C0045F7C (ndisMValidatePMWakePacket.c)
 *     ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006DB24 (-NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?NdisTraceLoggingMiniportWakeReason@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C006DBC4 (-NdisTraceLoggingMiniportWakeReason@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_PM_WAKE_REASON_TYPE@@@.c)
 */

char __fastcall ndisMValidatePMWakeReason(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // r8d
  unsigned __int16 v13; // cx

  v3 = *(_DWORD *)(a2 + 56);
  if ( v3 < 0x14 )
  {
    NdisTraceLoggingMiniportWakeBufferTooLarge((struct _NDIS_MINIPORT_BLOCK *)a1, v3);
    return 0;
  }
  v5 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 4528) = *(_DWORD *)(v5 + 8);
  NdisTraceLoggingMiniportWakeReason((struct _NDIS_MINIPORT_BLOCK *)a1, *(enum _NDIS_PM_WAKE_REASON_TYPE *)(v5 + 8));
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    Template_xq(v6, &NicWakeReason, (const GUID *)(a1 + 4064), *(_QWORD *)(a1 + 4080), *(_DWORD *)(v5 + 8));
  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_LqZ(0x82u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, *(_DWORD *)(v5 + 8), a1, *(_QWORD *)(a1 + 3912));
  if ( *(_BYTE *)v5 != 0x80
    || *(_BYTE *)(v5 + 1) != 1
    || (v7 = *(_WORD *)(v5 + 2), v7 < 0x14u)
    || (v8 = *(unsigned int *)(a2 + 56), v7 > (unsigned int)v8) )
  {
    if ( (unsigned __int8)byte_1C0083715 < 2u )
      return 0;
    v13 = 131;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v5 + 4) )
    return 0;
  v9 = *(unsigned int *)(v5 + 12);
  if ( (v9 & 7) != 0 )
    return 0;
  if ( (unsigned int)v9 > (unsigned int)v8
    || v5 + v9 < v5
    || (v10 = *(_DWORD *)(v5 + 16), v10 + (int)v9 < (unsigned int)v9)
    || v10 + (int)v9 > (unsigned int)v8 )
  {
    if ( (unsigned __int8)byte_1C0083715 < 2u )
      return 0;
    v13 = 132;
LABEL_33:
    WPP_SF_q(v13, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1);
    return 0;
  }
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 == 1 )
    return ndisMValidatePMWakePacket(a1, a2);
  if ( v11 <= 1 || v11 > 3 && (v11 <= 4095 || v11 > 4099 && (unsigned int)(v11 - 0x2000) > 2) || (_DWORD)v9 || v10 )
    return 0;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_DqZ(*(_QWORD *)(a1 + 3912), v8, v11, a1, *(_QWORD *)(a1 + 3912));
  return 1;
}

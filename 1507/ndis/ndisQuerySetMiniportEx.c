/*
 * XREFs of ndisQuerySetMiniportEx @ 0x1C00036D0
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C0002C38 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C0002D6C (ndisPMAddWOLPattern.c)
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C000F7E0 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C001B644 (ndisQuerySetMiniportEx2.c)
 *     ndisAddWoLMagicPacket @ 0x1C001BF64 (ndisAddWoLMagicPacket.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006AF9C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisOidPMRemove @ 0x1C0096000 (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     ndisMCoOidRequestToRequest @ 0x1C00409A0 (ndisMCoOidRequestToRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C004C7F0 (NdisMCoOidRequestComplete.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisDereferenceVcPtr @ 0x1C00F9C4C (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C00F9EA0 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        _DWORD *MiniportAdapterHandle,
        _QWORD *P,
        PNDIS_OID_REQUEST Request,
        char a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // r12
  int v11; // eax
  _DWORD *v12; // rax
  unsigned int v13; // ecx
  unsigned int i; // ebx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // rdx
  NDIS_STATUS v20; // eax

  v10 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(12LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, MiniportAdapterHandle, Request, a5);
  ndisReferencePackage(&ndisPkgs);
  if ( (MiniportAdapterHandle[934] & 0x400) == 0 )
    Request->SupportedRevision = 1;
  if ( *(_QWORD *)&Request->NdisReserved[32] && a4 )
    v10 = 1;
  v11 = MiniportAdapterHandle[31];
  if ( (v11 & 0x100) != 0 )
  {
    v17 = -1073676280;
    goto LABEL_29;
  }
  if ( (v11 & 0x4000) != 0 )
  {
    v17 = -1073741823;
    goto LABEL_29;
  }
  if ( (int)MiniportAdapterHandle[981] > 1 && Request->DATA.QUERY_INFORMATION.Oid != -50265855 )
  {
    v17 = -1071448017;
LABEL_29:
    if ( v10 == 1 && a4 )
      ndisMDereferenceOpenUnlocked(*(_QWORD *)&Request->NdisReserved[32]);
    goto LABEL_23;
  }
  *(_DWORD *)&Request->NdisReserved[16] |= 8u;
  KeInitializeEvent((PRKEVENT)&Request->NdisReserved[40], NotificationEvent, 0);
  v12 = &ndisDirectOidRequestPathOids;
  v13 = 0;
  while ( Request->DATA.QUERY_INFORMATION.Oid != *v12 )
  {
    ++v13;
    ++v12;
    if ( v13 >= 0x14 )
      goto LABEL_14;
  }
  *(_DWORD *)&Request->NdisReserved[16] |= 0x200000u;
LABEL_14:
  if ( KeGetCurrentIrql() < 2u )
  {
    for ( i = 0; i < 0x1388; ++i )
    {
      if ( (MiniportAdapterHandle[30] & 0x300000) == 0 )
        break;
      NdisMSleep(0x3E8u);
    }
  }
  v15 = MiniportAdapterHandle[30];
  if ( (v15 & 0x300000) != 0 )
  {
    v17 = -1073676275;
    goto LABEL_29;
  }
  if ( (v15 & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)&Request->NdisReserved[16] & 0x200000) != 0 )
      v16 = ndisDoDirectOidRequest(Request, MiniportAdapterHandle, a6, a5);
    else
      v16 = ndisQueueOidRequest(Request, MiniportAdapterHandle, a6, a5);
    v17 = v16;
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
      v17 = *(_DWORD *)&Request->NdisReserved[8];
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  v19 = 0LL;
  if ( P )
  {
    if ( !(unsigned __int8)ndisReferenceVcPtr(P, 0LL) )
    {
      v17 = -1073676286;
      goto LABEL_29;
    }
    v19 = P[25];
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
    v20 = ndisMCoOidRequestToRequest(MiniportAdapterHandle);
  else
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*((_QWORD *)MiniportAdapterHandle + 477)
                                                                        + 552LL))(
            *((_QWORD *)MiniportAdapterHandle + 3),
            v19,
            Request);
  if ( v20 == 259 )
    KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
  else
    NdisMCoOidRequestComplete(MiniportAdapterHandle, P, Request, v20);
  v17 = *(_DWORD *)&Request->NdisReserved[8];
  if ( P )
    ndisDereferenceVcPtr(P);
LABEL_23:
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqqL(13LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, MiniportAdapterHandle, Request, a5, v17);
  return v17;
}

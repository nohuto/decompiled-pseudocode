/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C000EDF0 (ndisMDereferenceIfBlock.c)
 *     ndisDereferenceDriver @ 0x1C000F414 (ndisDereferenceDriver.c)
 *     ndisMReferenceIfBlock @ 0x1C0017410 (ndisMReferenceIfBlock.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
 *     ndisReferenceDriver @ 0x1C001BD38 (ndisReferenceDriver.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6CD0 (ndisDeQueueMiniportOnDriver.c)
 */

NDIS_STATUS __stdcall NdisIMDeInitializeDeviceInstance(NDIS_HANDLE NdisMiniportHandle)
{
  int v2; // edi
  __int64 v3; // rsi
  bool v4; // cf
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1073741823;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x10u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)NdisMiniportHandle);
  v3 = *((_QWORD *)NdisMiniportHandle + 477);
  if ( ndisReferenceMiniport((__int64)NdisMiniportHandle, 0x14u) )
  {
    ndisReferenceDriver(v3, 0);
    v4 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v4 )
      *((_BYTE *)NdisMiniportHandle + 5385) = 1;
    ndisPnPRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
    *((_DWORD *)NdisMiniportHandle + 981) = 0;
    *((_DWORD *)NdisMiniportHandle + 984) = 0;
    *((_DWORD *)NdisMiniportHandle + 1031) = 0;
    *((_BYTE *)NdisMiniportHandle + 5385) = 0;
    *((_DWORD *)NdisMiniportHandle + 1030) = 7;
    if ( ndisMReferenceIfBlock((__int64)NdisMiniportHandle, 0) )
    {
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 512) + 1112LL) = 7;
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 512) + 1116LL) = 0;
      v5 = *((_QWORD *)NdisMiniportHandle + 512);
      v7[0] = 1LL;
      v7[2] = 0x21800000008LL;
      v7[1] = v5 + 1112;
      ndisNsiNotifyClientInterfaceChange(v5, 0, (__int64)v7, 1);
      ndisMDereferenceIfBlock((__int64)NdisMiniportHandle, MPIFREF_IMDEINIT);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver(NdisMiniportHandle, *((_QWORD *)NdisMiniportHandle + 477));
      ndisDereferenceDriver(*((_QWORD *)NdisMiniportHandle + 477), 0);
    }
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x14u);
    ndisDereferenceDriver(v3, 0);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)NdisMiniportHandle, v2);
  return v2;
}

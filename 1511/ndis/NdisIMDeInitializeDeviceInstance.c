/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C00CC430
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ndisMDereferenceIfBlock @ 0x1C001DC98 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001DD3C (ndisMReferenceIfBlock.c)
 *     ndisReferenceDriver @ 0x1C0025210 (ndisReferenceDriver.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E0D84 (ndisDeQueueMiniportOnDriver.c)
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
    WPP_SF_q(0x10u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)NdisMiniportHandle);
  v3 = *((_QWORD *)NdisMiniportHandle + 477);
  if ( ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    ndisReferenceDriver(v3);
    v4 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v4 )
      *((_BYTE *)NdisMiniportHandle + 5369) = 1;
    ndisPnPRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
    *((_DWORD *)NdisMiniportHandle + 981) = 0;
    *((_DWORD *)NdisMiniportHandle + 984) = 0;
    *((_DWORD *)NdisMiniportHandle + 1031) = 0;
    *((_BYTE *)NdisMiniportHandle + 5369) = 0;
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
    WPP_SF_qD(0x11u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)NdisMiniportHandle, v2);
  return v2;
}

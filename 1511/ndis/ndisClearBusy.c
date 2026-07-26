/*
 * XREFs of ndisClearBusy @ 0x1C00665D8
 * Callers:
 *     NdisMSendNetBufferListsComplete @ 0x1C0003600 (NdisMSendNetBufferListsComplete.c)
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C000ED60 (ndisReturnNblWithPowerQueue.c)
 *     ndisQueuedCheckForHang @ 0x1C000F390 (ndisQueuedCheckForHang.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00402A8 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0040378 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0041408 (ndisDoCancelDirectOidRequest.c)
 *     ndisMDoDirectOidRequest @ 0x1C00422F8 (ndisMDoDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C004F3D0 (ndisMCancelSendNetBufferListsOnMiniport.c)
 *     NdisMResetComplete @ 0x1C0058590 (NdisMResetComplete.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00982A0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00A85C4 (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E0E20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E3284 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisClearBusy(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  KIRQL v6; // dl
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx

  v3 = *(_QWORD *)(a1 + 4512);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  if ( a3 > 49 )
  {
    v11 = a3 - 50;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
              *(_DWORD *)(v3 + 552) -= a2;
          }
          else
          {
            *(_DWORD *)(v3 + 500) -= a2;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 496) -= a2;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 508) -= a2;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 504) -= a2;
    }
  }
  else if ( a3 == 49 )
  {
    *(_DWORD *)(v3 + 488) &= ~0x10u;
  }
  else
  {
    v7 = a3 - 33;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              --*(_DWORD *)(v3 + 492);
          }
          else
          {
            *(_DWORD *)(v3 + 488) &= ~8u;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 488) &= ~4u;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 488) &= ~2u;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 488) &= ~1u;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
}

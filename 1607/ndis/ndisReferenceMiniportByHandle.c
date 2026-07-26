/*
 * XREFs of ndisReferenceMiniportByHandle @ 0x1C001791C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001C0F0 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A398C (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisFindRootDevice @ 0x1C00F277C (ndisFindRootDevice.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 */

char __fastcall ndisReferenceMiniportByHandle(_NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  char v4; // r15
  char v5; // r14
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // rbx
  KIRQL v9; // si
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rsi
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp
  KIRQL v16; // [rsp+78h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  do
  {
    if ( !v8 )
      break;
    if ( !a2 || ndisReferenceRef(&v8->Ref.SpinLock, 6u) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
      v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
      MiniportQueue = v8->MiniportQueue;
      v16 = v10;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == a1 )
        {
          v4 = 1;
          if ( a2 || !ndisReferenceMiniport((__int64)a1, a3) )
          {
            if ( (a1->Flags & 0x80200020) == 0
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0
              && ndisReferenceMiniport((__int64)a1, a3) )
            {
              v5 = 1;
            }
          }
          else
          {
            v5 = 1;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( !v4 );
      KeReleaseSpinLock(&v8->Ref.SpinLock, v16);
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v8->NextDriver;
      v9 = v12;
      if ( a2 )
        ndisDereferenceDriver((__int64)v8, 1);
    }
    else
    {
      NextDriver = v8->NextDriver;
    }
    v8 = NextDriver;
  }
  while ( !v4 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  return v5;
}

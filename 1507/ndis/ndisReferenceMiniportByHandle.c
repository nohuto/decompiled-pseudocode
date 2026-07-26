/*
 * XREFs of ndisReferenceMiniportByHandle @ 0x1C0018C80
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0008E18 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00A5BD4 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisFindRootDevice @ 0x1C00F1F44 (ndisFindRootDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C000F414 (ndisDereferenceDriver.c)
 *     ndisReferenceRef @ 0x1C001900C (ndisReferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 */

char __fastcall ndisReferenceMiniportByHandle(_NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  char v4; // r15
  char v5; // r14
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // rbx
  KIRQL v9; // si
  KIRQL v10; // al
  __int64 v11; // rdx
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rsi
  KIRQL v13; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp
  KIRQL v17; // [rsp+78h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  do
  {
    if ( !v8 )
      break;
    if ( !a2 || (unsigned __int8)ndisReferenceRef(&v8->Ref.SpinLock) )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
      v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
      MiniportQueue = v8->MiniportQueue;
      v17 = v10;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == a1 )
        {
          v4 = 1;
          if ( a2 || (LOBYTE(v11) = a3, !(unsigned __int8)ndisReferenceMiniport(a1, v11)) )
          {
            if ( (a1->Flags & 0x80200020) == 0
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0 )
            {
              LOBYTE(v11) = a3;
              if ( (unsigned __int8)ndisReferenceMiniport(a1, v11) )
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
      KeReleaseSpinLock(&v8->Ref.SpinLock, v17);
      v13 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v8->NextDriver;
      v9 = v13;
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

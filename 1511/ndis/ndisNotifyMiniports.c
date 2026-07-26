/*
 * XREFs of ndisNotifyMiniports @ 0x1C00E4E20
 * Callers:
 *     ndisPowerStateCallback @ 0x1C0099FF0 (ndisPowerStateCallback.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ndisReferenceDriver @ 0x1C0025210 (ndisReferenceDriver.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00A85C4 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C00EC348 (ndisReferenceNextUnprocessedMiniport.c)
 *     ndisUnprocessAllMiniports @ 0x1C00EC40C (ndisUnprocessAllMiniports.c)
 */

void __fastcall ndisNotifyMiniports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, void *a3)
{
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbx
  KIRQL v7; // bp
  struct _NDIS_MINIPORT_BLOCK *UnprocessedMiniport; // rax
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qLq(0x3Fu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (__int64)a1, 5);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( a1 )
  {
    ndisDevicePnPEventNotifyMiniport(a1, 5u, a3, 4u);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v6 = ndisMiniDriverList;
    v7 = v5;
    if ( ndisMiniDriverList )
    {
      do
      {
        if ( ndisReferenceDriver((__int64)v6) )
        {
          KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
          while ( 1 )
          {
            UnprocessedMiniport = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceNextUnprocessedMiniport(v6);
            if ( !UnprocessedMiniport )
              break;
            ndisDevicePnPEventNotifyMiniport(UnprocessedMiniport, 5u, a3, 4u);
          }
          ndisUnprocessAllMiniports(v6);
          v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          NextDriver = v6->NextDriver;
          v7 = v9;
          ndisDereferenceDriver((__int64)v6, 1);
        }
        else
        {
          NextDriver = v6->NextDriver;
        }
        v6 = NextDriver;
      }
      while ( NextDriver );
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x40u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (__int64)a1);
}

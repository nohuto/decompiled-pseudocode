/*
 * XREFs of ndisNotifyMiniports @ 0x1C00EB1F0
 * Callers:
 *     ndisPowerStateCallback @ 0x1C00B04E0 (ndisPowerStateCallback.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisReferenceDriver @ 0x1C001BDD0 (ndisReferenceDriver.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qLq @ 0x1C004EBD8 (WPP_SF_qLq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C00F3040 (ndisReferenceNextUnprocessedMiniport.c)
 *     ndisUnprocessAllMiniports @ 0x1C00F3104 (ndisUnprocessAllMiniports.c)
 */

void __fastcall ndisNotifyMiniports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, void *a3)
{
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbx
  KIRQL v7; // bp
  struct _NDIS_MINIPORT_BLOCK *UnprocessedMiniport; // rax
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qLq(0x3Fu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, (__int64)a1, 5);
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
        if ( ndisReferenceDriver((__int64)v6, 5u) )
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
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x40u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, (__int64)a1);
}

/*
 * XREFs of NdisFDeregisterFilterDriver @ 0x1C0052FA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCloseRef @ 0x1C00187A0 (ndisCloseRef.c)
 *     ndisDereferenceFilterDriver @ 0x1C0018DB4 (ndisDereferenceFilterDriver.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A7730 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __stdcall NdisFDeregisterFilterDriver(NDIS_HANDLE NdisFilterDriverHandle)
{
  NDIS_BIND_FILTER_DRIVER *v2; // rcx
  enum CallRunMode v3; // r8d

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x19u, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)NdisFilterDriverHandle);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v2 = (NDIS_BIND_FILTER_DRIVER *)(*((_QWORD *)NdisFilterDriverHandle + 58) + 8LL);
  ndisPnPMutexOwner = 2097687;
  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(v2, 0LL, v3);
  if ( ndisCloseRef((PKSPIN_LOCK)NdisFilterDriverHandle + 9) )
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisFilterDriverHandle);
  ndisPnPMutexOwner = 0;
  KeReleaseMutex(&ndisPnPMutex, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)NdisFilterDriverHandle);
}

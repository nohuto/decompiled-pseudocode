/*
 * XREFs of NdisFDeregisterFilterDriver @ 0x1C0052AF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C0014580 (ndisDereferenceFilterDriver.c)
 *     ndisCloseRef @ 0x1C0020064 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00ADE24 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __stdcall NdisFDeregisterFilterDriver(NDIS_HANDLE NdisFilterDriverHandle)
{
  NDIS_BIND_FILTER_DRIVER *v2; // rcx
  enum CallRunMode v3; // r8d

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x19u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)NdisFilterDriverHandle);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v2 = (NDIS_BIND_FILTER_DRIVER *)(*((_QWORD *)NdisFilterDriverHandle + 58) + 8LL);
  ndisPnPMutexOwner = 2097677;
  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(v2, 0LL, v3);
  if ( ndisCloseRef((PKSPIN_LOCK)NdisFilterDriverHandle + 9) )
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisFilterDriverHandle);
  ndisPnPMutexOwner = 0;
  KeReleaseMutex(&ndisPnPMutex, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)NdisFilterDriverHandle);
}

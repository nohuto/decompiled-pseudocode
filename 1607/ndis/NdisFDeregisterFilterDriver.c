/*
 * XREFs of NdisFDeregisterFilterDriver @ 0x1C0057A90
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C001A4E8 (ndisDereferenceFilterDriver.c)
 *     ndisCloseRef @ 0x1C001AF28 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A154C (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __stdcall NdisFDeregisterFilterDriver(NDIS_HANDLE NdisFilterDriverHandle)
{
  enum CallRunMode v2; // r8d
  __int64 v3; // rdx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x19u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisFilterDriverHandle);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(
    (NDIS_BIND_FILTER_DRIVER *)(*((_QWORD *)NdisFilterDriverHandle + 58) + 8LL),
    0LL,
    v2);
  if ( ndisCloseRef((PKSPIN_LOCK)NdisFilterDriverHandle + 9) )
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisFilterDriverHandle, v3, 0xFFu);
  KeReleaseMutex(&ndisPnPMutex, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisFilterDriverHandle);
}

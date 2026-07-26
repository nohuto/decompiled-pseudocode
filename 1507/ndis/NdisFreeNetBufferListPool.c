/*
 * XREFs of NdisFreeNetBufferListPool @ 0x1C00102C0
 * Callers:
 *     ndisUnloadPeriodicReceives @ 0x1C01065CC (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisPplDestroyPool @ 0x1C0010348 (ndisPplDestroyPool.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_q(16LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10);
    if ( v3[1] != (char *)PoolHandle + 72 || *v4 != (char *)PoolHandle + 72 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v2);
    ndisPplDestroyPool(PoolHandle);
    if ( (unsigned __int8)byte_1C008531C >= 4u )
      WPP_SF_q(17LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, PoolHandle);
  }
}

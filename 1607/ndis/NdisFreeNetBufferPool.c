/*
 * XREFs of NdisFreeNetBufferPool @ 0x1C004CD80
 * Callers:
 *     <none>
 * Callees:
 *     ndisPplDestroyPool @ 0x1C001F3E8 (ndisPplDestroyPool.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __stdcall NdisFreeNetBufferPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_q(0xCu, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, (__int64)PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10);
    if ( v3[1] != (char *)PoolHandle + 72 || *v4 != (char *)PoolHandle + 72 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v2);
    ndisPplDestroyPool((char *)PoolHandle);
    if ( (unsigned __int8)byte_1C00895DC >= 4u )
      WPP_SF_q(0xDu, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, (__int64)PoolHandle);
  }
}

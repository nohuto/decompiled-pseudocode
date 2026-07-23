/*
 * XREFs of PiControlAllocateBufferForUserModeCaller @ 0x1400093B8
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1403F26B4 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 *     PiControlQueryAndRemoveDevice @ 0x14064A850 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14064A99C (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14064ABA0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PiControlAllocateBufferForUserModeCaller(_QWORD *a1, unsigned int a2, char a3, __int64 a4)
{
  size_t v6; // rdi
  PVOID PoolWithQuotaTag; // rax

  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = a4;
    return 0LL;
  }
  v6 = a2;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, 0x20207050u);
  *a1 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memset(PoolWithQuotaTag, 0, v6);
    return 0LL;
  }
  return 3221225626LL;
}

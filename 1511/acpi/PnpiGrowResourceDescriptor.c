/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1C0070380
 * Callers:
 *     PnpiUpdateResourceList @ 0x1C007030C (PnpiUpdateResourceList.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C00704EC (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(__int64 a1)
{
  PVOID PoolWithTag; // rax

  if ( *(_QWORD *)a1 )
    return ACPIInternalGrowBuffer(
             a1,
             (unsigned int)(32 * (*(_DWORD *)(*(_QWORD *)a1 + 4LL) - 1) + 40),
             (unsigned int)(32 * (*(_DWORD *)(*(_QWORD *)a1 + 4LL) - 1) + 296));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x52706341u);
  *(_QWORD *)a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x108uLL);
  **(_WORD **)a1 = 1;
  *(_WORD *)(*(_QWORD *)a1 + 2LL) = 1;
  *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
  return 0LL;
}

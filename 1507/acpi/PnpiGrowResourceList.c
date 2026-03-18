/*
 * XREFs of PnpiGrowResourceList @ 0x1C00683B0
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0067DC4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C006841C (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(_QWORD *a1, int *a2)
{
  PVOID PoolWithTag; // rax
  int v6; // edi
  int v7; // ecx

  if ( *a1 && (v6 = *a2) != 0 )
  {
    v7 = ACPIInternalGrowBuffer(a1, (unsigned int)(8 * v6), (unsigned int)(8 * v6 + 64));
    if ( v7 >= 0 )
      *a2 = v6 + 8;
    else
      *a2 = 0;
    return (unsigned int)v7;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x52706341u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      *a2 = 8;
      memset(PoolWithTag, 0, 0x40uLL);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
}

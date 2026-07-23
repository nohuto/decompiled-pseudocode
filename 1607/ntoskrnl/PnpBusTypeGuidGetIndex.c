/*
 * XREFs of PnpBusTypeGuidGetIndex @ 0x14050B60C
 * Callers:
 *     PnpQueryBusInformation @ 0x14050E634 (PnpQueryBusInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpBusTypeGuidGetIndex(__int128 *Source1)
{
  unsigned int v2; // ebx
  unsigned int i; // edi
  char *v4; // rdx
  SIZE_T v5; // rax
  __int128 v7; // xmm0
  PVOID PoolWithTag; // rax
  void *v9; // rsi
  PVOID v10; // rbp

  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  v2 = PnpBusTypeGuidCount;
  for ( i = 0; i < PnpBusTypeGuidCount; ++i )
  {
    v4 = (char *)PnpBusTypeGuidArray + 16 * i;
    if ( Source1 == (__int128 *)v4 )
      break;
    v5 = RtlCompareMemory(Source1, v4, 0x10uLL);
    v2 = PnpBusTypeGuidCount;
    if ( v5 == 16 )
      break;
  }
  if ( i == v2 )
  {
    if ( i == PnpBusTypeGuidCountMax )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (i + 1), 0x75737050u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        v2 = PnpBusTypeGuidCount;
        v10 = PnpBusTypeGuidArray;
        memmove(PoolWithTag, PnpBusTypeGuidArray, 16LL * (unsigned int)PnpBusTypeGuidCount);
        ++PnpBusTypeGuidCountMax;
        if ( v10 )
        {
          ExFreePoolWithTag(v10, 0);
          v2 = PnpBusTypeGuidCount;
        }
        PnpBusTypeGuidArray = v9;
      }
      else
      {
        v2 = PnpBusTypeGuidCount;
        i = -1;
      }
    }
    if ( i != -1 )
    {
      v7 = *Source1;
      PnpBusTypeGuidCount = v2 + 1;
      *((_OWORD *)PnpBusTypeGuidArray + v2) = v7;
    }
  }
  KeReleaseGuardedMutex(&PnpBusTypeGuidLock);
  return (unsigned __int16)i;
}

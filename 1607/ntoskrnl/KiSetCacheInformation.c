/*
 * XREFs of KiSetCacheInformation @ 0x1403D4B68
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KiSetCacheInformationIntel @ 0x1403D4C7C (KiSetCacheInformationIntel.c)
 *     KiSetCacheInformationAmd @ 0x1403DDA18 (KiSetCacheInformationAmd.c)
 */

__int64 KiSetCacheInformation()
{
  KPCR *Pcr; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 CpuVendor; // al
  __int64 result; // rax
  unsigned int v4; // r14d
  _CACHE_DESCRIPTOR *Cache; // r8
  unsigned int v6; // r10d
  unsigned int LineSize; // r11d
  unsigned int Size; // edi
  unsigned __int8 Associativity; // r9

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 1 )
  {
    result = KiSetCacheInformationAmd();
  }
  else
  {
    if ( (unsigned __int8)(CpuVendor - 2) > 1u )
      KeBugCheck(0x5Du);
    result = KiSetCacheInformationIntel();
  }
  v4 = 0;
  Cache = CurrentPrcb->Cache;
  Pcr->SecondLevelCacheSize = 0;
  v6 = 0;
  if ( CurrentPrcb->CacheCount )
  {
    LineSize = KeLargestCacheLine;
    Size = KiLargestCacheSize;
    do
    {
      if ( Cache->Level >= 2u && (Cache->Type & 0xFFFFFFFD) == 0 )
      {
        Associativity = Cache->Associativity;
        if ( Associativity == 0xFF )
          Associativity = 16;
        if ( Associativity && Cache->Size / Associativity > v4 )
        {
          v4 = Cache->Size / Associativity;
          Pcr->SecondLevelCacheSize = Cache->Size;
          Pcr->SecondLevelCacheAssociativity = Associativity;
        }
        if ( Cache->LineSize > LineSize )
          LineSize = Cache->LineSize;
        result = Cache->Size;
        if ( (unsigned int)result > Size )
          Size = Cache->Size;
      }
      ++Cache;
      ++v6;
    }
    while ( v6 < CurrentPrcb->CacheCount );
    KeLargestCacheLine = LineSize;
    KiLargestCacheSize = Size;
  }
  return result;
}

/*
 * XREFs of MiMappingHasIoReferences @ 0x140116BDC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // r11
  volatile signed __int64 *v2; // r9
  unsigned __int64 v3; // r10
  signed __int64 PteShadow; // rax
  signed __int64 result; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rdx

  v1 = 2040LL;
  v2 = (volatile signed __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = a1;
  PteShadow = *v2;
  if ( (unsigned __int64)(v2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v2);
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v2 = (volatile signed __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v2;
    if ( (unsigned __int64)(v2 + 0x12090482600LL) <= v1 )
      PteShadow = MiReadPteShadow(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v2);
  }
  v6 = PteShadow;
  result = _InterlockedCompareExchange64(v2, PteShadow | 0x200, PteShadow);
  if ( v6 != result )
  {
    do
    {
      v7 = result;
      result = _InterlockedCompareExchange64(v2, result | 0x200, result);
    }
    while ( result != v7 );
  }
  return result;
}

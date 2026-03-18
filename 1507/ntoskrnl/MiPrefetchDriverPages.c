/*
 * XREFs of MiPrefetchDriverPages @ 0x14042530C
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiPrefetchDriverPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 PteShadow; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a1 <= a2 )
  {
    v2 = 0LL;
    v4 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    v5 = a1;
    do
    {
      PteShadow = *(_QWORD *)v5;
      if ( MiPteInShadowRange(v5) )
        PteShadow = MiReadPteShadow(v5, PteShadow);
      if ( (PteShadow & 1) == 0
        && ((PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 && PteShadow != MiMakeDemandZeroPte(4)) )
      {
        if ( !v2 )
        {
          v4 = (__int64)(v5 << 25) >> 16;
          v7 = v4;
        }
        v2 = ((__int64)((v5 << 25) + 0x10000000) >> 16) - v4;
        v8 = v2;
      }
      v5 += 8LL;
    }
    while ( v5 <= a2 );
    if ( v2 > 0x1000 )
      MiPrefetchVirtualMemory(1uLL, (__int64)&v7, 1LL, 45);
  }
}

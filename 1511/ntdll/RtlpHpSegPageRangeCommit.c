/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x18001B578
 * Callers:
 *     RtlpHpSegLfhVsCommit @ 0x18001B510 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegAlloc @ 0x18005895C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 */

NTSTATUS __fastcall RtlpHpSegPageRangeCommit(
        volatile signed __int64 *BaseAddress,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r10
  int v7; // esi
  unsigned int v10; // edi
  ULONG Protect; // eax
  NTSTATUS result; // eax
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  char v15; // al
  char v16; // al
  PVOID BaseAddressa; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF
  int v19; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = a3 + 32LL * a4;
  v7 = 0;
  if ( a3 != v6 )
  {
    do
    {
      if ( (*(_BYTE *)(a3 + 24) & 2) == 0 )
      {
        v5 = a3;
        if ( !v4 )
          v4 = a3;
        ++v7;
      }
      a3 += 32LL;
    }
    while ( a3 != v6 );
    v10 = v4 ? ((__int64)(v5 - v4) >> 5) + 1 : v19;
    if ( v7 )
    {
      BaseAddressa = (PVOID)((v4 & 0xFFFFFFFFFFF00000uLL)
                           + ((unsigned int)((__int64)(v4 - (v4 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
      RegionSize = v10 << 12;
      Protect = RtlpGetHeapProtection((PVOID)BaseAddress);
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
      if ( result < 0 )
        return result;
      _InterlockedExchangeAdd64(BaseAddress + 1, v7);
      if ( v4 < v4 + 32LL * v10 )
      {
        v13 = (char *)(v4 + 24);
        v14 = ((32 * (unsigned __int64)v10 - 1) >> 5) + 1;
        do
        {
          v15 = *v13;
          if ( v7 <= 0 )
            v16 = v15 & 0xFD;
          else
            v16 = v15 | 2;
          *v13 = v16;
          v13 += 32;
          --v14;
        }
        while ( v14 );
      }
      *(_BYTE *)(a2 + 26) = ~(v7 + ~*(_BYTE *)(a2 + 26));
      if ( MEMORY[0x7FFE0380] )
      {
        if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 10LL);
      }
    }
  }
  return 0;
}

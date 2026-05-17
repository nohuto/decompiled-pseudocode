/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1800593FC
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F0F4C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 */

unsigned __int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int HeapProtection; // eax
  int v6; // esi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  int v13; // eax
  unsigned __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  v19 = 0x200000LL;
  v18 = 0LL;
  v15 = 0LL;
  HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
  v6 = ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v19, 0x2000, HeapProtection);
  if ( v6 < 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v7 = v19;
    v8 = (v18 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v9 = v19 + v18;
    v15 = v8;
    v10 = v8 - v18;
    v16 = v8 - v18;
    if ( v8 != v18 )
    {
      ZwFreeVirtualMemory(-1LL, &v18, &v16, 0x8000LL);
      v8 = v15;
      v7 = v19;
      v10 = v16;
    }
    v11 = v7 - v10;
    v12 = v9 - (v8 + 0x100000);
    v19 = v11;
    v16 = v12;
    v18 = v8 + 0x100000;
    if ( v12 )
    {
      ZwFreeVirtualMemory(-1LL, &v18, &v16, 0x8000LL);
      v8 = v15;
      v11 = v19;
      v12 = v16;
    }
    v18 = v8;
    v19 = v11 - v12;
    v17 = (unsigned int)(a2 << 12) + 0x2000LL;
    v13 = RtlpGetHeapProtection((_DWORD *)a1, 1);
    v6 = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v17, 4096, v13);
    if ( v6 < 0 )
      goto LABEL_16;
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1, v19 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), v17 >> 12);
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, v15, v17, 12LL);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeReserve(a1, v15, 0x100000LL);
  }
  if ( v6 >= 0 )
    return v15;
LABEL_16:
  if ( v18 )
  {
    v16 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v18, &v16, 0x8000LL);
  }
  return v2;
}

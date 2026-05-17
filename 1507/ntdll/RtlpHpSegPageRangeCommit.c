/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x1800704D4
 * Callers:
 *     RtlpHpSegAlloc @ 0x180036200 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegUpdateCommit @ 0x1800371B0 (RtlpHpSegUpdateCommit.c)
 *     RtlpHpSegPageRangeCalcCommitRegion @ 0x180037210 (RtlpHpSegPageRangeCalcCommitRegion.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // edi
  int HeapProtection; // eax
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-10h] BYREF

  v6 = RtlpHpSegPageRangeCalcCommitRegion(a3, a4, 1, &v10, &v9);
  if ( v6 )
  {
    v12 = (v10 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v10 - (v10 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    v11 = v9 << 12;
    HeapProtection = RtlpGetHeapProtection(a1, 1);
    result = ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v11, 4096, HeapProtection);
    if ( (int)result < 0 )
      return result;
    RtlpHpSegUpdateCommit((__int64)a1, a2, v10, v9, v6);
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(a1, v12, v11, 10LL);
    }
  }
  return 0LL;
}

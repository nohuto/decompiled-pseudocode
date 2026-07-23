/*
 * XREFs of RtlpFreeUserBlockToHeap @ 0x180009080
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180008B34 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 */

LOGICAL __fastcall RtlpFreeUserBlockToHeap(PVOID BaseAddress, _BYTE *a2, ULONG a3)
{
  char v6; // cl
  __int64 v7; // r8
  ULONG HeapProtection; // eax
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h] BYREF

  OldProtect = a3;
  if ( a2[17] )
  {
    v6 = a2[16];
    RegionSize = 4096LL;
    v7 = 1LL << v6;
    if ( (unsigned __int64)(1LL << v6) > 0xF0000 )
      v7 = 983040LL;
    BaseAddressa = &a2[v7 + *((unsigned __int16 *)a2 + 9)];
    HeapProtection = RtlpGetHeapProtection(BaseAddress);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
  }
  return RtlFreeHeap(BaseAddress, 0x800000u, a2);
}

/*
 * XREFs of RtlpCreateLowFragHeap @ 0x180053214
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180053028 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLowFragHeap @ 0x1800533F4 (RtlpInitializeLowFragHeap.c)
 *     RtlQueryResourcePolicy @ 0x180053D20 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x180057FE4 (RtlpInitializeLfhRandomDataArray.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 */

PVOID __fastcall RtlpCreateLowFragHeap(_DWORD *BaseAddress)
{
  unsigned int v2; // ebx
  int v3; // ecx
  ULONG_PTR v4; // rcx
  ULONG Protect; // eax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rsi
  ULONG HeapProtection; // eax
  __int64 v10; // rcx
  int v12; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddressa; // [rsp+78h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+48h] BYREF
  ULONG_PTR v15; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v12, 4LL) >= 0 && v12 <= 10 )
    v2 = 3;
  if ( (BaseAddress[28] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v3 = RtlpAffinityState;
    if ( (v2 & 1) != 0 )
      v3 = 1;
    v4 = 48 * ((unsigned int)(v3 - 1) + 69LL + 4LL * (unsigned int)(129 * v3));
  }
  BaseAddressa = 0LL;
  RegionSize = v4;
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    return 0LL;
  v6 = RtlpAffinityState;
  if ( (v2 & 1) != 0 )
    v6 = 1;
  v7 = (unsigned int)(v6 - 1);
  v8 = (unsigned int)v7;
  v15 = (48 * v7 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &v15, 0x1000u, HeapProtection) < 0 )
  {
    RegionSize = 0LL;
    RtlpSecMemFreeVirtualMemory(v10, &BaseAddressa, &RegionSize, 0x8000u);
    return 0LL;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      (int)BaseAddressa,
      v15,
      16 * *((_QWORD *)BaseAddress + 24),
      (HANDLE)MEMORY[0x7FFE0380]);
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, v15, 9LL);
  }
  RtlpInitializeLowFragHeap(BaseAddress, v2, BaseAddressa);
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 528LL) += RegionSize;
  *(_QWORD *)(*((_QWORD *)BaseAddressa + 3) + 536LL) += v15;
  *((_QWORD *)BaseAddressa + 6) = (char *)BaseAddressa + RegionSize;
  *((_QWORD *)BaseAddressa + 5) = (char *)BaseAddressa + v15;
  *((_QWORD *)BaseAddressa + 4) = (char *)BaseAddressa + 48 * v8 + 3312;
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *((_DWORD *)BaseAddressa + 168) = v2;
  return BaseAddressa;
}

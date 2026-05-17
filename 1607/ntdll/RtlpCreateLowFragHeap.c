/*
 * XREFs of RtlpCreateLowFragHeap @ 0x180029C34
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeLowFragHeap @ 0x180029E0C (RtlpInitializeLowFragHeap.c)
 *     RtlQueryResourcePolicy @ 0x180029F60 (RtlQueryResourcePolicy.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18003F31C (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpCreateLowFragHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  __int64 v4; // rcx
  int HeapProtection; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  int v12; // [rsp+70h] [rbp+38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+40h] BYREF
  __int64 v14; // [rsp+80h] [rbp+48h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v12, 4LL) >= 0 && v12 <= 10 )
    v2 = 3;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
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
  v13 = 0LL;
  v14 = v4;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v14, 0x2000, HeapProtection) < 0 )
    return 0LL;
  v6 = RtlpAffinityState;
  if ( (v2 & 1) != 0 )
    v6 = 1;
  v7 = (unsigned int)(v6 - 1);
  v8 = (unsigned int)v7;
  v15 = (48 * v7 + 7407) & 0xFFFFFFFFFFFFF000uLL;
  v9 = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v15, 4096, v9) < 0 )
  {
    v14 = 0LL;
    RtlpSecMemFreeVirtualMemory(v10, &v13, &v14, 0x8000LL);
    return 0LL;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapExtendEvent(a1, v13, v15, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE0380]);
    RtlpLogHeapCommit(a1, v13, v15, 9LL);
  }
  RtlpInitializeLowFragHeap(a1, v2, v13);
  *(_QWORD *)(*(_QWORD *)(v13 + 24) + 536LL) += v14;
  *(_QWORD *)(*(_QWORD *)(v13 + 24) + 544LL) += v15;
  *(_QWORD *)(v13 + 48) = v13 + v14;
  *(_QWORD *)(v13 + 40) = v13 + v15;
  *(_QWORD *)(v13 + 32) = v13 + 48 * (v8 + 69);
  if ( (RtlpLowFragHeapGlobalFlags & 3) == 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 1u;
    RtlpInitializeLfhRandomDataArray();
  }
  *(_DWORD *)(v13 + 672) = v2;
  return v13;
}

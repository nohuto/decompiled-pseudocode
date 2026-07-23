/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x1403AEDC4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1400BC0AC (RtlClearAllBitsEx.c)
 *     RtlNumberOfSetBitsEx @ 0x140131C30 (RtlNumberOfSetBitsEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlCalculateLivedumpSize @ 0x1401B4524 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1401BD00C (IopLiveDumpTraceBufferEstimation.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403AE450 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403AF83C (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  bool v6; // zf
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+78h] [rbp+10h]

  memset(&v8[1], 0, 0x20uLL);
  *(_DWORD *)(a1 + 80) |= 1u;
  IopLiveDumpCallRemovePagesCallbacks(a1);
  LODWORD(v8[4]) = 17;
  v8[0] = IopLiveDumpStartMirroringCallback;
  v8[1] = IopLiveDumpEndMirroringCallback;
  v8[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v2 = 0LL;
  v3 = MmDuplicateMemory((__int64)v8);
  if ( v3 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
      IopLiveDumpUncorralProcessors(a1 + 240);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  else
  {
    v4 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    *(_QWORD *)(a1 + 96) = v4 + (v4 >> 4);
    if ( (*(_DWORD *)(a1 + 44) & 1) != 0 && HvlCalculateLivedumpSize((__int64)&v9) >= 0 )
    {
      v5 = v10;
      v6 = (v10 & 0xFFF) == 0;
      *(_QWORD *)(a1 + 112) = ((v9 & 0xFFF) != 0) + (v9 >> 12);
      LOBYTE(v2) = !v6;
      *(_QWORD *)(a1 + 120) = v2 + (v5 >> 12);
    }
    else
    {
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    IopLiveDumpTraceBufferEstimation();
  }
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 368));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 424));
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 464));
  *(_DWORD *)(a1 + 80) &= ~1u;
  return (unsigned int)v3;
}

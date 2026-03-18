/*
 * XREFs of ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x1C0094FCC
 * Callers:
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004CCB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0012C00 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z @ 0x1C00907B8 (-MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ResetAddressSpaceForFailure(CVirtualAddressAllocator *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax

  VIDMM_PROCESS::MarkAllDevicesAsError(*((_QWORD *)this + 9), *((_QWORD *)this + 8));
  v2 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL);
  if ( v3 )
  {
    v4 = 0LL;
    do
    {
      v5 = *((_QWORD *)this + 12);
      if ( v5 )
      {
        if ( *(_QWORD *)(v4 + v5) )
        {
          CVirtualAddressAllocator::EvictRootPageTable(this, v2, 0);
          CVirtualAddressAllocator::FlushGpuVaTlb(this, v2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
        }
      }
      ++v2;
      v4 += 32LL;
    }
    while ( v2 < v3 );
  }
}

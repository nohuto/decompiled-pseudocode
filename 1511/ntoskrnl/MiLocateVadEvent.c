/*
 * XREFs of MiLocateVadEvent @ 0x1400B8A24
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x14001D660 (MiCheckUserVirtualAddress.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x1400D5DC0 (MiFreeVadRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     MiMarkMdlComplete @ 0x1401D6CB4 (MiMarkMdlComplete.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     MiMarkPrivateImageCfgBits @ 0x1403CA63C (MiMarkPrivateImageCfgBits.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 *     MiGetReadyInPageBlock @ 0x140623DE4 (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x14062B30C (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateVadEvent(__int64 a1, int a2)
{
  __int64 *result; // rax

  for ( result = *(__int64 **)(a1 + 56); result && *((_DWORD *)result + 2) != a2; result = (__int64 *)*result )
    ;
  return result;
}

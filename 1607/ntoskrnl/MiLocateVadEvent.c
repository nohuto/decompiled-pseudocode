/*
 * XREFs of MiLocateVadEvent @ 0x1400150E4
 * Callers:
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x14001EA50 (MiCheckUserVirtualAddress.c)
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400A8CE8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiMarkMdlComplete @ 0x1401E879C (MiMarkMdlComplete.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 *     MiMarkPrivateImageCfgBits @ 0x1404D7548 (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x140659D50 (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x1406623D0 (MiCopyLargeVad.c)
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

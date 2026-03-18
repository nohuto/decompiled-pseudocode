/*
 * XREFs of MiLocateVadEvent @ 0x140015564
 * Callers:
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x14001EED0 (MiCheckUserVirtualAddress.c)
 *     MiFreeVadRange @ 0x1400272B4 (MiFreeVadRange.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AA768 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiMarkMdlComplete @ 0x1401E8970 (MiMarkMdlComplete.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404CD4BC (MiDeleteTebRange.c)
 *     MiMarkPrivateImageCfgBits @ 0x1404F45BC (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x140659C6C (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x1406622EC (MiCopyLargeVad.c)
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

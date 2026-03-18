/*
 * XREFs of MiLocateVadEvent @ 0x140122918
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x140089780 (MiCheckUserVirtualAddress.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401228AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiMarkMdlComplete @ 0x140219754 (MiMarkMdlComplete.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MiMarkPrivateImageCfgBits @ 0x14054886C (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x1406A2FF8 (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x1406A9BD0 (MiCopyLargeVad.c)
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

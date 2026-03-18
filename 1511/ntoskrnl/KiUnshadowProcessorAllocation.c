/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x1403B1AC0
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 20480LL);
    return MmDeleteShadowMapping(a1 + 28288, 4096LL);
  }
  return result;
}

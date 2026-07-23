/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x1800435F4
 * Callers:
 *     RtlpHpSegAllocSize @ 0x180029300 (RtlpHpSegAllocSize.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180041790 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegReAlloc @ 0x180043274 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x180043410 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpReallocComputeSizes @ 0x180043A14 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegFree @ 0x18004C910 (RtlpHpSegFree.c)
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 *     RtlpHpSegSetExtraPresent @ 0x180051798 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, __int64 a2)
{
  unsigned __int64 DescriptorValidateSafe; // rdx

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  }
  else if ( a1
         && (a1 ^ RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) != 0xA2E64EADA2E64EADuLL )
  {
    DescriptorValidateSafe = 0LL;
  }
  else
  {
    DescriptorValidateSafe = (a2 & 0xFFFFFFFFFFF00000uLL)
                           + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0 && a1 )
    return 0LL;
  if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) == 0 )
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0
      && (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0
      && (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
    {
      return DescriptorValidateSafe;
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0
    && a2 != (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
           + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
  {
    return 0LL;
  }
  return DescriptorValidateSafe;
}

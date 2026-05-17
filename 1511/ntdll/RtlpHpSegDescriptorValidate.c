/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x18001B6F0
 * Callers:
 *     RtlpHpSegAllocSize @ 0x180019D50 (RtlpHpSegAllocSize.c)
 *     RtlpHpSegLfhVsDecommit @ 0x18001A7A0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegReAlloc @ 0x18001A9C0 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18001B074 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsCommit @ 0x18001B510 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegWalkHeap @ 0x18004FE60 (RtlpHpSegWalkHeap.c)
 *     RtlpHpSegSetExtraPresent @ 0x18005CA38 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F29F4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, __int64 a2)
{
  unsigned __int64 DescriptorValidateSafe; // rdx
  unsigned __int64 result; // rax

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe();
  }
  else if ( !a1
         || (a1 ^ RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
  {
    DescriptorValidateSafe = (a2 & 0xFFFFFFFFFFF00000uLL)
                           + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  else
  {
    DescriptorValidateSafe = 0LL;
  }
  if ( DescriptorValidateSafe && ((*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0 || !a1) )
  {
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0 )
    {
      result = DescriptorValidateSafe;
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
        return result;
      if ( a2 == (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
               + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
        return DescriptorValidateSafe;
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0
        && (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0
        && (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
      {
        return DescriptorValidateSafe;
      }
    }
  }
  return 0LL;
}

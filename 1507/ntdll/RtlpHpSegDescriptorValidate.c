/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x1800373EC
 * Callers:
 *     RtlpHpSegAllocSize @ 0x180036EDC (RtlpHpSegAllocSize.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180037080 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegReAlloc @ 0x180037EE0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegSetExtraPresent @ 0x18006A4A8 (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpSegWalkHeap @ 0x1800F1664 (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F13D0 (RtlpHpSegGetDescriptorValidateSafe.c)
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

/*
 * XREFs of KiRestoreFeatureBits @ 0x140119BA0
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140119B44 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140126614 (HviIsAnyHypervisorPresent.c)
 */

char KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 FeatureBits; // rax
  unsigned __int64 v2; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  FeatureBits = CurrentPrcb->FeatureBits;
  if ( (FeatureBits & 0x400000000LL) != 0 )
  {
    FeatureBits = CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8);
    __writemsr(0xC0000103, FeatureBits);
  }
  if ( KiFlushPcid )
  {
    v2 = __readcr3();
    FeatureBits = v2 | 2;
    __writecr3(FeatureBits);
  }
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    LOBYTE(FeatureBits) = CurrentPrcb->CpuType;
    if ( (char)FeatureBits > 15 && (_BYTE)FeatureBits != 17 )
    {
      LOBYTE(FeatureBits) = HviIsAnyHypervisorPresent();
      if ( !(_BYTE)FeatureBits )
      {
        FeatureBits = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, FeatureBits);
      }
    }
  }
  return FeatureBits;
}

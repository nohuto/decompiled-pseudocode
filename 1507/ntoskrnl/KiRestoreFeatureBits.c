/*
 * XREFs of KiRestoreFeatureBits @ 0x14014E9AC
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14014E950 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140159E3C (HviIsAnyHypervisorPresent.c)
 *     KiSetVirtualMitigationControl @ 0x140208DD4 (KiSetVirtualMitigationControl.c)
 */

char KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int16 BpbCurrentSpecCtrl; // cx
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 11392);
    v2 = HIDWORD(v5);
    v3 = 290LL;
    __writemsr(0x122u, v5);
  }
  LOBYTE(v6) = KiFlushPcid;
  if ( KiFlushPcid )
  {
    v7 = __readcr3();
    v6 = v7 | 2;
    __writecr3(v6);
  }
  if ( *(_BYTE *)(v4 + 1597) == 1 )
  {
    LOBYTE(v6) = *(_BYTE *)(v4 + 1520);
    if ( (char)v6 > 15 && (_BYTE)v6 != 17 )
    {
      LOBYTE(v6) = HviIsAnyHypervisorPresent(v3, v2);
      if ( !(_BYTE)v6 )
      {
        v6 = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, v6);
      }
    }
  }
  return v6;
}

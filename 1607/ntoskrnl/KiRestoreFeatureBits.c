/*
 * XREFs of KiRestoreFeatureBits @ 0x1401147A0
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140114744 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiApplyProcessorErrata @ 0x1401D7304 (KiApplyProcessorErrata.c)
 *     KiSetVirtualMitigationControl @ 0x1401D9CE4 (KiSetVirtualMitigationControl.c)
 */

unsigned __int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int16 BpbCurrentSpecCtrl; // ax
  __int64 v2; // r10
  __int16 v3; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( v3 < 0 )
    __writemsr(0x122u, *(_QWORD *)(v2 + 11392));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  result = KiApplyProcessorErrata(v2, 0LL);
  if ( KiFlushPcid )
  {
    if ( !VslVsmEnabled )
    {
      v5 = __readcr3();
      result = v5 | 2;
      __writecr3(result);
    }
  }
  return result;
}

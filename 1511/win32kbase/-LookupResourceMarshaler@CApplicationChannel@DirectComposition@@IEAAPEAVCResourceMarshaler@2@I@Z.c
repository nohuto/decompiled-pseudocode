/*
 * XREFs of ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0
 * Callers:
 *     ?RedirectMouseWheelToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@H@Z @ 0x1C0004690 (-RedirectMouseWheelToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@H@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     NtDCompositionSetResourceBufferProperty @ 0x1C0019940 (NtDCompositionSetResourceBufferProperty.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C001B670 (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C001D330 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C001D630 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C001D6B4 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C001D810 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001D8D4 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001D9F8 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z @ 0x1C001DCBC (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C001DD68 (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C001DDE8 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001DF10 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     NtDCompositionOpenSharedResourceHandle @ 0x1C0076C00 (NtDCompositionOpenSharedResourceHandle.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D6EC0 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D73C0 (-ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CResourceMarshaler *__fastcall DirectComposition::CApplicationChannel::LookupResourceMarshaler(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rbx

  v2 = (unsigned int)(a2 - 1);
  if ( a2 && v2 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v3 = *(_QWORD *)(v2 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 && !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 200LL))(v3) )
    v3 &= -(__int64)((*(_BYTE *)(v3 + 16) & 1) != 0);
  return (struct DirectComposition::CResourceMarshaler *)v3;
}

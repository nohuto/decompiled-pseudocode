/*
 * XREFs of ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C
 * Callers:
 *     NtDCompositionOpenSharedResourceHandle @ 0x1C00144A0 (NtDCompositionOpenSharedResourceHandle.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022C34 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022CC0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     NtDCompositionSetResourceReferenceProperty @ 0x1C002CCF0 (NtDCompositionSetResourceReferenceProperty.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C002E44C (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C0030130 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0030328 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00303F4 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX_KPEA_N@Z @ 0x1C0030478 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX_KPEA_N@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C00304EC (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0030648 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C003070C (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0030830 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z @ 0x1C0030AF0 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0030B9C (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0030C1C (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0030CE8 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D4FF4 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D53E8 (-ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
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

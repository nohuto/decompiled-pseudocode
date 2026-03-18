/*
 * XREFs of ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80
 * Callers:
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAPEAVCInteractionMarshaler@2@@Z @ 0x1C002A1A0 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAPEAVCIn.c)
 *     NtDCompositionSetResourceReferenceProperty @ 0x1C002CCF0 (NtDCompositionSetResourceReferenceProperty.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002DFB0 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEAX_K@Z @ 0x1C002E38C (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0030328 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00303F4 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C00304EC (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C003070C (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0030830 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0030B9C (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0030C1C (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0030CE8 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D4FF4 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D53E8 (-ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v2; // eax
  char v5; // al
  char *v6; // rcx

  v2 = *((_DWORD *)a2 + 4);
  if ( (v2 & 4) == 0 )
  {
    if ( (v2 & 2) != 0 )
    {
      v5 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 112LL))(
             a2,
             82LL);
      v6 = (char *)this + 416;
      if ( !v5 )
        v6 = (char *)this + 408;
      *((_QWORD *)a2 + 1) = *(_QWORD *)v6;
      *(_QWORD *)v6 = a2;
    }
    *((_DWORD *)a2 + 4) |= 4u;
    *((_BYTE *)this + 184) |= 1u;
  }
}

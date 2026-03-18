/*
 * XREFs of ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8
 * Callers:
 *     ?RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAUHWND__@@_N@Z @ 0x1C0004E10 (-RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0016DDC (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0017030 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     NtDCompositionSetResourceReferenceProperty @ 0x1C0019660 (NtDCompositionSetResourceReferenceProperty.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001B228 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEAX_K@Z @ 0x1C001B5B0 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C001D518 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C001D630 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C001D6B4 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001D8D4 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001D9F8 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C001DD68 (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C001DDE8 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001DF10 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D6EC0 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D73C0 (-ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1C00DB200 (-SetVisible@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
    if ( (v2 & 2) != 0 && (v2 & 0x10) == 0 )
    {
      v5 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 112LL))(
             a2,
             90LL);
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

/*
 * XREFs of ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140005210
 * Callers:
 *     GetStreamingResourceManager @ 0x1400050F0 (GetStreamingResourceManager.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140005F80 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140006440 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetStreamingResourceManager(
        CSystemAudioDeviceSharedBase *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  CAudioDeviceGraph *v4; // rcx
  void (__fastcall ***v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v6)(CAudioDeviceGraph *__hidden, struct IAudioStreamingResourceRegistration **); // rax
  unsigned int StreamingResourceManager; // eax
  unsigned int v8; // ebx
  CAudioDeviceGraph *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v10 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  if ( v5 )
  {
    if ( (char *)**v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
      ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v5, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    else
      (**v5)(v5, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v10);
    v4 = v10;
  }
  v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v4 + 88LL);
  if ( v6 == CAudioDeviceGraph::GetStreamingResourceManager )
    StreamingResourceManager = CAudioDeviceGraph::GetStreamingResourceManager(v4, a2);
  else
    StreamingResourceManager = v6(v4, a2);
  v8 = StreamingResourceManager;
  if ( v10 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}

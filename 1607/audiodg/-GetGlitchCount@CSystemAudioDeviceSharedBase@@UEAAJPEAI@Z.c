/*
 * XREFs of ?GetGlitchCount@CSystemAudioDeviceSharedBase@@UEAAJPEAI@Z @ 0x14002AD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400258B8 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetGlitchCount(CSystemAudioDeviceSharedBase *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
    &v5,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 80LL))(v5, a2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}

/*
 * XREFs of ?GetGraphGuid@CSystemAudioDeviceSharedBase@@UEAAPEBU_GUID@@XZ @ 0x14002AD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400258B8 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 */

const struct _GUID *__fastcall CSystemAudioDeviceSharedBase::GetGraphGuid(CSystemAudioDeviceSharedBase *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
    &v3,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (const struct _GUID *)v1;
}

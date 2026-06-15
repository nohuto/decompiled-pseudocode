/*
 * XREFs of ?GetInterruptPeriodicity@CSystemAudioDeviceSharedNew@@UEAA_JXZ @ 0x14002E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400187D0 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetInterruptPeriodicity(
        __int64 (__fastcall ****this)(void *a1, const struct _GUID *a2, void **a3))
{
  __int64 v1; // rsi
  void *v3; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
    &v3,
    this[10]);
  if ( !v3 )
    return 0LL;
  v1 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 56LL))(v3);
  if ( v3 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  return v1;
}

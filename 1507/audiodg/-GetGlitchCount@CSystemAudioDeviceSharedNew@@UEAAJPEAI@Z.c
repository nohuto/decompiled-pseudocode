/*
 * XREFs of ?GetGlitchCount@CSystemAudioDeviceSharedNew@@UEAAJPEAI@Z @ 0x14002DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400187D0 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetGlitchCount(
        __int64 (__fastcall ****this)(void *a1, const struct _GUID *a2, void **a3),
        unsigned int *a2)
{
  unsigned int v3; // esi
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
    &v5,
    this[10]);
  v3 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v5 + 80LL))(v5, a2);
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}

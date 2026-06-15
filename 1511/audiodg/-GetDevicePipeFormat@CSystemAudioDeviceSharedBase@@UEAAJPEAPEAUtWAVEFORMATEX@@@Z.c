/*
 * XREFs of ?GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400056E0
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140004DC8 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140006DF0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetDevicePipeFormat(
        CSystemAudioDeviceSharedBase *this,
        struct tWAVEFORMATEX **a2)
{
  __int64 (__fastcall *v3)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **); // rsi
  unsigned int DevicePipeFormat; // eax
  unsigned int v5; // esi
  CAudioDeviceGraph *v7; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
    &v7,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct tWAVEFORMATEX **))(*(_QWORD *)v7 + 64LL);
  if ( v3 == CAudioDeviceGraph::GetDevicePipeFormat )
    DevicePipeFormat = CAudioDeviceGraph::GetDevicePipeFormat(v7, a2);
  else
    DevicePipeFormat = v3(v7, a2);
  v5 = DevicePipeFormat;
  if ( v7 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v7 + 16LL))(v7);
  return v5;
}

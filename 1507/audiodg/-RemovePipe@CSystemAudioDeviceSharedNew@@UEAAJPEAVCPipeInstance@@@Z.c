/*
 * XREFs of ?RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E4A0
 * Callers:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012AF8 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F230 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400187D0 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_0576b5aa_7951_4359_8e0c_367830add031@@3U__s_.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::RemovePipe(CSystemAudioDeviceSharedNew *this, struct CPipeInstance *a2)
{
  int (*v3)(CAudioDeviceGraph *__hidden, struct CPipeInstance *); // rdi
  int v4; // eax
  unsigned int v5; // esi
  CAudioDeviceGraph *v7; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_0576b5aa_7951_4359_8e0c_367830add031>(
    &v7,
    *((_QWORD *)this + 10));
  if ( v7 )
  {
    v3 = *(int (**)(CAudioDeviceGraph *__hidden, struct CPipeInstance *))(*(_QWORD *)v7 + 48LL);
    if ( v3 == CAudioDeviceGraph::RemovePipe )
      v4 = CAudioDeviceGraph::RemovePipe(v7, a2);
    else
      v4 = ((__int64 (__fastcall *)(CAudioDeviceGraph *, struct CPipeInstance *))v3)(v7, a2);
    v5 = v4;
    if ( v7 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v5;
}

/*
 * XREFs of ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180013764
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_ed899cbb_5613_4541_a78f_66302f0ce211@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180037F98 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_ed899cbb_5613_4541_a78f_66302f0ce211@@3U__s_GUID@@.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::HasHardwareAudioEngine(CEndpointCharacteristics *this)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_ed899cbb_5613_4541_a78f_66302f0ce211>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_ed899cbb_5613_4541_a78f_66302f0ce211>(
    &v5,
    *((_QWORD *)this + 2));
  v1 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 88LL))(v5, &v4);
    v1 = v5;
  }
  v2 = v4;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}

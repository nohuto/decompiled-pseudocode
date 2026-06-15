/*
 * XREFs of ?AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800137F0
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_ed899cbb_5613_4541_a78f_66302f0ce211@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180037F98 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_ed899cbb_5613_4541_a78f_66302f0ce211@@3U__s_GUID@@.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AreEffectsDisabled(CEndpointCharacteristics *this)
{
  unsigned int v1; // esi
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v4; // [rsp+30h] [rbp-10h]
  __int64 v5; // [rsp+38h] [rbp-8h]
  __int64 v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF

  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_ed899cbb_5613_4541_a78f_66302f0ce211>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_ed899cbb_5613_4541_a78f_66302f0ce211>(
    &v7,
    *((_QWORD *)this + 2));
  v6 = 0LL;
  v1 = 0;
  pvar = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( v7
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, 0LL, &v6) >= 0
    && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(
         v6,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    LOBYTE(v1) = (_DWORD)v4 != 0;
  }
  PropVariantClear(&pvar);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v1;
}

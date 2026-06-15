/*
 * XREFs of ?ShouldSaDeviceBeCached@CEndpointCharacteristics@@QEAAHXZ @ 0x1800A99A0
 * Callers:
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_BOOL8 __fastcall CEndpointCharacteristics::ShouldSaDeviceBeCached(CEndpointCharacteristics *this)
{
  BOOL v1; // esi
  bool v2; // zf
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v2 = *((_DWORD *)this + 6) == 3;
  pvar = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( v2
    && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &PKEY_Endpoint_CacheAfterUse,
         &pvar) >= 0
    && (_WORD)pvar == 11 )
  {
    v1 = (_WORD)v5 == 0xFFFF;
  }
  PropVariantClear(&pvar);
  return v1;
}

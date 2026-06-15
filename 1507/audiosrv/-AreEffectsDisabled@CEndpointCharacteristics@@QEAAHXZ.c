/*
 * XREFs of ?AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A94
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180021F10 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AreEffectsDisabled(CEndpointCharacteristics *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v2; // rbx
  unsigned int v3; // esi
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+38h] [rbp-8h]
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF

  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v2 = 0LL;
  v9 = 0LL;
  if ( v1 )
  {
    (**v1)(v1, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v9);
    v2 = v9;
  }
  v8 = 0LL;
  v3 = 0;
  pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v2
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 40LL))(v2, 0LL, &v8) >= 0
    && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    LOBYTE(v3) = (_DWORD)v6 != 0;
  }
  PropVariantClear(&pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v3;
}

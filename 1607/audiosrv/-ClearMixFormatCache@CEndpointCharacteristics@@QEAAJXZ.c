/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x180087F5C
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18006DD10 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E594 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?ClearMixFormatCache@@YAJPEAUIMMDevice@@@Z @ 0x18008AB0C (-ClearMixFormatCache@@YAJPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(struct IMMDevice **this)
{
  __int64 result; // rax
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  unsigned int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v8; // [rsp+70h] [rbp+27h]
  int v9; // [rsp+78h] [rbp+2Fh]
  int v10; // [rsp+7Ch] [rbp+33h]
  unsigned int *v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]

  result = ClearMixFormatCache(this[2]);
  v4 = result;
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::ClearMixFormatCache");
    v10 = 0;
    v13 = 0;
    v8 = &v5;
    v11 = &v4;
    v5 = 5536;
    v9 = 4;
    v12 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v2, v3, 5u, &pData);
    return v4;
  }
  return result;
}

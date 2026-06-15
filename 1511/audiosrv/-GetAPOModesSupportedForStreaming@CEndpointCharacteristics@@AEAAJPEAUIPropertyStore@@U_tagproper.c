/*
 * XREFs of ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@1@@Z @ 0x180040898
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800401D0 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x180040E48 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
        CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        char a4,
        struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *a5)
{
  HRESULT v6; // r14d
  __int64 v7; // rbx
  PROPVARIANT pvar; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  GUID pclsid; // [rsp+38h] [rbp-18h] BYREF

  pvar = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v6 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a2->lpVtbl->GetValue)(
         a2,
         a3,
         &pvar) >= 0
    && (_WORD)pvar == 4127
    && (_DWORD)v10 )
  {
    v7 = 0LL;
    do
    {
      v6 = CLSIDFromString(*(LPCOLESTR *)(v11 + 8 * v7), &pclsid);
      if ( v6 < 0 )
        break;
      if ( a4
        || *(_QWORD *)&pclsid.Data1 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
        || *(_QWORD *)pclsid.Data4 != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
      {
        v6 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(a5, 1u, &pclsid);
        if ( v6 < 0 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < (unsigned int)v10 );
  }
  PropVariantClear(&pvar);
  return (unsigned int)v6;
}

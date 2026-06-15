/*
 * XREFs of ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D814
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BF30 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BC0C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18004EF24 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E9F0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::RefreshDeviceFormat(
        struct IMMDevice **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  UINT32 cData; // r10d
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  struct IMMDevice *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  int DeviceFormat; // edi
  void *v11; // rsi
  int v13; // [rsp+38h] [rbp-39h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-31h] BYREF
  struct IMMDevice *v15; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+50h] [rbp-21h] BYREF
  LPVOID pv[2]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  struct IMMDevice **v20; // [rsp+98h] [rbp+27h]
  UINT32 v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]

  pv[1] = (LPVOID)-2LL;
  v16 = 0LL;
  v13 = 0;
  pv[0] = 0LL;
  v15 = 0LL;
  pwsz = 0LL;
  CEndpointCharacteristics::GetEndpointId((CEndpointCharacteristics *)this, (unsigned __int16 **)&pwsz);
  if ( dword_1800CA040 > 4u )
  {
    TlgCreateWsz(&pDesc, pwsz);
    LODWORD(v15) = a2;
    v20 = &v15;
    v21 = cData;
    v22 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8214, v5, v6, cData, &pData);
  }
  v7 = this[2];
  v15 = v7;
  ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->AddRef)(v7);
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(
    &v16,
    v7,
    v8);
  if ( v16 )
  {
    DeviceFormat = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 88LL))(v16, &v13);
    if ( DeviceFormat < 0 )
      goto LABEL_10;
  }
  LOBYTE(v9) = v13 != 0;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(
                   (CEndpointCharacteristics *)this,
                   0LL,
                   v9,
                   a2,
                   (struct tWAVEFORMATEX **)pv);
  v11 = pv[0];
  if ( DeviceFormat >= 0 )
    DeviceFormat = CPolicyConfig::SetDeviceFormatInternal(v7, v13, a2, (const struct tWAVEFORMATEX *)pv[0]);
  if ( v11 )
    CoTaskMemFree(v11);
  if ( DeviceFormat < 0 )
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::RefreshDeviceFormat", 2988, DeviceFormat);
  CoTaskMemFree((LPVOID)pwsz);
  pwsz = 0LL;
  ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)DeviceFormat;
}

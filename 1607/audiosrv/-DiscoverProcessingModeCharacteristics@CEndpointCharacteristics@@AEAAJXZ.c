/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18002E8FC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DFF4 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180038EA0 (_alloca_probe.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18004EF24 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180087B2C (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180087B74 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800880D8 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x180088E80 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x180089094 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x180089718 (-GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  struct KSMULTIPLE_ITEM *v3; // rbx
  int PacketSizeConstraints; // eax
  __int64 OemEnginePeriodicity; // r12
  void *v6; // rdi
  int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h] BYREF
  struct KSMULTIPLE_ITEM *v16; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v18; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER Frequency; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int64 v21[541]; // [rsp+A0h] [rbp-60h] BYREF
  int v22; // [rsp+118Ch] [rbp+108Ch]
  GUID v23; // [rsp+1190h] [rbp+1090h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+11A0h] [rbp+10A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+11C0h] [rbp+10C0h] BYREF
  int *v26; // [rsp+11D0h] [rbp+10D0h]
  __int64 v27; // [rsp+11D8h] [rbp+10D8h]
  LPVOID *p_pv; // [rsp+11E0h] [rbp+10E0h]
  __int64 v29; // [rsp+11E8h] [rbp+10E8h]

  v20 = -2LL;
  v10 = 0;
  if ( (int)CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this) < 0 )
  {
    v16 = 0LL;
    *(double *)&pv = 0.0;
    v18.QuadPart = 0LL;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceFrequency(&Frequency);
    QueryPerformanceCounter(&PerformanceCount);
    GetSupportedDataRangeForEndpoint(*((struct IMMDevice **)this + 2), &v16);
    v3 = v16;
    PacketSizeConstraints = GetPacketSizeConstraints(
                              *((struct IPropertyStore **)this + 4),
                              (struct PacketSizeConstraints **)&pv);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    v10 = PacketSizeConstraints;
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    v13 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxCapturePeriodicityInMs",
            0x18u,
            0LL,
            &v13,
            &pcbData) )
      LODWORD(g_MaxCapturePeriodicityInHns) = 10000 * v13;
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    v6 = pv;
    v7 = v10;
    if ( v10 >= 0 && *((_DWORD *)this + 100) )
    {
      v7 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
             (int)this,
             (__int64)pv,
             pvData != 0,
             OemEnginePeriodicity,
             (__int64)this + 416,
             0LL);
      v10 = v7;
    }
    LODWORD(v21[0]) = 0;
    *(__int64 *)((char *)&v21[28] + 4) = 0LL;
    v22 = 0;
    v23 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v7 >= 0 )
    {
      v10 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
              (int)this,
              (__int64)v6,
              pvData != 0,
              OemEnginePeriodicity,
              (__int64)this + 408,
              (__int64)v21);
      if ( v10 >= 0 && !*((_DWORD *)this + 101) )
      {
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
        CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v21);
      }
    }
    QueryPerformanceCounter(&v18);
    pwsz = 0LL;
    if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pwsz) >= 0
      && (unsigned int)hProvider > 4
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v26 = &v10;
      v27 = 4LL;
      if ( Frequency.QuadPart )
        *(double *)&pv = (double)(v18.LowPart - PerformanceCount.LowPart) / (double)(int)Frequency.LowPart;
      else
        *(double *)&pv = 0.0;
      p_pv = &pv;
      v29 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A8723, v8, v9, 5u, &pData);
    }
    CoTaskMemFree((LPVOID)pwsz);
    pwsz = 0LL;
    CoTaskMemFree(v6);
    CoTaskMemFree(v3);
  }
  return (unsigned int)v10;
}

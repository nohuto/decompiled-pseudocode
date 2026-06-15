/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B4FC
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18003C238 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B550 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A7CF0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800A8DA4 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z @ 0x1800A8E94 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z.c)
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A9A28 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(struct IPropertyStore **this)
{
  int PacketSizeConstraints; // esi
  void *v4; // rcx
  __int64 OemEnginePeriodicity; // rax
  __int64 v6; // rbp
  LPVOID v7; // rbx
  int pvData; // [rsp+88h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+90h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+20h] BYREF

  PacketSizeConstraints = 0;
  if ( (int)CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore((CEndpointCharacteristics *)this) < 0 )
  {
    pv = 0LL;
    PacketSizeConstraints = GetPacketSizeConstraints(this[4], (struct _KSAUDIO_PACKETSIZE_CONSTRAINTS **)&pv);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    if ( PacketSizeConstraints >= 0 )
    {
      pvData = 0;
      pcbData = 4;
      RegGetValueA(
        HKEY_LOCAL_MACHINE,
        "Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        "ProbeForMinimumPeriod",
        0x18u,
        0LL,
        &pvData,
        &pcbData);
      OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity((CEndpointCharacteristics *)this);
      v6 = OemEnginePeriodicity;
      v7 = pv;
      if ( !*((_DWORD *)this + 101)
        || (PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                      (CEndpointCharacteristics *)this,
                                      (__int64)pv,
                                      pvData != 0,
                                      OemEnginePeriodicity,
                                      (__int64)(this + 53)),
            PacketSizeConstraints >= 0) )
      {
        PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                  (CEndpointCharacteristics *)this,
                                  (__int64)v7,
                                  pvData != 0,
                                  v6,
                                  (__int64)(this + 52));
        if ( PacketSizeConstraints >= 0
          && !*((_DWORD *)this + 102)
          && (!this[53] || (int)CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 3LL) >= 0) )
        {
          if ( this[52] )
            CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 0LL);
        }
      }
      v4 = v7;
    }
    else
    {
      v4 = pv;
    }
    CoTaskMemFree(v4);
    CoTaskMemFree(0LL);
  }
  return (unsigned int)PacketSizeConstraints;
}

/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800A7350
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z @ 0x18003FA94 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003FC90 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800A5268 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAI666@Z @ 0x1800A5900 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800A66EC (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z @ 0x1800A67DC (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(
        struct IPropertyStore **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  char *v6; // r14
  int PacketSizeConstraints; // edi
  struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *v8; // rbx
  int v9; // r15d
  __int64 i; // rax
  CConnectorProcessingModeCharacteristics **v11; // rax
  CConnectorProcessingModeCharacteristics *v12; // r12
  struct tWAVEFORMATEX *v13; // rdi
  int pvData; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v16; // [rsp+6Ch] [rbp-25h] BYREF
  unsigned int v17; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+74h] [rbp-1Dh] BYREF
  DWORD pcbData; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+7Ch] [rbp-15h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // [rsp+80h] [rbp-11h]
  LPVOID pv; // [rsp+88h] [rbp-9h] BYREF
  struct tWAVEFORMATEX *v23; // [rsp+90h] [rbp-1h]
  __int64 OemEnginePeriodicity; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  struct _GUID v26; // [rsp+A8h] [rbp+17h] BYREF

  v25 = -2LL;
  v23 = a4;
  v21 = a2;
  pv = 0LL;
  v6 = (char *)(this + 53);
  if ( a2 != eKeywordDetectorConnector )
    v6 = (char *)(this + 52);
  PacketSizeConstraints = GetPacketSizeConstraints(this[4], (struct _KSAUDIO_PACKETSIZE_CONSTRAINTS **)&pv);
  if ( PacketSizeConstraints == -2147023728 )
    PacketSizeConstraints = 0;
  v8 = (struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *)pv;
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
    v9 = 0;
    for ( i = *(_QWORD *)v6; v9 < *(_DWORD *)(*(_QWORD *)v6 + 8LL); i = *(_QWORD *)v6 )
    {
      v11 = (CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                                          i,
                                                          v9);
      v12 = *v11;
      if ( *(_QWORD *)*v11 == *(_QWORD *)&a3->Data1 && *((_QWORD *)v12 + 1) == *(_QWORD *)a3->Data4 )
      {
        v26 = *a3;
        v13 = v23;
        if ( (int)CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
                    (CEndpointCharacteristics *)this,
                    v21,
                    &v26,
                    v23,
                    v8,
                    pvData != 0,
                    OemEnginePeriodicity,
                    &v17,
                    &v16,
                    &v18,
                    (struct _GUID *)&v20) < 0 )
        {
          PacketSizeConstraints = 0;
        }
        else
        {
          PacketSizeConstraints = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                                    v12,
                                    v13,
                                    v17,
                                    v16,
                                    v18,
                                    v20);
          if ( PacketSizeConstraints >= 0 && !*((_DWORD *)this + 102) )
            PacketSizeConstraints = CEndpointCharacteristics::CacheProcessingModeCharacteristics((CEndpointCharacteristics *)this);
        }
      }
      ++v9;
    }
  }
  CoTaskMemFree(v8);
  return (unsigned int)PacketSizeConstraints;
}

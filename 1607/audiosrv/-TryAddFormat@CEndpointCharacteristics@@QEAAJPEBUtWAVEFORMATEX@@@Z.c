/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18008A3CC
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18002DA58 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003462C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18006ACE4 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180087824 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180087B2C (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800883A0 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x180088E80 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x180089094 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(struct IPropertyStore **this, const struct tWAVEFORMATEX *a2)
{
  int v3; // r15d
  int PacketSizeConstraints; // edi
  struct PacketSizeConstraints *v5; // rbx
  char v6; // r14
  int v7; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v8; // r13
  __int64 *v9; // r12
  struct _GUID **v10; // rax
  struct _GUID *v11; // rdi
  int v12; // eax
  int v13; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // [rsp+60h] [rbp-39h]
  unsigned int v17; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v20; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+74h] [rbp-25h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v23[2]; // [rsp+80h] [rbp-19h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v24; // [rsp+88h] [rbp-11h]
  __int64 OemEnginePeriodicity; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  struct _GUID v27; // [rsp+A0h] [rbp+7h] BYREF
  int v28; // [rsp+100h] [rbp+67h]
  int pvData; // [rsp+110h] [rbp+77h] BYREF
  DWORD pcbData; // [rsp+118h] [rbp+7Fh] BYREF

  v26 = -2LL;
  v3 = 0;
  pv = 0LL;
  v23[0] = 0;
  v23[1] = 3;
  PacketSizeConstraints = GetPacketSizeConstraints(this[4], (LPVOID **)&pv);
  if ( PacketSizeConstraints == -2147023728 )
    PacketSizeConstraints = 0;
  v5 = (struct PacketSizeConstraints *)pv;
  if ( PacketSizeConstraints >= 0 )
  {
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
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity((CEndpointCharacteristics *)this);
    v6 = 0;
    v7 = 0;
    v28 = 0;
    v8 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v23;
    v24 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v23;
    do
    {
      v16 = *v8;
      v9 = (__int64 *)(this + 52);
      if ( *v8 != eKeywordDetectorConnector )
        v9 = (__int64 *)(this + 51);
      if ( *v9 )
      {
        while ( v3 < *(_DWORD *)(*v9 + 8) )
        {
          v10 = (struct _GUID **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                   *v9,
                                   v3);
          v11 = *v10;
          v27 = **v10;
          v12 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
                  (CEndpointCharacteristics *)this,
                  v16,
                  &v27,
                  a2,
                  v5,
                  pvData != 0,
                  OemEnginePeriodicity,
                  &v21,
                  &v20,
                  &v19,
                  &v18,
                  &v17);
          if ( v12 < 0 )
          {
            if ( AEError::DeviceInUse((AEError *)(unsigned int)v12) )
            {
              CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
                (CConnectorProcessingModeCharacteristics *)v11,
                a2);
              *((_DWORD *)this + 101) = 1;
            }
            PacketSizeConstraints = 0;
          }
          else
          {
            v13 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                    (CConnectorProcessingModeCharacteristics *)v11,
                    a2,
                    v21,
                    v20,
                    v19,
                    v18,
                    v17);
            PacketSizeConstraints = v13;
            if ( v6 || v13 >= 0 )
              v6 = 1;
          }
          ++v3;
        }
        v8 = v24;
        v7 = v28;
        v3 = 0;
      }
      v28 = v7 + 1;
      v24 = ++v8;
    }
    while ( (unsigned __int64)++v7 < 2 );
    if ( v6 && !*((_DWORD *)this + 101) )
      PacketSizeConstraints = CEndpointCharacteristics::CacheProcessingModeCharacteristics((CEndpointCharacteristics *)this);
  }
  CoTaskMemFree(v5);
  return (unsigned int)PacketSizeConstraints;
}

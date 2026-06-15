/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800409A8
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x18003F790 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18003FECC (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1800403D0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800A5268 (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A56E8 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800A66EC (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z @ 0x1800A67DC (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  HRESULT PacketSizeConstraints; // esi
  struct IUnknown **v6; // r15
  struct IPropertyStore **v7; // r12
  struct IUnknown *v8; // rbx
  int v9; // eax
  struct IUnknown *v10; // rbx
  int v11; // eax
  void *v12; // rcx
  __int64 OemEnginePeriodicity; // rax
  __int64 v14; // rdi
  LPVOID v15; // rbx
  struct IUnknown *v17; // [rsp+48h] [rbp-29h] BYREF
  struct IUnknown *v18; // [rsp+50h] [rbp-21h] BYREF
  PROPVARIANT pvar; // [rsp+58h] [rbp-19h] BYREF
  __int64 v20; // [rsp+60h] [rbp-11h]
  __int64 v21; // [rsp+68h] [rbp-9h]
  LPVOID pv; // [rsp+70h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+7h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp+Fh] BYREF
  int v25; // [rsp+84h] [rbp+13h] BYREF
  __int64 v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+90h] [rbp+1Fh]
  int pvData; // [rsp+F0h] [rbp+7Fh] BYREF

  v26 = -2LL;
  ppv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  PacketSizeConstraints = CoCreateInstance(
                            &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                            0LL,
                            0x17u,
                            &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                            &ppv);
  if ( PacketSizeConstraints >= 0 )
  {
    v6 = (struct IUnknown **)((char *)this + 16);
    PacketSizeConstraints = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)ppv + 40LL))(
                              ppv,
                              a2,
                              (char *)this + 16);
    if ( PacketSizeConstraints >= 0 )
    {
      v7 = (struct IPropertyStore **)((char *)this + 32);
      PacketSizeConstraints = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))(*v6)->lpVtbl[1].AddRef)(
                                *v6,
                                0LL,
                                (char *)this + 32);
      if ( PacketSizeConstraints >= 0 )
      {
        v8 = v17;
        if ( v17 != *v6 )
        {
          ATL::AtlComQIPtrAssign(&v17, *v6, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
          v8 = v17;
        }
        if ( !v8 )
          goto LABEL_7;
        ((void (__fastcall *)(struct IUnknown *, _QWORD, char *))v8->lpVtbl[1].Release)(v8, 0LL, (char *)this + 56);
        *((_DWORD *)this + 6) = GetClassFromEndpointId(a2);
        PacketSizeConstraints = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this);
        if ( PacketSizeConstraints >= 0 )
        {
          PacketSizeConstraints = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v7)->lpVtbl->GetValue)(
                                    *v7,
                                    &PKEY_AudioEngine_LatencyCoefficient,
                                    &pvar);
          if ( PacketSizeConstraints >= 0 )
          {
            if ( (_WORD)pvar == 19 )
            {
              v9 = v20;
            }
            else
            {
              if ( (_WORD)pvar )
              {
                PacketSizeConstraints = -2147418113;
                goto LABEL_39;
              }
              v9 = 0;
            }
            *((_DWORD *)this + 92) = v9;
            v10 = v18;
            if ( v18 != *v6 )
            {
              ATL::AtlComQIPtrAssign(&v18, *v6, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
              v10 = v18;
            }
            if ( !v10 )
            {
LABEL_7:
              PacketSizeConstraints = -2147467262;
              goto LABEL_39;
            }
            PacketSizeConstraints = ((__int64 (__fastcall *)(struct IUnknown *, int *))v10->lpVtbl[1].QueryInterface)(
                                      v10,
                                      &v25);
            if ( PacketSizeConstraints >= 0 )
            {
              *((_DWORD *)this + 93) = v25 != 0;
              PropVariantClear(&pvar);
              if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v7)->lpVtbl->GetValue)(
                     *v7,
                     &PKEY_MMDEVAPI_ActiveTime,
                     &pvar) >= 0
                && (_WORD)pvar == 21 )
              {
                *((_QWORD *)this + 47) = v20;
              }
              else
              {
                *((_QWORD *)this + 47) = 0LL;
              }
              PropVariantClear(&pvar);
              if ( ((int (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))(*v7)->lpVtbl->GetValue)(
                     *v7,
                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                     &pvar) < 0
                || (v11 = 1, (_WORD)pvar != 19) )
              {
                v11 = 0;
              }
              *((_DWORD *)this + 101) = v11;
              *((_DWORD *)this + 97) = 0;
              *((_DWORD *)this + 99) = 0;
              *((_DWORD *)this + 102) = 0;
              if ( a3 )
              {
                PacketSizeConstraints = 0;
                if ( (int)CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this) < 0 )
                {
                  v27 = 0LL;
                  pv = 0LL;
                  PacketSizeConstraints = GetPacketSizeConstraints(*v7, (struct _KSAUDIO_PACKETSIZE_CONSTRAINTS **)&pv);
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
                    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
                    v14 = OemEnginePeriodicity;
                    v15 = pv;
                    if ( !*((_DWORD *)this + 101)
                      || (PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                                    this,
                                                    (__int64)pv,
                                                    pvData != 0,
                                                    OemEnginePeriodicity,
                                                    (__int64)this + 424),
                          PacketSizeConstraints >= 0) )
                    {
                      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                                this,
                                                (__int64)v15,
                                                pvData != 0,
                                                v14,
                                                (__int64)this + 416);
                      if ( PacketSizeConstraints >= 0 && !*((_DWORD *)this + 102) )
                        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
                    }
                    v12 = v15;
                  }
                  else
                  {
                    v12 = pv;
                  }
                  CoTaskMemFree(v12);
                  CoTaskMemFree(0LL);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_39:
  PropVariantClear(&pvar);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)PacketSizeConstraints;
}

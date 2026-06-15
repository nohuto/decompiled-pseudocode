/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1800403D0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800409A8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z @ 0x1800112B0 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18003FCBC (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800401D0 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x180040E48 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180040EC4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180040F4C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180040FAC (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(CEndpointCharacteristics *this)
{
  struct IPropertyStore *v2; // rcx
  int v3; // r14d
  int v4; // r13d
  GUID *v5; // r12
  unsigned int v6; // edx
  const struct _GUID *v7; // r8
  int v8; // edi
  struct IPropertyStore *v9; // rcx
  int ConnectorSignalProcessingModes; // eax
  int v11; // eax
  unsigned int v12; // edx
  struct IPropertyStore *v13; // rcx
  int v14; // eax
  int v15; // eax
  struct IMMDevice *v16; // rcx
  struct IMMDevice *v17; // rcx
  struct IMMDevice *v18; // rcx
  struct IMMDevice *v19; // rcx
  struct IMMDevice *v20; // rcx
  struct IMMDevice *v21; // rcx
  struct IMMDevice *v22; // rcx
  __int64 v23; // r8
  BOOL v24; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // r14d
  __int64 v26; // rdx
  unsigned int v28; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct _tagpropertykey v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _tagpropertykey v31; // [rsp+60h] [rbp-A0h] BYREF
  PROPVARIANT pvar[4]; // [rsp+80h] [rbp-80h] BYREF
  struct _tagpropertykey v33; // [rsp+A0h] [rbp-60h] BYREF
  struct _tagpropertykey v34; // [rsp+C0h] [rbp-40h] BYREF
  struct _tagpropertykey v35; // [rsp+E0h] [rbp-20h] BYREF
  struct _GUID v36; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v37; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v38; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v39; // [rsp+130h] [rbp+30h] BYREF
  struct _GUID v40; // [rsp+140h] [rbp+40h] BYREF
  struct _GUID v41; // [rsp+150h] [rbp+50h] BYREF
  struct _GUID v42; // [rsp+160h] [rbp+60h] BYREF

  *((_DWORD *)this + 100) = 0;
  pv = 0LL;
  v2 = (struct IPropertyStore *)*((_QWORD *)this + 4);
  v40 = GUID_00000000_0000_0000_0000_000000000000;
  v3 = 0;
  v4 = 0;
  v41 = GUID_00000000_0000_0000_0000_000000000000;
  memset(pvar, 0, 24);
  v39 = GUID_00000000_0000_0000_0000_000000000000;
  v37 = GUID_00000000_0000_0000_0000_000000000000;
  v38 = GUID_00000000_0000_0000_0000_000000000000;
  v36 = GUID_00000000_0000_0000_0000_000000000000;
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  v5 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( GetHostConnectorSignalProcessingModes(v2, &v28, (struct _GUID **)&pv) >= 0 && (v6 = v28) != 0 )
  {
    v7 = (const struct _GUID *)pv;
    *((_DWORD *)this + 10) = 1;
  }
  else
  {
    v6 = 1;
    if ( g_bForceNonModeAwareDriverToRaw == 1 )
    {
      *((_DWORD *)this + 100) = 1;
      v7 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      *((_DWORD *)this + 10) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) = 0;
      v7 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  v8 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
         (CEndpointCharacteristics *)((char *)this + 64),
         v6,
         v7);
  if ( v8 < 0 )
    goto LABEL_56;
  CoTaskMemFree(pv);
  v9 = (struct IPropertyStore *)*((_QWORD *)this + 4);
  v8 = 0;
  pv = 0LL;
  v28 = 0;
  v35.fmtid.Data1 = 590439624;
  *(_DWORD *)&v35.fmtid.Data2 = 1283267372;
  *(_DWORD *)v35.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v35.fmtid.Data4[4] = 1730509416;
  v35.pid = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     v9,
                                     &v35,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     &v28,
                                     (struct _GUID **)&pv);
  if ( ConnectorSignalProcessingModes >= 0 && v28 )
  {
    v8 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
           (CEndpointCharacteristics *)((char *)this + 112),
           v28,
           (const struct _GUID *)pv);
    *((_DWORD *)this + 13) = 1;
    goto LABEL_14;
  }
  if ( ConnectorSignalProcessingModes != -2147023728 )
  {
    v8 = -2147418113;
LABEL_14:
    if ( v8 < 0 )
      goto LABEL_56;
    goto LABEL_15;
  }
  *((_DWORD *)this + 13) = 0;
LABEL_15:
  CoTaskMemFree(pv);
  v11 = *((_DWORD *)this + 10);
  pv = 0LL;
  v12 = 0;
  v28 = 0;
  *((_DWORD *)this + 11) = v11;
  if ( v11 )
  {
    v13 = (struct IPropertyStore *)*((_QWORD *)this + 4);
    v35.fmtid.Data1 = 590439624;
    *(_DWORD *)&v35.fmtid.Data2 = 1283267372;
    *(_DWORD *)v35.fmtid.Data4 = 1907779772;
    *(_DWORD *)&v35.fmtid.Data4[4] = 1730509416;
    v35.pid = 1;
    v14 = GetConnectorSignalProcessingModes(
            v13,
            &v35,
            &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
            &v28,
            (struct _GUID **)&pv);
    v12 = v28;
    v8 = v14;
    if ( v14 >= 0 && v28 )
    {
      v15 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + 80),
              v28,
              (const struct _GUID *)pv);
      v12 = v28;
      v8 = v15;
    }
    else if ( v14 == -2147023728 )
    {
      v8 = 0;
    }
  }
  if ( v8 >= 0 )
  {
    if ( !v12 )
      v8 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
             (CEndpointCharacteristics *)((char *)this + 80),
             1u,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    if ( v8 >= 0 )
    {
      v16 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v35 = PKEY_FX_StreamEffectClsid;
      GetFxClsid(v16, &v35, &v40, 0);
      v17 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v34 = PKEY_FX_ModeEffectClsid;
      GetFxClsid(v17, &v34, &v41, 0);
      v18 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v33 = PKEY_FX_EndpointEffectClsid;
      GetFxClsid(v18, &v33, &v39, 0);
      v19 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v30 = PKEY_FX_Offload_StreamEffectClsid;
      GetFxClsid(v19, &v30, &v37, 0);
      v20 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v31 = PKEY_FX_Offload_ModeEffectClsid;
      GetFxClsid(v20, &v31, &v38, 0);
      if ( *(_QWORD *)&v40.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v40.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
        || *(_QWORD *)&v41.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v41.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
        || *(_QWORD *)&v39.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v39.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
        || *(_QWORD *)&v37.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v37.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
        || *(_QWORD *)&v38.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v38.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
      {
        v3 = 1;
      }
      v21 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v31 = PKEY_FX_PreMixEffectClsid;
      GetFxClsid(v21, &v31, &v36, 0);
      v22 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v30 = PKEY_FX_PostMixEffectClsid;
      GetFxClsid(v22, &v30, &v42, 0);
      if ( *(_QWORD *)&v36.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v36.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
        || *(_QWORD *)&v42.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || *(_QWORD *)v42.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
      {
        v4 = 1;
      }
      v24 = *((_DWORD *)this + 10) && (v3 || !v4);
      *((_DWORD *)this + 10) = v24;
      v25 = eHostProcessConnector;
      while ( 1 )
      {
        if ( v25 != eLoopbackConnector )
        {
          v8 = CEndpointCharacteristics::FixupProcessingModeSupport(this, v25, v23, v4);
          if ( v8 < 0 )
            break;
        }
        if ( (unsigned int)++v25 >= eConnectorCount )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (char *)this + 64,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
          {
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                 (char *)this + 64,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
              v5 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)this + 64,
                             0);
          }
          else
          {
            v5 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          }
          v35.fmtid = *v5;
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 128, &v35);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (char *)this + 208,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 336, v26);
          break;
        }
      }
    }
  }
LABEL_56:
  PropVariantClear(pvar);
  CoTaskMemFree(pv);
  return (unsigned int)v8;
}

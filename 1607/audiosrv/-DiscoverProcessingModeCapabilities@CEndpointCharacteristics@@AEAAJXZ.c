/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18002E3CC
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18002E8FC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002761C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18002E1D0 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z @ 0x18002EBB8 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x18002ECE0 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18002ED64 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18002EF50 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x1800347FC (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
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
  struct IMMDevice *v15; // rcx
  struct IMMDevice *v16; // rcx
  struct IMMDevice *v17; // rcx
  struct IMMDevice *v18; // rcx
  struct IMMDevice *v19; // rcx
  __int64 v20; // rax
  struct IMMDevice *v21; // rcx
  struct IMMDevice *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  BOOL v25; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // r14d
  __int64 v27; // rdx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct _tagpropertykey v37; // [rsp+40h] [rbp-C0h] BYREF
  struct _tagpropertykey v38; // [rsp+60h] [rbp-A0h] BYREF
  PROPVARIANT pvar[4]; // [rsp+80h] [rbp-80h] BYREF
  struct _tagpropertykey v40; // [rsp+A0h] [rbp-60h] BYREF
  struct _tagpropertykey v41; // [rsp+C0h] [rbp-40h] BYREF
  struct _tagpropertykey v42; // [rsp+E0h] [rbp-20h] BYREF
  struct _GUID v43; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v44; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v45; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v46; // [rsp+130h] [rbp+30h] BYREF
  struct _GUID v47; // [rsp+140h] [rbp+40h] BYREF
  struct _GUID v48; // [rsp+150h] [rbp+50h] BYREF
  struct _GUID v49; // [rsp+160h] [rbp+60h] BYREF

  *((_DWORD *)this + 12) = 0;
  pv = 0LL;
  v2 = (struct IPropertyStore *)*((_QWORD *)this + 4);
  v43 = GUID_00000000_0000_0000_0000_000000000000;
  v3 = 0;
  v4 = 0;
  v44 = GUID_00000000_0000_0000_0000_000000000000;
  memset(pvar, 0, 24);
  v45 = GUID_00000000_0000_0000_0000_000000000000;
  v46 = GUID_00000000_0000_0000_0000_000000000000;
  v47 = GUID_00000000_0000_0000_0000_000000000000;
  v48 = GUID_00000000_0000_0000_0000_000000000000;
  v49 = GUID_00000000_0000_0000_0000_000000000000;
  v5 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( GetHostConnectorSignalProcessingModes(v2, &v35, (struct _GUID **)&pv) >= 0 && (v6 = v35) != 0 )
  {
    v7 = (const struct _GUID *)pv;
    *((_DWORD *)this + 10) = 1;
  }
  else
  {
    *((_DWORD *)this + 10) = 0;
    v6 = 1;
    v7 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v8 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
         (CEndpointCharacteristics *)((char *)this + 64),
         v6,
         v7);
  if ( v8 < 0 )
    goto LABEL_35;
  CoTaskMemFree(pv);
  v9 = (struct IPropertyStore *)*((_QWORD *)this + 4);
  v8 = 0;
  pv = 0LL;
  v35 = 0;
  v42.fmtid.Data1 = 590439624;
  *(_DWORD *)&v42.fmtid.Data2 = 1283267372;
  *(_DWORD *)v42.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v42.fmtid.Data4[4] = 1730509416;
  v42.pid = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     v9,
                                     &v42,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     &v35,
                                     (struct _GUID **)&pv);
  if ( ConnectorSignalProcessingModes >= 0 && v35 )
  {
    v8 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
           (CEndpointCharacteristics *)((char *)this + 112),
           v35,
           (const struct _GUID *)pv);
    *((_DWORD *)this + 13) = 1;
    goto LABEL_44;
  }
  if ( ConnectorSignalProcessingModes != -2147023728 )
  {
    v8 = -2147418113;
LABEL_44:
    if ( v8 < 0 )
      goto LABEL_35;
    goto LABEL_8;
  }
  *((_DWORD *)this + 13) = 0;
LABEL_8:
  CoTaskMemFree(pv);
  v11 = *((_DWORD *)this + 10);
  pv = 0LL;
  v12 = 0;
  v35 = 0;
  *((_DWORD *)this + 11) = v11;
  if ( v11 )
  {
    v13 = (struct IPropertyStore *)*((_QWORD *)this + 4);
    v42.fmtid.Data1 = 590439624;
    *(_DWORD *)&v42.fmtid.Data2 = 1283267372;
    *(_DWORD *)v42.fmtid.Data4 = 1907779772;
    *(_DWORD *)&v42.fmtid.Data4[4] = 1730509416;
    v42.pid = 1;
    v14 = GetConnectorSignalProcessingModes(
            v13,
            &v42,
            &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
            &v35,
            (struct _GUID **)&pv);
    v12 = v35;
    v8 = v14;
    if ( v14 >= 0 && v35 )
    {
      v30 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + 80),
              v35,
              (const struct _GUID *)pv);
      v12 = v35;
      v8 = v30;
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
      v15 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v42 = PKEY_FX_StreamEffectClsid;
      GetFxClsid(v15, &v42, &v43);
      v16 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v40 = PKEY_FX_ModeEffectClsid;
      GetFxClsid(v16, &v40, &v44);
      v17 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v41 = PKEY_FX_EndpointEffectClsid;
      GetFxClsid(v17, &v41, &v45);
      v18 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v37 = PKEY_FX_Offload_StreamEffectClsid;
      GetFxClsid(v18, &v37, &v46);
      v19 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v38 = PKEY_FX_Offload_ModeEffectClsid;
      GetFxClsid(v19, &v38, &v47);
      v20 = *(_QWORD *)&v43.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v43.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v20 = *(_QWORD *)v43.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v20 )
        goto LABEL_19;
      v31 = *(_QWORD *)&v44.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v44.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v31 = *(_QWORD *)v44.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v31 )
        goto LABEL_19;
      v32 = *(_QWORD *)&v45.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v45.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v32 = *(_QWORD *)v45.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v32 )
        goto LABEL_19;
      v33 = *(_QWORD *)&v46.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v46.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v33 = *(_QWORD *)v46.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v33 )
        goto LABEL_19;
      v34 = *(_QWORD *)&v47.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v47.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v34 = *(_QWORD *)v47.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v34 )
LABEL_19:
        v3 = 1;
      v21 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v38 = PKEY_FX_PreMixEffectClsid;
      GetFxClsid(v21, &v38, &v48);
      v22 = (struct IMMDevice *)*((_QWORD *)this + 2);
      v37 = PKEY_FX_PostMixEffectClsid;
      GetFxClsid(v22, &v37, &v49);
      v23 = *(_QWORD *)&v48.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v48.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v23 = *(_QWORD *)v48.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      v24 = 0LL;
      if ( v23 )
        goto LABEL_23;
      v29 = *(_QWORD *)&v49.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v49.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v29 = *(_QWORD *)v49.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v29 )
LABEL_23:
        v4 = 1;
      v25 = *((_DWORD *)this + 10) && (v3 || !v4);
      *((_DWORD *)this + 10) = v25;
      v26 = eHostProcessConnector;
      while ( 1 )
      {
        if ( v26 != eLoopbackConnector )
        {
          v8 = CEndpointCharacteristics::FixupProcessingModeSupport(this, v26, v24, v4);
          if ( v8 < 0 )
            break;
        }
        if ( (unsigned int)++v26 >= eConnectorCount )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)this + 8,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
          {
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                 (__int64 *)this + 8,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
              v5 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)this + 64,
                             0);
          }
          else
          {
            v5 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          }
          v42.fmtid = *v5;
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 128, &v42);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)this + 26,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 336, v27);
          break;
        }
      }
    }
  }
LABEL_35:
  PropVariantClear(pvar);
  CoTaskMemFree(pv);
  return (unsigned int)v8;
}

/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18003BB10
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18003C238 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z @ 0x180024830 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x180037EA0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800381C8 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18003B8D8 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18003C558 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z @ 0x18003D0B4 (-AddMultiple@CAudioSignalProcessingModeArray@CEndpointCharacteristics@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003D134 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18003D1BC (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     _recalloc @ 0x180043990 (_recalloc.c)
 */

__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(CEndpointCharacteristics *this)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v1; // ebx
  struct IPropertyStore *v3; // rcx
  int v4; // r15d
  unsigned int v5; // r12d
  _OWORD *v6; // r15
  void **v7; // rdi
  int v8; // r13d
  unsigned int v9; // r14d
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  void *v13; // rax
  _OWORD *v14; // rax
  struct IPropertyStore *v15; // rcx
  int ConnectorSignalProcessingModes; // eax
  int v17; // r14d
  int v18; // eax
  unsigned int v19; // edx
  struct IPropertyStore *v20; // rcx
  int v21; // eax
  GUID *v22; // r12
  struct IMMDevice *v23; // rcx
  struct IMMDevice *v24; // rcx
  struct IMMDevice *v25; // rcx
  struct IMMDevice *v26; // rcx
  struct IMMDevice *v27; // rcx
  struct IMMDevice *v28; // rcx
  __int64 v29; // rax
  struct IMMDevice *v30; // rcx
  struct IMMDevice *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  GUID *v41; // r8
  unsigned int v42; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+44h] [rbp-BCh]
  struct _tagpropertykey v46; // [rsp+50h] [rbp-B0h] BYREF
  struct _tagpropertykey v47; // [rsp+70h] [rbp-90h] BYREF
  PROPVARIANT pvar[4]; // [rsp+90h] [rbp-70h] BYREF
  struct _tagpropertykey v49; // [rsp+B0h] [rbp-50h] BYREF
  struct _tagpropertykey v50; // [rsp+D0h] [rbp-30h] BYREF
  struct _tagpropertykey v51; // [rsp+F0h] [rbp-10h] BYREF
  struct _tagpropertykey v52; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v53; // [rsp+130h] [rbp+30h] BYREF
  struct _GUID v54; // [rsp+140h] [rbp+40h] BYREF
  struct _GUID v55; // [rsp+150h] [rbp+50h] BYREF
  struct _GUID v56; // [rsp+160h] [rbp+60h] BYREF
  struct _GUID v57; // [rsp+170h] [rbp+70h] BYREF

  v1 = eHostProcessConnector;
  *((_DWORD *)this + 100) = 0;
  pv = 0LL;
  v3 = (struct IPropertyStore *)*((_QWORD *)this + 4);
  v4 = 0;
  v54 = GUID_00000000_0000_0000_0000_000000000000;
  v44 = 0;
  v55 = GUID_00000000_0000_0000_0000_000000000000;
  memset(pvar, 0, 24);
  v53 = GUID_00000000_0000_0000_0000_000000000000;
  v56 = GUID_00000000_0000_0000_0000_000000000000;
  v57 = GUID_00000000_0000_0000_0000_000000000000;
  if ( GetHostConnectorSignalProcessingModes(v3, &v42, (struct _GUID **)&pv) >= 0 )
  {
    v5 = v42;
    if ( v42 )
    {
      v6 = pv;
      v7 = (void **)((char *)this + 64);
      v8 = 1;
      v9 = 0;
      *((_DWORD *)this + 10) = 1;
      while ( 1 )
      {
        v10 = *((_DWORD *)this + 18);
        v11 = *((_DWORD *)this + 19);
        if ( v10 == v11 )
        {
          if ( v11 )
          {
            v12 = 2 * v10;
            v45 = 2 * v10;
            if ( (v10 & 0x40000000) != 0 )
              goto LABEL_64;
          }
          else
          {
            v12 = 1;
            v45 = 1;
          }
          if ( (unsigned __int64)v12 > 0x7FFFFFF || (v13 = _recalloc(*v7, v12, 0x10uLL)) == 0LL )
          {
LABEL_64:
            v17 = -2147024882;
            goto LABEL_46;
          }
          *((_DWORD *)this + 19) = v45;
          *v7 = v13;
        }
        v14 = (char *)*v7 + 16 * *((int *)this + 18);
        if ( v14 )
          *v14 = *v6;
        ++*((_DWORD *)this + 18);
        ++v9;
        ++v6;
        if ( v9 >= v5 )
        {
          v4 = 0;
          goto LABEL_14;
        }
      }
    }
  }
  v8 = 1;
  v7 = (void **)((char *)this + 64);
  if ( g_bForceNonModeAwareDriverToRaw == 1 )
  {
    *((_DWORD *)this + 100) = 1;
    v41 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    *((_DWORD *)this + 10) = 1;
  }
  else
  {
    *((_DWORD *)this + 10) = 0;
    v41 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v17 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
          (CEndpointCharacteristics *)((char *)this + 64),
          1u,
          v41);
  if ( v17 >= 0 )
  {
LABEL_14:
    CoTaskMemFree(pv);
    v15 = (struct IPropertyStore *)*((_QWORD *)this + 4);
    pv = 0LL;
    v42 = 0;
    v52.fmtid.Data1 = 590439624;
    *(_DWORD *)&v52.fmtid.Data2 = 1283267372;
    *(_DWORD *)v52.fmtid.Data4 = 1907779772;
    *(_DWORD *)&v52.fmtid.Data4[4] = 1730509416;
    v52.pid = 1;
    ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                       v15,
                                       &v52,
                                       &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                       &v42,
                                       (struct _GUID **)&pv);
    if ( ConnectorSignalProcessingModes >= 0 && v42 )
    {
      v40 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + 112),
              v42,
              (const struct _GUID *)pv);
      *((_DWORD *)this + 13) = 1;
      v17 = v40;
      if ( v40 < 0 )
        goto LABEL_46;
    }
    else
    {
      if ( ConnectorSignalProcessingModes != -2147023728 )
      {
        v17 = -2147418113;
        goto LABEL_46;
      }
      *((_DWORD *)this + 13) = 0;
      v17 = 0;
    }
    CoTaskMemFree(pv);
    v18 = *((_DWORD *)this + 10);
    v19 = 0;
    pv = 0LL;
    v42 = 0;
    *((_DWORD *)this + 11) = v18;
    if ( v18 )
    {
      v20 = (struct IPropertyStore *)*((_QWORD *)this + 4);
      v52.fmtid.Data1 = 590439624;
      *(_DWORD *)&v52.fmtid.Data2 = 1283267372;
      *(_DWORD *)v52.fmtid.Data4 = 1907779772;
      *(_DWORD *)&v52.fmtid.Data4[4] = 1730509416;
      v52.pid = 1;
      v21 = GetConnectorSignalProcessingModes(
              v20,
              &v52,
              &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
              &v42,
              (struct _GUID **)&pv);
      v19 = v42;
      v17 = v21;
      if ( v21 >= 0 && v42 )
      {
        v39 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
                (CEndpointCharacteristics *)((char *)this + 80),
                v42,
                (const struct _GUID *)pv);
        v19 = v42;
        v17 = v39;
      }
      else if ( v21 == -2147023728 )
      {
        v17 = 0;
LABEL_21:
        v22 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        if ( !v19 )
          v17 = CEndpointCharacteristics::CAudioSignalProcessingModeArray::AddMultiple(
                  (CEndpointCharacteristics *)((char *)this + 80),
                  1u,
                  &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        if ( v17 >= 0 )
        {
          v23 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v52 = PKEY_FX_StreamEffectClsid;
          GetFxClsid(v23, &v52, &v54, 0);
          v24 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v51 = PKEY_FX_ModeEffectClsid;
          GetFxClsid(v24, &v51, &v55, 0);
          v25 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v49 = PKEY_FX_EndpointEffectClsid;
          GetFxClsid(v25, &v49, &v53, 0);
          v26 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v50 = PKEY_FX_KeywordDetector_StreamEffectClsid;
          GetFxClsid(v26, &v50, &v54, 0);
          v27 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v47 = PKEY_FX_KeywordDetector_ModeEffectClsid;
          GetFxClsid(v27, &v47, &v55, 0);
          v28 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v46 = PKEY_FX_KeywordDetector_EndpointEffectClsid;
          GetFxClsid(v28, &v46, &v53, 0);
          v29 = *(_QWORD *)&v54.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *(_QWORD *)&v54.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v29 = *(_QWORD *)v54.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( v29 )
            goto LABEL_27;
          v37 = *(_QWORD *)&v55.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *(_QWORD *)&v55.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v37 = *(_QWORD *)v55.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( v37 )
            goto LABEL_27;
          v38 = *(_QWORD *)&v53.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *(_QWORD *)&v53.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v38 = *(_QWORD *)v53.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( v38 )
LABEL_27:
            v4 = 1;
          v30 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v46 = PKEY_FX_PreMixEffectClsid;
          GetFxClsid(v30, &v46, &v56, 0);
          v31 = (struct IMMDevice *)*((_QWORD *)this + 2);
          v47 = PKEY_FX_PostMixEffectClsid;
          GetFxClsid(v31, &v47, &v57, 0);
          v33 = *(_QWORD *)&v56.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *(_QWORD *)&v56.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v33 = *(_QWORD *)v56.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( v33 )
            goto LABEL_35;
          v34 = *(_QWORD *)&v57.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *(_QWORD *)&v57.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v34 = *(_QWORD *)v57.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( v34 )
          {
LABEL_35:
            v35 = 1;
            v44 = 1;
          }
          else
          {
            v35 = 0;
          }
          if ( !*((_DWORD *)this + 10) || !v4 && v35 )
            v8 = 0;
          *((_DWORD *)this + 10) = v8;
          while ( 1 )
          {
            if ( v1 != eLoopbackConnector )
            {
              v17 = CEndpointCharacteristics::FixupProcessingModeSupport(this, v1, v32, v35);
              if ( v17 < 0 )
                break;
            }
            v35 = v44;
            if ( (unsigned int)++v1 >= eConnectorCount )
            {
              if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                   (__int64 *)v7,
                                   &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
              {
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                     (__int64 *)v7,
                                     &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
                  v22 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v7, 0);
              }
              else
              {
                v22 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              }
              v52.fmtid = *v22;
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 128, &v52);
              if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                   (__int64 *)this + 26,
                                   &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
                ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                  (char *)this + 336,
                  &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
              goto LABEL_46;
            }
          }
        }
        goto LABEL_46;
      }
    }
    if ( v17 < 0 )
      goto LABEL_46;
    goto LABEL_21;
  }
LABEL_46:
  PropVariantClear(pvar);
  CoTaskMemFree(pv);
  return (unsigned int)v17;
}

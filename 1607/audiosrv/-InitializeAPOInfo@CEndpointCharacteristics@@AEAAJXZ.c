/*
 * XREFs of ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18001D3E0
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18001D750 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z.c)
 *     ?IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z @ 0x18004F074 (-IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z.c)
 * Callees:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B39C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B49C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x18001D6D4 (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::InitializeAPOInfo(CEndpointCharacteristics *this)
{
  unsigned int v2; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v3; // r14
  unsigned int v4; // r15d
  unsigned int v5; // esi
  unsigned int v6; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  unsigned int v10; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v11; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // eax
  struct IAudioSystemEffects2 *v13; // rcx
  int InitializedSystemEffectInterface; // edi
  GUID fmtid; // xmm1
  DWORD pid; // edx
  char *v18; // r12
  struct IAudioSystemEffects2 *v19; // rcx
  char *v20; // r12
  struct IAudioSystemEffects2 *v21; // rcx
  struct IAudioSystemEffects2 *v22[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v23; // [rsp+68h] [rbp-49h] BYREF
  DWORD v24; // [rsp+78h] [rbp-39h]
  struct _tagpropertykey v25; // [rsp+88h] [rbp-29h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-9h]
  struct _GUID v27; // [rsp+B8h] [rbp+7h] BYREF
  _DWORD v28[4]; // [rsp+C8h] [rbp+17h] BYREF

  v26 = -2LL;
  v28[0] = 0;
  v28[1] = 1;
  v28[2] = 3;
  *((_DWORD *)this + 107) = 1;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  v2 = 0;
  v3 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v28;
  do
  {
    v4 = *((_DWORD *)this + 4 * *(int *)v3 + 38);
    v5 = 0;
    if ( v4 )
    {
      v18 = (char *)this + 16 * *(int *)v3 + 144;
      while ( 1 )
      {
        v22[0] = 0LL;
        v27 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v18, v5);
        if ( (int)CEndpointCharacteristics::GetStreamEffect(this, &v27, 1, *v3, 0LL, 0LL, v22) < 0 )
          goto LABEL_25;
        v19 = v22[0];
        if ( v22[0] )
          break;
LABEL_26:
        if ( v19 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))v19->lpVtbl->Release)(v19);
        if ( ++v5 >= v4 )
          goto LABEL_3;
      }
      if ( CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v22[0], v22[0]) )
      {
        *((_DWORD *)this + 109) = 1;
        if ( v22[0] )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))v22[0]->lpVtbl->Release)(v22[0]);
        break;
      }
LABEL_25:
      v19 = v22[0];
      goto LABEL_26;
    }
LABEL_3:
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  v6 = 0;
  v7 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v28;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 4 * *(int *)v7 + 54);
    v9 = 0;
    if ( v8 )
      break;
LABEL_6:
    ++v6;
    ++v7;
    if ( v6 >= 3 )
      goto LABEL_7;
  }
  v20 = (char *)this + 16 * *(int *)v7 + 208;
  while ( 2 )
  {
    v22[0] = 0LL;
    v27 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v20, v9);
    if ( (int)CEndpointCharacteristics::GetModeEffect(this, &v27, 1, *v7, 0LL, 0LL, v22) < 0 )
    {
LABEL_34:
      v21 = v22[0];
LABEL_35:
      if ( v21 )
        ((void (__fastcall *)(struct IAudioSystemEffects2 *))v21->lpVtbl->Release)(v21);
      if ( ++v9 >= v8 )
        goto LABEL_6;
      continue;
    }
    break;
  }
  v21 = v22[0];
  if ( !v22[0] )
    goto LABEL_35;
  if ( !CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v22[0], v22[0]) )
    goto LABEL_34;
  *((_DWORD *)this + 110) = 1;
  if ( v22[0] )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v22[0]->lpVtbl->Release)(v22[0]);
LABEL_7:
  v10 = 0;
  v11 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v28;
  while ( 2 )
  {
    v12 = *v11;
    v27 = GUID_00000000_0000_0000_0000_000000000000;
    v13 = 0LL;
    v22[0] = 0LL;
    InitializedSystemEffectInterface = 0;
    if ( v12 == eHostProcessConnector )
    {
      fmtid = PKEY_FX_EndpointEffectClsid.fmtid;
      pid = PKEY_FX_EndpointEffectClsid.pid;
LABEL_18:
      if ( InitializedSystemEffectInterface >= 0 )
        goto LABEL_11;
      goto LABEL_13;
    }
    if ( v12 != eKeywordDetectorConnector )
    {
      InitializedSystemEffectInterface = -2147023728;
      pid = v24;
      fmtid = v23;
      goto LABEL_18;
    }
    fmtid = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
    pid = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
LABEL_11:
    v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v25.fmtid = fmtid;
    v25.pid = pid;
    InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                         (struct IMMDevice **)this,
                                         &v25,
                                         &v23,
                                         1,
                                         0,
                                         v12,
                                         &v27,
                                         0LL,
                                         v22);
    v13 = v22[0];
    if ( InitializedSystemEffectInterface < 0 || !v22[0] )
    {
LABEL_13:
      if ( v13 )
        ((void (__fastcall *)(struct IAudioSystemEffects2 *))v13->lpVtbl->Release)(v13);
      ++v10;
      ++v11;
      if ( v10 >= 3 )
        goto LABEL_16;
      continue;
    }
    break;
  }
  if ( !CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v22[0], v22[0]) )
  {
    v13 = v22[0];
    goto LABEL_13;
  }
  *((_DWORD *)this + 111) = 1;
  if ( v22[0] )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v22[0]->lpVtbl->Release)(v22[0]);
LABEL_16:
  *((_DWORD *)this + 106) = 1;
  *((_DWORD *)this + 107) = 0;
  return (unsigned int)InitializedSystemEffectInterface;
}

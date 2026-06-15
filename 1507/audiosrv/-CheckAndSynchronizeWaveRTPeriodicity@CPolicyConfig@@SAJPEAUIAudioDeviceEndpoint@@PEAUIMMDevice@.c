/*
 * XREFs of ?CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@@PEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180034CE0
 * Callers:
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032BB8 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MI.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002D5C0 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180034C5C (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SX @ 0x180089B1C (WPP_SF_SX.c)
 *     WPP_SF_XX @ 0x180089BB8 (WPP_SF_XX.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::CheckAndSynchronizeWaveRTPeriodicity(
        struct IAudioDeviceEndpoint *a1,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a4)
{
  int v7; // esi
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rdx
  int v14; // r8d
  BSTR v15; // rbx
  int v16; // edx
  __int64 v17; // rdx
  LPVOID pv; // [rsp+38h] [rbp-69h] BYREF
  __int64 v19; // [rsp+40h] [rbp-61h] BYREF
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+50h] [rbp-51h] BYREF
  __int64 v22; // [rsp+58h] [rbp-49h] BYREF
  __int64 v23; // [rsp+60h] [rbp-41h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+68h] [rbp-39h] BYREF
  struct tagPROPVARIANT v25; // [rsp+80h] [rbp-21h] BYREF
  struct tagPROPVARIANT v26; // [rsp+98h] [rbp-9h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 v28; // [rsp+B8h] [rbp+17h]
  __int64 v29; // [rsp+C0h] [rbp+1Fh]
  int v30; // [rsp+110h] [rbp+6Fh] BYREF
  int v31; // [rsp+120h] [rbp+7Fh] BYREF

  v29 = -2LL;
  pv = 0LL;
  v20 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v30 = 0;
  v31 = 0;
  memset(&pvar, 0, sizeof(pvar));
  memset(&v25, 0, sizeof(v25));
  memset(&v26, 0, sizeof(v26));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x7Au,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
  }
  v19 = 100000LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
  if ( v7 < 0 )
    goto LABEL_33;
  if ( (int)CPolicyConfig::GetPropertyStoreProperty(a2, 0, &PKEY_AudioEngine_Period, &pvar) >= 0
    && pvar.vt == 65
    && pvar.lVal == 8 )
  {
    v8 = (__int64)*pvar.cabstr.pElems;
  }
  else
  {
    v8 = 100000LL;
  }
  if ( (int)CPolicyConfig::GetPropertyStoreProperty(a2, 0, &PKEY_AudioEngine_OEMPeriod, &v25) < 0
    || v25.vt != 65
    || v25.lVal != 8
    || (int)CPolicyConfig::GetPropertyStoreProperty(a2, 0, &PKEY_AudioEngine_PeriodUseDefault, &v26) >= 0
    && v26.vt == 11
    && v26.iVal == -1 )
  {
    goto LABEL_12;
  }
  v15 = *v25.cabstr.pElems;
  if ( (unsigned __int64)(*v25.cabstr.pElems - 25000) > 0xC350 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x7Bu,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
    }
LABEL_12:
    v19 = 100000LL;
    goto LABEL_13;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SX(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 124, v14, (_DWORD)pv, (char)*v25.cabstr.pElems);
  }
  v19 = (__int64)v15;
LABEL_13:
  v7 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, int *))a1->lpVtbl->GetRTCaps)(a1, &v31);
  if ( v7 < 0 )
    goto LABEL_33;
  if ( !v31 )
  {
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v17 = 129LL;
        goto LABEL_72;
      }
LABEL_77:
      if ( (struct _GUID *)v11 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v11 + 28) & 0x80000) != 0
        && *(_BYTE *)(v11 + 25) >= 4u )
      {
        WPP_SF_SX(*(_QWORD *)(v11 + 16), 130, v9, (_DWORD)pv, v19);
      }
    }
LABEL_81:
    v12 = &v19;
    goto LABEL_32;
  }
  v7 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_88db6d4d_9bf4_43e4_93ef_3a623060a0b4,
         &v23);
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v20);
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, int *))a1->lpVtbl->GetEventDrivenCapable)(a1, &v30);
  if ( v7 < 0 )
    goto LABEL_33;
  if ( !v30 )
  {
    v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v17 = 128LL;
LABEL_72:
        WPP_SF_S(*(_QWORD *)(v11 + 16), v17, &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, pv);
        v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        goto LABEL_77;
      }
      goto LABEL_77;
    }
    goto LABEL_81;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 0x40000LL);
  if ( v7 >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, __int64, _QWORD))a1->lpVtbl->SetBuffer)(a1, v19, 0LL);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2005139372 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 32LL))(v23, &v21);
      if ( v7 >= 0 )
      {
        v10 = (unsigned int)(int)((double)v21 * 10000000.0 / (double)(int)(a3->nAvgBytesPerSec / a3->nBlockAlign) + 0.5);
        v22 = v10;
        v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_XX(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), &WPP_GLOBAL_Control, v9, v19, v10);
          v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          v10 = v22;
        }
        if ( v10 > v19 )
        {
          if ( (struct _GUID *)v11 == &WPP_GLOBAL_Control
            || (*(_DWORD *)(v11 + 28) & 0x80000) == 0
            || *(_BYTE *)(v11 + 25) < 4u )
          {
            goto LABEL_31;
          }
          v16 = 126;
          goto LABEL_67;
        }
        if ( v10 != v8 )
        {
          if ( (struct _GUID *)v11 == &WPP_GLOBAL_Control
            || (*(_DWORD *)(v11 + 28) & 0x80000) == 0
            || *(_BYTE *)(v11 + 25) < 4u )
          {
            goto LABEL_31;
          }
          v16 = 127;
LABEL_67:
          WPP_SF_SX(*(_QWORD *)(v11 + 16), v16, v9, (_DWORD)pv, v10);
LABEL_31:
          v12 = &v22;
LABEL_32:
          v7 = CPolicyConfig::SetProcessingPeriodInternal((struct IMMDevice *)a2, (BYTE *)v12);
          goto LABEL_33;
        }
        goto LABEL_77;
      }
    }
  }
LABEL_33:
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear((PROPVARIANT *)&v25);
  PropVariantClear((PROPVARIANT *)&v26);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v7 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x83u,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        v7);
    }
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x80000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x84u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v7;
}

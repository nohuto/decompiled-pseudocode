/*
 * XREFs of ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x18002E5C0 (AudioServerGetMixFormat.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033A1C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180037ECC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetMixFormatInternal(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct _GUID *v5; // rsi
  BYTE *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 (__fastcall *v13)(CWindowsPolicyManager *__hidden, const struct ModeList **); // rdi
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  DWORD pid; // eax
  int refreshed; // esi
  BYTE *pData; // r8
  unsigned __int16 v21; // si
  int v22; // edx
  int v23; // edi
  unsigned __int16 v24; // r14
  unsigned __int16 v25; // bx
  __int16 v26; // r11
  __int16 v27; // cx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int16 v31; // cx
  unsigned __int16 v32; // ax
  __int64 v33; // r10
  __int64 v34; // r9
  struct tWAVEFORMATEX *v35; // rax
  struct tWAVEFORMATEX *v36; // rdi
  __int64 v37; // rcx
  __int64 v39; // [rsp+20h] [rbp-61h] BYREF
  __int64 v40; // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v41; // [rsp+30h] [rbp-51h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-49h] BYREF
  struct tWAVEFORMATEX **v43; // [rsp+50h] [rbp-31h]
  __int64 v44; // [rsp+58h] [rbp-29h]
  struct _GUID v45; // [rsp+60h] [rbp-21h]
  __int64 v46; // [rsp+70h] [rbp-11h]
  struct _tagpropertykey v47; // [rsp+78h] [rbp-9h] BYREF

  v46 = -2LL;
  v5 = a4;
  v43 = a5;
  v44 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  if ( a3 == eOffloadConnector )
  {
    v47 = PKEY_AudioEngine_HWMixFormat;
  }
  else
  {
    v10 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v10 )
    {
      if ( !a2
        || (v39 = 0LL,
            ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
              a2,
              &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
              &v39),
            !v39) )
      {
        refreshed = -2147467262;
        goto LABEL_92;
      }
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v39 + 48LL))(v39) )
      {
        v45 = *v5;
        v41 = 0LL;
        v13 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, const struct ModeList **))(*(_QWORD *)g_PolicyManager
                                                                                                  + 80LL);
        if ( v13 == CWindowsPolicyManager::GetSupportedModes )
        {
          v12 = &unk_1800B0E78;
          v41 = &unk_1800B0E78;
          v14 = 0;
          v11 = 0LL;
        }
        else
        {
          v14 = v13(g_PolicyManager, (const struct ModeList **)&v41);
          v11 = 0LL;
          if ( v14 < 0 )
          {
LABEL_79:
            refreshed = -2147023728;
            if ( v39 )
              (*(void (__fastcall **)(__int64, __int64, _QWORD *, struct _GUID *))(*(_QWORD *)v39 + 16LL))(
                v39,
                v11,
                v12,
                a4);
            goto LABEL_92;
          }
          v12 = v41;
        }
        a4 = (struct _GUID *)v14;
        while ( (unsigned int)v11 < *(_DWORD *)v12 )
        {
          v15 = (_QWORD *)(v12[1] + 16LL * (unsigned int)v11);
          v16 = *v15 - *(_QWORD *)&v45.Data1;
          if ( *v15 == *(_QWORD *)&v45.Data1 )
            v16 = v15[1] - *(_QWORD *)v45.Data4;
          if ( !v16 )
          {
            v47.fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
            if ( a3 == eKeywordDetectorConnector )
              v17 = 600;
            else
              v17 = 0;
            pid = v11 + v17 + 2;
            goto LABEL_18;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        goto LABEL_79;
      }
      v47.fmtid = PKEY_AudioEngine_MixFormat.fmtid;
      pid = PKEY_AudioEngine_MixFormat.pid;
LABEL_18:
      v47.pid = pid;
      if ( v39 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD *, struct _GUID *))(*(_QWORD *)v39 + 16LL))(v39, v11, v12, a4);
    }
    else
    {
      v47 = PKEY_AudioEngine_MixFormat;
    }
  }
  refreshed = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *, struct _GUID *))a2->lpVtbl->OpenPropertyStore)(
                a2,
                0LL,
                &v40,
                a4);
  if ( refreshed < 0 )
    goto LABEL_92;
  if ( (*(int (__fastcall **)(__int64, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
         v40,
         &v47,
         &pvar) < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (pData = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2, a3);
    if ( refreshed < 0 )
      goto LABEL_92;
    refreshed = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
                  v40,
                  &v47,
                  &pvar);
    if ( refreshed < 0 )
      goto LABEL_92;
    if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      refreshed = -2147024809;
      goto LABEL_92;
    }
    pData = pvar.bstrblobVal.pData;
  }
  v9 = pData;
  if ( !pData )
    goto LABEL_90;
  v21 = *((_WORD *)pData + 1);
  if ( !v21 )
    goto LABEL_90;
  v22 = *((_DWORD *)pData + 1);
  if ( !v22 )
    goto LABEL_90;
  v23 = *((_DWORD *)pData + 2);
  if ( !v23 )
    goto LABEL_90;
  v24 = *((_WORD *)pData + 6);
  if ( !v24 )
    goto LABEL_90;
  v25 = *((_WORD *)pData + 8);
  if ( v25 > 0x400u )
    goto LABEL_90;
  v26 = *(_WORD *)pData;
  LODWORD(v39) = 65534;
  if ( ((v26 - 1) & 0xFFFD) == 0 )
  {
    if ( !v25
      && (*((unsigned __int16 *)pData + 7) & 0x80000007) == 0
      && v21 <= 2u
      && v23 == (v22 * *((unsigned __int16 *)pData + 7) * (unsigned int)v21) >> 3 )
    {
      goto LABEL_48;
    }
    goto LABEL_90;
  }
  v27 = v39;
  if ( (_WORD)v39 == v26 )
  {
    if ( v25 < 0x16u )
      goto LABEL_90;
    v28 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v28 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v28 )
      goto LABEL_40;
    v29 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v29 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v29 )
    {
LABEL_40:
      v30 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
        v30 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      v31 = *((_WORD *)pData + 7);
      if ( v30 )
      {
        v21 = *((_WORD *)pData + 1);
        if ( ((v31 - 32) & 0xFFDF) != 0 )
          goto LABEL_90;
      }
      else
      {
        v24 = *((_WORD *)pData + 6);
        if ( ((v31 - 8) & 0xFFE7) != 0 )
          goto LABEL_90;
      }
      v32 = *((_WORD *)pData + 9);
      if ( (_WORD)v44 != v32 && v31 >= v32 && v23 == (v22 * v21 * (unsigned int)v31) >> 3 && v24 == v21 * v31 / 8 )
      {
LABEL_48:
        v27 = v39;
        goto LABEL_49;
      }
LABEL_90:
      refreshed = -2004287480;
      goto LABEL_92;
    }
  }
LABEL_49:
  if ( ((v26 - 1) & 0xFFFD) != 0 )
  {
    if ( v27 != v26 )
      goto LABEL_90;
    v33 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( !v33 )
      v33 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( v33 )
    {
      v34 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( !v34 )
        v34 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      if ( v34 )
        goto LABEL_90;
    }
  }
  v35 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v25 + 18LL);
  v36 = v35;
  if ( v35 )
  {
    memcpy_0(v35, v9, v25 + 18LL);
    refreshed = 0;
  }
  else
  {
    refreshed = -2147024882;
  }
  *v43 = v36;
  if ( refreshed >= 0 )
    goto LABEL_60;
LABEL_92:
  v37 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      34LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)refreshed);
LABEL_60:
    v37 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v9 )
  {
    CoTaskMemFree(v9);
    v37 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( refreshed < 0
    && (struct _GUID *)v37 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v37 + 28) & 0x40) != 0
    && *(_BYTE *)(v37 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v37 + 16), 33LL, &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, (unsigned int)refreshed);
  }
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  return (unsigned int)refreshed;
}

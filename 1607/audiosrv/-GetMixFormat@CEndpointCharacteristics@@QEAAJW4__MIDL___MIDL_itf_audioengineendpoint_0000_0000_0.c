/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180002C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerGetMixFormat @ 0x180006550 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800090E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180069398 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x18006B860 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180070170 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D814 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  _QWORD *v8; // r9
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  _BOOL8 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  DWORD pid; // eax
  BYTE *pData; // r8
  BYTE *v17; // r12
  int v18; // edx
  int v19; // ebx
  unsigned __int16 v20; // si
  unsigned __int16 v21; // cx
  __int16 v22; // r11
  unsigned __int16 v23; // di
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // ax
  int v29; // ecx
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // rbx
  struct tWAVEFORMATEX *v33; // rax
  struct tWAVEFORMATEX *v34; // rdi
  int v35; // eax
  unsigned int v36; // ebx
  int v38; // eax
  int v39; // eax
  int refreshed; // [rsp+30h] [rbp-B1h] BYREF
  int v41; // [rsp+34h] [rbp-ADh] BYREF
  __int64 v42; // [rsp+38h] [rbp-A9h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v44[2]; // [rsp+58h] [rbp-89h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-79h] BYREF
  struct _GUID v46; // [rsp+70h] [rbp-71h]
  __int64 v47; // [rsp+80h] [rbp-61h]
  struct _tagpropertykey v48; // [rsp+88h] [rbp-59h] BYREF
  void *v49; // [rsp+A0h] [rbp-41h] BYREF
  int v50; // [rsp+A8h] [rbp-39h]
  int v51; // [rsp+ACh] [rbp-35h]
  void *v52; // [rsp+B0h] [rbp-31h]
  int v53; // [rsp+B8h] [rbp-29h]
  int v54; // [rsp+BCh] [rbp-25h]
  const char *v55; // [rsp+C0h] [rbp-21h]
  __int64 v56; // [rsp+C8h] [rbp-19h]
  int *v57; // [rsp+D0h] [rbp-11h]
  __int64 v58; // [rsp+D8h] [rbp-9h]
  int *p_refreshed; // [rsp+E0h] [rbp-1h]
  __int64 v60; // [rsp+E8h] [rbp+7h]

  v47 = -2LL;
  v44[0] = 0LL;
  refreshed = 0;
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 448, &lpCriticalSection, a3, a4);
  if ( a2 == eOffloadConnector )
  {
    v48 = PKEY_AudioEngine_HWMixFormat;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v9 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v9 )
  {
    v48 = PKEY_AudioEngine_MixFormat;
    goto LABEL_17;
  }
  v10 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  if ( !v10 || (v42 = 0LL, (**v10)(v10, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v42), !v42) )
  {
    refreshed = -2147467262;
    goto LABEL_56;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 48LL))(v42) )
  {
    v48.fmtid = PKEY_AudioEngine_MixFormat.fmtid;
    pid = PKEY_AudioEngine_MixFormat.pid;
LABEL_15:
    v48.pid = pid;
    if ( v42 )
      (*(void (__fastcall **)(__int64, _BOOL8, __int64, _QWORD *))(*(_QWORD *)v42 + 16LL))(v42, v11, v12, v8);
LABEL_17:
    refreshed = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 4) + 40LL))(
                  *((_QWORD *)this + 4),
                  &v48,
                  &pvar,
                  v8);
    if ( refreshed >= 0 && pvar.vt == 65 && pvar.lVal >= 0x12u )
    {
      pData = pvar.bstrblobVal.pData;
      if ( pvar.ulVal == *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL )
      {
LABEL_21:
        v17 = pData;
        if ( !pData )
          goto LABEL_87;
        if ( !*((_WORD *)pData + 1) )
          goto LABEL_87;
        v18 = *((_DWORD *)pData + 1);
        if ( !v18 )
          goto LABEL_87;
        v19 = *((_DWORD *)pData + 2);
        if ( !v19 )
          goto LABEL_87;
        v20 = *((_WORD *)pData + 6);
        if ( !v20 )
          goto LABEL_87;
        v21 = *((_WORD *)pData + 8);
        if ( v21 > 0x400u )
          goto LABEL_87;
        v22 = *(_WORD *)pData;
        v41 = 65534;
        v23 = *((_WORD *)pData + 1);
        if ( ((v22 - 1) & 0xFFFD) != 0 )
        {
          if ( (_WORD)v41 != v22 )
          {
LABEL_44:
            if ( ((v22 - 1) & 0xFFFD) != 0 )
            {
              if ( (_WORD)v41 == v22 )
              {
                v30 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
                if ( !v30 )
                  v30 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
                if ( !v30 )
                  goto LABEL_52;
                v31 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
                if ( !v31 )
                  v31 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
                if ( !v31 )
                {
LABEL_52:
                  refreshed = 0;
LABEL_53:
                  v32 = *((unsigned __int16 *)pData + 8);
                  v33 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v32 + 18);
                  v34 = v33;
                  if ( v33 )
                  {
                    memcpy_0(v33, v17, v32 + 18);
                    v35 = 0;
                  }
                  else
                  {
                    v35 = -2147024882;
                  }
                  *a5 = v34;
                  refreshed = v35;
                  goto LABEL_56;
                }
              }
LABEL_87:
              refreshed = -2004287480;
              goto LABEL_56;
            }
            v39 = 0;
LABEL_84:
            refreshed = v39;
            if ( !v39 )
              goto LABEL_53;
            goto LABEL_87;
          }
          if ( v21 >= 0x16u )
          {
            v24 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
              v24 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
            if ( v24 )
            {
              v25 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
              if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
                v25 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
              if ( v25 )
                goto LABEL_44;
            }
            v26 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
              v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
            v27 = *((_WORD *)pData + 7);
            if ( v26 )
            {
              pData = pvar.bstrblobVal.pData;
              if ( ((v27 - 32) & 0xFFDF) != 0 )
                goto LABEL_83;
            }
            else
            {
              v23 = *((_WORD *)pData + 1);
              if ( ((v27 - 8) & 0xFFE7) != 0 )
                goto LABEL_83;
            }
            v28 = *((_WORD *)pData + 9);
            if ( LOWORD(v44[0]) != v28 && v27 >= v28 )
            {
              v29 = v23 * v27;
              if ( v19 == (unsigned int)(v18 * v29) >> 3 && v20 == v29 / 8 )
                goto LABEL_44;
            }
          }
        }
        else if ( !v21
               && (*((unsigned __int16 *)pData + 7) & 0x80000007) == 0
               && v23 <= 2u
               && v19 == (v18 * *((unsigned __int16 *)pData + 7) * (unsigned int)v23) >> 3 )
        {
          goto LABEL_44;
        }
LABEL_83:
        v39 = -2147024809;
        goto LABEL_84;
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2);
    if ( refreshed < 0 )
      goto LABEL_56;
    v38 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4)
                                                                                               + 40LL))(
            *((_QWORD *)this + 4),
            &v48,
            &pvar);
    if ( v38 >= 0 )
    {
      if ( pvar.vt == 65 && (unsigned int)IsValidWfxBlob(&pvar) )
      {
        pData = pvar.bstrblobVal.pData;
        goto LABEL_21;
      }
      v38 = -2147024809;
    }
    refreshed = v38;
    goto LABEL_56;
  }
  v11 = a2 == eKeywordDetectorConnector;
  v46 = *a3;
  v12 = 0LL;
  v8 = qword_1800CA460;
  do
  {
    v13 = qword_1800CA460[2 * (unsigned int)v12] - *(_QWORD *)&v46.Data1;
    if ( !v13 )
      v13 = qword_1800CA460[2 * (unsigned int)v12 + 1] - *(_QWORD *)v46.Data4;
    if ( !v13 )
    {
      v48.fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      if ( a2 == eKeywordDetectorConnector )
        v14 = 600;
      else
        v14 = 0;
      pid = v12 + v14 + 2;
      refreshed = 0;
      goto LABEL_15;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < 7 );
  refreshed = -2147023728;
  if ( v42 )
    (*(void (__fastcall **)(__int64, _BOOL8, __int64, _QWORD *))(*(_QWORD *)v42 + 16LL))(v42, v11, v12, qword_1800CA460);
LABEL_56:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( (unsigned int)hProvider > 2 )
  {
    v55 = "CEndpointCharacteristics::GetMixFormat";
    v56 = 39LL;
    v41 = 5454;
    v57 = &v41;
    v58 = 4LL;
    p_refreshed = &refreshed;
    v60 = 4LL;
    LODWORD(v44[0]) = ((unsigned int)&unk_1800A877D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    HIDWORD(v44[0]) = 2;
    v44[1] = 0LL;
    v49 = off_1800CA088;
    v50 = *(unsigned __int16 *)off_1800CA088;
    v51 = 2;
    v52 = &unk_1800A8788;
    v53 = 35;
    v54 = 1;
    EtwEventWriteTransfer(qword_1800CA0A0, v44, 0LL, 0LL, 5, &v49);
  }
  v36 = refreshed;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v36;
}

/*
 * XREFs of ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F6A0
 * Callers:
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetSupportedModes@CWindowsPolicyManager@@UEAAJPEAPEBUModeList@@@Z @ 0x180021E20 (-GetSupportedModes@CWindowsPolicyManager@@UEAAJPEAPEBUModeList@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033A1C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180037ECC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetDevicePipeFormatInternal(
        CPolicyConfig *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  BOOL v8; // esi
  __int64 (__fastcall *v9)(CWindowsPolicyManager *__hidden, const struct ModeList **); // rdi
  int SupportedModes; // eax
  unsigned int v11; // edx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int refreshed; // esi
  BYTE *pData; // rbx
  BYTE *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  struct tWAVEFORMATEX *v21; // rax
  struct tWAVEFORMATEX *v22; // rdi
  __int64 v24; // [rsp+20h] [rbp-51h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-49h] BYREF
  struct ModeList *v26[2]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v27; // [rsp+50h] [rbp-21h]
  __int64 v28; // [rsp+60h] [rbp-11h]
  __int128 v29; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+7h]

  v28 = -2LL;
  v24 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  v8 = a3 == eKeywordDetectorConnector;
  v27 = (__int128)*a4;
  v26[0] = 0LL;
  v9 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, const struct ModeList **))(*(_QWORD *)g_PolicyManager
                                                                                           + 80LL);
  if ( v9 == CWindowsPolicyManager::GetSupportedModes )
    SupportedModes = CWindowsPolicyManager::GetSupportedModes(g_PolicyManager, v26);
  else
    SupportedModes = v9(g_PolicyManager, v26);
  v11 = 0;
  if ( SupportedModes < 0 )
  {
LABEL_42:
    refreshed = -2147023728;
    goto LABEL_29;
  }
  while ( 1 )
  {
    if ( v11 >= *(_DWORD *)v26[0] )
      goto LABEL_42;
    v12 = (_QWORD *)(*((_QWORD *)v26[0] + 1) + 16LL * v11);
    v13 = *v12 - v27;
    if ( *v12 == (_QWORD)v27 )
      v13 = v12[1] - *((_QWORD *)&v27 + 1);
    if ( !v13 )
      break;
    ++v11;
  }
  v29 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  if ( v8 )
    v14 = 600;
  else
    v14 = 0;
  v30 = v11 + v14 + 2;
  refreshed = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(
                a2,
                0LL,
                &v24);
  if ( refreshed >= 0 )
  {
    refreshed = (*(__int64 (__fastcall **)(__int64, __int128 *, struct tagPROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
                  v24,
                  &v29,
                  &pvar);
    if ( refreshed >= 0 )
    {
      if ( pvar.vt != 65
        || pvar.lVal < 0x12u
        || (pData = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
      {
        PropVariantClear((PROPVARIANT *)&pvar);
        refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2, a3);
        if ( refreshed < 0 )
          goto LABEL_29;
        if ( (*(int (__fastcall **)(__int64, __int128 *, struct tagPROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
               v24,
               &v29,
               &pvar) < 0
          || pvar.vt != 65
          || !(unsigned int)IsValidWfxBlob(&pvar) )
        {
          goto LABEL_41;
        }
        pData = pvar.bstrblobVal.pData;
      }
      v17 = pData;
      if ( pData && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pData) >= 0 )
      {
        if ( ((*(_WORD *)pData - 1) & 0xFFFD) == 0 )
          goto LABEL_26;
        if ( *(_WORD *)pData == 0xFFFE )
        {
          v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
            v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
          if ( !v18 )
            goto LABEL_26;
          v19 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
          if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
            v19 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
          if ( !v19 )
          {
LABEL_26:
            v20 = *((unsigned __int16 *)pData + 8);
            v21 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v20 + 18);
            v22 = v21;
            if ( v21 )
            {
              memcpy_0(v21, v17, v20 + 18);
              refreshed = 0;
            }
            else
            {
              refreshed = -2147024882;
            }
            *a5 = v22;
            goto LABEL_29;
          }
        }
      }
LABEL_41:
      refreshed = -2004287480;
    }
  }
LABEL_29:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( refreshed < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      62LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)refreshed);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)refreshed;
}

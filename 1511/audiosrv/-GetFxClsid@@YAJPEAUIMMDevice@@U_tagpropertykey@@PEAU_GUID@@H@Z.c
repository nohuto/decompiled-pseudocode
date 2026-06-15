/*
 * XREFs of ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z @ 0x1800112B0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0 (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1800403D0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF__guid_d @ 0x180077664 (WPP_SF__guid_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetFxClsid(struct IMMDevice *a1, struct _tagpropertykey *a2, struct _GUID *a3, int a4)
{
  __int64 v7; // rbx
  HRESULT v8; // esi
  __int64 v9; // rdx
  WCHAR *v10; // rcx
  int v11; // r10d
  __int64 v12; // r8
  WCHAR v13; // ax
  OLECHAR *v14; // rdx
  int v15; // r11d
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  LPOLESTR phkResult; // [rsp+40h] [rbp-C0h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-B8h] BYREF
  LPCOLESTR lpsz; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  GUID rguid; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SubKey[80]; // [rsp+80h] [rbp-80h] BYREF

  v23 = -2LL;
  v7 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v22 = 0LL;
  if ( a1 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
      &v17);
    v7 = v17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, 0LL, &v18);
  if ( v8 < 0 )
    goto LABEL_30;
  if ( a4 )
  {
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
           v18,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19
      && (_DWORD)lpsz )
    {
LABEL_29:
      v8 = -2147467259;
      goto LABEL_30;
    }
    PropVariantClear(&pvar);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
         v18,
         a2,
         &pvar);
  if ( v8 < 0 )
    goto LABEL_30;
  if ( (_WORD)pvar != 31 )
    goto LABEL_29;
  v8 = CLSIDFromString(lpsz, a3);
  if ( v8 >= 0 )
  {
    rguid = *a3;
    v9 = 75LL;
    v10 = SubKey;
    v11 = 0;
    v12 = 0LL;
    while ( v9 != -2147483571 )
    {
      v13 = *(WCHAR *)((char *)v10 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
      if ( !v13 )
        break;
      *v10++ = v13;
      ++v12;
      if ( !--v9 )
      {
        --v10;
        --v12;
        v11 = -2147024774;
        break;
      }
    }
    *v10 = 0;
    v14 = &SubKey[v12];
    v15 = 75 - v12;
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2147024774 )
    {
      v15 = (int)phkResult;
      v14 = phkResult;
    }
    if ( v11 < 0
      || StringFromGUID2(&rguid, v14, v15) <= 0
      || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, (PHKEY)&phkResult) )
    {
      v8 = -2005139398;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
          a3,
          -2005139398);
      }
      *a3 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      RegCloseKey((HKEY)phkResult);
      v8 = 0;
    }
  }
LABEL_30:
  PropVariantClear(&pvar);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v8;
}

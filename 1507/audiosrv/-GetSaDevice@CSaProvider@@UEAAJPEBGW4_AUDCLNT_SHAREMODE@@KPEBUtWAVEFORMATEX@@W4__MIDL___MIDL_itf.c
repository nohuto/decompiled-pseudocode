/*
 * XREFs of ?GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800745D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AreValidStreamFlags@@YAHW4_AUDCLNT_SHAREMODE@@K@Z @ 0x180073ED0 (-AreValidStreamFlags@@YAHW4_AUDCLNT_SHAREMODE@@K@Z.c)
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 *     WPP_SF_SdD @ 0x180075BD0 (WPP_SF_SdD.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z @ 0x1800AC008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CSaProvider::GetSaDevice(
        CSaProvider *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int64 a4,
        const struct tWAVEFORMATEX *Src,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct _GUID *a7,
        struct _GUID *a8,
        unsigned int a9,
        struct IAudioDeviceGraph **a10)
{
  unsigned int v11; // r13d
  void *v13; // rdx
  int v14; // r8d
  unsigned __int64 v15; // r9
  struct CEndpointCharacteristics *v16; // rbx
  struct tWAVEFORMATEX *v17; // r15
  CEndpointCharacteristicsCache *v18; // rcx
  struct IAudioDeviceGraph **v19; // r12
  int AliasedEndpointCharacteristics; // r14d
  int DeviceDefaults; // eax
  const struct tWAVEFORMATEX *v22; // rdi
  unsigned int v23; // ecx
  volatile int *v24; // rdx
  unsigned int (__fastcall *v25)(__int64, volatile int *); // rdi
  unsigned __int64 v27; // [rsp+20h] [rbp-99h]
  unsigned __int64 v28; // [rsp+20h] [rbp-99h]
  LPVOID pv[2]; // [rsp+70h] [rbp-49h] BYREF
  struct _GUID v30; // [rsp+80h] [rbp-39h] BYREF
  __int64 v31; // [rsp+90h] [rbp-29h] BYREF
  __int64 v32; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-19h] BYREF
  struct _GUID v34; // [rsp+B0h] [rbp-9h] BYREF
  struct CEndpointCharacteristics *v36; // [rsp+108h] [rbp+4Fh] BYREF

  v11 = a4;
  AEWMILOG_PERFORMANCE((unsigned int)this, a2, 7u, a4, v27);
  v16 = 0LL;
  pv[0] = 0LL;
  v36 = 0LL;
  v17 = 0LL;
  *(_QWORD *)&v30.Data1 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v18 = *(CEndpointCharacteristicsCache **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SdD(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), (_DWORD)v13, v14, (_DWORD)a2, a3, v11);
  }
  v19 = a10;
  if ( !a2 )
    goto LABEL_6;
  if ( a3 > 1 )
  {
LABEL_8:
    AliasedEndpointCharacteristics = -2147024809;
    goto LABEL_26;
  }
  if ( a10 )
  {
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v18, a2, &v36);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      if ( a3 != 1 && (v11 & 1) == 0 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0xFu,
            (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids);
        }
        v16 = v36;
        v34 = *a7;
        DeviceDefaults = CSaProvider::GetDeviceDefaults(
                           v36,
                           a6,
                           &v34,
                           (struct tWAVEFORMATEX **)pv,
                           (struct tWAVEFORMATEX **)&v30,
                           &v32,
                           &v31);
        v17 = *(struct tWAVEFORMATEX **)&v30.Data1;
        AliasedEndpointCharacteristics = DeviceDefaults;
        if ( DeviceDefaults < 0 )
          goto LABEL_46;
        goto LABEL_44;
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xEu,
          (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids);
      }
      v22 = Src;
      if ( Src )
      {
        v16 = v36;
        v34 = *a7;
        AliasedEndpointCharacteristics = CSaProvider::GetDeviceDefaults(v36, a6, &v34, 0LL, 0LL, &v32, &v31);
        if ( AliasedEndpointCharacteristics < 0 )
          goto LABEL_26;
        AliasedEndpointCharacteristics = CloneWaveFormat(v22, (struct tWAVEFORMATEX **)pv);
        if ( AliasedEndpointCharacteristics < 0 )
          goto LABEL_26;
LABEL_44:
        *v19 = 0LL;
        if ( !AreValidStreamFlags((enum _AUDCLNT_SHAREMODE)a3, v11) )
          goto LABEL_8;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
        v34 = *a8;
        v30 = *a7;
        AliasedEndpointCharacteristics = CSaProvider::GetSaDeviceInstance(
                                           this,
                                           v16,
                                           (enum _AUDCLNT_SHAREMODE)a3,
                                           v11,
                                           a6,
                                           &v30,
                                           &v34,
                                           a9,
                                           v33,
                                           v32,
                                           v31,
                                           (const struct tWAVEFORMATEX *)pv[0],
                                           v17,
                                           v19);
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
LABEL_46:
        if ( AliasedEndpointCharacteristics >= 0 )
          goto LABEL_30;
        goto LABEL_26;
      }
      AliasedEndpointCharacteristics = -2147467261;
    }
    v16 = v36;
    goto LABEL_26;
  }
LABEL_6:
  AliasedEndpointCharacteristics = -2147467261;
LABEL_26:
  if ( *v19 )
  {
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)*v19 + 16LL))(*v19);
    *v19 = 0LL;
  }
  if ( v33 )
    (*(void (__fastcall **)(CWindowsPolicyManager *, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 152LL))(
      g_PolicyManager,
      &v33);
LABEL_30:
  v23 = (unsigned int)pv[0];
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( v17 )
    CoTaskMemFree(v17);
  AEWMILOG_PERFORMANCE(v23, v13, 8u, v15, v28);
  if ( AliasedEndpointCharacteristics < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x10u,
      (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      AliasedEndpointCharacteristics);
  }
  if ( v16 )
  {
    v25 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v16 + 16LL);
    if ( v25 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v16,
        v24);
    else
      ((void (__fastcall *)(struct CEndpointCharacteristics *))v25)(v16);
  }
  return (unsigned int)AliasedEndpointCharacteristics;
}

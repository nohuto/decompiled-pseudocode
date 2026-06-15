/*
 * XREFs of ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70
 * Callers:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013FE0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x18002E5C0 (AudioServerGetMixFormat.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     AudioServerIsOffloadCapable @ 0x180037810 (AudioServerIsOffloadCapable.c)
 *     ?PopulateEndpointCharacteristicsCache@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18003FD30 (-PopulateEndpointCharacteristicsCache@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18006A060 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800745D0 (-GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180076120 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800768F8 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800771F0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180087370 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800895A0 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetBufferSizeLimits @ 0x18008C500 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008D110 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008D670 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     Template_zq @ 0x180005150 (Template_zq.c)
 *     ?InitHashTable@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAA_NI_N@Z @ 0x18000B2B8 (-InitHashTable@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrai.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18002E440 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x1800412F4 (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800423E8 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800424B4 (--4-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180042510 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x180066154 (-IsStale@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x1800673CC (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x180067424 (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180075888 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RemoveNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1800A96EC (-RemoveNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     Template_z @ 0x1800A9B44 (Template_z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
        CEndpointCharacteristicsCache *this,
        const unsigned __int16 *a2,
        struct CEndpointCharacteristics **a3)
{
  RTL_SRWLOCK *v4; // r13
  __int64 v5; // r15
  struct CEndpointCharacteristics *v6; // rdi
  int v7; // r14d
  RTL_SRWLOCK *v8; // r13
  unsigned int v9; // r9d
  const unsigned __int16 *v10; // rcx
  wchar_t i; // ax
  __int64 Node; // rbx
  unsigned __int16 *v13; // rax
  int v14; // ecx
  int v15; // edx
  struct CEndpointCharacteristics *v16; // rbx
  volatile int *v17; // rdx
  void (__fastcall *v18)(struct CEndpointCharacteristics *); // rsi
  RTL_SRWLOCK *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  CEndpointCharacteristics *v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rax
  struct CEndpointCharacteristics *v28; // rax
  ATL::CAtlException *v30; // rbx
  struct CEndpointCharacteristics *v31; // [rsp+30h] [rbp-88h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-80h] BYREF
  PWSTR ppszOut; // [rsp+40h] [rbp-78h] BYREF
  PROPVARIANT propvar; // [rsp+48h] [rbp-70h] BYREF
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-58h] BYREF
  PSRWLOCK v38; // [rsp+68h] [rbp-50h]
  ATL::CAtlException *v39[9]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v40; // [rsp+C0h] [rbp+8h] BYREF
  int v41; // [rsp+C4h] [rbp+Ch]
  const unsigned __int16 *v42; // [rsp+C8h] [rbp+10h] BYREF
  struct CEndpointCharacteristics **v43; // [rsp+D0h] [rbp+18h]
  __int64 v44; // [rsp+D8h] [rbp+20h] BYREF

  v43 = a3;
  v41 = HIDWORD(this);
  v39[1] = (ATL::CAtlException *)-2LL;
  v4 = g_pEndpointCharacteristicsCache;
  SRWLock = g_pEndpointCharacteristicsCache;
  v38 = g_pEndpointCharacteristicsCache;
  v5 = 0LL;
  v40 = 0;
  v6 = 0LL;
  v31 = 0LL;
  *a3 = 0LL;
  v7 = -2147023728;
  ppv = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  propvar = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ppszOut = 0LL;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v44) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, const unsigned __int16 **))(*(_QWORD *)v44 + 32LL))(v44, 0LL, &v42) >= 0
    && (*(int (__fastcall **)(const unsigned __int16 *, void *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(
         v42,
         &PKEY_Aliased_EndpointId,
         &propvar) >= 0
    && (_WORD)propvar == 31
    && PropVariantToStringAlloc(&propvar, &ppszOut) >= 0 )
  {
    v7 = 0;
  }
  PropVariantClear(&propvar);
  if ( v42 )
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v7 >= 0 )
    a2 = ppszOut;
  AcquireSRWLockShared(v4);
  v8 = v4 + 1;
  if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
         (_DWORD)v8,
         (_DWORD)a2,
         (unsigned int)&v44,
         (unsigned int)&v42,
         (__int64)&ppv) )
  {
    if ( !a2 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = 0;
    v10 = a2;
    for ( i = *a2; *v10; i = *v10 )
    {
      v9 = i + 33 * v9;
      ++v10;
    }
    if ( v8->Ptr && (Node = *((_QWORD *)v8->Ptr + v9 % LODWORD(v8[2].Ptr))) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 24) == v9 )
        {
          v13 = *(unsigned __int16 **)Node;
          do
          {
            v14 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v13 - *(_QWORD *)Node);
            v15 = *v13 - v14;
            if ( v15 )
              break;
            ++v13;
          }
          while ( v14 );
          if ( !v15 )
            break;
        }
        Node = *(_QWORD *)(Node + 16);
        if ( !Node )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CreateNode(
               v8,
               a2,
               v9 % LODWORD(v8[2].Ptr));
    }
    v16 = *(struct CEndpointCharacteristics **)(Node + 8);
    v42 = (const unsigned __int16 *)v16;
    if ( v16 )
      (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 8LL))(v16);
    propvar = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v16 + 4) + 40LL))(
           *((_QWORD *)v16 + 4),
           &PKEY_MMDEVAPI_ActiveTime,
           &propvar) >= 0
      && (_WORD)propvar == 21 )
    {
      v5 = v35;
    }
    PropVariantClear(&propvar);
    if ( *((_QWORD *)v16 + 47) == v5 )
    {
      (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 8LL))(v16);
      v6 = v16;
      v31 = v16;
    }
    v18 = *(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
              (struct CEndpointCharacteristics *)((char *)v16 + 12),
              v17) )
      {
        (*(void (__fastcall **)(struct CEndpointCharacteristics *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    else
    {
      v18(v16);
    }
  }
  v19 = SRWLock;
  ReleaseSRWLockShared(SRWLock);
  if ( v6 )
  {
    v26 = v40;
LABEL_67:
    v28 = v6;
    v6 = 0LL;
    *v43 = v28;
    goto LABEL_68;
  }
  AcquireSRWLockExclusive(v19);
  if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
          (_DWORD)v8,
          (_DWORD)a2,
          (unsigned int)&v44,
          (unsigned int)&v42,
          (__int64)&SRWLock) )
    goto LABEL_51;
  v22 = *(CEndpointCharacteristics **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                                        v8,
                                        a2);
  v42 = (const unsigned __int16 *)v22;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v42);
  if ( (unsigned int)CEndpointCharacteristics::IsStale(v22) )
  {
    ppv = 0LL;
    v23 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
            (_DWORD)v8,
            (_DWORD)a2,
            (unsigned int)&v44,
            (unsigned int)&v42,
            (__int64)&ppv);
    if ( v23 )
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveNode(
        v8,
        v23,
        ppv);
  }
  else
  {
    Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(&v31, &v42);
    v6 = v31;
  }
  if ( v22 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v6 )
  {
LABEL_63:
    v26 = v40;
  }
  else
  {
LABEL_51:
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_z(v21, v20, a2);
    v40 = 1;
    v42 = a2;
    v24 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
            &v31,
            &v42,
            &v40);
    v26 = v24;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_zq(v25, (__int64)&EndpointCharacteristics_CreateInstance_Task_Stop, a2, v24);
    v6 = v31;
    if ( v31 )
    {
      v26 = 0;
      try
      {
        v27 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
                (_DWORD)v8,
                (_DWORD)a2,
                (unsigned int)&v42,
                (unsigned int)&v40,
                (__int64)&v44);
        if ( !v27 )
        {
          if ( !v8->Ptr
            && !ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::InitHashTable(
                  &v8->Ptr,
                  (unsigned int)v8[2].Ptr,
                  1) )
          {
            ATL::AtlThrowImpl(-2147024882);
          }
          v27 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::NewNode(
                  v8,
                  a2,
                  (unsigned int)v42,
                  v40);
        }
        Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(v27 + 8, &v31);
      }
      catch ( ATL::CAtlException *v39 )
      {
        v30 = v39[0];
        if ( *(_DWORD *)v39[0] == -1073741571 )
          _resetstkoflw();
        v40 = *(_DWORD *)v30;
        v19 = v38;
        v6 = v31;
        goto LABEL_63;
      }
    }
  }
  ReleaseSRWLockExclusive(v19);
  if ( v26 >= 0 )
    goto LABEL_67;
LABEL_68:
  CoTaskMemFree(ppszOut);
  ppszOut = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v26;
}

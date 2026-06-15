/*
 * XREFs of ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A5C0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001B0B0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800310D8 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     AudioServerGetMixFormat @ 0x180031580 (AudioServerGetMixFormat.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800361A0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180042580 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180068B9C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180071DD0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800832E0 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180084310 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     PolicyConfigGetMixFormat @ 0x180086990 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetBufferSizeLimits @ 0x180088EF0 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180089970 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180089FA0 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsOffloadCapable @ 0x18008A280 (AudioServerIsOffloadCapable.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180090028 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     Template_zq @ 0x180002EC8 (Template_zq.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x1800370B0 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18003F630 (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x18003F694 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18003F6EC (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18003F724 (--4-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x18003F790 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x1800643F0 (-IsStale@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1800A709C (-RemoveNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     Template_z @ 0x1800A7650 (Template_z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct CEndpointCharacteristics **a3)
{
  struct CEndpointCharacteristics *v4; // rdi
  int v5; // r14d
  RTL_SRWLOCK *v6; // rsi
  unsigned int v7; // r9d
  const unsigned __int16 *v8; // rcx
  wchar_t i; // ax
  unsigned int v10; // r10d
  __int64 Node; // rbx
  unsigned __int16 *v12; // rax
  int v13; // ecx
  int v14; // edx
  volatile signed __int32 *v15; // rbx
  _QWORD *v16; // r15
  void (__fastcall *v17)(volatile signed __int32 *); // rsi
  RTL_SRWLOCK *v18; // r15
  int v19; // r14d
  struct CEndpointCharacteristics *v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  CEndpointCharacteristics *v27; // rbx
  __int64 v28; // rax
  void (__fastcall *v29)(CEndpointCharacteristics *); // rsi
  struct CEndpointCharacteristics *v30; // [rsp+30h] [rbp-F8h] BYREF
  RTL_SRWLOCK *v31; // [rsp+38h] [rbp-F0h]
  LPVOID pv; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-E0h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-C8h] BYREF
  CEndpointCharacteristics *v37; // [rsp+68h] [rbp-C0h] BYREF
  PROPVARIANT v38; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD *v39; // [rsp+78h] [rbp-B0h]
  __int64 v40; // [rsp+80h] [rbp-A8h]
  PROPVARIANT pvar[3]; // [rsp+88h] [rbp-A0h] BYREF
  volatile signed __int32 *v42; // [rsp+A0h] [rbp-88h]
  char v43; // [rsp+A8h] [rbp-80h] BYREF
  char v44; // [rsp+ACh] [rbp-7Ch] BYREF
  const unsigned __int16 *v45; // [rsp+B0h] [rbp-78h] BYREF
  char v46; // [rsp+B8h] [rbp-70h] BYREF
  char v47; // [rsp+BCh] [rbp-6Ch] BYREF
  char v48; // [rsp+C0h] [rbp-68h] BYREF
  char v49; // [rsp+C4h] [rbp-64h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-60h]
  char v51[8]; // [rsp+D0h] [rbp-58h] BYREF
  ATL::CAtlException *v52; // [rsp+D8h] [rbp-50h] BYREF
  char v53[72]; // [rsp+E0h] [rbp-48h] BYREF
  int v56; // [rsp+148h] [rbp+20h] BYREF

  v50 = -2LL;
  v4 = 0LL;
  v30 = 0LL;
  *a3 = 0LL;
  v5 = -2147023728;
  ppv = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  memset(pvar, 0, sizeof(pvar));
  pv = 0LL;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v33) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 32LL))(v33, 0LL, &v35) >= 0
    && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
         v35,
         &PKEY_Aliased_EndpointId,
         pvar) >= 0
    && LOWORD(pvar[0]) == 31
    && PropVariantToStringAlloc(pvar, (PWSTR *)&pv) >= 0 )
  {
    v5 = 0;
  }
  PropVariantClear(pvar);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v5 >= 0 )
    a2 = (const unsigned __int16 *)pv;
  AcquireSRWLockShared(this);
  v6 = this + 1;
  v31 = this + 1;
  if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
         (int)this + 8,
         (_DWORD)a2,
         (unsigned int)&v47,
         (unsigned int)&v44,
         (__int64)v51) )
  {
    if ( !a2 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = 0;
    v8 = a2;
    for ( i = *a2; *v8; i = *v8 )
    {
      v7 = i + 33 * v7;
      ++v8;
    }
    if ( LODWORD(this[3].Ptr) == 17 )
      v10 = v7 % 0x11;
    else
      v10 = v7 % LODWORD(this[3].Ptr);
    if ( v6->Ptr && (Node = *((_QWORD *)v6->Ptr + v10)) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 24) == v7 )
        {
          v12 = *(unsigned __int16 **)Node;
          do
          {
            v13 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v12 - *(_QWORD *)Node);
            v14 = *v12 - v13;
            if ( v14 )
              break;
            ++v12;
          }
          while ( v13 );
          if ( !v14 )
            break;
        }
        Node = *(_QWORD *)(Node + 16);
        if ( !Node )
          goto LABEL_58;
      }
    }
    else
    {
LABEL_58:
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CreateNode(
               v6,
               a2,
               v10);
    }
    v15 = *(volatile signed __int32 **)(Node + 8);
    v42 = v15;
    if ( v15 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, void *, PROPVARIANT *))(**((_QWORD **)v15 + 4) + 40LL))(
           *((_QWORD **)v15 + 4),
           &PKEY_MMDEVAPI_ActiveTime,
           &v38) >= 0
      && (_WORD)v38 == 21 )
    {
      v16 = v39;
    }
    PropVariantClear(&v38);
    if ( *((_QWORD **)v15 + 47) == v16 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      v4 = (struct CEndpointCharacteristics *)v15;
      v30 = (struct CEndpointCharacteristics *)v15;
    }
    v17 = *(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v42 + 24LL))(v42, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v4 = v30;
      v6 = v31;
    }
    else
    {
      v17(v15);
      v6 = v31;
    }
  }
  v18 = this;
  ReleaseSRWLockShared(this);
  if ( v4 )
  {
    v19 = 0;
LABEL_39:
    v20 = v4;
    v4 = 0LL;
    *a3 = v20;
    goto LABEL_40;
  }
  AcquireSRWLockExclusive(this);
  if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
          (_DWORD)v6,
          (_DWORD)a2,
          (unsigned int)&v46,
          (unsigned int)&v43,
          (__int64)v53) )
    goto LABEL_44;
  v27 = *(CEndpointCharacteristics **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                                        v6,
                                        a2);
  v37 = v27;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v37);
  if ( (unsigned int)CEndpointCharacteristics::IsStale(v27) )
  {
    v36 = 0LL;
    v28 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
            (_DWORD)v6,
            (_DWORD)a2,
            (unsigned int)&v49,
            (unsigned int)&v48,
            (__int64)&v36);
    if ( v28 )
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveNode(
        v6,
        v28,
        v36);
  }
  else
  {
    Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(&v30, &v37);
    v4 = v30;
  }
  if ( v27 )
  {
    v29 = *(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL);
    if ( (char *)v29 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v27);
    else
      v29(v27);
    v6 = v31;
  }
  if ( v4 )
  {
LABEL_72:
    v19 = 0;
  }
  else
  {
LABEL_44:
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_z(v23, v22, a2);
    v56 = 1;
    v45 = a2;
    v24 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
            &v30,
            &v45,
            &v56);
    v19 = v24;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_zq(v25, (__int64)&EndpointCharacteristics_CreateInstance_Task_Stop, a2, v24);
    v4 = v30;
    if ( v30 )
    {
      v19 = 0;
      try
      {
        v26 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                v6,
                a2);
        Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(v26, &v30);
      }
      catch ( ATL::CAtlException *v52 )
      {
        if ( *(_DWORD *)v52 == -1073741571 )
          _resetstkoflw();
        v4 = v30;
        v18 = this;
        goto LABEL_72;
      }
    }
  }
  ReleaseSRWLockExclusive(v18);
  if ( v19 >= 0 )
    goto LABEL_39;
LABEL_40:
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v19;
}

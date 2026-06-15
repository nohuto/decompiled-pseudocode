/*
 * XREFs of ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180002C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180003304 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180003518 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     AudioServerGetDevicePeriod @ 0x1800041A0 (AudioServerGetDevicePeriod.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800090E0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800111E0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800116C0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002F640 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x180033864 (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x1800338C8 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x180033930 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800341BC (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800342A0 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800342C4 (--4-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Template_zq @ 0x180034658 (Template_zq.c)
 *     Template_z @ 0x1800346F4 (Template_z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x18004EFF4 (-IsStale@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1800642BC (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?RemoveNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18008A058 (-RemoveNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct CEndpointCharacteristics **a3)
{
  int v5; // r13d
  struct CEndpointCharacteristics *v6; // rdi
  int v7; // ebx
  RTL_SRWLOCK *v8; // r12
  unsigned int v9; // r10d
  const unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // r11
  unsigned __int16 v12; // ax
  unsigned __int16 *i; // r9
  unsigned __int16 *v14; // rax
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r9d
  const unsigned __int16 *v18; // rcx
  __int64 Node; // rbx
  unsigned __int16 *v20; // rax
  int v21; // ecx
  int v22; // edx
  struct CEndpointCharacteristics *v23; // rbx
  __int64 v24; // rsi
  void (*v25)(void); // rax
  RTL_SRWLOCK *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  CEndpointCharacteristics *v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  struct CEndpointCharacteristics *v34; // rax
  ATL::CAtlException *v36; // rbx
  struct CEndpointCharacteristics *v37; // [rsp+30h] [rbp-78h] BYREF
  PWSTR ppszOut; // [rsp+38h] [rbp-70h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v40; // [rsp+50h] [rbp-58h] BYREF
  PROPVARIANT propvar; // [rsp+58h] [rbp-50h] BYREF
  __int64 v42; // [rsp+60h] [rbp-48h]
  __int64 v43; // [rsp+68h] [rbp-40h]
  CEndpointCharacteristics *v45; // [rsp+B8h] [rbp+10h] BYREF
  struct CEndpointCharacteristics **v46; // [rsp+C0h] [rbp+18h]
  const unsigned __int16 *v47; // [rsp+C8h] [rbp+20h] BYREF

  v46 = a3;
  ppv[1] = (LPVOID)-2LL;
  v5 = 0;
  v6 = 0LL;
  v37 = 0LL;
  *a3 = 0LL;
  v7 = -2147023728;
  ppv[0] = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  propvar = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ppszOut = 0LL;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, const unsigned __int16 *, const unsigned __int16 **))(*(_QWORD *)ppv[0] + 40LL))(
         ppv[0],
         a2,
         &v47) >= 0
    && (*(int (__fastcall **)(const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)v47 + 32LL))(
         v47,
         0LL,
         &v45) >= 0
    && (*(int (__fastcall **)(CEndpointCharacteristics *, void *, PROPVARIANT *))(*(_QWORD *)v45 + 40LL))(
         v45,
         &PKEY_Aliased_EndpointId,
         &propvar) >= 0
    && (_WORD)propvar == 31
    && PropVariantToStringAlloc(&propvar, &ppszOut) >= 0 )
  {
    v7 = 0;
  }
  PropVariantClear(&propvar);
  if ( v45 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v47 )
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)v47 + 16LL))(v47);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  if ( v7 >= 0 )
    a2 = ppszOut;
  AcquireSRWLockShared(this + 2);
  v8 = this + 3;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v9 = 0;
  v10 = a2;
  v11 = *a2;
  if ( *a2 )
  {
    v12 = *a2;
    do
    {
      v9 = v12 + 33 * v9;
      v12 = *++v10;
    }
    while ( *v10 );
  }
  if ( v8->Ptr )
  {
    for ( i = (unsigned __int16 *)*((_QWORD *)v8->Ptr + v9 % LODWORD(this[5].Ptr));
          ;
          i = (unsigned __int16 *)*((_QWORD *)i + 2) )
    {
      if ( !i )
        goto LABEL_53;
      if ( *((_DWORD *)i + 6) == v9 )
      {
        v14 = *(unsigned __int16 **)i;
        do
        {
          v15 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v14 - *(_QWORD *)i);
          v16 = *v14 - v15;
          if ( v16 )
            break;
          ++v14;
        }
        while ( v15 );
        if ( !v16 )
          break;
      }
    }
    v17 = 0;
    v18 = a2;
    if ( v11 )
    {
      do
      {
        v17 = v11 + 33 * v17;
        v11 = *++v18;
      }
      while ( *v18 );
    }
    if ( v8->Ptr && (Node = *((_QWORD *)v8->Ptr + v17 % LODWORD(this[5].Ptr))) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 24) == v17 )
        {
          v20 = *(unsigned __int16 **)Node;
          do
          {
            v21 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v20 - *(_QWORD *)Node);
            v22 = *v20 - v21;
            if ( v22 )
              break;
            ++v20;
          }
          while ( v21 );
          if ( !v22 )
            break;
        }
        Node = *(_QWORD *)(Node + 16);
        if ( !Node )
          goto LABEL_40;
      }
    }
    else
    {
LABEL_40:
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CreateNode(
               &this[3],
               a2,
               v17 % LODWORD(this[5].Ptr));
    }
    v23 = *(struct CEndpointCharacteristics **)(Node + 8);
    v45 = v23;
    if ( v23 )
      (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v23 + 8LL))(v23);
    v24 = 0LL;
    propvar = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v23 + 4) + 40LL))(
           *((_QWORD *)v23 + 4),
           &PKEY_MMDEVAPI_ActiveTime,
           &propvar) >= 0
      && (_WORD)propvar == 21 )
    {
      v24 = v42;
    }
    PropVariantClear(&propvar);
    if ( *((_QWORD *)v23 + 47) == v24 )
    {
      (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v23 + 8LL))(v23);
      v6 = v23;
      v37 = v23;
    }
    v25 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
    if ( (char *)v25 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
LABEL_52:
      v25();
      goto LABEL_53;
    }
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)v23 + 3) )
    {
      (*(void (__fastcall **)(struct CEndpointCharacteristics *, __int64))(*(_QWORD *)v23 + 40LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v25 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_52;
      }
    }
  }
LABEL_53:
  v26 = this;
  ReleaseSRWLockShared(this + 2);
  if ( v6 )
    goto LABEL_69;
  AcquireSRWLockExclusive(this + 2);
  if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
          (_DWORD)v8,
          (_DWORD)a2,
          (unsigned int)&v47,
          (unsigned int)&v45,
          (__int64)ppv) )
    goto LABEL_62;
  v29 = *(CEndpointCharacteristics **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                                        v8,
                                        a2);
  v45 = v29;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v45);
  if ( (unsigned int)CEndpointCharacteristics::IsStale(v29) )
  {
    ppv[0] = 0LL;
    v30 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
            (_DWORD)v8,
            (_DWORD)a2,
            (unsigned int)&v47,
            (unsigned int)&v45,
            (__int64)ppv);
    if ( v30 )
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveNode(
        v8,
        v30,
        ppv[0]);
  }
  else
  {
    Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(&v37, &v45);
    v6 = v37;
  }
  if ( v29 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( !v6 )
  {
LABEL_62:
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_z(v28, v27, a2);
    LODWORD(v45) = 1;
    v47 = a2;
    v31 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
            &v37,
            &v47,
            &v45);
    v5 = v31;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_zq(v32, &EndpointCharacteristics_CreateInstance_Task_Stop, a2, v31);
    v6 = v37;
    if ( v37 )
    {
      v5 = 0;
      try
      {
        v33 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                v8,
                a2);
        Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(v33, &v37);
      }
      catch ( ATL::CAtlException *v40 )
      {
        v36 = v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v45) = *(_DWORD *)v36;
        v5 = (int)v45;
        v6 = v37;
        v26 = this;
      }
    }
  }
  ReleaseSRWLockExclusive(v26 + 2);
  if ( v5 >= 0 )
  {
LABEL_69:
    v34 = v6;
    v6 = 0LL;
    *v46 = v34;
  }
  CoTaskMemFree(ppszOut);
  ppszOut = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v5;
}

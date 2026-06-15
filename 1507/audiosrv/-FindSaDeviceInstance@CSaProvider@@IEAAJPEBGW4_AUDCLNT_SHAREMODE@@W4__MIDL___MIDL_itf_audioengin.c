/*
 * XREFs of ?FindSaDeviceInstance@CSaProvider@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180074234
 * Callers:
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AddSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180073CD0 (-AddSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?FindSaDeviceInstanceInMap@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAVCSaDeviceInstance@@@Z @ 0x18007440C (-FindSaDeviceInstanceInMap@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$Ch.c)
 *     ?RemoveSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180075720 (-RemoveSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSaProvider::FindSaDeviceInstance(
        CSaProvider *this,
        const unsigned __int16 *a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct _GUID *a5,
        struct IAudioDeviceGraph **a6)
{
  int v8; // r12d
  struct _GUID *v10; // r13
  int v11; // ecx
  int SaDeviceInstanceInMap; // esi
  __int64 v13; // rcx
  struct CSaDeviceInstance *v14; // rbx
  char *v15; // rcx
  void (__fastcall ***v16)(_QWORD, GUID *, struct _GUID **); // rdi
  struct IAudioDeviceGraph *v17; // rbx
  struct _GUID v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20[2]; // [rsp+60h] [rbp-10h] BYREF
  struct CSaDeviceInstance *v21; // [rsp+A0h] [rbp+30h] BYREF

  v8 = (int)a2;
  v21 = 0LL;
  *a6 = 0LL;
  v10 = a5;
  v19 = *a5;
  SaDeviceInstanceInMap = CSaProvider::FindSaDeviceInstanceInMap(
                            (int)this,
                            (int)this + 104,
                            (int)a2,
                            a3,
                            a4,
                            (__int64)&v19,
                            &v21);
  if ( SaDeviceInstanceInMap == -2005139430 )
  {
    *(struct _GUID *)v20 = *v10;
    SaDeviceInstanceInMap = CSaProvider::FindSaDeviceInstanceInMap(v11, (int)this + 128, v8, a3, a4, (__int64)v20, &v21);
    if ( SaDeviceInstanceInMap < 0 )
      goto LABEL_12;
    v14 = v21;
    SaDeviceInstanceInMap = CSaProvider::RemoveSaDevice(v13, (char *)this + 128, v21);
    if ( SaDeviceInstanceInMap < 0 )
      goto LABEL_12;
    SaDeviceInstanceInMap = CSaProvider::AddSaDevice(v15, (__int64)this + 104, (__int64 *)v14);
    if ( SaDeviceInstanceInMap < 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = v21;
  }
  if ( SaDeviceInstanceInMap >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v14 + 8);
    v16 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID **))*((_QWORD *)v21 + 3);
    v17 = 0LL;
    a5 = 0LL;
    if ( v16 )
    {
      (**v16)(v16, &GUID_e2bd719f_11ad_4d4d_b5cb_e1b102141726, &a5);
      v17 = (struct IAudioDeviceGraph *)a5;
    }
    *a6 = v17;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v17 + 8LL))(v17);
    if ( a5 )
      (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&a5->Data1 + 16LL))(a5);
    return (unsigned int)SaDeviceInstanceInMap;
  }
LABEL_12:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Cu,
      (__int64)&WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      SaDeviceInstanceInMap);
  }
  return (unsigned int)SaDeviceInstanceInMap;
}

/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E5B0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800906D0 (-SwitchStreamGroupsFromNonDefaultToDefaultSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointChar.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX *a6,
        struct tWAVEFORMATEX *Src,
        __int64 a8,
        struct SaDeviceParams **a9)
{
  LPVOID *v12; // rbx
  __int64 *v13; // rax
  int DeviceDefaults; // ebp
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  void *v17; // rdi
  __int64 cbSize; // rdi
  void *v19; // rax
  void *v20; // rbp
  __int64 v21; // r14
  void *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  void *v25; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+58h] [rbp-40h]
  struct _GUID v28; // [rsp+60h] [rbp-38h] BYREF

  v27 = -2LL;
  v12 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v28 = *a4;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v13 = &a8;
  }
  else
  {
    v25 = 0LL;
    v13 = (__int64 *)&v25;
  }
  DeviceDefaults = GetDeviceDefaults(a1, a3, &v28, 0LL, 0LL, v13, &v24);
  if ( DeviceDefaults < 0 )
    goto LABEL_18;
  v15 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    *v15 = 0LL;
    v15[2] = 0LL;
    v15[3] = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v12 = (LPVOID *)v16;
  v26 = v16;
  DeviceDefaults = 0;
  if ( !v16 )
    DeviceDefaults = -2147024882;
  v17 = 0LL;
  if ( DeviceDefaults >= 0 )
  {
    cbSize = Src->cbSize;
    v19 = CoTaskMemAlloc(cbSize + 18);
    v20 = v19;
    if ( v19 )
    {
      memcpy_0(v19, Src, cbSize + 18);
      v17 = v20;
      v21 = a6->cbSize;
      v22 = CoTaskMemAlloc(v21 + 18);
      v25 = v22;
      if ( v22 )
      {
        memcpy_0(v22, a6, v21 + 18);
        *((_DWORD *)v16 + 2) = a3;
        *(_QWORD *)&v28.Data1 = 0LL;
        CoTaskMemFree((LPVOID)v16[2]);
        v16[2] = v25;
        v17 = 0LL;
        v25 = 0LL;
        CoTaskMemFree((LPVOID)v16[3]);
        v16[3] = v20;
        v16[4] = a8;
        v16[5] = v24;
        *((struct _GUID *)v16 + 4) = *a5;
        *((struct _GUID *)v16 + 3) = *a4;
        DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)a1 + 2) + 40LL))(
                           *((_QWORD *)a1 + 2),
                           v16);
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            13LL,
            &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
            (unsigned int)a3,
            a8);
        }
        CoCreateGuid((GUID *)v16 + 5);
        goto LABEL_16;
      }
    }
    else
    {
      v17 = 0LL;
    }
    DeviceDefaults = -2147024882;
  }
LABEL_16:
  CoTaskMemFree(v17);
  CoTaskMemFree(0LL);
  if ( DeviceDefaults >= 0 )
  {
    v12 = 0LL;
    *a9 = (struct SaDeviceParams *)v16;
  }
LABEL_18:
  if ( v12 )
  {
    CoTaskMemFree(v12[3]);
    v12[3] = 0LL;
    CoTaskMemFree(v12[2]);
    v12[2] = 0LL;
    CoTaskMemFree(*v12);
    *v12 = 0LL;
    operator delete(v12);
  }
  return (unsigned int)DeviceDefaults;
}

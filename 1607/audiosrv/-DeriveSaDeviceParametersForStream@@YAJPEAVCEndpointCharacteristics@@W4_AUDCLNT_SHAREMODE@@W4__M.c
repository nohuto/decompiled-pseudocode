/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x1800257B8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180078E68 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        char a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct tWAVEFORMATEX *a7,
        struct tWAVEFORMATEX *Src,
        __int64 a9,
        struct SaDeviceParams **a10)
{
  void *v11; // rsi
  LPVOID *v12; // rbx
  char v13; // r12
  __int64 *v14; // rax
  signed int DeviceDefaults; // r14d
  void *v16; // rax
  void *v17; // r15
  void *v18; // rdi
  __int64 cbSize; // rsi
  void *v20; // rax
  __int64 v21; // rdi
  void *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  void *v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h] BYREF
  void *v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  struct _GUID v29; // [rsp+70h] [rbp-10h] BYREF

  v28 = -2LL;
  v11 = 0LL;
  v12 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v13 = 1;
  v29 = *a5;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v14 = &a9;
  }
  else
  {
    v26 = 0LL;
    v14 = &v26;
  }
  DeviceDefaults = GetDeviceDefaults(a1, a3, &v29, 0LL, 0LL, v14, &v24);
  if ( DeviceDefaults >= 0 )
  {
    v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0x68uLL);
      *(_QWORD *)v17 = 0LL;
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)v17 + 3) = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    v12 = (LPVOID *)v17;
    v27 = v17;
    DeviceDefaults = v17 == 0LL ? 0x8007000E : 0;
    v18 = 0LL;
    if ( v17 )
    {
      cbSize = Src->cbSize;
      v20 = CoTaskMemAlloc(cbSize + 18);
      v26 = (__int64)v20;
      if ( v20 )
      {
        memcpy_0(v20, Src, cbSize + 18);
        DeviceDefaults = 0;
        v20 = (void *)v26;
      }
      else
      {
        DeviceDefaults = -2147024882;
      }
      v11 = v20;
      if ( DeviceDefaults >= 0 )
      {
        v21 = a7->cbSize;
        v22 = CoTaskMemAlloc(v21 + 18);
        v25 = v22;
        if ( v22 )
        {
          memcpy_0(v22, a7, v21 + 18);
          DeviceDefaults = 0;
          v22 = v25;
        }
        else
        {
          DeviceDefaults = -2147024882;
        }
        v18 = v22;
        if ( DeviceDefaults >= 0 )
        {
          *((_DWORD *)v17 + 2) = a3;
          v18 = 0LL;
          *(_QWORD *)&v29.Data1 = 0LL;
          CoTaskMemFree(*((LPVOID *)v17 + 2));
          *((_QWORD *)v17 + 2) = v25;
          v11 = 0LL;
          v25 = 0LL;
          CoTaskMemFree(*((LPVOID *)v17 + 3));
          *((_QWORD *)v17 + 3) = v26;
          *((_QWORD *)v17 + 4) = a9;
          *((_QWORD *)v17 + 5) = v24;
          *((struct _GUID *)v17 + 4) = *a6;
          *((struct _GUID *)v17 + 3) = *a5;
          if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE || a3 == eOffloadConnector && !a4 )
            v13 = 0;
          *((_BYTE *)v17 + 96) = v13;
          DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 40LL))(
                             *((_QWORD *)a1 + 2),
                             v17);
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              12LL,
              &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
              (unsigned int)a3,
              a9);
          }
          CoCreateGuid((GUID *)v17 + 5);
        }
      }
    }
    CoTaskMemFree(v11);
    CoTaskMemFree(v18);
    if ( DeviceDefaults >= 0 )
    {
      v12 = 0LL;
      *a10 = (struct SaDeviceParams *)v17;
    }
  }
  if ( v12 )
  {
    CoTaskMemFree(v12[3]);
    v12[3] = 0LL;
    CoTaskMemFree(v12[2]);
    v12[2] = 0LL;
    CoTaskMemFree(*v12);
    *v12 = 0LL;
    operator delete(v12, (const struct std::nothrow_t *)0x68);
  }
  return (unsigned int)DeviceDefaults;
}

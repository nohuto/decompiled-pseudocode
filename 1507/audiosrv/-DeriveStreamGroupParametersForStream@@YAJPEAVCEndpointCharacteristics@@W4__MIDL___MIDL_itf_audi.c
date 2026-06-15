/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_NPEAUtWAVEFORMATEX@@PEAPEAUStreamGroupParams@@@Z @ 0x180028A50
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        LPVOID a5,
        _OWORD *a6,
        char a7,
        void *Src,
        _QWORD *a9)
{
  void *v12; // rdi
  void *v13; // rbx
  int InterfaceIdFromMMDevice; // r14d
  void *v15; // rsi
  void *v16; // rsi
  __int64 v17; // rdi
  void *v18; // rax
  void *v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  LPVOID v22; // rdi
  LPVOID v23; // rdi
  LPVOID v25; // [rsp+20h] [rbp-30h] BYREF
  void *v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int128 v28; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+40h] BYREF
  int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v27 = -2LL;
  v12 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  pv = 0LL;
  v13 = 0LL;
  a5 = 0LL;
  InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(
                              *(_QWORD *)(a1 + 16),
                              &v25);
  if ( InterfaceIdFromMMDevice >= 0 )
  {
    v13 = *(void **)(a1 + 16);
    a5 = v13;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    a5 = 0LL;
    InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(v13, &a5);
    if ( InterfaceIdFromMMDevice >= 0 )
    {
      if ( a2 == 3 )
      {
        v28 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
        InterfaceIdFromMMDevice = mmdDevGetRelatedInterfaceId(a5, &v28, &pv);
      }
      else
      {
        v15 = a5;
        if ( pv != a5 )
        {
          a5 = 0LL;
          CoTaskMemFree(pv);
          pv = v15;
        }
      }
    }
    CoTaskMemFree(a5);
    if ( InterfaceIdFromMMDevice >= 0 )
    {
      v16 = Src;
      v17 = *((unsigned __int16 *)Src + 8);
      v18 = CoTaskMemAlloc(v17 + 18);
      v19 = v18;
      if ( v18 )
      {
        memcpy_0(v18, v16, v17 + 18);
        v12 = v19;
        v26 = v19;
        v20 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v21 = v20;
        if ( v20 )
        {
          *v20 = 0LL;
          v20[1] = 0LL;
          v20[3] = 0LL;
          InterfaceIdFromMMDevice = 0;
          v22 = v25;
          v25 = 0LL;
          CoTaskMemFree((LPVOID)*v20);
          *v21 = v22;
          v23 = pv;
          pv = 0LL;
          CoTaskMemFree((LPVOID)v21[1]);
          v21[1] = v23;
          v12 = 0LL;
          v26 = 0LL;
          CoTaskMemFree((LPVOID)v21[3]);
          v21[3] = v19;
          v21[4] = a4;
          *(_OWORD *)(v21 + 5) = *a6;
          *((_BYTE *)v21 + 56) = a7;
          *((_DWORD *)v21 + 4) = v30;
          *a9 = v21;
          goto LABEL_10;
        }
      }
      else
      {
        v12 = 0LL;
        v26 = 0LL;
      }
      InterfaceIdFromMMDevice = -2147024882;
    }
  }
LABEL_10:
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v25);
  v25 = 0LL;
  CoTaskMemFree(v12);
  return (unsigned int)InterfaceIdFromMMDevice;
}

/*
 * XREFs of ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800138F0
 * Callers:
 *     GetAudioSessionManager @ 0x180005890 (GetAudioSessionManager.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 * Callees:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013AE0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManager(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rdi
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  int v8; // esi
  void (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rsi
  int (*v10)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rbx
  int AudioSessionManagerInternal; // eax
  void (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids, a2);
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           a2,
           &v14);
    if ( v8 < 0 )
    {
LABEL_25:
      v3 = v14;
      v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
      goto LABEL_26;
    }
    v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    v3 = v14;
    if ( v13 != v14 )
    {
      v9 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
      v4 = 0LL;
      v13 = 0LL;
      if ( v14 )
      {
        (**v14)(v14, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v13);
        v3 = v14;
        v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
      }
      if ( v9 )
      {
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
        v3 = v14;
        v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
      }
    }
    if ( v4 )
    {
      v10 = *(int (**)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)this + 48LL);
      if ( v10 == CAudioSessionManagerProvider::GetAudioSessionManagerInternal )
        AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(this, a2, a3);
      else
        AudioSessionManagerInternal = ((__int64 (__fastcall *)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))v10)(
                                        this,
                                        a2,
                                        a3);
      v8 = AudioSessionManagerInternal;
      if ( AudioSessionManagerInternal >= 0 )
        goto LABEL_16;
      goto LABEL_25;
    }
    v8 = -2147024809;
  }
  else
  {
    v8 = -2147024809;
  }
LABEL_26:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids,
      (unsigned int)v8);
LABEL_16:
    v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    v3 = v14;
  }
  if ( v4 )
  {
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v4)[2])(v4);
    v3 = v14;
  }
  if ( v3 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v3)[2])(v3);
  return (unsigned int)v8;
}

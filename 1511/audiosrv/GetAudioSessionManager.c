/*
 * XREFs of GetAudioSessionManager @ 0x180005890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800138F0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?IsAppContainer@CProcess@@UEAAHXZ @ 0x180028C70 (-IsAppContainer@CProcess@@UEAAHXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall GetAudioSessionManager(
        void *a1,
        unsigned __int16 *a2,
        struct CAudioSessionManager ***a3,
        _DWORD *a4)
{
  __int64 (__fastcall *v8)(CWindowsPolicyManager *__hidden, void *, struct IAudioProcess **); // rdi
  int Process; // eax
  int v10; // esi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v12; // rbx
  __int64 (__fastcall *v13)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rdi
  int v14; // eax
  void (__fastcall *v15)(struct CAudioSessionManagerProvider *); // rdi
  struct CAudioSessionManager **v16; // rax
  struct CAudioSessionManager **v17; // r14
  CProcess *v18; // rdi
  CProcess *v19; // rdi
  __int64 (__fastcall *v20)(CProcess *__hidden); // rbx
  int IsAppContainer; // eax
  void (__fastcall *v23)(struct CAudioSessionManagerProvider *); // rdi
  struct CAudioSessionManager *v24; // [rsp+20h] [rbp-10h] BYREF
  struct CAudioSessionManagerProvider *v25; // [rsp+28h] [rbp-8h] BYREF
  CProcess *v26; // [rsp+60h] [rbp+30h] BYREF

  v24 = 0LL;
  v26 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 75LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, a2);
  }
  v8 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                  + 32LL);
  if ( v8 == CWindowsPolicyManager::RpcGetProcess )
    Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, a1, &v26);
  else
    Process = v8(g_PolicyManager, a1, &v26);
  v10 = Process;
  if ( Process >= 0 )
  {
    v25 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v25);
    v12 = v25;
    v10 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v13 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v25 + 40LL);
      v14 = v13 == CAudioSessionManagerProvider::GetAudioSessionManager
          ? CAudioSessionManagerProvider::GetAudioSessionManager(v25, a2, &v24)
          : v13(v25, a2, &v24);
      v10 = v14;
      if ( v14 < 0 )
      {
        v23 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v12 + 16LL);
        if ( (char *)v23 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v12);
        else
          v23(v12);
        goto LABEL_25;
      }
    }
    if ( v12 )
    {
      v15 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v12 + 16LL);
      if ( (char *)v15 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v12);
      else
        v15(v12);
    }
    v16 = (struct CAudioSessionManager **)operator new(0x10uLL);
    v17 = v16;
    if ( v16 )
    {
      v18 = v26;
      *v16 = v24;
      v16[1] = v18;
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v18 + 8LL))(v18);
    }
    else
    {
      v17 = 0LL;
    }
    if ( v17 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 76LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v24);
      }
      v19 = v26;
      *a3 = v17;
      v20 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v19 + 104LL);
      if ( v20 == CProcess::IsAppContainer )
        IsAppContainer = CProcess::IsAppContainer(v19);
      else
        IsAppContainer = v20(v26);
      *a4 = IsAppContainer == 0;
LABEL_25:
      if ( v10 >= 0 )
        goto LABEL_26;
      goto LABEL_37;
    }
    v10 = -2147024882;
  }
LABEL_37:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      77LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v10);
  }
LABEL_26:
  if ( v26 )
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v26 + 16LL))(v26);
  return (unsigned int)v10;
}

/*
 * XREFs of GetAudioSessionManager @ 0x18002DD50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?IsAppContainer@CProcess@@UEAAHXZ @ 0x180010EC0 (-IsAppContainer@CProcess@@UEAAHXZ.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18002B1B0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002CA54 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall GetAudioSessionManager(void *a1, unsigned __int16 *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 (__fastcall *v8)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // rdi
  int Process; // eax
  int v10; // esi
  int AudioSessionManagerProvider; // eax
  volatile int *v12; // rdx
  struct CAudioSessionManagerProvider *v13; // rbx
  __int64 (__fastcall *v14)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rdi
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, volatile int *); // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  CProcess *v19; // rdi
  CProcess *v20; // rdi
  __int64 (__fastcall *v21)(CProcess *); // rbx
  int IsAppContainer; // eax
  __int64 (__fastcall *v24)(__int64, volatile int *); // rdi
  struct CAudioSessionManager *v25; // [rsp+20h] [rbp-10h] BYREF
  struct CAudioSessionManagerProvider *v26; // [rsp+28h] [rbp-8h] BYREF
  CProcess *v27; // [rsp+60h] [rbp+30h] BYREF

  v25 = 0LL;
  v27 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      75LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      a2);
  }
  v8 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                          + 32LL);
  if ( v8 == CWindowsPolicyManager::RpcGetProcess )
    Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, a1, &v27);
  else
    Process = v8(g_PolicyManager, a1, &v27);
  v10 = Process;
  if ( Process >= 0 )
  {
    v26 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v26);
    v13 = v26;
    v10 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v14 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v26 + 40LL);
      v15 = v14 == CAudioSessionManagerProvider::GetAudioSessionManager
          ? CAudioSessionManagerProvider::GetAudioSessionManager(v26, a2, &v25)
          : v14(v26, a2, &v25);
      v10 = v15;
      if ( v15 < 0 )
      {
        v24 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v13 + 16LL);
        if ( v24 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release((__int64)v13, v12);
        else
          ((void (__fastcall *)(struct CAudioSessionManagerProvider *))v24)(v13);
        goto LABEL_25;
      }
    }
    if ( v13 )
    {
      v16 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v13 + 16LL);
      if ( v16 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release((__int64)v13, v12);
      else
        ((void (__fastcall *)(struct CAudioSessionManagerProvider *))v16)(v13);
    }
    v17 = operator new(0x10uLL);
    v18 = v17;
    if ( v17 )
    {
      v19 = v27;
      *v17 = v25;
      v17[1] = v19;
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          76LL,
          &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
          v25);
      }
      v20 = v27;
      *a3 = v18;
      v21 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)v20 + 104LL);
      if ( v21 == CProcess::IsAppContainer )
        IsAppContainer = CProcess::IsAppContainer(v20);
      else
        IsAppContainer = v21(v27);
      *a4 = IsAppContainer == 0;
LABEL_25:
      if ( v10 >= 0 )
        goto LABEL_26;
      goto LABEL_37;
    }
    v10 = -2147024882;
  }
LABEL_37:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      77LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v10);
  }
LABEL_26:
  if ( v27 )
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v27 + 16LL))(v27);
  return (unsigned int)v10;
}

/*
 * XREFs of GetAudioSessionManager @ 0x18002A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18000DBC0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAudioSessionManager(__int64 a1, const unsigned __int16 *a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // edi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v10; // rbx
  __int64 (__fastcall *v11)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int v12; // eax
  HANDLE ProcessHeap; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct CAudioSessionManager *v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  struct CAudioSessionManagerProvider *v21; // [rsp+30h] [rbp-10h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, a2);
  }
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v20);
  if ( v8 >= 0 )
  {
    v21 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v21);
    v10 = v21;
    v8 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v21 + 40LL);
      v12 = v11 == CAudioSessionManagerProvider::GetAudioSessionManager
          ? CAudioSessionManagerProvider::GetAudioSessionManager(v21, a2, &v19)
          : v11(v21, a2, &v19);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
        else
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_21;
      }
    }
    if ( v10 )
    {
      if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
      else
        (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ProcessHeap = GetProcessHeap();
    v14 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
    v15 = v14;
    if ( v14 )
    {
      v16 = v20;
      *v14 = v19;
      v14[1] = v16;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v19);
      }
      v17 = v20;
      *a3 = v15;
      *a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 112LL))(v17) == 0;
LABEL_21:
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_32;
    }
    v8 = -2147024882;
  }
LABEL_32:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 1900, v8);
LABEL_22:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v8;
}

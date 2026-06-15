/*
 * XREFs of VADServerUserSessionChanged @ 0x18002FDEC
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002FD20 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180005A64 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180005B00 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18000EF14 (-NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x180013A70 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003EF58 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x18007C948 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // r14d
  unsigned int TsAudioProtocol; // esi
  int v6; // ebx
  int AudioSessionManagerProvider; // eax
  CVolumeProvider *v8; // rcx
  struct CAudioSessionManagerProvider *v9; // rbx
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rbp
  int v12; // eax
  struct CAudioSessionManagerProvider *v13; // rbx
  __int64 (__fastcall *v14)(volatile signed __int32 *); // rdi
  struct CAudioSessionManagerProvider *v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  TsAudioProtocol = 0xFFFF;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v6 = TsSessionFromSessionId(v2, 0, 0LL, &v15);
  if ( !v6 )
    TsAudioProtocol = *((_DWORD *)v15 + 1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v6 == 1168 )
    TsAudioProtocol = GetTsAudioProtocol(v2);
  v15 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v15);
  v9 = v15;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifySessionAudioProtocol(v15, v2, TsAudioProtocol);
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL);
    if ( v10 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v9);
    else
      v10((volatile signed __int32 *)v9);
  }
  if ( g_pVolumeProvider )
    CVolumeProvider::NotifyNewAudioProtocol(v8, v2, TsAudioProtocol);
  if ( a1 != 5 && a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
  {
    if ( a1 <= 6 )
      goto LABEL_22;
    if ( a1 <= 9 )
      return 0LL;
    if ( a1 == 11 )
    {
      v15 = 0LL;
      v12 = GetAudioSessionManagerProvider(&v15);
      v13 = v15;
      if ( v12 >= 0 )
        CAudioSessionManagerProvider::NotifySessionTerminate(v15, *(_DWORD *)(a2 + 4));
      if ( v13 )
      {
        v14 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL);
        if ( v14 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v13);
        else
          v14((volatile signed __int32 *)v13);
      }
    }
    else
    {
LABEL_22:
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 71LL, &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, a1);
      }
    }
  }
  return 0LL;
}

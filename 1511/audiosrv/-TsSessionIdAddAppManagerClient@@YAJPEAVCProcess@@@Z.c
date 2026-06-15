/*
 * XREFs of ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x1800028DC
 * Callers:
 *     s_pbmRegisterAppManagerNotification @ 0x180002870 (s_pbmRegisterAppManagerNotification.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationManager@@EAAJPEAU_ActiveMediaAppsNotificationContext@@@Z0@Z @ 0x180002990 (--$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationMana.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?AddHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioSessionInfo@@@Z @ 0x1800303E8 (-AddHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall TsSessionIdAddAppManagerClient(struct CProcess *a1)
{
  struct CProcess *v1; // rdi
  unsigned int v2; // ebx
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  ATL::CAtlException *v6; // [rsp+28h] [rbp-20h] BYREF
  struct CProcess *v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h]
  int v9; // [rsp+60h] [rbp+18h]
  struct TSSession *v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  v1 = a1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v2 = TsSessionFromSessionId(*((_DWORD *)v1 + 43), 1, 0LL, &v10);
  v8 = v2;
  if ( !v2 )
  {
    try
    {
      ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::AddHead((char *)v10 + 56, &v7);
    }
    catch ( ATL::CAtlException *v6 )
    {
      __eh34_catch_handler_absent(0, 0, TsSessionIdAddAppManagerClient_::_1_::catch_0);
      v2 = v8;
      if ( v9 < 0 )
        goto LABEL_7;
      v1 = v7;
    }
    _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    v3 = operator new(4uLL);
    if ( v3 )
      *v3 = 0;
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = *((unsigned int *)v7 + 43);
      *v3 = v4;
      QueueApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>(v4);
    }
  }
LABEL_7:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v2;
}

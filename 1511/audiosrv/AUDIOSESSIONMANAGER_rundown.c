/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x18003A250
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180028B80 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002B6F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

CAudioSessionManagerProxy *__fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManager **this)
{
  __int64 (__fastcall *v2)(CAudioSessionManager *); // rsi
  int v3; // eax
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 (__fastcall *v5)(CProcess *); // rbp
  unsigned int ProcessId; // eax
  __int64 (__fastcall *v7)(struct _RTL_CRITICAL_SECTION *, unsigned int, unsigned __int64); // rbp

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 81LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, this, *this);
  }
  v2 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*this + 16LL);
  if ( v2 == CAudioSessionManager::Release )
    v3 = CAudioSessionManager::Release(*this);
  else
    v3 = v2(*this);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x52u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v3);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)g_DuckingManager;
  if ( g_DuckingManager )
  {
    v5 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this[1] + 40LL);
    if ( v5 == CProcess::GetProcessId )
    {
      ProcessId = CProcess::GetProcessId(this[1]);
    }
    else
    {
      ProcessId = v5(this[1]);
      v4 = (struct _RTL_CRITICAL_SECTION *)g_DuckingManager;
    }
    v7 = *(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, unsigned int, unsigned __int64))&v4->DebugInfo->Flags;
    if ( v7 == CDuckingManager::DeleteDuckingNotification )
      CDuckingManager::DeleteDuckingNotification(v4, ProcessId, 0LL);
    else
      v7(v4, ProcessId, 0LL);
  }
  return CAudioSessionManagerProxy::`scalar deleting destructor'((CAudioSessionManagerProxy *)this);
}

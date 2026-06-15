/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x180031E70
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000E4F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180010DD0 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

void *__fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManager **this)
{
  __int64 (__fastcall *v2)(CAudioSessionManager *); // rsi
  int v3; // eax
  unsigned int v4; // edx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 (__fastcall *v6)(CProcess *); // rbp
  unsigned int ProcessId; // eax
  __int64 (__fastcall *v8)(struct _RTL_CRITICAL_SECTION *, unsigned int, __int64); // rbp

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      81LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      this,
      *this);
  }
  v2 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*this + 16LL);
  if ( v2 == CAudioSessionManager::Release )
    v3 = CAudioSessionManager::Release(*this);
  else
    v3 = v2(*this);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x52u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v3);
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)g_DuckingManager;
  if ( g_DuckingManager )
  {
    v6 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this[1] + 40LL);
    if ( v6 == CProcess::GetProcessId )
    {
      ProcessId = CProcess::GetProcessId(this[1]);
    }
    else
    {
      ProcessId = v6(this[1]);
      v5 = (struct _RTL_CRITICAL_SECTION *)g_DuckingManager;
    }
    v8 = *(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, unsigned int, __int64))&v5->DebugInfo->Flags;
    if ( v8 == CDuckingManager::DeleteDuckingNotification )
      CDuckingManager::DeleteDuckingNotification(v5, ProcessId, 0LL);
    else
      v8(v5, ProcessId, 0LL);
  }
  return CAudioSessionManagerProxy::`scalar deleting destructor'((CAudioSessionManagerProxy *)this, v4);
}

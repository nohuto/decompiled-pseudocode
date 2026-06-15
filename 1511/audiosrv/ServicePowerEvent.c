/*
 * XREFs of ServicePowerEvent @ 0x18003C720
 * Callers:
 *     ServiceCtrl @ 0x18002FFD0 (ServiceCtrl.c)
 * Callees:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003B740 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x18009A410 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     WPP_SF_PSq @ 0x18009B04C (WPP_SF_PSq.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1, UUID *a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(CAudioSrv *, UUID *); // rdi
  const unsigned __int16 *v6; // rax
  __int64 v7; // r8
  int v8; // edx

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = EventTypeNameFromEventType(a1);
    WPP_SF_PSq(*(_QWORD *)(v7 + 16), v8, v7, a1, (__int64)v6, v8);
  }
  result = 0LL;
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 <= 9 )
    {
      if ( (_DWORD)a1 == 7 )
        return (*(__int64 (__fastcall **)(CAudioSrv *, UUID *))(*(_QWORD *)g_AudioService + 80LL))(g_AudioService, a2);
    }
    else if ( (_DWORD)a1 == 32787 )
    {
      v5 = *(__int64 (__fastcall **)(CAudioSrv *, UUID *))(*(_QWORD *)g_AudioService + 88LL);
      if ( v5 == CAudioSrv::PowerSettingChanged )
        return CAudioSrv::PowerSettingChanged(g_AudioService, a2);
      else
        return v5(g_AudioService, a2);
    }
  }
  return result;
}

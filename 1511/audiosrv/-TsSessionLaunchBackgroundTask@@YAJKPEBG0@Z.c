/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x18009D738
 * Callers:
 *     s_pbmLaunchBackgroundTask @ 0x180091570 (s_pbmLaunchBackgroundTask.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z @ 0x18009BEF8 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18009E760 (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?MarkProcessAsBackgroundAudioTask@CApplication@@QEAAXK@Z @ 0x1800A07E8 (-MarkProcessAsBackgroundAudioTask@CApplication@@QEAAXK@Z.c)
 */

__int64 __fastcall TsSessionLaunchBackgroundTask(
        unsigned int a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  CApplicationManager *v6; // rcx
  struct CApplication *AppFromProcessId; // rax
  CApplication *v8; // rdi
  int v9; // ebx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  AppFromProcessId = CApplicationManager::FindAppFromProcessId(v6, a1);
  v8 = AppFromProcessId;
  if ( AppFromProcessId )
  {
    v9 = DoLaunchBackgroundTask(AppFromProcessId, a2, a3);
    if ( v9 >= 0 )
      CApplication::MarkProcessAsBackgroundAudioTask(v8, a1);
  }
  else
  {
    v9 = -2147418113;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v9 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids, v9);
  }
  return (unsigned int)v9;
}

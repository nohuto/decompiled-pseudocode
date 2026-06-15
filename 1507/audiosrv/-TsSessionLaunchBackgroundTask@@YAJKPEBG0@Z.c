/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x1800A054C
 * Callers:
 *     s_pbmLaunchBackgroundTask @ 0x180093D50 (s_pbmLaunchBackgroundTask.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z @ 0x18009F0C4 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x1800A1624 (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?MarkProcessAsBackgroundAudioTask@CApplication@@QEAAXK@Z @ 0x1800A3588 (-MarkProcessAsBackgroundAudioTask@CApplication@@QEAAXK@Z.c)
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Du,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}

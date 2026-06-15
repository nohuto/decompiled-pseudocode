/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x18001AA6C
 * Callers:
 *     PbmLaunchBackgroundTask @ 0x1800175F0 (PbmLaunchBackgroundTask.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x180013674 (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x180019674 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 */

__int64 __fastcall TsSessionLaunchBackgroundTask(
        int a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  CApplicationManager *v8; // rcx
  int v9; // ebx
  struct CApplication *AppFromProcessId; // rax
  struct CApplication *v11; // rdi
  struct _GUID v12; // xmm6
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+28h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( a4 )
  {
    AppFromProcessId = CApplicationManager::FindAppFromProcessId(v8, a1);
    v11 = AppFromProcessId;
    if ( AppFromProcessId )
    {
      v9 = DoLaunchBackgroundTask(AppFromProcessId, a2, a3, a4);
      if ( v9 >= 0 )
      {
        v12 = *a4;
        v17 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v11 + 32);
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v13 = (_QWORD *)*((_QWORD *)v11 + 9);
        while ( v13 )
        {
          v14 = v13[2];
          v13 = (_QWORD *)*v13;
          if ( *(_DWORD *)(v14 + 168) == a1 && !*(_DWORD *)(v14 + 416) )
          {
            *(struct _GUID *)(v14 + 488) = v12;
            break;
          }
        }
        if ( v17 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else
    {
      v9 = -2147418113;
    }
  }
  else
  {
    v9 = -2147467261;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v9 < 0 )
  {
    *a4 = GUID_00000000_0000_0000_0000_000000000000;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, v9);
    }
  }
  return (unsigned int)v9;
}

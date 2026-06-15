/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x18001CB14
 * Callers:
 *     PbmLaunchBackgroundTask @ 0x1800194A0 (PbmLaunchBackgroundTask.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18001B728 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionLaunchBackgroundTask(int a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  CApplicationManager *v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // r14
  BOOL v10; // esi
  _QWORD *v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  struct _GUID v14; // xmm6
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  LPCRITICAL_SECTION v18; // [rsp+20h] [rbp-60h] BYREF
  char v19; // [rsp+28h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-50h] BYREF
  char v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  struct _GUID v23; // [rsp+50h] [rbp-30h] BYREF

  v22 = -2LL;
  v23 = GUID_00000000_0000_0000_0000_000000000000;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v6 = g_ApplicationManager;
  v18 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v19 = 0;
  ATL::CCritSecLock::Lock(&v18);
  v7 = 0LL;
  v8 = (_QWORD *)*((_QWORD *)v6 + 8);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 24);
    v21 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v10 = 0;
    v11 = *(_QWORD **)(v9 + 64);
    while ( v11 && !v10 )
    {
      v12 = v11[2];
      v11 = (_QWORD *)*v11;
      v10 = a1 == *(_DWORD *)(v12 + 168);
    }
    if ( v21 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v21 = 0;
    }
    if ( v10 )
    {
      v7 = v9;
      break;
    }
  }
  if ( v19 )
    LeaveCriticalSection(v18);
  if ( v7 )
  {
    v13 = DoLaunchBackgroundTask((struct CApplication *)v7, a2, a3, &v23);
    if ( v13 >= 0 )
    {
      v14 = v23;
      v18 = (LPCRITICAL_SECTION)(v7 + 24);
      v19 = 0;
      ATL::CCritSecLock::Lock(&v18);
      v15 = *(_QWORD **)(v7 + 64);
      while ( v15 )
      {
        v16 = v15[2];
        v15 = (_QWORD *)*v15;
        if ( *(_DWORD *)(v16 + 168) == a1 && !*(_DWORD *)(v16 + 416) )
        {
          *(struct _GUID *)(v16 + 484) = v14;
          break;
        }
      }
      if ( v19 )
        LeaveCriticalSection(v18);
    }
  }
  else
  {
    v13 = -2147418113;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v13 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v13);
  }
  return (unsigned int)v13;
}

/*
 * XREFs of ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x180094B10
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180040374 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094F88 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z @ 0x180094470 (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1_N@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x180096120 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CreateMonitor(
        CMonitorManager *this,
        struct IMMDeviceEnumerator *a2,
        struct IMMDevice *a3,
        const unsigned __int16 *a4,
        bool a5,
        struct CMonitorManager::CaptureMonitor **a6)
{
  struct IMMDevice *v7; // r14
  CMonitorManager::CaptureMonitor *v9; // rbx
  struct CMonitorManager::CaptureMonitor **v10; // r15
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  CMonitorManager::CaptureMonitor *v14; // rax
  struct CMonitorManager::CaptureMonitor *v15; // r9
  ATL::CAtlException *v17; // rbx
  LPVOID pv; // [rsp+30h] [rbp-58h] BYREF
  CMonitorManager::CaptureMonitor *v19; // [rsp+38h] [rbp-50h]
  struct IMMDevice *v20[2]; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v21; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+98h] [rbp+10h]

  v20[1] = (struct IMMDevice *)-2LL;
  v7 = a3;
  v20[0] = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v19 = 0LL;
  v10 = a6;
  *a6 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, struct IMMDevice **))a2->lpVtbl->GetDevice)(
          a2,
          a4,
          v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Cu,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        v11);
LABEL_24:
      v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  v12 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v7->lpVtbl->GetId)(v7, &pv);
  if ( v12 < 0 )
    goto LABEL_27;
  try
  {
    v14 = (CMonitorManager::CaptureMonitor *)operator new(0x58uLL);
    if ( v14 )
      v9 = CMonitorManager::CaptureMonitor::CaptureMonitor(v14, this, (const unsigned __int16 *)pv, a4, a5);
    else
      v9 = 0LL;
    v19 = v9;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v17 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _resetstkoflw();
    v22 = *(_DWORD *)v17;
    v12 = *(_DWORD *)v17;
    v9 = v19;
    if ( v22 < 0 )
      goto LABEL_27;
    v10 = a6;
    v7 = a3;
  }
  if ( v9 )
  {
    v12 = CMonitorManager::CaptureMonitor::Initialize(v9, v7, v20[0]);
    if ( v12 >= 0 )
    {
      v15 = v9;
      v9 = 0LL;
      *v10 = v15;
      v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x4Eu,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
        goto LABEL_24;
      }
LABEL_25:
      if ( v12 >= 0 )
        goto LABEL_32;
      goto LABEL_28;
    }
  }
  else
  {
    v12 = -2147024882;
    v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control )
      goto LABEL_32;
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
    {
      goto LABEL_28;
    }
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x4Du,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
  }
LABEL_27:
  v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_28:
  if ( (struct _GUID *)v13 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v13 + 28) & 0x800000) != 0
    && *(_BYTE *)(v13 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v13 + 16), 0x4Fu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v12);
  }
LABEL_32:
  if ( v9 )
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v20[0] )
    ((void (__fastcall *)(struct IMMDevice *))v20[0]->lpVtbl->Release)(v20[0]);
  return (unsigned int)v12;
}

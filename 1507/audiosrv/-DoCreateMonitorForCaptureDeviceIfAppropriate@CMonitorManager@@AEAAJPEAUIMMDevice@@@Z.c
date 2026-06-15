/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094F88
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180094F60 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180040604 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18009491C (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x180094B10 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180095A7C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180098614 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18009BF40 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18009C9C0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  int v4; // r13d
  __int64 v6; // rcx
  CMonitorManager::CaptureMonitor *v7; // rbx
  CMonitor *v8; // rcx
  __int64 v9; // rcx
  ATL::CAtlException *v10; // rbx
  LPVOID pv; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 *v12; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-78h] BYREF
  ATL::CAtlException *v14; // [rsp+50h] [rbp-68h] BYREF
  LPCRITICAL_SECTION v15; // [rsp+58h] [rbp-60h] BYREF
  char v16; // [rsp+60h] [rbp-58h]
  LPCRITICAL_SECTION v17; // [rsp+68h] [rbp-50h] BYREF
  char v18; // [rsp+70h] [rbp-48h]
  bool v19; // [rsp+C0h] [rbp+8h] BYREF
  struct IMMDevice *v20; // [rsp+C8h] [rbp+10h]
  int v21; // [rsp+D0h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v22; // [rsp+D8h] [rbp+20h] BYREF

  v20 = a2;
  v13[1] = -2LL;
  v4 = 0;
  v12 = 0LL;
  v19 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v15, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) != 1 )
  {
    if ( v16 )
      ATL::CCritSecLock::Unlock(&v15);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  if ( CMonitor::IsCaptureMonitorEnabled(a2, &v12, &v19) )
  {
    pv = 0LL;
    v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x3Eu,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          v12);
        v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( (struct _GUID *)v6 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v6 + 28) & 0x800000) != 0
        && *(_BYTE *)(v6 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v6 + 16), 0x3Fu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
      }
    }
    v22 = 0LL;
    v4 = CMonitorManager::CreateMonitor(this, *((struct IMMDeviceEnumerator **)this + 8), a2, v12, v19, &v22);
    if ( v4 < 0 )
    {
      v7 = v22;
LABEL_53:
      if ( v7 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
      CoTaskMemFree(pv);
      if ( v4 < 0
        && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x46u,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          v4);
      }
      goto LABEL_60;
    }
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v17, (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      v7 = v22;
    }
    else
    {
      v7 = v22;
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x40u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        v22);
    }
    v19 = v4 == 0;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(v20, &pv);
    if ( v4 < 0 )
    {
LABEL_50:
      if ( v18 )
        ATL::CCritSecLock::Unlock(&v17);
      goto LABEL_53;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x41u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, v13, pv);
    if ( v13[0] )
    {
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_SS(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x44u,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            (const wchar_t *)pv,
            *(_WORD **)(v13[0] + 80LL));
          v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        }
        if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(v9 + 28) & 0x800000) != 0
          && *(_BYTE *)(v9 + 25) >= 4u )
        {
          WPP_SF_q(
            *(_QWORD *)(v9 + 16),
            0x45u,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            *((_QWORD *)v7 + 8));
        }
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v7);
      goto LABEL_48;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        LOWORD(v13[0]) + 66,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        (const wchar_t *)pv);
    }
    v4 = 0;
    try
    {
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)this + 14,
        (__int64)v7);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v10 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _resetstkoflw();
      v21 = *(_DWORD *)v10;
      v4 = v21;
      v7 = v22;
      if ( v21 < 0 )
        goto LABEL_48;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x43u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        v12);
    }
    v8 = (CMonitor *)*((_QWORD *)v7 + 8);
    if ( v19 )
      CMonitor::Start(v8);
    else
      CMonitor::Terminate(v8, 1, 0LL);
LABEL_48:
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    goto LABEL_50;
  }
LABEL_60:
  if ( v16 )
    ATL::CCritSecLock::Unlock(&v15);
  CoTaskMemFree(v12);
  return (unsigned int)v4;
}

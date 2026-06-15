/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800927B8
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180092790 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18009214C (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x180092340 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800932AC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800960D4 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180097A58 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180098DE8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180099868 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  int v4; // r13d
  TraceLoggingHProvider v6; // rcx
  __int64 *v7; // rbx
  CMonitor *v8; // rcx
  TraceLoggingHProvider v9; // rcx
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
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Eu,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          v12);
        v6 = WPP_GLOBAL_Control;
      }
      if ( v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v6 + 7) & 0x800000) != 0
        && *((_BYTE *)v6 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v6 + 2), 0x3Fu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
      }
    }
    v22 = 0LL;
    v4 = CMonitorManager::CreateMonitor(this, *((struct IMMDeviceEnumerator **)this + 8), a2, v12, v19, &v22);
    if ( v4 < 0 )
    {
      v7 = (__int64 *)v22;
LABEL_53:
      if ( v7 )
        (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
      CoTaskMemFree(pv);
      if ( v4 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x46u,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          v4);
      }
      goto LABEL_60;
    }
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v17, (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v7 = (__int64 *)v22;
    }
    else
    {
      v7 = (__int64 *)v22;
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x40u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        (__int64)v22);
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
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x41u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, v13, pv);
    if ( v13[0] )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x44u,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            (const wchar_t *)pv,
            *(_WORD **)(v13[0] + 80LL));
          v9 = WPP_GLOBAL_Control;
        }
        if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)v9 + 7) & 0x800000) != 0
          && *((_BYTE *)v9 + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)v9 + 2), 0x45u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, v7[8]);
        }
      }
      CMonitorManager::CaptureMonitor::Uninitialize((CMonitorManager::CaptureMonitor *)v7);
      goto LABEL_48;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
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
      v7 = (__int64 *)v22;
      if ( v21 < 0 )
        goto LABEL_48;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x43u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        v12);
    }
    v8 = (CMonitor *)v7[8];
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

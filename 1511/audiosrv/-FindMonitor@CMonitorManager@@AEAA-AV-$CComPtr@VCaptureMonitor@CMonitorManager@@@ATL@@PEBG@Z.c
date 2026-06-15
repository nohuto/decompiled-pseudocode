/*
 * XREFs of ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800932AC
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800927B8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800942E0 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180094490 (-OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180094790 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180094B20 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180093480 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown **__fastcall CMonitorManager::FindMonitor(__int64 a1, struct IUnknown **a2, const wchar_t *a3)
{
  TraceLoggingHProvider v6; // rcx
  __int64 v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rbx
  LPCRITICAL_SECTION v11; // [rsp+40h] [rbp-28h] BYREF
  char v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  struct IUnknown **v14; // [rsp+78h] [rbp+10h]
  struct IUnknown *v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a2;
  *a2 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x49u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, a3);
  }
  v7 = *(_QWORD *)(a1 + 112);
  v13 = v7;
  while ( v7 )
  {
    Next = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                        v6,
                        &v13);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *Next);
    v9 = v15;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Au,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        (const wchar_t *)v15[9].lpVtbl,
        (_WORD *)v15[8].lpVtbl[2].Release);
    }
    if ( !_wcsicmp((const wchar_t *)v9[9].lpVtbl, a3) )
    {
      if ( *a2 != v9 )
        ATL::AtlComPtrAssign(a2, v9);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Bu,
          (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          (__int64)*a2);
      }
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      break;
    }
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v7 = v13;
    if ( !v13 )
      break;
  }
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return a2;
}

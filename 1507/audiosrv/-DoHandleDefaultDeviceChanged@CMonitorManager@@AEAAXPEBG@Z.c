/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x180095418
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180095C50 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180004D54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180040604 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4 (-GetNext@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18007FBBC (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180094950 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094E10 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x180097E2C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(CMonitorManager *this, const unsigned __int16 *a2)
{
  struct CMonitorManager::CaptureMonitor *v2; // r13
  __int64 v3; // rcx
  _QWORD *v4; // r14
  unsigned __int64 v5; // r15
  void *v6; // rax
  __int64 *Next; // rax
  __int64 v8; // rcx
  struct IMMDevice *v9; // rbx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rcx
  unsigned __int64 i; // r12
  struct CMonitorManager::CaptureMonitor *v13; // rbx
  int v14; // r12d
  unsigned int j; // eax
  void *v16; // rcx
  int MonitorForCaptureDeviceIfAppropriate; // eax
  unsigned __int64 v18; // rdi
  __int64 v19; // r12
  ATL::CAtlException *v20; // rbx
  __int64 v21; // [rsp+30h] [rbp-98h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-80h] BYREF
  LPCRITICAL_SECTION v24; // [rsp+50h] [rbp-78h] BYREF
  char v25; // [rsp+58h] [rbp-70h]
  LPCRITICAL_SECTION v26; // [rsp+60h] [rbp-68h] BYREF
  char v27; // [rsp+68h] [rbp-60h]
  _QWORD *v28; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+80h] [rbp-48h]
  int v31; // [rsp+88h] [rbp-40h]
  struct CMonitorManager::CaptureMonitor *v32; // [rsp+D0h] [rbp+8h] BYREF
  const unsigned __int16 *v33; // [rsp+D8h] [rbp+10h]
  unsigned int v34; // [rsp+E0h] [rbp+18h] BYREF
  struct IMMDevice *v35; // [rsp+E8h] [rbp+20h] BYREF

  v33 = a2;
  v32 = this;
  pv[1] = (LPVOID)-2LL;
  v2 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v26, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)v2 + 14) != 1 )
    goto LABEL_70;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v24, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 72));
  v21 = 0LL;
  v4 = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v6 = (void *)*((_QWORD *)v2 + 14);
  pv[0] = v6;
  while ( v6 )
  {
    Next = ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(v3, (_QWORD **)pv);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v35, *Next);
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      v9 = v35;
    }
    else
    {
      v9 = v35;
      WPP_SF_SS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Bu,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        (const wchar_t *)v35[9].lpVtbl,
        (_WORD *)v35[8].lpVtbl[1].AddRef);
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( BYTE5(v9[1].lpVtbl) )
    {
      if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v8 + 28) & 0x800000) != 0
        && *(_BYTE *)(v8 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v8 + 16), 0x1Cu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
      }
      try
      {
        v10 = v5;
        if ( v5 >= v30 )
        {
          if ( !ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GrowBuffer(
                  (__int64)&v28,
                  v5 + 1) )
            ATL::AtlThrowImpl(-2147024882);
          v5 = v29;
          v4 = v28;
        }
        v11 = &v4[v10];
        if ( v11 )
          ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
            v11,
            (__int64)v9);
        v29 = ++v5;
      }
      catch ( ATL::CAtlException *v23 )
      {
        v20 = v23;
        if ( *(_DWORD *)v23 == -1073741571 )
          _resetstkoflw();
        LODWORD(v33) = *(_DWORD *)v20;
        if ( (int)v33 < 0 )
        {
          ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->Release)(v35);
          v2 = v32;
          v5 = v29;
          v4 = v28;
          goto LABEL_25;
        }
        v2 = v32;
        v5 = v29;
        v4 = v28;
        v9 = v35;
      }
    }
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
LABEL_25:
    v6 = pv[0];
  }
  for ( i = 0LL; i < v5; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v32, v4[i]);
    v33 = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Du,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
    }
    v13 = v32;
    CMonitorManager::RemoveMonitor(v2, v32);
    if ( v13 )
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v2 + 8) + 24LL))(
          *((_QWORD *)v2 + 8),
          1LL,
          1LL,
          &v21);
  if ( v14 < 0
    || (v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v34), v14 < 0) )
  {
    if ( v4 )
    {
      ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
        (__int64)v4,
        v5);
      goto LABEL_60;
    }
  }
  else
  {
    for ( j = 0; ; j = (_DWORD)v33 + 1 )
    {
      LODWORD(v33) = j;
      if ( j >= v34 )
        break;
      v35 = 0LL;
      pv[0] = 0LL;
      LOBYTE(v32) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v21 + 32LL))(
              v21,
              (unsigned int)v33,
              &v35);
      if ( v14 >= 0 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(v35, (unsigned __int16 **)pv, (bool *)&v32) )
        {
          if ( (_BYTE)v32 )
          {
            MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v2, v35);
            v14 = MonitorForCaptureDeviceIfAppropriate;
            if ( MonitorForCaptureDeviceIfAppropriate < 0
              && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x1Eu,
                (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
                MonitorForCaptureDeviceIfAppropriate);
            }
          }
        }
        v16 = pv[0];
      }
      else
      {
        v16 = 0LL;
      }
      CoTaskMemFree(v16);
      if ( v35 )
        ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->Release)(v35);
    }
    LODWORD(v32) = v14;
    v4 = v28;
    if ( v28 )
    {
      v18 = 0LL;
      if ( v5 )
      {
        do
        {
          v19 = v4[v18];
          if ( v19 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(v4[v18]);
          ++v18;
        }
        while ( v18 < v5 );
        v14 = (int)v32;
      }
LABEL_60:
      free(v4);
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v25 )
    ATL::CCritSecLock::Unlock(&v24);
  if ( v14 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Fu,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      v14);
  }
LABEL_70:
  if ( v27 )
    ATL::CCritSecLock::Unlock(&v26);
}

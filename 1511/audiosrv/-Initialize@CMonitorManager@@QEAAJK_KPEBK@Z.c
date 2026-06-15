/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003C9A8
 * Callers:
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18003DDB8 (-ListenTo_Initialize@@YAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001AC4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x18003C8DC (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x18003DD7C (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18009214C (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800921F0 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x180092340 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x180095878 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x180096078 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180096138 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180097A58 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180098DE8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180099868 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::Initialize(
        CMonitorManager *this,
        BOOL a2,
        __int64 a3,
        CMonitorManager::CaptureMonitor *a4)
{
  CMonitorManager *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  const unsigned int *v7; // r9
  int restarted; // esi
  _QWORD *v9; // r12
  unsigned int v10; // r12d
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // rbx
  void *v14; // rcx
  LPVOID v15; // rdi
  int v16; // eax
  int v17; // esi
  struct CMonitorManager::CaptureMonitor *v18; // rbx
  bool v19; // si
  CMonitor *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 *v24; // rax
  CMonitorManager::CaptureMonitor *v25; // rbx
  struct IMMDevice *v26; // [rsp+30h] [rbp-B8h] BYREF
  struct CMonitorManager::CaptureMonitor *v27; // [rsp+38h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-98h] BYREF
  __int128 v31; // [rsp+58h] [rbp-90h] BYREF
  __int64 v32; // [rsp+68h] [rbp-80h]
  __int128 v33; // [rsp+70h] [rbp-78h]
  int v34; // [rsp+80h] [rbp-68h]
  LPCRITICAL_SECTION v35; // [rsp+88h] [rbp-60h] BYREF
  char v36; // [rsp+90h] [rbp-58h]
  ATL::CAtlException *v37[2]; // [rsp+98h] [rbp-50h] BYREF
  ATL::CAtlException *v38; // [rsp+A8h] [rbp-40h] BYREF
  CMonitorManager *v39; // [rsp+F0h] [rbp+8h] BYREF
  BOOL v40; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v41; // [rsp+100h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v42; // [rsp+108h] [rbp+20h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v39 = this;
  v37[1] = (ATL::CAtlException *)-2LL;
  v4 = this;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
  }
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 10;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v35, (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 16));
  if ( *((_DWORD *)v4 + 14) && *((_DWORD *)v4 + 14) != 3 )
  {
    restarted = -2147024809;
LABEL_65:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        restarted);
    }
    v23 = *((_QWORD *)v4 + 8);
    if ( v23 )
    {
      (*(void (__fastcall **)(_QWORD, CMonitorManager *))(*(_QWORD *)v23 + 56LL))(*((_QWORD *)v4 + 8), v4);
      Microsoft::WRL::WeakRef::~WeakRef((CMonitorManager *)((char *)v4 + 64));
    }
    while ( v32 )
    {
      v24 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                         &v31,
                         &v39);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v42, *v24);
      if ( v39 )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v39 + 16LL))(v39);
      v25 = v42;
      CMonitor::StopIfRunning(*((CMonitor **)v42 + 8));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v25);
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_17;
  }
  restarted = CMonitorManager::InitializeMonitorRestartTimer((char *)v4, v5, v6, v7);
  if ( restarted < 0 )
    goto LABEL_65;
  v9 = (_QWORD *)((char *)v4 + 64);
  restarted = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                (LPVOID *)v4 + 8);
  if ( restarted < 0 )
    goto LABEL_65;
  restarted = (*(__int64 (__fastcall **)(_QWORD, CMonitorManager *))(*(_QWORD *)*v9 + 48LL))(*v9, v4);
  if ( restarted < 0 )
    goto LABEL_65;
  restarted = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*v9 + 24LL))(
                *v9,
                1LL,
                1LL,
                &v29);
  if ( restarted < 0 )
    goto LABEL_65;
  restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 24LL))(v29, &v30);
  if ( restarted < 0 )
    goto LABEL_65;
  v10 = 0;
  while ( 2 )
  {
    LODWORD(v42) = v10;
    if ( v10 < v30 )
    {
      v26 = 0LL;
      pv = 0LL;
      LOBYTE(v40) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v29 + 32LL))(v29, v10, &v26) < 0 )
      {
        v14 = 0LL;
        goto LABEL_61;
      }
      if ( !CMonitor::IsCaptureMonitorEnabled(v26, (unsigned __int16 **)&pv, (bool *)&v40) )
      {
        v15 = pv;
        goto LABEL_60;
      }
      v27 = 0LL;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
      }
      v15 = pv;
      v16 = CMonitorManager::CreateMonitor(
              v4,
              *((struct IMMDeviceEnumerator **)v4 + 8),
              v26,
              (const unsigned __int16 *)pv,
              v40,
              &v27);
      v17 = v16;
      if ( v16 < 0 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xCu,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            v16);
        }
        v18 = v27;
        if ( !v27 )
          goto LABEL_60;
        goto LABEL_58;
      }
      if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v18 = v27;
      }
      else
      {
        v18 = v27;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
          v27,
          *((_QWORD *)v27 + 8));
      }
      v19 = v17 == 0;
      LOBYTE(v40) = v19;
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          &v31,
          v18);
      }
      catch ( ATL::CAtlException *v37 )
      {
        v12 = v37[0];
        if ( *(_DWORD *)v37[0] == -1073741571 )
          _resetstkoflw();
        LODWORD(v41) = *(_DWORD *)v12;
        if ( (int)v41 >= 0 )
        {
          v4 = v39;
          v10 = (unsigned int)v42;
          v15 = pv;
          v18 = v27;
          v19 = v40;
          goto LABEL_55;
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xEu,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            v41);
        }
        if ( v27 )
          (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v27 + 16LL))(v27);
        CoTaskMemFree(pv);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
        v4 = v39;
        v10 = (unsigned int)v42;
LABEL_63:
        ++v10;
        continue;
      }
LABEL_55:
      v20 = (CMonitor *)*((_QWORD *)v18 + 8);
      if ( v19 )
        CMonitor::Start(v20);
      else
        CMonitor::Terminate(v20, 1, 0LL);
LABEL_58:
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_60:
      v14 = v15;
LABEL_61:
      CoTaskMemFree(v14);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_63;
    }
    break;
  }
  *((_DWORD *)v4 + 14) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  try
  {
    v22 = (_QWORD *)v31;
    while ( v22 )
    {
      v21 = v22[2];
      v22 = (_QWORD *)*v22;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (char *)v4 + 112,
        v21);
    }
  }
  catch ( ATL::CAtlException *v38 )
  {
    v13 = v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _resetstkoflw();
    LODWORD(v41) = *(_DWORD *)v13;
    v4 = v39;
    restarted = v41;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  if ( restarted < 0 )
    goto LABEL_65;
LABEL_17:
  if ( v36 )
    ATL::CCritSecLock::Unlock(&v35);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v31);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return (unsigned int)restarted;
}

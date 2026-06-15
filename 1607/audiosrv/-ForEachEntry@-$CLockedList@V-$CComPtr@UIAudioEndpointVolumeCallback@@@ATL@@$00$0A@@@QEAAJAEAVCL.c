/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002D830
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA_KAEBV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@@Z @ 0x180001AB4 (-Add@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UI.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180001D78 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18002D8C8 (--1-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UIAu.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, __int64 *); // r15
  LPCRITICAL_SECTION v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned int i; // r14d
  ATL::CAtlException *v8; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v9; // [rsp+38h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v5 = 0LL;
  v20 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v19) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::Add(
        &v10,
        (_QWORD *)&v3[1].DebugInfo->Type + i);
      v20 = ++v5;
    }
    catch ( ATL::CAtlException *v8 )
    {
      if ( *(_DWORD *)v8 == -1073741571 )
        _o__resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      v5 = v20;
      i = v19;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v5 )
  {
    try
    {
      if ( v4 >= v11 )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
        &v19,
        *(_QWORD *)(v10 + 8LL * v4));
      (**v2)(v2, &v19);
    }
    catch ( ATL::CAtlException *v9 )
    {
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v2 = a2;
      v5 = v20;
    }
    ++v4;
  }
  ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::~CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>(&v10);
  return 0LL;
}

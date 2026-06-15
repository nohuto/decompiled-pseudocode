/*
 * XREFs of ?Stop@CMonitor@@QEAAXXZ @ 0x1800996B0
 * Callers:
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18006539C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800958EC (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x180096078 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180096B8C (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x180098580 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180098664 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18009882C (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180098DE8 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180066A4C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18009675C (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitor::Stop(CMonitor *this)
{
  TraceLoggingHProvider v2; // rcx
  void **v3; // rax
  void **v4; // rax
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-30h] BYREF
  char v6; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v7; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
      (__int64)this);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 14) == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 88LL))(*((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
    while ( *((_QWORD *)this + 39) )
    {
      v3 = (void **)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64)this + 296);
      if ( v3 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v3);
    }
    while ( *((_QWORD *)this + 45) )
    {
      v4 = (void **)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64)this + 344);
      if ( v4 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v4);
    }
    if ( v6 )
      ATL::CCritSecLock::Unlock(&v5);
    *((_DWORD *)this + 14) = 4;
  }
  else if ( v2 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)v2 + 7) & 0x800000) != 0
         && *((_BYTE *)v2 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v2 + 2), 0x3Du, (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids, (__int64)this);
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
}

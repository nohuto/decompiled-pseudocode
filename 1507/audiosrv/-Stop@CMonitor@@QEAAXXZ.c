/*
 * XREFs of ?Stop@CMonitor@@QEAAXXZ @ 0x18009C808
 * Callers:
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x180097E2C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800985B8 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x180098D8C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1800992A4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18009AC30 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18009AD14 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18009AEDC (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18009BF40 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180098C9C (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18009BD50 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitor::Stop(CMonitor *this)
{
  __int64 v2; // rcx
  void **v3; // rax
  void **v4; // rax
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-30h] BYREF
  char v6; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v7; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  v2 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Cu,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      this,
      -2LL);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_DWORD *)this + 14) == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 88LL))(*((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
    while ( *((_QWORD *)this + 39) )
    {
      v3 = (void **)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64 **)this + 37);
      if ( v3 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v3);
    }
    while ( *((_QWORD *)this + 45) )
    {
      v4 = (void **)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64 **)this + 43);
      if ( v4 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'(v4);
    }
    if ( v6 )
      ATL::CCritSecLock::Unlock(&v5);
    *((_DWORD *)this + 14) = 4;
  }
  else if ( (struct _GUID *)v2 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(v2 + 28) & 0x800000) != 0
         && *(_BYTE *)(v2 + 25) >= 4u )
  {
    WPP_SF_q(*(_QWORD *)(v2 + 16), 0x3Du, (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids, this);
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
}

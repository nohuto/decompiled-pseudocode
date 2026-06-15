/*
 * XREFs of ??1CMonitor@@IEAA@XZ @ 0x1800989E0
 * Callers:
 *     ?Release@CMonitor@@UEAAKXZ @ 0x18009BD10 (-Release@CMonitor@@UEAAKXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x1800674E8 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180094AB4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x180097C90 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  __int64 v2; // rcx
  CMonitor::CMonitorNotification *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  CMonitor::CMonitorNotification *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi

  *(_QWORD *)this = &CMonitor::`vftable';
  v2 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      this);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_QWORD *)this + 61) )
  {
    if ( (struct _GUID *)v2 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v2 + 28) & 0x800000) != 0
      && *(_BYTE *)(v2 + 25) >= 4u )
    {
      WPP_SF_qq(*(_QWORD *)(v2 + 16), 0x18u, (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
    }
    CloseThreadpoolWork(*((PTP_WORK *)this + 61));
    *((_QWORD *)this + 61) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 392));
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 344);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 296);
  if ( *((_QWORD *)this + 36) )
    ATL::CHandle::Close((void **)this + 36);
  if ( *((_QWORD *)this + 34) )
    ATL::CHandle::Close((void **)this + 34);
  if ( *((_QWORD *)this + 29) )
    ATL::CHandle::Close((void **)this + 29);
  v3 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 28);
  if ( v3 )
    CMonitor::CMonitorNotification::Release(v3);
  v4 = *((_QWORD *)this + 27);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 27));
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 26));
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 24));
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 23));
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 22));
  CoTaskMemFree(*((LPVOID *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  v9 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 20);
  if ( v9 )
    CMonitor::CMonitorNotification::Release(v9);
  if ( *((_QWORD *)this + 14) )
    ATL::CHandle::Close((void **)this + 14);
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 13));
  CoTaskMemFree(*((LPVOID *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  v11 = *((_QWORD *)this + 11);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 11));
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)this + 10));
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*((_QWORD *)this + 9));
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}

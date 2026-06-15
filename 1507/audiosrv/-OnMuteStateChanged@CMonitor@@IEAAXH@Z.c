/*
 * XREFs of ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18009AC30
 * Callers:
 *     ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180097260 (-OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18009BF40 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18009C808 (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_ld @ 0x18009CF84 (WPP_SF_ld.c)
 */

void __fastcall CMonitor::OnMuteStateChanged(CMonitor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx

  v3 = a2;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_ld(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      a2,
      a3,
      (unsigned int)a2,
      *((_DWORD *)this + 14));
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v3 )
  {
    if ( *((_DWORD *)this + 14) == 3 )
    {
      if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v5 + 28) & 0x800000) != 0
        && *(_BYTE *)(v5 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v5 + 16), 0x30u, (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
      }
      CMonitor::Stop(this);
    }
  }
  else if ( ((*((_DWORD *)this + 14) - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v5 + 28) & 0x800000) != 0
      && *(_BYTE *)(v5 + 25) >= 4u )
    {
      WPP_SF_(*(_QWORD *)(v5 + 16), 0x31u, (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
    }
    CMonitor::Start(this);
  }
}

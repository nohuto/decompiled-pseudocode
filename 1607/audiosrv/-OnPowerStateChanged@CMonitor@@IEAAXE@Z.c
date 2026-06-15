/*
 * XREFs of ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180081194
 * Callers:
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x18007DA74 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 * Callees:
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180081714 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180081F4C (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::OnPowerStateChanged(CMonitor *this, unsigned __int8 a2)
{
  int v4; // [rsp+20h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = *((_DWORD *)this + 14);
    WPP_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      a2,
      v4);
  }
  if ( *((_BYTE *)this + 61) )
  {
    if ( (a2 & 0xFD) != 0 )
    {
      if ( ((*((_DWORD *)this + 14) - 2) & 0xFFFFFFFD) == 0 )
        CMonitor::Start(this);
    }
    else if ( *((_DWORD *)this + 14) == 3 )
    {
      CMonitor::Stop(this);
    }
  }
}

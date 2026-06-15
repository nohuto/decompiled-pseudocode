/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180080FE8
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18007D910 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x18007F500 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180081714 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180081F4C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnPauseOnBatteryChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  bool v5; // al
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-28h] BYREF
  char v7; // [rsp+40h] [rbp-20h]
  PROPVARIANT pvar; // [rsp+48h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+58h] [rbp-8h]
  unsigned __int8 v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF

  v12 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      this,
      *((_DWORD *)this + 14));
  }
  if ( (unsigned int)(*((_DWORD *)this + 14) - 2) <= 2 )
  {
    pvar = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v12);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
                 v12,
                 &PKEY_MonitorPauseOnBattery,
                 &pvar),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          v4);
      }
    }
    else if ( (_WORD)pvar == 11 )
    {
      v5 = (_WORD)v9 == 0xFFFF;
      *((_BYTE *)this + 61) = v5;
      if ( v5 )
      {
        if ( CMonitor::GetPowerStatus(this, &v11) && *((_DWORD *)this + 14) == 3 && (v11 & 0xFD) == 0 )
          CMonitor::Stop(this);
      }
      else if ( *((_DWORD *)this + 14) == 4 )
      {
        CMonitor::Start(this);
      }
    }
    PropVariantClear(&pvar);
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}

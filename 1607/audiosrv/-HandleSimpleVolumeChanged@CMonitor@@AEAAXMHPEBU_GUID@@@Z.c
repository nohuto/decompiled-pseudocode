/*
 * XREFs of ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18007F6BC
 * Callers:
 *     ?DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007F4D0 (-DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180081714 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180081F4C (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_gd @ 0x180082524 (WPP_SF_gd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::HandleSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-30h] BYREF
  char v7; // [rsp+40h] [rbp-28h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_gd(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL);
  }
  if ( a3 )
  {
    if ( *((_DWORD *)this + 14) == 3 )
      CMonitor::Stop(this);
  }
  else if ( *((_DWORD *)this + 14) == 4 )
  {
    CMonitor::Start(this);
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
}

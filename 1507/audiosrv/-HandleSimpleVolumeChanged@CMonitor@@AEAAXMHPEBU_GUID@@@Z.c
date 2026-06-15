/*
 * XREFs of ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1800992A4
 * Callers:
 *     ?DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180099050 (-DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18009BF40 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18009C808 (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_gd @ 0x18009CE68 (WPP_SF_gd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::HandleSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-30h] BYREF
  char v7; // [rsp+40h] [rbp-28h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_gd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 45LL);
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

/*
 * XREFs of ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180095140
 * Callers:
 *     ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180094730 (-OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18009180C (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800934D8 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800937E8 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAA?AV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@XZ @ 0x180095820 (-RemoveHead@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtr.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::ProcessDeviceStateChanged(CMonitorManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  LPCRITICAL_SECTION v4; // [rsp+28h] [rbp-28h] BYREF
  char v5; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp-10h]
  CMonitorManager::DeviceStateChangedContext *v8; // [rsp+60h] [rbp+10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) == 1 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, (struct _RTL_CRITICAL_SECTION *)this + 4);
    if ( !*((_BYTE *)this + 248) )
    {
      *((_BYTE *)this + 248) = 1;
      while ( *((_QWORD *)this + 27) )
      {
        v9 = 0LL;
        v2 = (__int64 *)ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveHead(
                          (char *)this + 200,
                          &v8);
        v3 = *v2;
        *v2 = 0LL;
        v9 = v3;
        if ( v8 )
          CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v8);
        v8 = 0LL;
        ATL::CCritSecLock::Unlock(&v4);
        if ( (*(_BYTE *)(v3 + 8) & 0xA) != 0 )
        {
          CMonitorManager::HandleDeviceRemoved(this, *(const unsigned __int16 **)v3);
        }
        else if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          CMonitorManager::HandleDeviceAdded(this, *(wchar_t **)v3);
        }
        ATL::CCritSecLock::Lock(&v4);
        CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'((CMonitorManager::DeviceStateChangedContext *)v3);
      }
      *((_BYTE *)this + 248) = 0;
    }
    if ( v5 )
      ATL::CCritSecLock::Unlock(&v4);
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
}

/*
 * XREFs of ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x180002948
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180013348 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001BD74 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::ReevaluateActiveMediaAppStatusForApplication(
        CApplicationManager *this,
        struct CApplication *a2,
        bool a3)
{
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  if ( !CApplication::GetActiveProcessCount(a2) )
    CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 1);
  if ( v5[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v5);
}

/*
 * XREFs of ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18009ED1C
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E948 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001CB1C (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180065CA8 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::ReevaluateActiveMediaAppStatusForApplication(
        CApplicationManager *this,
        struct CApplication *a2)
{
  LPCRITICAL_SECTION v4; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  if ( !(unsigned int)CApplication::GetActiveProcessCount(a2) )
    CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 1);
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
}

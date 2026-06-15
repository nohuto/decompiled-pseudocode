/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BE44
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18003F8A0 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x1800A39B0 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  CApplicationManager *v4; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  v4 = (CApplicationManager *)((char *)this + 24);
  v5 = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v4);
  *((_DWORD *)a2 + 117) = 0;
  *((_DWORD *)a2 + 118) = 0;
  *((_DWORD *)a2 + 119) = 0;
  *((_DWORD *)a2 + 120) = 0;
  *((_DWORD *)a2 + 121) = 0;
  *((_DWORD *)a2 + 122) = 0;
  *((_DWORD *)a2 + 123) = 1;
  if ( *((_DWORD *)a2 + 117) != 1 )
  {
    *((_DWORD *)a2 + 117) = 1;
    *((_QWORD *)a2 + 59) = 1LL;
    *((_DWORD *)a2 + 120) = 1;
    *((_DWORD *)a2 + 121) = 0;
    *((_DWORD *)a2 + 122) = 1;
    *((_DWORD *)a2 + 123) = 1;
  }
  CApplicationManager::ApplyPBMPolicy(this, a2, 0xD1u);
  if ( v5 )
    ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v4);
}

/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014C04
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x18000E170 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x180014080 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180014CA8 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000CAB4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)a2 + 117) = 0;
  *((_DWORD *)a2 + 118) = 0;
  *((_DWORD *)a2 + 119) = 0;
  *((_DWORD *)a2 + 120) = 0;
  *((_DWORD *)a2 + 121) = 0;
  *((_DWORD *)a2 + 122) = 0;
  *((_DWORD *)a2 + 123) = 1;
  CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
  CApplicationManager::ApplyPBMPolicy(this, a2, 209);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}

/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800134DC
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x18000DA60 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x1800129A0 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180013578 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000C420 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180012B40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)a2 + 131) = 0;
  *((_DWORD *)a2 + 132) = 0;
  *((_DWORD *)a2 + 133) = 0;
  *((_DWORD *)a2 + 134) = 0;
  *((_DWORD *)a2 + 135) = 0;
  *((_DWORD *)a2 + 136) = 0;
  *((_DWORD *)a2 + 137) = 1;
  CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
  CApplicationManager::ApplyPBMPolicy(this, a2, 209);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}

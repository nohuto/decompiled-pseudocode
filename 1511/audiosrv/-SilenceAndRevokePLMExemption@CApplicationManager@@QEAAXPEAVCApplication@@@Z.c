/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E7FC
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18003F2B0 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x1800A0D20 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
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
    LeaveCriticalSection(lpCriticalSection);
}

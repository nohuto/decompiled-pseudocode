/*
 * XREFs of ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800A2BD0
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800A2A98 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 */

__int64 __fastcall CApplication::CommitGoodFaithPLMExemption(CApplication *this)
{
  CApplication::CleanupGoodFaithExemptionTimer(this);
  if ( *((_DWORD *)this + 117) == 2 )
  {
    *((_DWORD *)this + 117) = 0;
    *((_DWORD *)this + 118) = 0;
    *((_DWORD *)this + 119) = 0;
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 121) = 0;
    *((_DWORD *)this + 122) = 0;
    *((_DWORD *)this + 123) = 1;
  }
  CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 209);
  *((_DWORD *)this + 84) = 0;
  return 0LL;
}

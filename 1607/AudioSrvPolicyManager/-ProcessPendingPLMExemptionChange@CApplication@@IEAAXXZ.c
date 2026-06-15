/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000B9D0
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B570 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000C240 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ProcessPendingPLMExemptionChange(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int DebugInfo_high; // ebp
  _QWORD *LockSemaphore; // rsi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = this + 6;
  EnterCriticalSection(this + 6);
  if ( !LODWORD(this[7].DebugInfo) )
  {
    LODWORD(this[7].DebugInfo) = 1;
    while ( HIDWORD(this[7].DebugInfo) )
    {
      DebugInfo_high = HIDWORD(this[7].DebugInfo);
      HIDWORD(this[7].DebugInfo) = 0;
      LeaveCriticalSection(v2);
      lpCriticalSection = (LPCRITICAL_SECTION)&this->LockSemaphore;
      v7 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x10u,
          &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
          DebugInfo_high);
      }
      LockSemaphore = this[1].LockSemaphore;
      while ( LockSemaphore )
      {
        v5 = LockSemaphore[2];
        LockSemaphore = (_QWORD *)*LockSemaphore;
        CProcess::NotifyPLM(v5, DebugInfo_high);
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      EnterCriticalSection(v2);
    }
    LODWORD(this[7].DebugInfo) = 0;
  }
  LeaveCriticalSection(v2);
}

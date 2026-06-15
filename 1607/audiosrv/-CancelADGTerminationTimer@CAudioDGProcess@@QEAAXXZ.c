/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180050610
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180053EC0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x180084E1C (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::CancelADGTerminationTimer(struct _RTL_CRITICAL_SECTION *this)
{
  CAudioThreadPool *v2; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  LPCRITICAL_SECTION v4; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  v2 = ThreadPool;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, this);
  DebugInfo = this[3].DebugInfo;
  if ( DebugInfo )
  {
    (*(void (__fastcall **)(CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      DebugInfo,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      this[3].DebugInfo,
      1LL);
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
}

/*
 * XREFs of ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A2D88
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A6EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::DeleteInactivityTimer(struct _RTL_CRITICAL_SECTION *this)
{
  LPCRITICAL_SECTION v2; // [rsp+38h] [rbp-20h] BYREF
  char v3; // [rsp+40h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v2, this + 8);
  if ( this[9].DebugInfo )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x29u,
        (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        this[4].LockCount);
    }
    (*(void (__fastcall **)(CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[9].DebugInfo,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[9].DebugInfo,
      1LL);
    (*(void (__fastcall **)(CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      this[9].DebugInfo);
    this[9].DebugInfo = 0LL;
    CUnknown::Release((CUnknown *)this);
  }
  if ( v3 )
    ATL::CCritSecLock::Unlock(&v2);
}

/*
 * XREFs of ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A0ED4
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::StartInactivityTimer(struct _RTL_CRITICAL_SECTION *this)
{
  signed int v2; // esi
  __int64 v3; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION v5; // [rsp+38h] [rbp-30h] BYREF
  char v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+74h] [rbp+Ch]

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, this + 8);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      this[4].LockCount);
  }
  if ( !this[9].DebugInfo )
  {
    v3 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)ThreadPool
                                                                                               + 8LL))(
           ThreadPool,
           CProcess::InactivityTimerCallback,
           this);
    this[9].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v3;
    if ( v3 )
    {
      _InterlockedIncrement(&this->LockCount);
      v7 = -200000000;
      v8 = -1;
      (*(void (__fastcall **)(CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, int *, _QWORD, int))(*(_QWORD *)ThreadPool
                                                                                                  + 24LL))(
        ThreadPool,
        this[9].DebugInfo,
        &v7,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v2 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Au,
        (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        v2);
    }
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
}

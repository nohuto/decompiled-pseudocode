/*
 * XREFs of ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000F1CC
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x180020EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::DeleteInactivityTimer(CProcess *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v3; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 320);
  v3 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 45) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
        *((_DWORD *)this + 42));
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 45),
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 45),
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 45));
    *((_QWORD *)this + 45) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
      (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
    }
  }
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}

/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18001B6EC
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18001009C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18001E4C0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  struct _TP_TIMER *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( *((_QWORD *)this + 16) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 16));
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 25) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 25));
  if ( *((_DWORD *)this + 36) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
  if ( *((_DWORD *)this + 37) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 32LL))(*((_QWORD *)this + 15));
  WindowsDeleteString(*((HSTRING *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 22), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}

/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18000BB50
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000B9B0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(const wchar_t **this)
{
  signed int v2; // ebx
  __int64 v3; // rdx
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+64h] [rbp+Ch]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 43);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, this[3]);
  }
  if ( !this[48] )
  {
    v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
           this);
    this[48] = (const wchar_t *)v3;
    if ( v3 )
    {
      v8 = -200000000;
      v9 = -1;
      *((_DWORD *)this + 99) = 1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v3,
        &v8,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = LastError;
    }
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v2);
      }
      AudPolicyLogError("CApplication::StartGoodFaithPLMExemptionTimer", 1302, v2);
    }
  }
  if ( v7 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v7 = 0;
  }
  return (unsigned int)v2;
}

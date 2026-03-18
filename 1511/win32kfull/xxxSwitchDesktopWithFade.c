/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C00E3890
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00E3790 (NtUserSwitchDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     RestoreGammaRamp @ 0x1C00E3710 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00E3A30 (FadeDesktop.c)
 *     PrepareGammaRampData @ 0x1C00E4060 (PrepareGammaRampData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r14d
  unsigned int *v7; // rbx
  unsigned int v9; // esi
  int v10; // r13d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  int v18; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v19; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+40h] BYREF

  v5 = 0;
  v7 = 0LL;
  v22 = 0;
  v19 = 0LL;
  v9 = 0;
  v18 = 0;
  v10 = 0;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (!a2
     || !grpdeskRitInput
     || (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) == 0
     || !a5)
    && !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v10 = 1;
    v12 = PrepareGammaRampData(&v22, &v19, &v18);
    v7 = v19;
    if ( v12 >= 0 )
      PushW32ThreadLock((__int64)v19, v20, (__int64)RestoreGammaRamp);
    if ( v18 )
    {
      v5 = 1;
      UserSessionSwitchLeaveCrit(v14, v13);
      v9 = v22;
      FadeDesktop(v22, v7, a4 >> 1, 0LL);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v22;
    }
  }
  v17 = xxxSwitchDesktop(a1, a2, 0);
  if ( v5 )
  {
    UserSessionSwitchLeaveCrit(v16, v15);
    FadeDesktop(v9, v7, a4 >> 1, 1LL);
    EnterCrit(0LL, 1LL);
  }
  if ( v7 )
  {
    PopW32ThreadLock(v20);
    RestoreGammaRamp(v7);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v17;
}

/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C0106CB4
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C0093EF0 (NtUserSwitchDesktop.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     RestoreGammaRamp @ 0x1C0106C30 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C0106E90 (FadeDesktop.c)
 *     PrepareGammaRampData @ 0x1C0107520 (PrepareGammaRampData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r14d
  unsigned int *v7; // rbx
  unsigned int v9; // esi
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v7 = 0LL;
  v26 = 0;
  v23 = 0LL;
  v9 = 0;
  v22 = 0;
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
    v16 = PrepareGammaRampData(&v26, &v23, &v22);
    v7 = v23;
    if ( v16 >= 0 )
      PushW32ThreadLock((__int64)v23, v24, (__int64)RestoreGammaRamp, v18);
    if ( v22 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v17 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
      v9 = v26;
      FadeDesktop(v26, v7, a4 >> 1, 0LL);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v26;
    }
  }
  v12 = xxxSwitchDesktop(a1, a2, 0, a5);
  if ( v5 )
  {
    v19 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v19 = gdwExtraInstrumentations;
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v19, v11);
    FadeDesktop(v9, v7, a4 >> 1, 1LL);
    EnterCrit(0LL, 1LL);
  }
  if ( v7 )
  {
    PopW32ThreadLock(v24, v11, v13, v14);
    RestoreGammaRamp(v7, v20, v21);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v12;
}

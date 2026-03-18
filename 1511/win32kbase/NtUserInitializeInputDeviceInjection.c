/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00B01A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C5C18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00C8808 (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rdi
  LARGE_INTEGER v15; // r8
  char v16; // al
  void *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned int v29; // edi
  void *v30; // rax
  __int64 v32; // [rsp+20h] [rbp-88h]
  void *v33; // [rsp+58h] [rbp-50h]
  _QWORD v34[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 v35; // [rsp+B0h] [rbp+8h]

  v35 = a1;
  v7 = a4;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
        || (qword_1C01020B0 & 0x200000010000000LL) == 0
        || (v16 = 1, (qword_1C01020B8 & 0x200000010000000LL) != qword_1C01020B8) )
      {
        v16 = 0;
      }
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13.LowPart) = byte_1C01020C8 - 1;
        Template_xqx(
          v13.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v32) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v32,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  v17 = 0LL;
  v18 = 0LL;
  v34[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v22 = 5LL;
LABEL_48:
    v29 = 0;
    UserSetLastError(v22, v19);
    goto LABEL_49;
  }
  v23 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !a4 || (v24 = a6, (unsigned int)(a6 - 1) > 2) )
  {
    v22 = 87LL;
    goto LABEL_48;
  }
  v25 = a5;
  if ( !a5 )
    goto LABEL_33;
  v21 = (unsigned __int16)a5;
  if ( (unsigned __int64)(unsigned __int16)a5 < *((_QWORD *)gpsi + 1) )
  {
    v26 = qword_1C0102D48 + (unsigned int)(unsigned __int16)a5 * dword_1C0102D50;
    v25 = a5 >> 16;
    if ( (WORD1(a5) == *(_WORD *)(v26 + 18)
       || WORD1(a5) == 0xFFFF
       || !WORD1(a5) && PsGetCurrentProcessWow64Process(v20, v25, (unsigned __int16)a5))
      && (*(_BYTE *)(v26 + 17) & 1) == 0
      && *(_BYTE *)(v26 + 16) == 12 )
    {
      v18 = *(_QWORD *)v26;
    }
    v24 = a6;
  }
  if ( v18 )
  {
LABEL_33:
    if ( v23 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v20, v25, v21) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v23 + a3 > (unsigned __int64)W32UserProbeAddress || v23 + a3 < a3 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v30 = (void *)Win32AllocPoolWithQuota();
    v17 = v30;
    v33 = v30;
    if ( !v30 )
      ExRaiseStatus(-1073741801);
    memmove(v30, (const void *)a3, 32 * v7);
    v29 = RIMIDE_InitializeDeviceInjection(v35, a2, (_DWORD)v17, a4, v18, v24, (__int64)v34);
    if ( v29 )
    {
      v27 = (__int64)a7;
      v28 = a7;
      if ( a7 >= W32UserProbeAddress )
        v28 = W32UserProbeAddress;
      *v28 = *v28;
      *a7 = v34[0];
      v17 = v33;
    }
  }
  else
  {
    UserSetLastError(1461LL, v25);
    v29 = 0;
  }
  if ( v17 )
    Win32FreePool();
LABEL_49:
  UserSessionSwitchLeaveCrit((__int64)v28, v27);
  return v29;
}

/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00B9ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00D510C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00D7EB0 (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
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
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // r14d
  __int64 v23; // r14
  int v24; // edi
  void *v25; // rax
  _QWORD *v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-88h]
  void *v29; // [rsp+58h] [rbp-50h]
  _QWORD v30[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int16 v31; // [rsp+B0h] [rbp+8h]

  v31 = a1;
  v7 = a4;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
        || (qword_1C0118B10 & 0x200000010000000LL) == 0
        || (v16 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
      {
        v16 = 0;
      }
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v13.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v28) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v28,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  v17 = 0LL;
  v18 = 0LL;
  v30[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v20 = 5LL;
LABEL_48:
    v24 = 0;
    UserSetLastError(v20);
    goto LABEL_49;
  }
  v21 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !a4 || (v22 = a6, (unsigned int)(a6 - 1) > 2) )
  {
    v20 = 87LL;
    goto LABEL_48;
  }
  if ( !a5 )
    goto LABEL_33;
  if ( (unsigned __int64)(unsigned __int16)a5 < *((_QWORD *)gpsi + 1) )
  {
    v23 = qword_1C011A128 + (unsigned int)(unsigned __int16)a5 * dword_1C011A130;
    if ( (WORD1(a5) == *(_WORD *)(v23 + 18) || WORD1(a5) == 0xFFFF || !WORD1(a5) && PsGetCurrentProcessWow64Process(v19))
      && (*(_BYTE *)(v23 + 17) & 1) == 0
      && *(_BYTE *)(v23 + 16) == 12 )
    {
      v18 = *(_QWORD *)v23;
    }
    v22 = a6;
  }
  if ( v18 )
  {
LABEL_33:
    if ( v21 )
    {
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v19) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v21 + a3 > W32UserProbeAddress || v21 + a3 < a3 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v25 = (void *)Win32AllocPoolWithQuota();
    v17 = v25;
    v29 = v25;
    if ( !v25 )
      ExRaiseStatus(-1073741801);
    memmove(v25, (const void *)a3, 32 * v7);
    v24 = RIMIDE_InitializeDeviceInjection(v31, a2, (_DWORD)v17, a4, v18, v22, (__int64)v30);
    if ( v24 )
    {
      v26 = a7;
      if ( (unsigned __int64)a7 >= W32UserProbeAddress )
        v26 = (_QWORD *)W32UserProbeAddress;
      *v26 = *v26;
      *a7 = v30[0];
      v17 = v29;
    }
  }
  else
  {
    UserSetLastError(1461LL);
    v24 = 0;
  }
  if ( v17 )
    Win32FreePool();
LABEL_49:
  UserSessionSwitchLeaveCrit();
  return v24;
}

/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00BA550
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
 *     RIMIDEInjectDeviceInput @ 0x1C00D6304 (RIMIDEInjectDeviceInput.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  int v6; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // r8
  bool v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  size_t v18; // rsi
  void *v19; // rax
  void *v20; // rbx
  __int64 v22; // [rsp+20h] [rbp-58h]

  v3 = a3;
  v6 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v11.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v22) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        v22,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( !(_DWORD)v3 )
    goto LABEL_33;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v16 = 5LL;
LABEL_34:
    UserSetLastError(v16);
    goto LABEL_35;
  }
  v17 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
LABEL_33:
    v16 = 87LL;
    goto LABEL_34;
  }
  if ( v17 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v17 + a2 > W32UserProbeAddress || v17 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v18 = (unsigned int)v17;
  v19 = (void *)Win32AllocPoolWithQuota();
  v20 = v19;
  if ( !v19 )
    ExRaiseStatus(-1073741801);
  memmove(v19, (const void *)a2, v18);
  if ( (int)RIMIDEInjectDeviceInput(a1, v20, (unsigned int)v3) >= 0 )
    v6 = 1;
  if ( v20 )
    Win32FreePool();
LABEL_35:
  UserSessionSwitchLeaveCrit();
  return v6;
}

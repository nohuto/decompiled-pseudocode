/*
 * XREFs of NtUserInitializePointerDeviceInjection @ 0x1C00BA280
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00D510C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00D7FAC (RIMIDE_InitializePointerDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjection(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v8; // r12d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rbx
  LARGE_INTEGER v15; // r8
  bool v16; // al
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-58h]
  _QWORD v25[3]; // [rsp+48h] [rbp-30h] BYREF

  v8 = a1;
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
      v16 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v13.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          0,
          gullUserCritAcquireToken,
          0);
      }
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v24) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v24,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  v17 = 0LL;
  v25[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v19 = 5LL;
LABEL_38:
    UserSetLastError(v19);
    goto LABEL_39;
  }
  if ( a2 - 1 > 0xFF || a4 - 1 > 2 )
  {
    v19 = 87LL;
    goto LABEL_38;
  }
  if ( !a3 )
    goto LABEL_32;
  if ( (unsigned __int64)(unsigned __int16)a3 < *((_QWORD *)gpsi + 1) )
  {
    v20 = qword_1C011A128 + (unsigned int)(unsigned __int16)a3 * dword_1C011A130;
    v21 = a3 >> 16;
    if ( ((_WORD)v21 == *(_WORD *)(v20 + 18)
       || (_WORD)v21 == 0xFFFF
       || !(_WORD)v21 && PsGetCurrentProcessWow64Process(v18))
      && (*(_BYTE *)(v20 + 17) & 1) == 0
      && *(_BYTE *)(v20 + 16) == 12 )
    {
      v17 = *(_QWORD *)v20;
    }
  }
  if ( v17 )
  {
LABEL_32:
    LODWORD(v17) = RIMIDE_InitializePointerDeviceInjection(v8, a2, v17, a4, v25);
    if ( (_DWORD)v17 )
    {
      v22 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v22 = (_QWORD *)W32UserProbeAddress;
      *v22 = *v22;
      *a5 = v25[0];
    }
  }
  else
  {
    UserSetLastError(1461LL);
    LODWORD(v17) = 0;
  }
LABEL_39:
  UserSessionSwitchLeaveCrit();
  return (int)v17;
}

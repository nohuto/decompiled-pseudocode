/*
 * XREFs of NtUserInitializePointerDeviceInjection @ 0x1C00B0550
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C5C18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00C8900 (RIMIDE_InitializePointerDeviceInjection.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-58h]
  _QWORD v29[3]; // [rsp+48h] [rbp-30h] BYREF

  v8 = a1;
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
      v16 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v13.LowPart) = byte_1C01020C8 - 1;
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
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
  v29[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v21 = 5LL;
LABEL_38:
    UserSetLastError(v21, v18);
    goto LABEL_39;
  }
  if ( a2 - 1 > 0xFF || a4 - 1 > 2 )
  {
    v21 = 87LL;
    goto LABEL_38;
  }
  if ( !a3 )
    goto LABEL_32;
  v22 = (unsigned __int16)a3;
  if ( (unsigned __int64)(unsigned __int16)a3 < *((_QWORD *)gpsi + 1) )
  {
    v23 = qword_1C0102D48 + (unsigned int)(unsigned __int16)a3 * dword_1C0102D50;
    v24 = a3 >> 16;
    if ( ((_WORD)v24 == *(_WORD *)(v23 + 18)
       || (_WORD)v24 == 0xFFFF
       || !(_WORD)v24 && PsGetCurrentProcessWow64Process(v19, v22, v20))
      && (*(_BYTE *)(v23 + 17) & 1) == 0
      && *(_BYTE *)(v23 + 16) == 12 )
    {
      v17 = *(_QWORD *)v23;
    }
  }
  if ( v17 )
  {
LABEL_32:
    LODWORD(v17) = RIMIDE_InitializePointerDeviceInjection(v8, a2, v17, a4, v29);
    if ( (_DWORD)v17 )
    {
      v25 = (__int64)a5;
      v26 = a5;
      if ( a5 >= W32UserProbeAddress )
        v26 = W32UserProbeAddress;
      *v26 = *v26;
      *a5 = v29[0];
    }
  }
  else
  {
    UserSetLastError(1461LL, v22);
    LODWORD(v17) = 0;
  }
LABEL_39:
  UserSessionSwitchLeaveCrit((__int64)v26, v25);
  return (unsigned int)v17;
}

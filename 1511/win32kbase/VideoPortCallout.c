/*
 * XREFs of VideoPortCallout @ 0x1C00881E0
 * Callers:
 *     <none>
 * Callees:
 *     CreateKernelEvent @ 0x1C0011650 (CreateKernelEvent.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     InitCreateSystemThreadsMsg @ 0x1C007DD50 (InitCreateSystemThreadsMsg.c)
 *     CSTRemove @ 0x1C0088560 (CSTRemove.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

PVOID __fastcall VideoPortCallout(_DWORD *a1)
{
  int v2; // ebx
  int SystemThreadsMsg; // edi
  LARGE_INTEGER *v4; // rdi
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // ecx
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID result; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  LARGE_INTEGER v20; // rbx
  int v21; // r8d
  int v22; // [rsp+30h] [rbp-208h]
  PVOID Object[3]; // [rsp+38h] [rbp-200h] BYREF
  _BYTE v24[4]; // [rsp+50h] [rbp-1E8h] BYREF
  __int16 v25; // [rsp+54h] [rbp-1E4h]

  *(_OWORD *)Object = 0LL;
  if ( !gbVideoInitialized )
  {
    v2 = -1073741823;
LABEL_5:
    SystemThreadsMsg = v22;
    goto LABEL_6;
  }
  Object[0] = a1;
  Object[1] = CreateKernelEvent(SynchronizationEvent, 0);
  if ( !Object[1] )
  {
    v2 = -1073741801;
    goto LABEL_5;
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v19 = PsGetCurrentThreadWin32Thread(v16);
  if ( v19 )
  {
    v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      Template_xqx(v18, (unsigned int)&AcquiredExclusiveUserCritEvent, v21, v20.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v20.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v21,
        0,
        1000 * v20.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v15;
  gbValidateHandleForIL = 1;
  if ( CsrApiPort )
  {
    SystemThreadsMsg = InitCreateSystemThreadsMsg((__int64)v24, 4u, (__int64)Object);
    if ( SystemThreadsMsg )
    {
      v25 |= 3u;
      v2 = LpcRequestPort(CsrApiPort, v24);
    }
    else
    {
      v2 = -1073741801;
    }
  }
  else
  {
    SystemThreadsMsg = v22;
    v2 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v18, v17);
  if ( v2 >= 0 )
  {
    KeWaitForSingleObject(Object[1], WrUserRequest, 0, 0, 0LL);
    v2 = a1[6];
    goto LABEL_21;
  }
LABEL_6:
  if ( SystemThreadsMsg )
  {
    v4 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v4 )
      v4[1] = KeQueryPerformanceCounter(0LL);
    v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v7 = PsGetCurrentThreadWin32Thread(v6);
    if ( v7 )
    {
      v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v8) = byte_1C01020C8 - 1;
        Template_xqx(v8, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v10,
          0,
          1000 * v9.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    CSTRemove(4LL, Object);
    UserSessionSwitchLeaveCrit(v12, v11);
  }
LABEL_21:
  result = Object[1];
  if ( Object[1] )
    result = (PVOID)Win32FreePool();
  a1[6] = v2;
  return result;
}

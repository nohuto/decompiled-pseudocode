/*
 * XREFs of VideoPortCallout @ 0x1C0084FF0
 * Callers:
 *     <none>
 * Callees:
 *     CreateKernelEvent @ 0x1C0016C90 (CreateKernelEvent.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     InitCreateSystemThreadsMsg @ 0x1C0083580 (InitCreateSystemThreadsMsg.c)
 *     CSTRemove @ 0x1C00854C0 (CSTRemove.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

PVOID __fastcall VideoPortCallout(_DWORD *a1)
{
  int v2; // ebx
  int SystemThreadsMsg; // edi
  LARGE_INTEGER *v4; // rdi
  struct tagTHREADINFO *v5; // rdi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rcx
  __int64 v16; // rsi
  int v17; // ecx
  LARGE_INTEGER v18; // rdi
  int v19; // r8d
  __int64 v20; // rbp
  int v21; // ecx
  LARGE_INTEGER v22; // rsi
  int v23; // r8d
  PVOID result; // rax
  int v25; // [rsp+30h] [rbp-208h]
  PVOID Object[3]; // [rsp+38h] [rbp-200h] BYREF
  _BYTE v27[4]; // [rsp+50h] [rbp-1E8h] BYREF
  __int16 v28; // [rsp+54h] [rbp-1E4h]

  *(_OWORD *)Object = 0LL;
  if ( !gbVideoInitialized )
  {
    v2 = -1073741823;
LABEL_5:
    SystemThreadsMsg = v25;
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
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v11 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v15 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v11 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v15 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v15, UserRequest, 0, 0, 0LL);
  }
  v16 = PsGetCurrentThreadWin32Thread(v14);
  if ( v16 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v19, v18.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v18.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v19,
        0,
        1000 * v18.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( CsrApiPort )
  {
    SystemThreadsMsg = InitCreateSystemThreadsMsg((__int64)v27, 4u, (__int64)Object);
    if ( SystemThreadsMsg )
    {
      v28 |= 3u;
      v2 = LpcRequestPort(CsrApiPort, v27);
    }
    else
    {
      v2 = -1073741801;
    }
  }
  else
  {
    SystemThreadsMsg = v25;
    v2 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  if ( v2 >= 0 )
  {
    KeWaitForSingleObject(Object[1], WrUserRequest, 0, 0, 0LL);
    v2 = a1[6];
    goto LABEL_67;
  }
LABEL_6:
  if ( SystemThreadsMsg )
  {
    v4 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v4 )
      v4[1] = KeQueryPerformanceCounter(0LL);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v6 )
        v5 = *v6;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v5 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v9 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v5 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v9 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v9, UserRequest, 0, 0, 0LL);
    }
    v20 = PsGetCurrentThreadWin32Thread(v8);
    if ( v20 )
    {
      v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v21) = byte_1C00FEA58 - 1;
        Template_xqx(v21, (unsigned int)&AcquiredExclusiveUserCritEvent, v23, v22.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v22.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v23,
          0,
          1000 * v22.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v20 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    CSTRemove(4LL, Object);
    UserSessionSwitchLeaveCrit();
  }
LABEL_67:
  result = Object[1];
  if ( Object[1] )
    result = (PVOID)Win32FreePool();
  a1[6] = v2;
  return result;
}

/*
 * XREFs of VideoPortCallout @ 0x1C0089670
 * Callers:
 *     <none>
 * Callees:
 *     CreateKernelEvent @ 0x1C000D450 (CreateKernelEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     InitCreateSystemThreadsMsg @ 0x1C00816A0 (InitCreateSystemThreadsMsg.c)
 *     CSTRemove @ 0x1C00897D0 (CSTRemove.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void *__fastcall VideoPortCallout(__int64 a1)
{
  void *result; // rax
  int v3; // ebx
  int SystemThreadsMsg; // edi
  LARGE_INTEGER *v5; // rdi
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v10; // ecx
  int v11; // r8d
  LONGLONG v12; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // r8d
  int v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h]
  _BYTE v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v24; // [rsp+54h] [rbp-ACh]

  result = 0LL;
  v21 = 0LL;
  Object = 0LL;
  if ( !gbVideoInitialized )
  {
    v3 = -1073741823;
LABEL_3:
    SystemThreadsMsg = v20;
    goto LABEL_4;
  }
  v21 = a1;
  result = CreateKernelEvent(SynchronizationEvent, 0);
  Object = result;
  if ( !result )
  {
    v3 = -1073741801;
    goto LABEL_3;
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v16 = PsGetCurrentThreadWin32Thread(v15);
  if ( v16 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v17) = byte_1C0118B28 - 1;
      Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v19, v18.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v19,
        0,
        1000 * v18.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v14;
  gbValidateHandleForIL = 1;
  if ( CsrApiPort )
  {
    SystemThreadsMsg = InitCreateSystemThreadsMsg((__int64)v23, 4u, (__int64)&v21);
    if ( SystemThreadsMsg )
    {
      v24 |= 3u;
      v3 = LpcRequestPort(CsrApiPort, v23);
    }
    else
    {
      v3 = -1073741801;
    }
  }
  else
  {
    SystemThreadsMsg = v20;
    v3 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  if ( v3 >= 0 )
  {
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
    v3 = *(_DWORD *)(a1 + 24);
    goto LABEL_14;
  }
  result = Object;
LABEL_4:
  if ( !SystemThreadsMsg )
    goto LABEL_15;
  v5 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( v5 )
    v5[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v7);
  if ( v8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v11 = 0x10000000;
    v12 = PerformanceCounter.QuadPart - *(_QWORD *)(v8 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v10) = byte_1C0118B28 - 1;
      Template_xqx(v10, (unsigned int)&AcquiredExclusiveUserCritEvent, 0x10000000, v12, 0, gullUserCritAcquireToken);
    }
    if ( v12 >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v12 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CSTRemove(4LL, &v21);
  UserSessionSwitchLeaveCrit();
LABEL_14:
  result = Object;
LABEL_15:
  if ( result )
    result = (void *)Win32FreePool();
  *(_DWORD *)(a1 + 24) = v3;
  return result;
}

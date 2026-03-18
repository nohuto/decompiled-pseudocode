/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C00B12F0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C2978 (RIMIDERemoveInjectionDevice.c)
 */

_BOOL8 __fastcall NtUserRemoveInjectionDevice(void *a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // ebx
  __int64 CurrentProcessWin32Process; // rax
  PVOID v13; // rdi
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+20h] [rbp-28h]
  PVOID v19; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v5 = PsGetCurrentThreadWin32Thread(v4);
  if ( v5 )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      v18 = 0;
      LOBYTE(v6.LowPart) = byte_1C01020C8 - 1;
      Template_xqx(
        v6.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v8.QuadPart,
        v7.QuadPart,
        v18,
        gullUserCritAcquireToken);
    }
    if ( v7.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v17) = 1000 * v7.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v8.QuadPart,
        0LL,
        v17,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  v19 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v19) < 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v13 = v19;
    v14 = *(_QWORD *)(CurrentProcessWin32Process + 848);
    if ( !v14
      || (v15 = *(void **)(v14 + 88)) == 0LL
      || (Object = 0LL, (int)RawInputManagerDeviceObjectResolveHandle(v15, 3u, 1, &Object) < 0)
      || (v11 = v13 != Object, ObfDereferenceObject(Object), v11) )
    {
      RIMIDERemoveInjectionDevice(v13);
    }
    ObfDereferenceObject(v13);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}

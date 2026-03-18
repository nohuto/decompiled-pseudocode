/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C00BB020
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00CF4C0 (RIMIDERemoveInjectionDevice.c)
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
  __int64 v9; // rcx
  BOOL v10; // ebx
  __int64 CurrentProcessWin32Process; // rax
  PVOID v12; // rdi
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+20h] [rbp-28h]
  PVOID v18; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v5 = PsGetCurrentThreadWin32Thread(v4);
  if ( v5 )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      v17 = 0;
      LOBYTE(v6.LowPart) = byte_1C0118B28 - 1;
      Template_xqx(
        v6.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v8.QuadPart,
        v7.QuadPart,
        v17,
        gullUserCritAcquireToken);
    }
    if ( v7.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v16) = 1000 * v7.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v8.QuadPart,
        0LL,
        v16,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  v18 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v18) < 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v12 = v18;
    v13 = *(_QWORD *)(CurrentProcessWin32Process + 840);
    if ( !v13
      || (v14 = *(void **)(v13 + 88)) == 0LL
      || (Object = 0LL, (int)RawInputManagerDeviceObjectResolveHandle(v14, 3u, 1, &Object) < 0)
      || (v10 = v12 != Object, ObfDereferenceObject(Object), v10) )
    {
      RIMIDERemoveInjectionDevice(v12);
    }
    ObfDereferenceObject(v12);
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}

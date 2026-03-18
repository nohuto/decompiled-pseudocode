/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C00B2C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00B2908 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 ProcessWin32Process; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+3Ch] [rbp-2Ch]
  int v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]
  __int64 v24; // [rsp+50h] [rbp-18h]
  __int64 v25; // [rsp+58h] [rbp-10h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v11.LowPart) = byte_1C01020C8 - 1;
      Template_xqx(v11.QuadPart, &AcquiredSharedUserCritEvent, v13.QuadPart, v12.QuadPart, 0, gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v18) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  ProcessWin32Process = PsGetProcessWin32Process(a5);
  if ( ProcessWin32Process )
  {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = a1;
    v24 = a2;
    v25 = a3;
    v16 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&ProcessWin32Process);
    if ( v16 >= 0 )
      v16 = 0;
  }
  else
  {
    v16 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v15, v14);
  return (unsigned int)v16;
}

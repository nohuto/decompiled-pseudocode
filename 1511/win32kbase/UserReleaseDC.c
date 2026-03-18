/*
 * XREFs of UserReleaseDC @ 0x1C0042CF0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     bDeleteDCInternal @ 0x1C006BEB0 (bDeleteDCInternal.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  int v7; // ecx
  LARGE_INTEGER v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0LL, 1LL);
  v5 = PsGetCurrentThreadWin32Thread(v4);
  if ( v5 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      Template_xqx(v7, (unsigned int)&AcquiredSharedUserCritEvent, v6, v8.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v6,
        0,
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  LOBYTE(v2) = (unsigned int)ReleaseCacheDC(a1, 0LL, v6) != 2;
  UserSessionSwitchLeaveCrit(v10, v9);
  return v2;
}

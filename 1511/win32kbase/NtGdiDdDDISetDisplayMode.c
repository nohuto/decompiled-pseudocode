/*
 * XREFs of NtGdiDdDDISetDisplayMode @ 0x1C005FF70
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported_0 @ 0x1C00013D0 (IsUserResetPointerSupported_0.c)
 *     UserResetPointer_0 @ 0x1C00013D8 (UserResetPointer_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00600E8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDISetDisplayMode(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ecx
  LARGE_INTEGER v8; // rbx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = ((__int64 (__fastcall *)(__int64, struct _LUID *, unsigned int *))qword_1C0103FC8)(a1, &v14, &v13);
  if ( v2 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v6 = PsGetCurrentThreadWin32Thread(v5);
    if ( v6 )
    {
      v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v7) = byte_1C01020C8 - 1;
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v9,
          0,
          1000 * v8.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    if ( (int)IsUserResetPointerSupported_0() >= 0 )
      UserResetPointer_0();
    DrvUpdatePDevForWDDMVidPnSource(&v14, v13);
    UserSessionSwitchLeaveCrit(v11, v10);
  }
  return (unsigned int)v2;
}

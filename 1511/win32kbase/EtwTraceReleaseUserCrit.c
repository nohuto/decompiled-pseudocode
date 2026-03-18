/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C001F2D0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001F170 (NtUserEnumDisplayDevices.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     NtUserQueryDisplayConfig @ 0x1C004B650 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004BF80 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplaySettings @ 0x1C0050B70 (NtUserEnumDisplaySettings.c)
 *     ChangeAcquireResourceType @ 0x1C0076DD0 (ChangeAcquireResourceType.c)
 *     LeaveCrit @ 0x1C0078CD0 (LeaveCrit.c)
 *     ?ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z @ 0x1C00A93DC (-ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z.c)
 * Callees:
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall EtwTraceReleaseUserCrit(__int64 a1)
{
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v3; // r8d

  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x200000010000000LL) != 0
    && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v3,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
}

/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C00160F8
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0015F20 (UserDeleteW32Thread.c)
 *     NtUserEnumDisplayDevices @ 0x1C0016030 (NtUserEnumDisplayDevices.c)
 *     UserSessionSwitchEnterCrit @ 0x1C001F9D0 (UserSessionSwitchEnterCrit.c)
 *     NtUserQueryDisplayConfig @ 0x1C0049810 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0049BD0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplaySettings @ 0x1C0062A40 (NtUserEnumDisplaySettings.c)
 *     ChangeAcquireResourceType @ 0x1C007C7E0 (ChangeAcquireResourceType.c)
 *     LeaveCrit @ 0x1C007D970 (LeaveCrit.c)
 * Callees:
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall EtwTraceReleaseUserCrit(__int64 a1)
{
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v3; // r8d

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x200000010000000LL) != 0
    && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18 )
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

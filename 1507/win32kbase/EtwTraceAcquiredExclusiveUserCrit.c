/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C0044E4C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 * Callees:
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall EtwTraceAcquiredExclusiveUserCrit(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // ecx
  LARGE_INTEGER v4; // rdi
  int v5; // r8d

  result = PsGetCurrentThreadWin32Thread(a1);
  v2 = result;
  if ( result )
  {
    v4 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(result + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v3) = byte_1C00FEA58 - 1;
      Template_xqx(v3, (unsigned int)&AcquiredExclusiveUserCritEvent, v5, v4.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v4.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v5,
        0,
        1000 * v4.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v2 + 16) = result;
  }
  return result;
}

/*
 * XREFs of IsCurrentSessionHostServiceSession @ 0x140139520
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x140139008 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 *     EditionInitializeWppLogging @ 0x140139350 (EditionInitializeWppLogging.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402FB748 (--0InkProcessor@@AEAA@XZ.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402FB858 (--1InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

_BOOL8 __fastcall IsCurrentSessionHostServiceSession(__int64 a1)
{
  int CurrentWin32kSessionId; // ebx
  int CurrentServiceSessionId; // ecx
  _BOOL8 result; // rax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  result = 0LL;
  if ( CurrentWin32kSessionId == CurrentServiceSessionId )
    return CurrentServiceSessionId == 0;
  return result;
}

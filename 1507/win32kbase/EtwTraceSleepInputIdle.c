/*
 * XREFs of EtwTraceSleepInputIdle @ 0x1C000D180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceSleepInputIdle(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_p(a1, &SleepInputIdleEvent, a1, a2);
  return result;
}

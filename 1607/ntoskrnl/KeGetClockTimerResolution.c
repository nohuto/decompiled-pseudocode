/*
 * XREFs of KeGetClockTimerResolution @ 0x1401D22A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetClockTimerResolution(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = KeTimeIncrement;
  result = (unsigned int)KiLastRequestedTimeIncrement;
  *a1 = KiLastRequestedTimeIncrement;
  return result;
}

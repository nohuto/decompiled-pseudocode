/*
 * XREFs of KeGetClockTimerResolution @ 0x1401C2CE4
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

/*
 * XREFs of RtlDestroyEnvironment @ 0x18004D890
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  NtdllpFreeStringRoutine(a1);
  return 0LL;
}

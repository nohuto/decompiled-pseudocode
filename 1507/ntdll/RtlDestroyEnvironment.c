/*
 * XREFs of RtlDestroyEnvironment @ 0x1800467E0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  NtdllpFreeStringRoutine(a1);
  return 0LL;
}

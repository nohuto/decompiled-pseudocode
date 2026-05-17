/*
 * XREFs of RtlDestroyEnvironment @ 0x18005EF00
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  NtdllpFreeStringRoutine(a1);
  return 0LL;
}

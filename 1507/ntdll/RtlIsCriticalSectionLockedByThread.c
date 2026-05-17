/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x180040BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsCriticalSectionLockedByThread(__int64 a1)
{
  return *(void **)(a1 + 16) == NtCurrentTeb()->ClientId.UniqueThread;
}

/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1401AB770
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x1405F1454 (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 5184))(a1 + 5120);
}

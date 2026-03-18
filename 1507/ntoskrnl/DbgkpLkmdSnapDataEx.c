/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1401E1238
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14066A0E4 (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 5184))(a1 + 5120);
}

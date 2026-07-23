/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1401B7500
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14061B760 (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 5184))(a1 + 5120);
}

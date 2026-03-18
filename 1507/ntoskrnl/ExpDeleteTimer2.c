/*
 * XREFs of ExpDeleteTimer2 @ 0x140511974
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ExpDeleteTimer2(__int64 a1)
{
  return KeDisableTimer2(a1, 1, 1, 0LL);
}

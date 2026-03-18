/*
 * XREFs of IsWindowDestroyed @ 0x1C0065CFC
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(char *)(a1 + 43) < 0;
}

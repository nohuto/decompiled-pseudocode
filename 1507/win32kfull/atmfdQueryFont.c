/*
 * XREFs of atmfdQueryFont @ 0x1C02A5200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 atmfdQueryFont()
{
  return ((__int64 (*)(void))pAtmfdQueryFont)();
}

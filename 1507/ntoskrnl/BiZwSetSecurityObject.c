/*
 * XREFs of BiZwSetSecurityObject @ 0x14014FE4C
 * Callers:
 *     BiCreateKey @ 0x14056F820 (BiCreateKey.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}

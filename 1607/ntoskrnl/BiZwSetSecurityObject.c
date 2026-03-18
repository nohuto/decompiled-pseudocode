/*
 * XREFs of BiZwSetSecurityObject @ 0x14012E080
 * Callers:
 *     BiCreateKey @ 0x14053D6A0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}

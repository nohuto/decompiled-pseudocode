/*
 * XREFs of BiZwSetSecurityObject @ 0x14012E5F0
 * Callers:
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}

/*
 * XREFs of SmCrGenRandom @ 0x1402222E4
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14069867C (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x140699C50 (SmCrEncStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmCrGenRandom(void *a1, ULONG a2, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(a1, (PUCHAR)a1, a2, a4);
}

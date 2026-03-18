/*
 * XREFs of SmCrGenRandom @ 0x1402224B8
 * Callers:
 *     SmKmKeyGenNewKey @ 0x140698598 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x140699B6C (SmCrEncStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmCrGenRandom(void *a1, ULONG a2, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(a1, (PUCHAR)a1, a2, a4);
}

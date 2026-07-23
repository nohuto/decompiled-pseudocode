/*
 * XREFs of MiInitializeWsSwapping @ 0x14054F80C
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  a1[130] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[125] = 0LL;
  a1[127] = MiContractWsSwapPageFileWorker;
  a1[128] = a1;
  return result;
}

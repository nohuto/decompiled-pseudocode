/*
 * XREFs of MiInitializeWsSwapping @ 0x14052075C
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  a1[131] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[126] = 0LL;
  a1[128] = MiContractWsSwapPageFileWorker;
  a1[129] = a1;
  return result;
}

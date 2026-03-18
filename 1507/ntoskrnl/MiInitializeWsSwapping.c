/*
 * XREFs of MiInitializeWsSwapping @ 0x14059711C
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[127] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[122] = 0LL;
  a1[124] = MiContractWsSwapPageFileWorker;
  a1[125] = a1;
  return result;
}

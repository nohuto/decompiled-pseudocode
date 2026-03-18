/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x1406C6148
 * Callers:
 *     <none>
 * Callees:
 *     KeRaiseIrqlToDpcLevel @ 0x1400E9AAC (KeRaiseIrqlToDpcLevel.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL VerifierKeRaiseIrqlToDpcLevel()
{
  KIRQL (*v0)(void); // rdi
  unsigned int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rbx
  KIRQL result; // al
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = (KIRQL (*)(void))pXdvKeRaiseIrqlToDpcLevel[0];
  ++dword_1402E1884;
  v1 = MmVerifierData;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    ViTargetIncrementCounter(retaddr, 128LL);
    v1 = MmVerifierData;
  }
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, (v1 >> 17) & 1);
  result = v0();
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}

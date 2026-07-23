/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x140712198
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 VerifierKeRaiseIrqlToDpcLevel()
{
  __int64 (*v0)(void); // rdi
  unsigned int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = (__int64 (*)(void))pXdvKeRaiseIrqlToDpcLevel;
  ++dword_140307244;
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

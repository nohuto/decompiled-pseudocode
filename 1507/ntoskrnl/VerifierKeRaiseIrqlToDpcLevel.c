/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x1407484F8
 * Callers:
 *     <none>
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeRaiseIrqlToDpcLevel @ 0x1401027F0 (KeRaiseIrqlToDpcLevel.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL VerifierKeRaiseIrqlToDpcLevel()
{
  KIRQL (*v0)(void); // rdi
  unsigned int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = (KIRQL (*)(void))pXdvKeRaiseIrqlToDpcLevel[0];
  ++dword_140331D04;
  v1 = MmVerifierData;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
  {
    ViTargetIncrementCounter(retaddr, 128LL);
    v1 = MmVerifierData;
  }
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, (v1 >> 17) & 1);
  v4 = v0();
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v4;
}

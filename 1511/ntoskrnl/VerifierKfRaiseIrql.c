/*
 * XREFs of VerifierKfRaiseIrql @ 0x1406C6970
 * Callers:
 *     <none>
 * Callees:
 *     KzRaiseIrql @ 0x140079D90 (KzRaiseIrql.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierKfRaiseIrql(KIRQL a1)
{
  KIRQL (__stdcall *v1)(KIRQL); // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  KIRQL result; // al
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (KIRQL (__stdcall *)(KIRQL))pXdvKfRaiseIrql[0];
  ++dword_1402E1884;
  v3 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 128LL);
  LOBYTE(v3) = a1;
  v4 = ViKeRaiseIrqlSanityChecks(v3, 0LL);
  result = v1(a1);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}

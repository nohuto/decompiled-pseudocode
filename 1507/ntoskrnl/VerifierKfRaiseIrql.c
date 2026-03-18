/*
 * XREFs of VerifierKfRaiseIrql @ 0x14074971C
 * Callers:
 *     <none>
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KzRaiseIrql @ 0x140102800 (KzRaiseIrql.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierKfRaiseIrql(KIRQL a1)
{
  KIRQL (__stdcall *v1)(KIRQL); // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (KIRQL (__stdcall *)(KIRQL))pXdvKfRaiseIrql[0];
  ++dword_140331D04;
  v3 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 128LL);
  LOBYTE(v3) = a1;
  v4 = ViKeRaiseIrqlSanityChecks(v3, 0LL);
  v5 = v1(a1);
  if ( v4 )
    *(_WORD *)(v4 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v5;
}

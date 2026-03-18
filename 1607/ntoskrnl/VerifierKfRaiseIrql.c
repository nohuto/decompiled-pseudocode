/*
 * XREFs of VerifierKfRaiseIrql @ 0x140712A08
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKfRaiseIrql(char a1)
{
  __int64 (__fastcall *v1)(__int64); // rsi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 (__fastcall *)(__int64))pXdvKfRaiseIrql;
  ++dword_140307204;
  v3 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 128LL);
  LOBYTE(v3) = a1;
  v4 = ViKeRaiseIrqlSanityChecks(v3, 0LL);
  LOBYTE(v5) = a1;
  v6 = v4;
  result = v1(v5);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
